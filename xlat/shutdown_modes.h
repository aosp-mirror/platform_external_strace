/* Generated by ./xlat/gen.sh from ./xlat/shutdown_modes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(SHUT_RD) || (defined(HAVE_DECL_SHUT_RD) && HAVE_DECL_SHUT_RD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SHUT_RD) == (0), "SHUT_RD != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SHUT_RD 0
#endif
#if defined(SHUT_WR) || (defined(HAVE_DECL_SHUT_WR) && HAVE_DECL_SHUT_WR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SHUT_WR) == (1), "SHUT_WR != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SHUT_WR 1
#endif
#if defined(SHUT_RDWR) || (defined(HAVE_DECL_SHUT_RDWR) && HAVE_DECL_SHUT_RDWR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SHUT_RDWR) == (2), "SHUT_RDWR != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SHUT_RDWR 2
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat shutdown_modes in mpers mode

# else

static
const struct xlat shutdown_modes[] = {
 XLAT(SHUT_RD),
 XLAT(SHUT_WR),
 XLAT(SHUT_RDWR),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */