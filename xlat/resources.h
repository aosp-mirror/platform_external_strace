/* Generated by ./xlat/gen.sh from ./xlat/resources.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(RLIMIT_CPU) || (defined(HAVE_DECL_RLIMIT_CPU) && HAVE_DECL_RLIMIT_CPU)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_CPU) == (0), "RLIMIT_CPU != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_CPU 0
#endif
#if defined(RLIMIT_FSIZE) || (defined(HAVE_DECL_RLIMIT_FSIZE) && HAVE_DECL_RLIMIT_FSIZE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_FSIZE) == (1), "RLIMIT_FSIZE != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_FSIZE 1
#endif
#if defined(RLIMIT_DATA) || (defined(HAVE_DECL_RLIMIT_DATA) && HAVE_DECL_RLIMIT_DATA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_DATA) == (2), "RLIMIT_DATA != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_DATA 2
#endif
#if defined(RLIMIT_STACK) || (defined(HAVE_DECL_RLIMIT_STACK) && HAVE_DECL_RLIMIT_STACK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_STACK) == (3), "RLIMIT_STACK != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_STACK 3
#endif
#if defined(RLIMIT_CORE) || (defined(HAVE_DECL_RLIMIT_CORE) && HAVE_DECL_RLIMIT_CORE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_CORE) == (4), "RLIMIT_CORE != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_CORE 4
#endif
#if defined(__alpha__)
#if defined(RLIMIT_RSS) || (defined(HAVE_DECL_RLIMIT_RSS) && HAVE_DECL_RLIMIT_RSS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_RSS) == (5), "RLIMIT_RSS != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_RSS 5
#endif
#if defined(RLIMIT_NOFILE) || (defined(HAVE_DECL_RLIMIT_NOFILE) && HAVE_DECL_RLIMIT_NOFILE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_NOFILE) == (6), "RLIMIT_NOFILE != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_NOFILE 6
#endif
#if defined(RLIMIT_AS) || (defined(HAVE_DECL_RLIMIT_AS) && HAVE_DECL_RLIMIT_AS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_AS) == (7), "RLIMIT_AS != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_AS 7
#endif
#if defined(RLIMIT_NPROC) || (defined(HAVE_DECL_RLIMIT_NPROC) && HAVE_DECL_RLIMIT_NPROC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_NPROC) == (8), "RLIMIT_NPROC != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_NPROC 8
#endif
#if defined(RLIMIT_MEMLOCK) || (defined(HAVE_DECL_RLIMIT_MEMLOCK) && HAVE_DECL_RLIMIT_MEMLOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_MEMLOCK) == (9), "RLIMIT_MEMLOCK != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_MEMLOCK 9
#endif
#elif defined(__mips__)
#if defined(RLIMIT_NOFILE) || (defined(HAVE_DECL_RLIMIT_NOFILE) && HAVE_DECL_RLIMIT_NOFILE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_NOFILE) == (5), "RLIMIT_NOFILE != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_NOFILE 5
#endif
#if defined(RLIMIT_AS) || (defined(HAVE_DECL_RLIMIT_AS) && HAVE_DECL_RLIMIT_AS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_AS) == (6), "RLIMIT_AS != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_AS 6
#endif
#if defined(RLIMIT_RSS) || (defined(HAVE_DECL_RLIMIT_RSS) && HAVE_DECL_RLIMIT_RSS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_RSS) == (7), "RLIMIT_RSS != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_RSS 7
#endif
#if defined(RLIMIT_NPROC) || (defined(HAVE_DECL_RLIMIT_NPROC) && HAVE_DECL_RLIMIT_NPROC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_NPROC) == (8), "RLIMIT_NPROC != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_NPROC 8
#endif
#if defined(RLIMIT_MEMLOCK) || (defined(HAVE_DECL_RLIMIT_MEMLOCK) && HAVE_DECL_RLIMIT_MEMLOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_MEMLOCK) == (9), "RLIMIT_MEMLOCK != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_MEMLOCK 9
#endif
#elif defined(__sparc__)
#if defined(RLIMIT_RSS) || (defined(HAVE_DECL_RLIMIT_RSS) && HAVE_DECL_RLIMIT_RSS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_RSS) == (5), "RLIMIT_RSS != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_RSS 5
#endif
#if defined(RLIMIT_NOFILE) || (defined(HAVE_DECL_RLIMIT_NOFILE) && HAVE_DECL_RLIMIT_NOFILE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_NOFILE) == (6), "RLIMIT_NOFILE != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_NOFILE 6
#endif
#if defined(RLIMIT_NPROC) || (defined(HAVE_DECL_RLIMIT_NPROC) && HAVE_DECL_RLIMIT_NPROC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_NPROC) == (7), "RLIMIT_NPROC != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_NPROC 7
#endif
#if defined(RLIMIT_MEMLOCK) || (defined(HAVE_DECL_RLIMIT_MEMLOCK) && HAVE_DECL_RLIMIT_MEMLOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_MEMLOCK) == (8), "RLIMIT_MEMLOCK != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_MEMLOCK 8
#endif
#if defined(RLIMIT_AS) || (defined(HAVE_DECL_RLIMIT_AS) && HAVE_DECL_RLIMIT_AS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_AS) == (9), "RLIMIT_AS != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_AS 9
#endif
#else
#if defined(RLIMIT_RSS) || (defined(HAVE_DECL_RLIMIT_RSS) && HAVE_DECL_RLIMIT_RSS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_RSS) == (5), "RLIMIT_RSS != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_RSS 5
#endif
#if defined(RLIMIT_NPROC) || (defined(HAVE_DECL_RLIMIT_NPROC) && HAVE_DECL_RLIMIT_NPROC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_NPROC) == (6), "RLIMIT_NPROC != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_NPROC 6
#endif
#if defined(RLIMIT_NOFILE) || (defined(HAVE_DECL_RLIMIT_NOFILE) && HAVE_DECL_RLIMIT_NOFILE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_NOFILE) == (7), "RLIMIT_NOFILE != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_NOFILE 7
#endif
#if defined(RLIMIT_MEMLOCK) || (defined(HAVE_DECL_RLIMIT_MEMLOCK) && HAVE_DECL_RLIMIT_MEMLOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_MEMLOCK) == (8), "RLIMIT_MEMLOCK != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_MEMLOCK 8
#endif
#if defined(RLIMIT_AS) || (defined(HAVE_DECL_RLIMIT_AS) && HAVE_DECL_RLIMIT_AS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_AS) == (9), "RLIMIT_AS != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_AS 9
#endif
#endif
#if defined(RLIMIT_LOCKS) || (defined(HAVE_DECL_RLIMIT_LOCKS) && HAVE_DECL_RLIMIT_LOCKS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_LOCKS) == (10), "RLIMIT_LOCKS != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_LOCKS 10
#endif
#if defined(RLIMIT_SIGPENDING) || (defined(HAVE_DECL_RLIMIT_SIGPENDING) && HAVE_DECL_RLIMIT_SIGPENDING)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_SIGPENDING) == (11), "RLIMIT_SIGPENDING != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_SIGPENDING 11
#endif
#if defined(RLIMIT_MSGQUEUE) || (defined(HAVE_DECL_RLIMIT_MSGQUEUE) && HAVE_DECL_RLIMIT_MSGQUEUE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_MSGQUEUE) == (12), "RLIMIT_MSGQUEUE != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_MSGQUEUE 12
#endif
#if defined(RLIMIT_NICE) || (defined(HAVE_DECL_RLIMIT_NICE) && HAVE_DECL_RLIMIT_NICE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_NICE) == (13), "RLIMIT_NICE != 13");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_NICE 13
#endif
#if defined(RLIMIT_RTPRIO) || (defined(HAVE_DECL_RLIMIT_RTPRIO) && HAVE_DECL_RLIMIT_RTPRIO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_RTPRIO) == (14), "RLIMIT_RTPRIO != 14");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_RTPRIO 14
#endif
#if defined(RLIMIT_RTTIME) || (defined(HAVE_DECL_RLIMIT_RTTIME) && HAVE_DECL_RLIMIT_RTTIME)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RLIMIT_RTTIME) == (15), "RLIMIT_RTTIME != 15");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RLIMIT_RTTIME 15
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat resources in mpers mode

# else

static
const struct xlat resources[] = {
 [RLIMIT_CPU] = XLAT(RLIMIT_CPU),
 [RLIMIT_FSIZE] = XLAT(RLIMIT_FSIZE),
 [RLIMIT_DATA] = XLAT(RLIMIT_DATA),
 [RLIMIT_STACK] = XLAT(RLIMIT_STACK),
 [RLIMIT_CORE] = XLAT(RLIMIT_CORE),

#if defined(__alpha__)
 [RLIMIT_RSS] = XLAT(RLIMIT_RSS),
 [RLIMIT_NOFILE] = XLAT(RLIMIT_NOFILE),
 [RLIMIT_AS] = XLAT(RLIMIT_AS),
 [RLIMIT_NPROC] = XLAT(RLIMIT_NPROC),
 [RLIMIT_MEMLOCK] = XLAT(RLIMIT_MEMLOCK),
#elif defined(__mips__)
 [RLIMIT_NOFILE] = XLAT(RLIMIT_NOFILE),
 [RLIMIT_AS] = XLAT(RLIMIT_AS),
 [RLIMIT_RSS] = XLAT(RLIMIT_RSS),
 [RLIMIT_NPROC] = XLAT(RLIMIT_NPROC),
 [RLIMIT_MEMLOCK] = XLAT(RLIMIT_MEMLOCK),
#elif defined(__sparc__)
 [RLIMIT_RSS] = XLAT(RLIMIT_RSS),
 [RLIMIT_NOFILE] = XLAT(RLIMIT_NOFILE),
 [RLIMIT_NPROC] = XLAT(RLIMIT_NPROC),
 [RLIMIT_MEMLOCK] = XLAT(RLIMIT_MEMLOCK),
 [RLIMIT_AS] = XLAT(RLIMIT_AS),
#else
 [RLIMIT_RSS] = XLAT(RLIMIT_RSS),
 [RLIMIT_NPROC] = XLAT(RLIMIT_NPROC),
 [RLIMIT_NOFILE] = XLAT(RLIMIT_NOFILE),
 [RLIMIT_MEMLOCK] = XLAT(RLIMIT_MEMLOCK),
 [RLIMIT_AS] = XLAT(RLIMIT_AS),
#endif

 [RLIMIT_LOCKS] = XLAT(RLIMIT_LOCKS),
 [RLIMIT_SIGPENDING] = XLAT(RLIMIT_SIGPENDING),
 [RLIMIT_MSGQUEUE] = XLAT(RLIMIT_MSGQUEUE),
 [RLIMIT_NICE] = XLAT(RLIMIT_NICE),
 [RLIMIT_RTPRIO] = XLAT(RLIMIT_RTPRIO),
 [RLIMIT_RTTIME] = XLAT(RLIMIT_RTTIME),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */