include(unroll.m4)
#include "harmonics.h"

divert(-1)
define(`resign', `ifelse(eval($3 >= 0), `1', `ifelse(eval($3 % 2), `0', `', `$1 = -$1;')', `ifelse(eval($3 % 2), `0', `$2 = -$2;', `')')')dnl

define(`sincos', `ifelse(eval($1 % 2), `0', `sin', `cos')')dnl
define(`cossin', `ifelse(eval($1 % 2), `0', `cos', `sin')')dnl
divert(0)dnl

#define EPS (10 * __DBL_EPSILON__)

export void p2e(
      uniform const   double xsrc[],
      uniform const   double ysrc[],
      uniform const   double zsrc[],
      uniform const   double qsrc[],
      uniform const   int nsrc,
      uniform const   double xcom,
      uniform const   double ycom,
      uniform const   double zcom,
      uniform double  expansion[])
{
 
  LUNROLL(n, 0, ORDER-1, `double substr(echo(LUNROLL(m, 0, n, `, Mre_`'n`'_`'m = 0');), `1')'
  )
  LUNROLL(n, 0, ORDER-1, `double substr(echo(LUNROLL(m, 0, n, `, Mim_`'n`'_`'m = 0');), `1')'
  )

  foreach (k=0 ... nsrc)
  {
    const double x = xsrc[k] - xcom;
    const double y = ysrc[k] - ycom;
    const double z = zsrc[k] - zcom;
    const double q = qsrc[k];
    
    // compute 1/rho = rho_1 and rho = rho^2 * rho^-1
    const double xxyy  = x*x + y*y;
    const double rho2  = xxyy + z*z;
    const double rho_1 = rsqrt(rho2);
    const double rho   = 1.0 / rho_1;
    
    const double costheta = z * rho_1;
    const double sintheta = sqrt(1 - costheta*costheta);
    double factor = q;    
    
    // phi = atan2(y, x);
    // cos_m = cos(n * phi);
    const double phiMag_1 = rsqrt(xxyy);
    double mag_1 = 1;
    double phi_x = 1;
    double phi_y = 0;
    double tmp;
    
    LUNROLL(m, 0, ORDER-1, `const double cosphi_`'m = phi_x * mag_1;
    const double sinphi_`'m = phi_y * mag_1;
    tmp = phi_x*x - phi_y*y;
    phi_y = phi_x*y + phi_y*x;
    phi_x = tmp;
    mag_1 *= phiMag_1;
    
    ')
  	
    Mre_0_0 += factor;
    factor *= rho;
    
    LUNROLL(n, 1, ORDER-1, `LUNROLL(m, 0, n, `const double tmp_`'n`'_`'m = factor * Y_`'n`'_`'m`'(sintheta, costheta);
    Mre_`'n`'_`'m`' += tmp_`'n`'_`'m * cossin(m)phi_`'m;
    Mim_`'n`'_`'m`' += tmp_`'n`'_`'m * sincos(m)phi_`'m;
    
    ')factor *= rho;
    
    ')
  }

  LUNROLL(n, 0, ORDER-1, `LUNROLL(m, 0, n, `expansion[eval((n-1) * (n+2) + 2 + m)] = reduce_add(Mre_`'n`'_`'m`');
  ')LUNROLL(m, 0, n, `expansion[eval((n-1) * (n+2) + 3 + n + m)] = reduce_add(Mim_`'n`'_`'m`');
  ')
  ')
}

export uniform double p2p(
      uniform const double xsrc[],
      uniform const double ysrc[],
      uniform const double zsrc[],
      uniform const double qsrc[],
      uniform const int    nsrc,
      uniform const double xdst,
      uniform const double ydst,
      uniform const double zdst)
{
  
  double s = 0;
  foreach (i=0...nsrc)
  {
    const double xr = xdst - xsrc[i];
    const double yr = ydst - ysrc[i];
    const double zr = zdst - zsrc[i];
    
    const double r2 = xr*xr + yr*yr + zr*zr;
    s += (abs(r2) > EPS) ? qsrc[i] / sqrt(r2) : 0;
  }
  
  return reduce_add(s);
}

export uniform double e2p(
      uniform const double xrel[],
      uniform const double yrel[],
      uniform const double zrel[],
      uniform const int    nexps,
      uniform const double * uniform exps[])
{
  double pot = 0;
  
  foreach(k=0...nexps)
  {
    const double x = xrel[k];
    const double y = yrel[k];
    const double z = zrel[k];
    
    // compute 1/rho
    const double xxyy  = x*x + y*y;
    const double rho2  = xxyy + z*z;
    const double rho_1 = rsqrt(rho2);
    const double rho   = 1.0 / rho_1;
    
    const double costheta = z * rho_1;
    const double sintheta = sqrt(1 - costheta*costheta);
    
    // phi = atan2(y, x);
    // cos_m = cos(n * phi);
    const double phiMag_1 = rsqrt(xxyy);
    double mag_1 = 1;
    double phi_x = 1;
    double phi_y = 0;
    double tmp;
    
    LUNROLL(m, 0, ORDER-1, `const double cosphi_`'m = phi_x * mag_1;
    const double sinphi_`'m = phi_y * mag_1;
    tmp = phi_x*x - phi_y*y;
    phi_y = phi_x*y + phi_y*x;
    phi_x = tmp;
    mag_1 *= phiMag_1;
    
    ')
        
    double factor = rho_1;
    {
      // const double Y = Y_0_0(sintheta, costheta);
      // this is just one!
      pot += factor * exps[k][0];
    }
    factor *= 2*rho_1;
    
    LUNROLL(n, 1, ORDER-1, `{
      const double Y = Y_`'n`'_0(sintheta, costheta);
      pot += 0.5 * factor * Y * exps[k][eval((n-1) * (n+2) + 2)];
    }
    
    LUNROLL(m, 1, n, `{
      const double Y = Y_`'n`'_`'m`'(sintheta, costheta);
      
      const double reY = Y * cossin(m)phi_`'m`';
      const double imY = Y * sincos(m)phi_`'m`';
      
      const double reM =  exps[k][eval((n-1) * (n+2) + 2 + m)];
      const double imM = -exps[k][eval((n-1) * (n+2) + 3 + n + m)];
            
      pot += factor * (reM * reY - imM * imY);
    }       
    ')factor *= rho_1;
    
    ')
  }
  
  return reduce_add(pot);
}


