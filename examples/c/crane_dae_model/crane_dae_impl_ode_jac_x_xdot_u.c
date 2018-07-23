/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) crane_dae_impl_ode_jac_x_xdot_u_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)
#define casadi_s4 CASADI_PREFIX(s4)
#define casadi_s5 CASADI_PREFIX(s5)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[13] = {9, 1, 0, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8};
static const casadi_int casadi_s1[6] = {2, 1, 0, 2, 0, 1};
static const casadi_int casadi_s2[28] = {11, 9, 0, 3, 7, 8, 10, 13, 13, 15, 16, 16, 4, 5, 10, 0, 1, 4, 6, 1, 4, 5, 3, 4, 6, 7, 8, 8};
static const casadi_int casadi_s3[22] = {11, 9, 0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 6, 1, 2, 3, 4, 7, 8, 9, 10};
static const casadi_int casadi_s4[10] = {11, 2, 0, 4, 5, 4, 6, 9, 10, 2};
static const casadi_int casadi_s5[8] = {11, 2, 0, 2, 3, 5, 10, 6};

/* crane_dae_impl_ode_jac_x_xdot_u:(i0[9],i1[9],i2[2],i3[2])->(o0[11x9,16nz],o1[11x9,10nz],o2[11x2,5nz],o3[11x2,3nz]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a2, a3, a4, a5, a6, a7, a8, a9;
  a0=4.7418203070092001e-02;
  a1=arg[2] ? arg[2][0] : 0;
  a2=(a0*a1);
  a3=arg[0] ? arg[0][3] : 0;
  a4=cos(a3);
  a5=(a2*a4);
  a6=9.8100000000000005e+00;
  a7=sin(a3);
  a7=(a6*a7);
  a5=(a5+a7);
  a7=2.;
  a8=arg[0] ? arg[0][1] : 0;
  a9=(a7*a8);
  a10=arg[0] ? arg[0][4] : 0;
  a11=(a9*a10);
  a5=(a5+a11);
  a11=arg[0] ? arg[0][0] : 0;
  a5=(a5/a11);
  a5=(a5/a11);
  if (res[0]!=0) res[0][0]=a5;
  a5=-1.;
  if (res[0]!=0) res[0][1]=a5;
  a12=(a11+a11);
  a13=sin(a11);
  a12=(a12-a13);
  if (res[0]!=0) res[0][2]=a12;
  a12=1.;
  if (res[0]!=0) res[0][3]=a12;
  a13=-4.0493711676434543e+01;
  if (res[0]!=0) res[0][4]=a13;
  a13=(a7*a10);
  a13=(a13/a11);
  a13=(-a13);
  if (res[0]!=0) res[0][5]=a13;
  a13=arg[1] ? arg[1][0] : 0;
  a14=(a1*a8);
  a13=(a13-a14);
  a14=(a13+a13);
  a14=(a14*a1);
  if (res[0]!=0) res[0][6]=a14;
  a14=1.3803228073658729e+00;
  if (res[0]!=0) res[0][7]=a14;
  a14=cos(a3);
  a6=(a6*a14);
  a14=sin(a3);
  a2=(a2*a14);
  a6=(a6-a2);
  a6=(a6/a11);
  a6=(-a6);
  if (res[0]!=0) res[0][8]=a6;
  a6=1.2500000000000000e-01;
  a3=(a3+a3);
  a6=(a6*a3);
  a6=(-a6);
  if (res[0]!=0) res[0][9]=a6;
  if (res[0]!=0) res[0][10]=a12;
  a9=(a9/a11);
  a9=(-a9);
  if (res[0]!=0) res[0][11]=a9;
  a9=1.0000000000000001e-01;
  a10=(a10+a9);
  a10=sin(a10);
  if (res[0]!=0) res[0][12]=a10;
  if (res[0]!=0) res[0][13]=a12;
  a10=-7.8182378879940387e+01;
  if (res[0]!=0) res[0][14]=a10;
  a10=3.7072679182318851e+00;
  if (res[0]!=0) res[0][15]=a10;
  if (res[1]!=0) res[1][0]=a5;
  a10=(a13+a13);
  a10=(-a10);
  if (res[1]!=0) res[1][1]=a10;
  if (res[1]!=0) res[1][2]=a5;
  if (res[1]!=0) res[1][3]=a5;
  if (res[1]!=0) res[1][4]=a5;
  if (res[1]!=0) res[1][5]=a5;
  if (res[1]!=0) res[1][6]=a5;
  if (res[1]!=0) res[1][7]=a5;
  if (res[1]!=0) res[1][8]=a5;
  if (res[1]!=0) res[1][9]=a5;
  a0=(a0*a4);
  a0=(a0/a11);
  a0=(-a0);
  if (res[2]!=0) res[2][0]=a0;
  a13=(a13+a13);
  a13=(a13*a8);
  if (res[2]!=0) res[2][1]=a13;
  if (res[2]!=0) res[2][2]=a12;
  a1=(a1+a1);
  if (res[2]!=0) res[2][3]=a1;
  if (res[2]!=0) res[2][4]=a12;
  if (res[3]!=0) res[3][0]=a12;
  if (res[3]!=0) res[3][1]=a5;
  if (res[3]!=0) res[3][2]=a7;
  return 0;
}

CASADI_SYMBOL_EXPORT int crane_dae_impl_ode_jac_x_xdot_u(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT void crane_dae_impl_ode_jac_x_xdot_u_incref(void) {
}

CASADI_SYMBOL_EXPORT void crane_dae_impl_ode_jac_x_xdot_u_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int crane_dae_impl_ode_jac_x_xdot_u_n_in(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_int crane_dae_impl_ode_jac_x_xdot_u_n_out(void) { return 4;}

CASADI_SYMBOL_EXPORT const char* crane_dae_impl_ode_jac_x_xdot_u_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* crane_dae_impl_ode_jac_x_xdot_u_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    case 2: return "o2";
    case 3: return "o3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* crane_dae_impl_ode_jac_x_xdot_u_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s1;
    case 3: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* crane_dae_impl_ode_jac_x_xdot_u_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    case 1: return casadi_s3;
    case 2: return casadi_s4;
    case 3: return casadi_s5;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int crane_dae_impl_ode_jac_x_xdot_u_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 4;
  if (sz_res) *sz_res = 4;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
