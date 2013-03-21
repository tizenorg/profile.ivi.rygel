/* rygel-gst-transcoder.c generated by valac 0.18.0, the Vala compiler
 * generated from rygel-gst-transcoder.vala, do not modify */

/*
 * Copyright (C) 2009-2012 Nokia Corporation.
 * Copyright (C) 2012 Intel Corporation.
 *
 * Author: Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
 *                               <zeeshan.ali@nokia.com>
 *         Jens Georg <jensg@openismus.com>
 *
 * This file is part of Rygel.
 *
 * Rygel is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Rygel is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#include <glib.h>
#include <glib-object.h>
#include <rygel-server.h>
#include <gst/pbutils/codec-utils.h>
#include <gst/pbutils/descriptions.h>
#include <gst/pbutils/encoding-profile.h>
#include <gst/pbutils/encoding-target.h>
#include <gst/pbutils/gstdiscoverer.h>
#include <gst/pbutils/gstpluginsbaseversion.h>
#include <gst/pbutils/install-plugins.h>
#include <gst/pbutils/missing-plugins.h>
#include <gst/pbutils/pbutils-enumtypes.h>
#include <gst/pbutils/pbutils.h>
#include <stdlib.h>
#include <string.h>
#include <gst/gst.h>
#include <glib/gi18n-lib.h>
#include <gio/gio.h>


#define RYGEL_TYPE_GST_TRANSCODER (rygel_gst_transcoder_get_type ())
#define RYGEL_GST_TRANSCODER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_GST_TRANSCODER, RygelGstTranscoder))
#define RYGEL_GST_TRANSCODER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_GST_TRANSCODER, RygelGstTranscoderClass))
#define RYGEL_IS_GST_TRANSCODER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_GST_TRANSCODER))
#define RYGEL_IS_GST_TRANSCODER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_GST_TRANSCODER))
#define RYGEL_GST_TRANSCODER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_GST_TRANSCODER, RygelGstTranscoderClass))

typedef struct _RygelGstTranscoder RygelGstTranscoder;
typedef struct _RygelGstTranscoderClass RygelGstTranscoderClass;
typedef struct _RygelGstTranscoderPrivate RygelGstTranscoderPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define RYGEL_TYPE_GST_DATA_SOURCE (rygel_gst_data_source_get_type ())
#define RYGEL_GST_DATA_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_GST_DATA_SOURCE, RygelGstDataSource))
#define RYGEL_GST_DATA_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_GST_DATA_SOURCE, RygelGstDataSourceClass))
#define RYGEL_IS_GST_DATA_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_GST_DATA_SOURCE))
#define RYGEL_IS_GST_DATA_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_GST_DATA_SOURCE))
#define RYGEL_GST_DATA_SOURCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_GST_DATA_SOURCE, RygelGstDataSourceClass))

typedef struct _RygelGstDataSource RygelGstDataSource;
typedef struct _RygelGstDataSourceClass RygelGstDataSourceClass;
typedef struct _RygelGstDataSourcePrivate RygelGstDataSourcePrivate;
#define _gst_mini_object_unref0(var) ((var == NULL) ? NULL : (var = (gst_mini_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

typedef enum  {
	RYGEL_GST_TRANSCODER_ERROR_CANT_TRANSCODE
} RygelGstTranscoderError;
#define RYGEL_GST_TRANSCODER_ERROR rygel_gst_transcoder_error_quark ()
struct _RygelGstTranscoder {
	RygelTranscoder parent_instance;
	RygelGstTranscoderPrivate * priv;
};

struct _RygelGstTranscoderClass {
	RygelTranscoderClass parent_class;
	GstEncodingProfile* (*get_encoding_profile) (RygelGstTranscoder* self);
};

struct _RygelGstTranscoderPrivate {
	gchar* _preset;
	GstElement* decoder;
	GstElement* encoder;
	gboolean link_failed;
};

struct _RygelGstDataSource {
	GObject parent_instance;
	RygelGstDataSourcePrivate * priv;
	GstElement* src;
};

struct _RygelGstDataSourceClass {
	GObjectClass parent_class;
};


static gpointer rygel_gst_transcoder_parent_class = NULL;

GQuark rygel_gst_transcoder_error_quark (void);
GType rygel_gst_transcoder_get_type (void) G_GNUC_CONST;
#define RYGEL_GST_TRANSCODER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_GST_TRANSCODER, RygelGstTranscoderPrivate))
enum  {
	RYGEL_GST_TRANSCODER_DUMMY_PROPERTY,
	RYGEL_GST_TRANSCODER_PRESET
};
#define RYGEL_GST_TRANSCODER_DEFAULT_ENCODING_PRESET "Rygel DLNA preset"
#define RYGEL_GST_TRANSCODER_DECODE_BIN "decodebin"
#define RYGEL_GST_TRANSCODER_ENCODE_BIN "encodebin"
#define RYGEL_GST_TRANSCODER_DESCRIPTION "Encoder and decoder are not " "compatible"
RygelGstTranscoder* rygel_gst_transcoder_construct (GType object_type, const gchar* mime_type, const gchar* dlna_profile, const gchar* extension);
static void rygel_gst_transcoder_real_constructed (GObject* base);
static RygelDataSource* rygel_gst_transcoder_real_create_source (RygelTranscoder* base, RygelMediaItem* item, RygelDataSource* src, GError** error);
GType rygel_gst_data_source_get_type (void) G_GNUC_CONST;
GstElement* rygel_gst_utils_create_element (const gchar* factoryname, const gchar* name, GError** error);
GstEncodingProfile* rygel_gst_transcoder_get_encoding_profile (RygelGstTranscoder* self);
static inline void _dynamic_set_profile2 (GstElement* obj, GstEncodingProfile* value);
static inline GstElement* _dynamic_get_profile3 (GstElement* obj);
void rygel_gst_utils_dump_encoding_profile (GstEncodingProfile* profile, gint indent);
static inline GstEncodingProfile* _dynamic_get_profile4 (GstElement* obj);
static void rygel_gst_transcoder_on_decoder_pad_added (RygelGstTranscoder* self, GstElement* decodebin, GstPad* new_pad);
static void _rygel_gst_transcoder_on_decoder_pad_added_gst_element_pad_added (GstElement* _sender, GstPad* pad, gpointer self);
static gboolean rygel_gst_transcoder_on_autoplug_continue (RygelGstTranscoder* self, GstElement* decodebin, GstPad* new_pad, GstCaps* caps);
static gboolean _rygel_gst_transcoder_on_autoplug_continue_dynamic_autoplug_continue0_ (GstElement* _sender, GstPad* new_pad, GstCaps* caps, gpointer self);
static void g_cclosure_user_marshal_BOOLEAN__OBJECT_POINTER (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
void _dynamic_autoplug_continue1_connect (gpointer obj, const char * signal_name, GCallback handler, gpointer data);
static void rygel_gst_transcoder_on_no_more_pads (RygelGstTranscoder* self, GstElement* decodebin);
static void _rygel_gst_transcoder_on_no_more_pads_gst_element_no_more_pads (GstElement* _sender, gpointer self);
RygelGstDataSource* rygel_gst_data_source_new_from_element (GstElement* element);
RygelGstDataSource* rygel_gst_data_source_construct_from_element (GType object_type, GstElement* element);
static GstEncodingProfile* rygel_gst_transcoder_real_get_encoding_profile (RygelGstTranscoder* self);
const gchar* rygel_gst_transcoder_get_preset (RygelGstTranscoder* self);
void rygel_gst_transcoder_set_preset (RygelGstTranscoder* self, const gchar* value);
static void rygel_gst_transcoder_finalize (GObject* obj);
static void _vala_rygel_gst_transcoder_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_rygel_gst_transcoder_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


GQuark rygel_gst_transcoder_error_quark (void) {
	return g_quark_from_static_string ("rygel_gst_transcoder_error-quark");
}


RygelGstTranscoder* rygel_gst_transcoder_construct (GType object_type, const gchar* mime_type, const gchar* dlna_profile, const gchar* extension) {
	RygelGstTranscoder * self = NULL;
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	const gchar* _tmp2_;
	g_return_val_if_fail (mime_type != NULL, NULL);
	g_return_val_if_fail (dlna_profile != NULL, NULL);
	g_return_val_if_fail (extension != NULL, NULL);
	_tmp0_ = mime_type;
	_tmp1_ = dlna_profile;
	_tmp2_ = extension;
	self = (RygelGstTranscoder*) g_object_new (object_type, "mime-type", _tmp0_, "dlna-profile", _tmp1_, "extension", _tmp2_, NULL);
	return self;
}


static void rygel_gst_transcoder_real_constructed (GObject* base) {
	RygelGstTranscoder * self;
	self = (RygelGstTranscoder*) base;
	G_OBJECT_CLASS (rygel_gst_transcoder_parent_class)->constructed ((GObject*) G_TYPE_CHECK_INSTANCE_CAST (self, RYGEL_TYPE_TRANSCODER, RygelTranscoder));
	self->priv->link_failed = TRUE;
}


/**
     * Creates a transcoding source.
     *
     * @param src the media item to create the transcoding source for
     * @param src the original (non-transcoding) source
     *
     * @return      the new transcoding source
     */
static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static inline void _dynamic_set_profile2 (GstElement* obj, GstEncodingProfile* value) {
	g_object_set (obj, "profile", value, NULL);
}


static inline GstElement* _dynamic_get_profile3 (GstElement* obj) {
	GstElement* result;
	g_object_get (obj, "profile", &result, NULL);
	return result;
}


static inline GstEncodingProfile* _dynamic_get_profile4 (GstElement* obj) {
	GstEncodingProfile* result;
	g_object_get (obj, "profile", &result, NULL);
	return result;
}


static void _rygel_gst_transcoder_on_decoder_pad_added_gst_element_pad_added (GstElement* _sender, GstPad* pad, gpointer self) {
	rygel_gst_transcoder_on_decoder_pad_added (self, _sender, pad);
}


static gboolean _rygel_gst_transcoder_on_autoplug_continue_dynamic_autoplug_continue0_ (GstElement* _sender, GstPad* new_pad, GstCaps* caps, gpointer self) {
	gboolean result;
	result = rygel_gst_transcoder_on_autoplug_continue (self, _sender, new_pad, caps);
	return result;
}


static void g_cclosure_user_marshal_BOOLEAN__OBJECT_POINTER (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) {
	typedef gboolean (*GMarshalFunc_BOOLEAN__OBJECT_POINTER) (gpointer data1, gpointer arg_1, gpointer arg_2, gpointer data2);
	register GMarshalFunc_BOOLEAN__OBJECT_POINTER callback;
	register GCClosure * cc;
	register gpointer data1;
	register gpointer data2;
	gboolean v_return;
	cc = (GCClosure *) closure;
	g_return_if_fail (return_value != NULL);
	g_return_if_fail (n_param_values == 3);
	if (G_CCLOSURE_SWAP_DATA (closure)) {
		data1 = closure->data;
		data2 = param_values->data[0].v_pointer;
	} else {
		data1 = param_values->data[0].v_pointer;
		data2 = closure->data;
	}
	callback = (GMarshalFunc_BOOLEAN__OBJECT_POINTER) (marshal_data ? marshal_data : cc->callback);
	v_return = callback (data1, g_value_get_object (param_values + 1), g_value_get_pointer (param_values + 2), data2);
	g_value_set_boolean (return_value, v_return);
}


void _dynamic_autoplug_continue1_connect (gpointer obj, const char * signal_name, GCallback handler, gpointer data) {
	g_signal_connect_object (obj, signal_name, handler, data, 0);
}


static void _rygel_gst_transcoder_on_no_more_pads_gst_element_no_more_pads (GstElement* _sender, gpointer self) {
	rygel_gst_transcoder_on_no_more_pads (self, _sender);
}


static RygelDataSource* rygel_gst_transcoder_real_create_source (RygelTranscoder* base, RygelMediaItem* item, RygelDataSource* src, GError** error) {
	RygelGstTranscoder * self;
	RygelDataSource* result = NULL;
	RygelDataSource* _tmp0_;
	RygelDataSource* _tmp1_;
	RygelGstDataSource* _tmp2_;
	RygelGstDataSource* orig_source;
	GstElement* _tmp3_ = NULL;
	GstElement* _tmp4_;
	GstElement* _tmp5_ = NULL;
	GstElement* _tmp6_;
	GstElement* _tmp7_;
	GstEncodingProfile* _tmp8_ = NULL;
	GstEncodingProfile* _tmp9_;
	GstElement* _tmp10_;
	GstElement* _tmp11_;
	GstElement* _tmp12_;
	GObjectClass* _tmp17_ = NULL;
	GType _tmp18_ = 0UL;
	const gchar* _tmp19_ = NULL;
	GstElement* _tmp20_;
	GstEncodingProfile* _tmp21_;
	GstEncodingProfile* _tmp22_;
	GstBin* _tmp23_;
	GstBin* bin;
	GstBin* _tmp24_;
	RygelGstDataSource* _tmp25_;
	GstElement* _tmp26_;
	GstElement* _tmp27_;
	GstElement* _tmp28_;
	GstElement* _tmp29_;
	RygelGstDataSource* _tmp30_;
	GstElement* _tmp31_;
	GstElement* _tmp32_;
	GstElement* _tmp33_;
	GstElement* _tmp34_;
	GstElement* _tmp35_;
	GstElement* _tmp36_;
	GstPad* _tmp37_ = NULL;
	GstPad* pad;
	GstPad* _tmp38_;
	GstGhostPad* _tmp39_;
	GstGhostPad* ghost;
	GstBin* _tmp40_;
	GstGhostPad* _tmp41_;
	GstPad* _tmp42_;
	GstBin* _tmp43_;
	RygelGstDataSource* _tmp44_;
	GError * _inner_error_ = NULL;
	self = (RygelGstTranscoder*) base;
	g_return_val_if_fail (item != NULL, NULL);
	g_return_val_if_fail (src != NULL, NULL);
	_tmp0_ = src;
	_vala_assert (G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, RYGEL_TYPE_GST_DATA_SOURCE), "src is GstDataSource");
	_tmp1_ = src;
	_tmp2_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, RYGEL_TYPE_GST_DATA_SOURCE) ? ((RygelGstDataSource*) _tmp1_) : NULL);
	orig_source = _tmp2_;
	_tmp3_ = rygel_gst_utils_create_element (RYGEL_GST_TRANSCODER_DECODE_BIN, RYGEL_GST_TRANSCODER_DECODE_BIN, &_inner_error_);
	_tmp4_ = _tmp3_;
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		_g_object_unref0 (orig_source);
		return NULL;
	}
	_g_object_unref0 (self->priv->decoder);
	self->priv->decoder = _tmp4_;
	_tmp5_ = rygel_gst_utils_create_element (RYGEL_GST_TRANSCODER_ENCODE_BIN, RYGEL_GST_TRANSCODER_ENCODE_BIN, &_inner_error_);
	_tmp6_ = _tmp5_;
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		_g_object_unref0 (orig_source);
		return NULL;
	}
	_g_object_unref0 (self->priv->encoder);
	self->priv->encoder = _tmp6_;
	_tmp7_ = self->priv->encoder;
	_tmp8_ = rygel_gst_transcoder_get_encoding_profile (self);
	_tmp9_ = _tmp8_;
	_dynamic_set_profile2 (_tmp7_, _tmp9_);
	_g_object_unref0 (_tmp9_);
	_tmp10_ = self->priv->encoder;
	_tmp11_ = _dynamic_get_profile3 (_tmp10_);
	_tmp12_ = _tmp11_;
	if (_tmp12_ == NULL) {
		const gchar* _tmp13_ = NULL;
		gchar* _tmp14_;
		gchar* message;
		const gchar* _tmp15_;
		GError* _tmp16_;
		_tmp13_ = _ ("Could not create a transcoder configuration. " "Your GStramer installation might be missing a plug-in");
		_tmp14_ = g_strdup (_tmp13_);
		message = _tmp14_;
		_tmp15_ = message;
		_tmp16_ = g_error_new_literal (RYGEL_GST_TRANSCODER_ERROR, RYGEL_GST_TRANSCODER_ERROR_CANT_TRANSCODE, _tmp15_);
		_inner_error_ = _tmp16_;
		g_propagate_error (error, _inner_error_);
		_g_free0 (message);
		_g_object_unref0 (orig_source);
		return NULL;
	}
	_tmp17_ = G_OBJECT_GET_CLASS ((GObject*) self);
	_tmp18_ = G_TYPE_FROM_CLASS ((GTypeClass*) _tmp17_);
	_tmp19_ = g_type_name (_tmp18_);
	g_debug ("rygel-gst-transcoder.vala:94: %s using the following encoding profile:", _tmp19_);
	_tmp20_ = self->priv->encoder;
	_tmp21_ = _dynamic_get_profile4 (_tmp20_);
	_tmp22_ = _tmp21_;
	rygel_gst_utils_dump_encoding_profile (_tmp22_, 2);
	_tmp23_ = (GstBin*) gst_bin_new ("transcoder-source");
	g_object_ref_sink (_tmp23_);
	bin = _tmp23_;
	_tmp24_ = bin;
	_tmp25_ = orig_source;
	_tmp26_ = _tmp25_->src;
	_tmp27_ = _g_object_ref0 (_tmp26_);
	_tmp28_ = self->priv->decoder;
	_tmp29_ = self->priv->encoder;
	gst_bin_add_many (_tmp24_, _tmp27_, _tmp28_, _tmp29_, NULL);
	_tmp30_ = orig_source;
	_tmp31_ = _tmp30_->src;
	_tmp32_ = self->priv->decoder;
	gst_element_link (_tmp31_, _tmp32_);
	_tmp33_ = self->priv->decoder;
	g_signal_connect_object (_tmp33_, "pad-added", (GCallback) _rygel_gst_transcoder_on_decoder_pad_added_gst_element_pad_added, self, 0);
	_tmp34_ = self->priv->decoder;
	_dynamic_autoplug_continue1_connect (_tmp34_, "autoplug_continue", (GCallback) _rygel_gst_transcoder_on_autoplug_continue_dynamic_autoplug_continue0_, self);
	_tmp35_ = self->priv->decoder;
	g_signal_connect_object (_tmp35_, "no-more-pads", (GCallback) _rygel_gst_transcoder_on_no_more_pads_gst_element_no_more_pads, self, 0);
	_tmp36_ = self->priv->encoder;
	_tmp37_ = gst_element_get_static_pad (_tmp36_, "src");
	pad = _tmp37_;
	_tmp38_ = pad;
	_tmp39_ = (GstGhostPad*) gst_ghost_pad_new (NULL, _tmp38_);
	g_object_ref_sink (_tmp39_);
	ghost = _tmp39_;
	_tmp40_ = bin;
	_tmp41_ = ghost;
	_tmp42_ = _g_object_ref0 ((GstPad*) _tmp41_);
	gst_element_add_pad ((GstElement*) _tmp40_, _tmp42_);
	_tmp43_ = bin;
	_tmp44_ = rygel_gst_data_source_new_from_element ((GstElement*) _tmp43_);
	result = (RygelDataSource*) _tmp44_;
	_g_object_unref0 (ghost);
	_g_object_unref0 (pad);
	_g_object_unref0 (bin);
	_g_object_unref0 (orig_source);
	return result;
}


/**
     * Gets the Gst.EncodingProfile for this transcoder.
     *
     * @return      the Gst.EncodingProfile for this transcoder.
     */
static GstEncodingProfile* rygel_gst_transcoder_real_get_encoding_profile (RygelGstTranscoder* self) {
	g_critical ("Type `%s' does not implement abstract method `rygel_gst_transcoder_get_encoding_profile'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}


GstEncodingProfile* rygel_gst_transcoder_get_encoding_profile (RygelGstTranscoder* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_GST_TRANSCODER_GET_CLASS (self)->get_encoding_profile (self);
}


static gboolean rygel_gst_transcoder_on_autoplug_continue (RygelGstTranscoder* self, GstElement* decodebin, GstPad* new_pad, GstCaps* caps) {
	gboolean result = FALSE;
	GstPad* sinkpad;
	GstElement* _tmp0_;
	GstCaps* _tmp1_;
	GstPad* _tmp2_;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (decodebin != NULL, FALSE);
	g_return_val_if_fail (new_pad != NULL, FALSE);
	g_return_val_if_fail (caps != NULL, FALSE);
	sinkpad = NULL;
	_tmp0_ = self->priv->encoder;
	_tmp1_ = caps;
	g_signal_emit_by_name (_tmp0_, "request-pad", _tmp1_, &sinkpad, NULL);
	_tmp2_ = sinkpad;
	if (_tmp2_ == NULL) {
		result = TRUE;
		_g_object_unref0 (sinkpad);
		return result;
	}
	result = FALSE;
	_g_object_unref0 (sinkpad);
	return result;
}


static void rygel_gst_transcoder_on_decoder_pad_added (RygelGstTranscoder* self, GstElement* decodebin, GstPad* new_pad) {
	GstPad* sinkpad = NULL;
	GstElement* _tmp0_;
	GstPad* _tmp1_;
	GstPad* _tmp2_ = NULL;
	GstPad* _tmp3_;
	GstPad* _tmp8_;
	GstPad* _tmp13_;
	GstPad* _tmp14_;
	GstPadLinkReturn _tmp15_ = 0;
	gboolean pad_link_ok;
	gboolean _tmp16_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (decodebin != NULL);
	g_return_if_fail (new_pad != NULL);
	_tmp0_ = self->priv->encoder;
	_tmp1_ = new_pad;
	_tmp2_ = gst_element_get_compatible_pad (_tmp0_, _tmp1_, NULL);
	_g_object_unref0 (sinkpad);
	sinkpad = _tmp2_;
	_tmp3_ = sinkpad;
	if (_tmp3_ == NULL) {
		GstPad* _tmp4_;
		GstCaps* _tmp5_ = NULL;
		GstCaps* caps;
		GstElement* _tmp6_;
		GstCaps* _tmp7_;
		_tmp4_ = new_pad;
		_tmp5_ = gst_pad_query_caps (_tmp4_, NULL);
		caps = _tmp5_;
		_tmp6_ = self->priv->encoder;
		_tmp7_ = caps;
		g_signal_emit_by_name (_tmp6_, "request-pad", _tmp7_, &sinkpad, NULL);
		_gst_mini_object_unref0 (caps);
	}
	_tmp8_ = sinkpad;
	if (_tmp8_ == NULL) {
		GstPad* _tmp9_;
		gchar* _tmp10_ = NULL;
		gchar* _tmp11_;
		gchar* _tmp12_;
		_tmp9_ = new_pad;
		g_object_get ((GstObject*) _tmp9_, "name", &_tmp10_, NULL);
		_tmp11_ = _tmp10_;
		_tmp12_ = _tmp11_;
		g_debug ("rygel-gst-transcoder.vala:145: No compatible encodebin pad found for p" \
"ad '%s', ignoring..", _tmp12_);
		_g_free0 (_tmp12_);
		_g_object_unref0 (sinkpad);
		return;
	}
	_tmp13_ = new_pad;
	_tmp14_ = sinkpad;
	_tmp15_ = gst_pad_link_full (_tmp13_, _tmp14_, GST_PAD_LINK_CHECK_DEFAULT);
	pad_link_ok = _tmp15_ == GST_PAD_LINK_OK;
	_tmp16_ = pad_link_ok;
	if (!_tmp16_) {
		GstPad* _tmp17_;
		gchar* _tmp18_ = NULL;
		gchar* _tmp19_;
		gchar* _tmp20_;
		GstPad* _tmp21_;
		gchar* _tmp22_ = NULL;
		gchar* _tmp23_;
		gchar* _tmp24_;
		_tmp17_ = new_pad;
		g_object_get ((GstObject*) _tmp17_, "name", &_tmp18_, NULL);
		_tmp19_ = _tmp18_;
		_tmp20_ = _tmp19_;
		_tmp21_ = sinkpad;
		g_object_get ((GstObject*) _tmp21_, "name", &_tmp22_, NULL);
		_tmp23_ = _tmp22_;
		_tmp24_ = _tmp23_;
		g_warning ("rygel-gst-transcoder.vala:153: Failed to link pad '%s' to '%s'", _tmp20_, _tmp24_);
		_g_free0 (_tmp24_);
		_g_free0 (_tmp20_);
	} else {
		self->priv->link_failed = FALSE;
	}
	_g_object_unref0 (sinkpad);
	return;
}


static gpointer _gst_mini_object_ref0 (gpointer self) {
	return self ? gst_mini_object_ref (self) : NULL;
}


static void rygel_gst_transcoder_on_no_more_pads (RygelGstTranscoder* self, GstElement* decodebin) {
	gboolean _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (decodebin != NULL);
	_tmp0_ = self->priv->link_failed;
	if (_tmp0_) {
		GstElement* _tmp1_;
		GstObject* _tmp2_ = NULL;
		GstBin* bin;
		GError* _tmp3_;
		GError* _error_;
		GstBin* _tmp4_;
		GError* _tmp5_;
		GstMessage* _tmp6_;
		GstMessage* message;
		GstBin* _tmp7_;
		GstBus* _tmp8_ = NULL;
		GstBus* bus;
		GstBus* _tmp9_;
		GstMessage* _tmp10_;
		GstMessage* _tmp11_;
		_tmp1_ = self->priv->encoder;
		_tmp2_ = gst_object_get_parent ((GstObject*) _tmp1_);
		bin = G_TYPE_CHECK_INSTANCE_TYPE (_tmp2_, gst_bin_get_type ()) ? ((GstBin*) _tmp2_) : NULL;
		_tmp3_ = g_error_new_literal (G_IO_ERROR, G_IO_ERROR_FAILED, "Could not link");
		_error_ = _tmp3_;
		_tmp4_ = bin;
		_tmp5_ = _error_;
		_tmp6_ = gst_message_new_error ((GstObject*) _tmp4_, _tmp5_, RYGEL_GST_TRANSCODER_DESCRIPTION);
		message = _tmp6_;
		_tmp7_ = bin;
		_tmp8_ = gst_element_get_bus ((GstElement*) _tmp7_);
		bus = _tmp8_;
		_tmp9_ = bus;
		_tmp10_ = message;
		_tmp11_ = _gst_mini_object_ref0 (_tmp10_);
		gst_bus_post (_tmp9_, _tmp11_);
		_g_object_unref0 (bus);
		_gst_mini_object_unref0 (message);
		_g_error_free0 (_error_);
		_g_object_unref0 (bin);
	}
}


const gchar* rygel_gst_transcoder_get_preset (RygelGstTranscoder* self) {
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_preset;
	result = _tmp0_;
	return result;
}


void rygel_gst_transcoder_set_preset (RygelGstTranscoder* self, const gchar* value) {
	const gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_preset);
	self->priv->_preset = _tmp1_;
	g_object_notify ((GObject *) self, "preset");
}


static void rygel_gst_transcoder_class_init (RygelGstTranscoderClass * klass) {
	rygel_gst_transcoder_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (RygelGstTranscoderPrivate));
	G_OBJECT_CLASS (klass)->constructed = rygel_gst_transcoder_real_constructed;
	RYGEL_TRANSCODER_CLASS (klass)->create_source = rygel_gst_transcoder_real_create_source;
	RYGEL_GST_TRANSCODER_CLASS (klass)->get_encoding_profile = rygel_gst_transcoder_real_get_encoding_profile;
	G_OBJECT_CLASS (klass)->get_property = _vala_rygel_gst_transcoder_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_rygel_gst_transcoder_set_property;
	G_OBJECT_CLASS (klass)->finalize = rygel_gst_transcoder_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_GST_TRANSCODER_PRESET, g_param_spec_string ("preset", "preset", "preset", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void rygel_gst_transcoder_instance_init (RygelGstTranscoder * self) {
	gchar* _tmp0_;
	self->priv = RYGEL_GST_TRANSCODER_GET_PRIVATE (self);
	_tmp0_ = g_strdup (RYGEL_GST_TRANSCODER_DEFAULT_ENCODING_PRESET);
	self->priv->_preset = _tmp0_;
}


static void rygel_gst_transcoder_finalize (GObject* obj) {
	RygelGstTranscoder * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_GST_TRANSCODER, RygelGstTranscoder);
	_g_free0 (self->priv->_preset);
	_g_object_unref0 (self->priv->decoder);
	_g_object_unref0 (self->priv->encoder);
	G_OBJECT_CLASS (rygel_gst_transcoder_parent_class)->finalize (obj);
}


/**
 * The base Transcoder class. Each implementation derives from it and must
 * implement get_distance and get_encoding_profile methods.
 */
GType rygel_gst_transcoder_get_type (void) {
	static volatile gsize rygel_gst_transcoder_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_gst_transcoder_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelGstTranscoderClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_gst_transcoder_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelGstTranscoder), 0, (GInstanceInitFunc) rygel_gst_transcoder_instance_init, NULL };
		GType rygel_gst_transcoder_type_id;
		rygel_gst_transcoder_type_id = g_type_register_static (RYGEL_TYPE_TRANSCODER, "RygelGstTranscoder", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&rygel_gst_transcoder_type_id__volatile, rygel_gst_transcoder_type_id);
	}
	return rygel_gst_transcoder_type_id__volatile;
}


static void _vala_rygel_gst_transcoder_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	RygelGstTranscoder * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, RYGEL_TYPE_GST_TRANSCODER, RygelGstTranscoder);
	switch (property_id) {
		case RYGEL_GST_TRANSCODER_PRESET:
		g_value_set_string (value, rygel_gst_transcoder_get_preset (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_rygel_gst_transcoder_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	RygelGstTranscoder * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, RYGEL_TYPE_GST_TRANSCODER, RygelGstTranscoder);
	switch (property_id) {
		case RYGEL_GST_TRANSCODER_PRESET:
		rygel_gst_transcoder_set_preset (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



