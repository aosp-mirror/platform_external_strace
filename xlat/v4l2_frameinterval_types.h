/* Generated by ./xlat/gen.sh from ./xlat/v4l2_frameinterval_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat v4l2_frameinterval_types[];

# else

#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat v4l2_frameinterval_types[] = {
#if defined(V4L2_FRMIVAL_TYPE_DISCRETE) || (defined(HAVE_DECL_V4L2_FRMIVAL_TYPE_DISCRETE) && HAVE_DECL_V4L2_FRMIVAL_TYPE_DISCRETE)
  XLAT(V4L2_FRMIVAL_TYPE_DISCRETE),
#endif
#if defined(V4L2_FRMIVAL_TYPE_CONTINUOUS) || (defined(HAVE_DECL_V4L2_FRMIVAL_TYPE_CONTINUOUS) && HAVE_DECL_V4L2_FRMIVAL_TYPE_CONTINUOUS)
  XLAT(V4L2_FRMIVAL_TYPE_CONTINUOUS),
#endif
#if defined(V4L2_FRMIVAL_TYPE_STEPWISE) || (defined(HAVE_DECL_V4L2_FRMIVAL_TYPE_STEPWISE) && HAVE_DECL_V4L2_FRMIVAL_TYPE_STEPWISE)
  XLAT(V4L2_FRMIVAL_TYPE_STEPWISE),
#endif
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */