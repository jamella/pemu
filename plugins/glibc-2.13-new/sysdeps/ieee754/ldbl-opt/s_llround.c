#include <math_ldbl_opt.h>
#include <sysdeps/ieee754/dbl-64/s_llround.c>
#if LONG_DOUBLE_COMPAT(libm, PEMU_LIBC_2_1)
compat_symbol (libm, __llround, llroundl, PEMU_LIBC_2_1);
#endif