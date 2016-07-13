//
// p2p.h
// (Header automatically generated by the ispc compiler.)
// DO NOT EDIT THIS FILE.
//

#ifndef ISPC_P2P_H
#define ISPC_P2P_H

#include <stdint.h>



#ifdef __cplusplus
namespace ispc { /* namespace */
#endif // __cplusplus

#ifndef __ISPC_ALIGN__
#if defined(__clang__) || !defined(_MSC_VER)
// Clang, GCC, ICC
#define __ISPC_ALIGN__(s) __attribute__((aligned(s)))
#define __ISPC_ALIGNED_STRUCT__(s) struct __ISPC_ALIGN__(s)
#else
// Visual Studio
#define __ISPC_ALIGN__(s) __declspec(align(s))
#define __ISPC_ALIGNED_STRUCT__(s) __ISPC_ALIGN__(s) struct
#endif
#endif


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
    extern void p2p(const double * xsrc, const double * ysrc, const double * zsrc, const double * qsrc, const int32_t nsrc, const double xdst, const double ydst, const double zdst, double &pot);
    extern void p2pForce(const double * xsrc, const double * ysrc, const double * zsrc, const double * qsrc, const int32_t nsrc, const double xdst, const double ydst, const double zdst, double &fx, double &fy, double &fz);
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus

#endif // ISPC_P2P_H