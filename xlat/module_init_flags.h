/* Generated by ./xlat/gen.sh from ./xlat/module_init_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(MODULE_INIT_IGNORE_MODVERSIONS) || (defined(HAVE_DECL_MODULE_INIT_IGNORE_MODVERSIONS) && HAVE_DECL_MODULE_INIT_IGNORE_MODVERSIONS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MODULE_INIT_IGNORE_MODVERSIONS) == ((1 << 0)), "MODULE_INIT_IGNORE_MODVERSIONS != (1 << 0)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MODULE_INIT_IGNORE_MODVERSIONS (1 << 0)
#endif
#if defined(MODULE_INIT_IGNORE_VERMAGIC) || (defined(HAVE_DECL_MODULE_INIT_IGNORE_VERMAGIC) && HAVE_DECL_MODULE_INIT_IGNORE_VERMAGIC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MODULE_INIT_IGNORE_VERMAGIC) == ((1 << 1)), "MODULE_INIT_IGNORE_VERMAGIC != (1 << 1)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MODULE_INIT_IGNORE_VERMAGIC (1 << 1)
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat module_init_flags in mpers mode

# else

static
const struct xlat module_init_flags[] = {
 XLAT(MODULE_INIT_IGNORE_MODVERSIONS),
 XLAT(MODULE_INIT_IGNORE_VERMAGIC),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */