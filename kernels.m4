include(unroll.m4)

#define EPS (10 * __DBL_EPSILON__)

export void p2e(
		uniform const   double xsources[],
		uniform const   double ysources[],
		uniform const   double qsources[],
		uniform const   int nsources,
		uniform const   double xcom,
		uniform const   double ycom,
		uniform double  rexpansions[],
		uniform double  iexpansions[])
{
	double re0 = 0;
	double substr(echo(LUNROLL(i, 1, ORDER, `, 're``''i``'' = 0)), `1');
	double substr(echo(LUNROLL(i, 1, ORDER, `, 'ie``''i``'' = 0)), `1');

	foreach (n=0 ... nsources)
	{
		const double rz0 = xsources[n] - xcom;
		const double iz0 = ysources[n] - ycom;
		const double q0  = qsources[n];
		double rz = 1;
		double iz = 0;

		double rtmp, itmp;
		LUNROLL(i, 1, ORDER,
		`const double q`'i = q0 * (1.0 / i);
		rtmp = rz * rz0 - iz * iz0;
		itmp = rz * iz0 + iz * rz0;
		rz = rtmp;
		iz = itmp;
		re`'i -= q`'i * rz;
		ie`'i -= q`'i * iz;

		')
	}

	LUNROLL(i, 1, ORDER,
	`rexpansions[decr(i)] = reduce_add(re`'i`');
	iexpansions[decr(i)] = reduce_add(ie`'i`');
	')
}

export uniform double e2p(
		uniform const double xrel[],
		uniform const double yrel[],
		uniform const int    nexps,
		uniform const double Q[],
		uniform const double * uniform re[],
		uniform const double * uniform ie[])
{
  double pot = 0;
  
  foreach(n=0...nexps)
	{
		const double rz0 = xrel[n];
		const double iz0 = yrel[n];

		const double Iz0I2 = rz0*rz0 + iz0*iz0;
		const double Iinvz0I = 1.0 / Iz0I2;
		const double rinvz0 =  rz0 * Iinvz0I;
		const double iinvz0 = -iz0 * Iinvz0I;

		pot += 0.5 * Q[n] * log(Iz0I2);
		double rz = 1;
		double iz = 0;

		double rtmp, itmp;
		LUNROLL(i, 1, ORDER,
		`rtmp = rz * rinvz0 - iz * iinvz0;
		itmp = rz * iinvz0 + iz * rinvz0;
		rz = rtmp;
		iz = itmp;
		pot += rz * re[n][decr(i)] - iz * ie[n][decr(i)];'
		)
	}
	
	return reduce_add(pot);
}

export uniform double p2p(
   uniform const double uniform xsrc[],
   uniform const double uniform ysrc[],
   uniform const double uniform qsrc[],
   uniform const int nsrc,
   uniform const double xt,
   uniform const double yt)
{
  double pot = 0;
  foreach (i=0...nsrc)
  {
    const double xr = xt - xsrc[i];
    const double yr = yt - ysrc[i];
    
    const double r2 = xr*xr + yr*yr;
    const double f  = abs(r2) > EPS;

    pot += 0.5 * f * log((r2 + EPS)) * qsrc[i];
  }
  
  return reduce_add(pot);
}

export void e2e(
            uniform const double x0s[],
            uniform const double y0s[],
            uniform const double masses[],
            uniform const double * uniform vrxps[],
            uniform const double * uniform vixps[],
            uniform double rdstxp[],
            uniform double idstxp[])
{
  
  if (programIndex >= 4) return;
  
  const uniform double * rxps = vrxps[programIndex];
  const uniform double * ixps = vixps[programIndex];

  const double x0 = x0s[programIndex];
  const double y0 = y0s[programIndex];
  const double mass = masses[programIndex];

  const double r2z0 = x0 * x0 + y0 * y0;
  const double rinvz_1 =  x0 / r2z0;
  const double iinvz_1 = -y0 / r2z0;
 dnl
 dnl
 LUNROLL(j, 1, eval(ORDER),`
   ifelse(j, 1, , `
   const double TMP(rinvz, j) = TMP(rinvz, eval(j - 1)) * rinvz_1 - TMP(iinvz, eval(j - 1)) * iinvz_1;
   const double TMP(iinvz, j) = TMP(rinvz, eval(j - 1)) * iinvz_1 + TMP(iinvz, eval(j - 1)) * rinvz_1;')

   const double TMP(rcoeff, j) = rxps[eval(j - 1)] * TMP(rinvz, j) - ixps[eval(j - 1)] * TMP(iinvz, j);
   const double TMP(icoeff, j) = rxps[eval(j - 1)] * TMP(iinvz, j) + ixps[eval(j - 1)] * TMP(rinvz, j);
   ')

  LUNROLL(l, 1, eval(ORDER),`
  {
    const double TMP(prefac, l) = ifelse(l, 1, `- mass',`-mass * (1.0 / l)');
  
    pushdef(`BINFAC', `BINOMIAL(eval(l - 1), eval(k - 1)).f')
    const double TMP(rtmp, l) = TMP(prefac, l) LUNROLL(k, 1, l,`
    + TMP(rcoeff, k) ifelse(BINFAC,1.f,,`* BINFAC')');
  
    const double TMP(itmp, l) = LUNROLL(k, 1, l,`
    ifelse(k,1,,+)  TMP(icoeff, k) ifelse(BINFAC,1.f,,`* BINFAC')');
    popdef(`BINFAC')dnl
  
    const double TMP(invz2, l) = TMP(rinvz, l) * TMP(rinvz, l) + TMP(iinvz, l) * TMP(iinvz, l);
    const double TMP(invinvz2, l) = TMP(invz2, l) ? 1 / TMP(invz2, l) : 0;
    const double TMP(rz, l) = TMP(rinvz, l) * TMP(invinvz2, l);
    const double TMP(iz, l) = - TMP(iinvz, l) * TMP(invinvz2, l);
    
    const double rpartial = TMP(rtmp, l) * TMP(rz, l) - TMP(itmp, l) * TMP(iz, l);
    const double ipartial = TMP(rtmp, l) * TMP(iz, l) + TMP(itmp, l) * TMP(rz, l);
    
    rdstxp[eval(l - 1)] = reduce_add(rpartial);
    idstxp[eval(l - 1)] = reduce_add(ipartial);
  }')
}

