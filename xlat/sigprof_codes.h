/* Generated by ./xlat/gen.sh from ./xlat/sigprof_codes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat sigprof_codes[];

# else

#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat sigprof_codes[] = {
#if defined(PROF_SIG) || (defined(HAVE_DECL_PROF_SIG) && HAVE_DECL_PROF_SIG)
  XLAT(PROF_SIG),
#endif
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */