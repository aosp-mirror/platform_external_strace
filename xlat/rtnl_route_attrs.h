/* Generated by ./xlat/gen.sh from ./xlat/rtnl_route_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(RTA_UNSPEC) || (defined(HAVE_DECL_RTA_UNSPEC) && HAVE_DECL_RTA_UNSPEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_UNSPEC) == (0), "RTA_UNSPEC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_UNSPEC 0
#endif
#if defined(RTA_DST) || (defined(HAVE_DECL_RTA_DST) && HAVE_DECL_RTA_DST)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_DST) == (1), "RTA_DST != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_DST 1
#endif
#if defined(RTA_SRC) || (defined(HAVE_DECL_RTA_SRC) && HAVE_DECL_RTA_SRC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_SRC) == (2), "RTA_SRC != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_SRC 2
#endif
#if defined(RTA_IIF) || (defined(HAVE_DECL_RTA_IIF) && HAVE_DECL_RTA_IIF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_IIF) == (3), "RTA_IIF != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_IIF 3
#endif
#if defined(RTA_OIF) || (defined(HAVE_DECL_RTA_OIF) && HAVE_DECL_RTA_OIF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_OIF) == (4), "RTA_OIF != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_OIF 4
#endif
#if defined(RTA_GATEWAY) || (defined(HAVE_DECL_RTA_GATEWAY) && HAVE_DECL_RTA_GATEWAY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_GATEWAY) == (5), "RTA_GATEWAY != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_GATEWAY 5
#endif
#if defined(RTA_PRIORITY) || (defined(HAVE_DECL_RTA_PRIORITY) && HAVE_DECL_RTA_PRIORITY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_PRIORITY) == (6), "RTA_PRIORITY != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_PRIORITY 6
#endif
#if defined(RTA_PREFSRC) || (defined(HAVE_DECL_RTA_PREFSRC) && HAVE_DECL_RTA_PREFSRC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_PREFSRC) == (7), "RTA_PREFSRC != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_PREFSRC 7
#endif
#if defined(RTA_METRICS) || (defined(HAVE_DECL_RTA_METRICS) && HAVE_DECL_RTA_METRICS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_METRICS) == (8), "RTA_METRICS != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_METRICS 8
#endif
#if defined(RTA_MULTIPATH) || (defined(HAVE_DECL_RTA_MULTIPATH) && HAVE_DECL_RTA_MULTIPATH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_MULTIPATH) == (9), "RTA_MULTIPATH != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_MULTIPATH 9
#endif
#if defined(RTA_PROTOINFO) || (defined(HAVE_DECL_RTA_PROTOINFO) && HAVE_DECL_RTA_PROTOINFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_PROTOINFO) == (10), "RTA_PROTOINFO != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_PROTOINFO 10
#endif
#if defined(RTA_FLOW) || (defined(HAVE_DECL_RTA_FLOW) && HAVE_DECL_RTA_FLOW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_FLOW) == (11), "RTA_FLOW != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_FLOW 11
#endif
#if defined(RTA_CACHEINFO) || (defined(HAVE_DECL_RTA_CACHEINFO) && HAVE_DECL_RTA_CACHEINFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_CACHEINFO) == (12), "RTA_CACHEINFO != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_CACHEINFO 12
#endif
#if defined(RTA_SESSION) || (defined(HAVE_DECL_RTA_SESSION) && HAVE_DECL_RTA_SESSION)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_SESSION) == (13), "RTA_SESSION != 13");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_SESSION 13
#endif
#if defined(RTA_MP_ALGO) || (defined(HAVE_DECL_RTA_MP_ALGO) && HAVE_DECL_RTA_MP_ALGO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_MP_ALGO) == (14), "RTA_MP_ALGO != 14");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_MP_ALGO 14
#endif
#if defined(RTA_TABLE) || (defined(HAVE_DECL_RTA_TABLE) && HAVE_DECL_RTA_TABLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_TABLE) == (15), "RTA_TABLE != 15");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_TABLE 15
#endif
#if defined(RTA_MARK) || (defined(HAVE_DECL_RTA_MARK) && HAVE_DECL_RTA_MARK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_MARK) == (16), "RTA_MARK != 16");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_MARK 16
#endif
#if defined(RTA_MFC_STATS) || (defined(HAVE_DECL_RTA_MFC_STATS) && HAVE_DECL_RTA_MFC_STATS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_MFC_STATS) == (17), "RTA_MFC_STATS != 17");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_MFC_STATS 17
#endif
#if defined(RTA_VIA) || (defined(HAVE_DECL_RTA_VIA) && HAVE_DECL_RTA_VIA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_VIA) == (18), "RTA_VIA != 18");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_VIA 18
#endif
#if defined(RTA_NEWDST) || (defined(HAVE_DECL_RTA_NEWDST) && HAVE_DECL_RTA_NEWDST)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_NEWDST) == (19), "RTA_NEWDST != 19");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_NEWDST 19
#endif
#if defined(RTA_PREF) || (defined(HAVE_DECL_RTA_PREF) && HAVE_DECL_RTA_PREF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_PREF) == (20), "RTA_PREF != 20");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_PREF 20
#endif
#if defined(RTA_ENCAP_TYPE) || (defined(HAVE_DECL_RTA_ENCAP_TYPE) && HAVE_DECL_RTA_ENCAP_TYPE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_ENCAP_TYPE) == (21), "RTA_ENCAP_TYPE != 21");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_ENCAP_TYPE 21
#endif
#if defined(RTA_ENCAP) || (defined(HAVE_DECL_RTA_ENCAP) && HAVE_DECL_RTA_ENCAP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_ENCAP) == (22), "RTA_ENCAP != 22");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_ENCAP 22
#endif
#if defined(RTA_EXPIRES) || (defined(HAVE_DECL_RTA_EXPIRES) && HAVE_DECL_RTA_EXPIRES)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_EXPIRES) == (23), "RTA_EXPIRES != 23");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_EXPIRES 23
#endif
#if defined(RTA_PAD) || (defined(HAVE_DECL_RTA_PAD) && HAVE_DECL_RTA_PAD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_PAD) == (24), "RTA_PAD != 24");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_PAD 24
#endif
#if defined(RTA_UID) || (defined(HAVE_DECL_RTA_UID) && HAVE_DECL_RTA_UID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_UID) == (25), "RTA_UID != 25");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_UID 25
#endif
#if defined(RTA_TTL_PROPAGATE) || (defined(HAVE_DECL_RTA_TTL_PROPAGATE) && HAVE_DECL_RTA_TTL_PROPAGATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_TTL_PROPAGATE) == (26), "RTA_TTL_PROPAGATE != 26");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_TTL_PROPAGATE 26
#endif
#if defined(RTA_IP_PROTO) || (defined(HAVE_DECL_RTA_IP_PROTO) && HAVE_DECL_RTA_IP_PROTO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_IP_PROTO) == (27), "RTA_IP_PROTO != 27");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_IP_PROTO 27
#endif
#if defined(RTA_SPORT) || (defined(HAVE_DECL_RTA_SPORT) && HAVE_DECL_RTA_SPORT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_SPORT) == (28), "RTA_SPORT != 28");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_SPORT 28
#endif
#if defined(RTA_DPORT) || (defined(HAVE_DECL_RTA_DPORT) && HAVE_DECL_RTA_DPORT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RTA_DPORT) == (29), "RTA_DPORT != 29");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RTA_DPORT 29
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_route_attrs in mpers mode

# else

static
const struct xlat rtnl_route_attrs[] = {
 XLAT(RTA_UNSPEC),
 XLAT(RTA_DST),
 XLAT(RTA_SRC),
 XLAT(RTA_IIF),
 XLAT(RTA_OIF),
 XLAT(RTA_GATEWAY),
 XLAT(RTA_PRIORITY),
 XLAT(RTA_PREFSRC),
 XLAT(RTA_METRICS),
 XLAT(RTA_MULTIPATH),
 XLAT(RTA_PROTOINFO),
 XLAT(RTA_FLOW),
 XLAT(RTA_CACHEINFO),
 XLAT(RTA_SESSION),
 XLAT(RTA_MP_ALGO),
 XLAT(RTA_TABLE),
 XLAT(RTA_MARK),
 XLAT(RTA_MFC_STATS),
 XLAT(RTA_VIA),
 XLAT(RTA_NEWDST),
 XLAT(RTA_PREF),
 XLAT(RTA_ENCAP_TYPE),
 XLAT(RTA_ENCAP),
 XLAT(RTA_EXPIRES),
 XLAT(RTA_PAD),
 XLAT(RTA_UID),
 XLAT(RTA_TTL_PROPAGATE),
 XLAT(RTA_IP_PROTO),
 XLAT(RTA_SPORT),
 XLAT(RTA_DPORT),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */