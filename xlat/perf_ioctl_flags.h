/* Generated by ./xlat/gen.sh from ./xlat/perf_ioctl_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(PERF_IOC_FLAG_GROUP) || (defined(HAVE_DECL_PERF_IOC_FLAG_GROUP) && HAVE_DECL_PERF_IOC_FLAG_GROUP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PERF_IOC_FLAG_GROUP) == ((1U << 0)), "PERF_IOC_FLAG_GROUP != (1U << 0)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PERF_IOC_FLAG_GROUP (1U << 0)
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat perf_ioctl_flags[];

# else

#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat perf_ioctl_flags[] = {
 XLAT(PERF_IOC_FLAG_GROUP),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
