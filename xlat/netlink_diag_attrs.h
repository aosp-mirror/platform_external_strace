/* Generated by ./xlat/gen.sh from ./xlat/netlink_diag_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat netlink_diag_attrs in mpers mode

# else

static
const struct xlat netlink_diag_attrs[] = {
 XLAT(NETLINK_DIAG_MEMINFO),
 XLAT(NETLINK_DIAG_GROUPS),
 XLAT(NETLINK_DIAG_RX_RING),
 XLAT(NETLINK_DIAG_TX_RING),
 XLAT(NETLINK_DIAG_FLAGS),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */