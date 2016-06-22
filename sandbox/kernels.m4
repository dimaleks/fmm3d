include(unroll.m4)
#include "harmonics_opt.h"

divert(-1)
define(`abs', `ifelse(eval(`($1) >= 0'), `1', `$1', `eval(0-$1)')')

define(`resign', `ifelse(eval($3 >= 0), `1', `ifelse(eval($3 % 2), `0', `', `$1 = -$1;')', `ifelse(eval($3 % 2), `0', `$2 = -$2;', `')')')dnl

define(`sincos', `ifelse(eval($1 % 2), `0', `sin', `cos')')dnl
define(`cossin', `ifelse(eval($1 % 2), `0', `cos', `sin')')dnl
divert(0)dnl

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
    const double xxyy = x*x + y*y;
    const double rho2  = xxyy + z*z;
    const double rho_1 = rsqrt(rho2);
    const double rho   = rho2 * rho_1;
    const double ct = z * rho_1;
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
  	
    LUNROLL(n, 0, ORDER-1, `LUNROLL(m, 0, n, `const double tmp_`'n`'_`'m = factor * Y_`'n`'_`'m`'(ct);
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
    const double xxyy = x*x + y*y;
    const double rho_1 = rsqrt(xxyy + z*z);
    const double ct = z * rho_1;
    
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
    
    LUNROLL(n, 0, ORDER-1, `LUNROLL(m, -n, n, `{
      const double Y = Y_`'n`'_`'abs(m)(ct);
      
      double reY = Y * cossin(m)phi_`'abs(m);
      double imY = Y * sincos(m)phi_`'abs(m)`';
      
      double reM = exps[k][eval((n-1) * (n+2) + 2 + abs(m))];
      double imM = -exps[k][eval((n-1) * (n+2) + 3 + n + abs(m))];
      resign(reM, imM, m)
      resign(reY, imY, m)
      
      //print("%\`n'%\`n'%\`n'%\`n'\`n'", reM, imM, reY, imY);
      
      pot += factor * (reM * reY - imM * imY);
    }
       
    ')factor *= rho_1;
    //print("-1\`n'\`n'");
    
    ')
  }
  
  return reduce_add(pot);
}


