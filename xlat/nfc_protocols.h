/* Generated by ./xlat/gen.sh from ./xlat/nfc_protocols.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(NFC_SOCKPROTO_RAW) || (defined(HAVE_DECL_NFC_SOCKPROTO_RAW) && HAVE_DECL_NFC_SOCKPROTO_RAW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFC_SOCKPROTO_RAW) == (0), "NFC_SOCKPROTO_RAW != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFC_SOCKPROTO_RAW 0
#endif
#if defined(NFC_SOCKPROTO_LLCP) || (defined(HAVE_DECL_NFC_SOCKPROTO_LLCP) && HAVE_DECL_NFC_SOCKPROTO_LLCP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFC_SOCKPROTO_LLCP) == (1), "NFC_SOCKPROTO_LLCP != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFC_SOCKPROTO_LLCP 1
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat nfc_protocols in mpers mode

# else

static
const struct xlat nfc_protocols[] = {
 [NFC_SOCKPROTO_RAW] = XLAT(NFC_SOCKPROTO_RAW),
 [NFC_SOCKPROTO_LLCP] = XLAT(NFC_SOCKPROTO_LLCP),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */