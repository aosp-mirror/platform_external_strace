/* Generated by ./xlat/gen.sh from ./xlat/mtd_file_mode_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat mtd_file_mode_options[];

# else

#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat mtd_file_mode_options[] = {
 XLAT(MTD_FILE_MODE_NORMAL),
 XLAT(MTD_FILE_MODE_OTP_FACTORY),
 XLAT(MTD_FILE_MODE_OTP_USER),
 XLAT(MTD_FILE_MODE_RAW),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */