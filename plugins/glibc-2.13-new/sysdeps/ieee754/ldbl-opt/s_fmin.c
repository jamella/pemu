#include <math_ldbl_opt.h>
#include <math/s_fmin.c>
#if LONG_DOUBLE_COMPAT(libm, PEMU_LIBC_2_1)
compat_symbol (libm, __fmin, fminl, PEMU_LIBC_2_1);
#endif
