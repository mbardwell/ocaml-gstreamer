/* Final headers for gstreamer, using gst.h */

#include <gst/gst.h>
#include <gst/gstclock.h>
#include <gst/app/gstappsrc.h>
#include <gst/app/gstappsink.h>

typedef GstElement *pGstElement;
typedef GstBin *pGstBin;
typedef GstCaps *pGstCaps;

GstElement* parse_launch(const gchar *pipeline_description);
