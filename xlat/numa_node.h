/* Generated by ./xlat/gen.sh from ./xlat/numa_node.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(NUMA_NO_NODE) || (defined(HAVE_DECL_NUMA_NO_NODE) && HAVE_DECL_NUMA_NO_NODE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NUMA_NO_NODE) == (-1U), "NUMA_NO_NODE != -1U");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NUMA_NO_NODE -1U
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat numa_node in mpers mode

# else

static
const struct xlat numa_node[] = {
 XLAT(NUMA_NO_NODE),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */