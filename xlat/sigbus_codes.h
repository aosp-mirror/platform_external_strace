/* Generated by ./xlat/gen.sh from ./xlat/sigbus_codes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BUS_ADRALN) || (defined(HAVE_DECL_BUS_ADRALN) && HAVE_DECL_BUS_ADRALN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BUS_ADRALN) == (1), "BUS_ADRALN != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BUS_ADRALN 1
#endif
#if defined(BUS_ADRERR) || (defined(HAVE_DECL_BUS_ADRERR) && HAVE_DECL_BUS_ADRERR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BUS_ADRERR) == (2), "BUS_ADRERR != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BUS_ADRERR 2
#endif
#if defined(BUS_OBJERR) || (defined(HAVE_DECL_BUS_OBJERR) && HAVE_DECL_BUS_OBJERR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BUS_OBJERR) == (3), "BUS_OBJERR != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BUS_OBJERR 3
#endif
#if defined(BUS_MCEERR_AR) || (defined(HAVE_DECL_BUS_MCEERR_AR) && HAVE_DECL_BUS_MCEERR_AR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BUS_MCEERR_AR) == (4), "BUS_MCEERR_AR != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BUS_MCEERR_AR 4
#endif
#if defined(BUS_MCEERR_AO) || (defined(HAVE_DECL_BUS_MCEERR_AO) && HAVE_DECL_BUS_MCEERR_AO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BUS_MCEERR_AO) == (5), "BUS_MCEERR_AO != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BUS_MCEERR_AO 5
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat sigbus_codes[];

# else

#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat sigbus_codes[] = {
 XLAT(BUS_ADRALN),
 XLAT(BUS_ADRERR),
 XLAT(BUS_OBJERR),
#if defined(BUS_OPFETCH) || (defined(HAVE_DECL_BUS_OPFETCH) && HAVE_DECL_BUS_OPFETCH)
  XLAT(BUS_OPFETCH),
#endif
 XLAT(BUS_MCEERR_AR),
 XLAT(BUS_MCEERR_AO),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */