/* rygel-gst-utils.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-gst-utils.vala, do not modify */

/*
 * Copyright (C) 2009 Nokia Corporation.
 *
 * Author: Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
 *                               <zeeshan.ali@nokia.com>
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
#include <stdlib.h>
#include <string.h>
#include <gst/gst.h>
#include <glib/gi18n-lib.h>
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
#include <gobject/gvaluecollector.h>


#define RYGEL_TYPE_GST_UTILS (rygel_gst_utils_get_type ())
#define RYGEL_GST_UTILS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_GST_UTILS, RygelGstUtils))
#define RYGEL_GST_UTILS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_GST_UTILS, RygelGstUtilsClass))
#define RYGEL_IS_GST_UTILS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_GST_UTILS))
#define RYGEL_IS_GST_UTILS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_GST_UTILS))
#define RYGEL_GST_UTILS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_GST_UTILS, RygelGstUtilsClass))

typedef struct _RygelGstUtils RygelGstUtils;
typedef struct _RygelGstUtilsClass RygelGstUtilsClass;
typedef struct _RygelGstUtilsPrivate RygelGstUtilsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_regex_unref0(var) ((var == NULL) ? NULL : (var = (g_regex_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _gst_caps_unref0(var) ((var == NULL) ? NULL : (var = (gst_caps_unref (var), NULL)))
#define __g_list_free__g_object_unref0_0(var) ((var == NULL) ? NULL : (var = (_g_list_free__g_object_unref0_ (var), NULL)))
typedef struct _RygelParamSpecGstUtils RygelParamSpecGstUtils;

typedef enum  {
	RYGEL_GST_ERROR_MISSING_PLUGIN,
	RYGEL_GST_ERROR_LINK
} RygelGstError;
#define RYGEL_GST_ERROR rygel_gst_error_quark ()
struct _RygelGstUtils {
	GTypeInstance parent_instance;
	volatile int ref_count;
	RygelGstUtilsPrivate * priv;
};

struct _RygelGstUtilsClass {
	GTypeClass parent_class;
	void (*finalize) (RygelGstUtils *self);
};

struct _RygelParamSpecGstUtils {
	GParamSpec parent_instance;
};


static gpointer rygel_gst_utils_parent_class = NULL;

GQuark rygel_gst_error_quark (void);
gpointer rygel_gst_utils_ref (gpointer instance);
void rygel_gst_utils_unref (gpointer instance);
GParamSpec* rygel_param_spec_gst_utils (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_value_set_gst_utils (GValue* value, gpointer v_object);
void rygel_value_take_gst_utils (GValue* value, gpointer v_object);
gpointer rygel_value_get_gst_utils (const GValue* value);
GType rygel_gst_utils_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_GST_UTILS_DUMMY_PROPERTY
};
GstElement* rygel_gst_utils_create_element (const gchar* factoryname, const gchar* name, GError** error);
GstElement* rygel_gst_utils_create_source_for_uri (const gchar* uri);
static inline void _dynamic_set_blocksize5 (GstElement* obj, glong value);
static inline void _dynamic_set_tcp_timeout6 (GstElement* obj, gint64 value);
void rygel_gst_utils_dump_encoding_profile (GstEncodingProfile* profile, gint indent);
GstElement* rygel_gst_utils_get_rtp_depayloader (GstCaps* caps);
static gboolean rygel_gst_utils_need_rtp_depayloader (GstCaps* caps);
static void _g_object_unref0_ (gpointer var);
static void _g_list_free__g_object_unref0_ (GList* self);
RygelGstUtils* rygel_gst_utils_construct (GType object_type);
static void rygel_gst_utils_finalize (RygelGstUtils* obj);


GQuark rygel_gst_error_quark (void) {
	return g_quark_from_static_string ("rygel_gst_error-quark");
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


GstElement* rygel_gst_utils_create_element (const gchar* factoryname, const gchar* name, GError** error) {
	GstElement* result = NULL;
	GstElement* element = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	GstElement* _tmp2_ = NULL;
	GstElement* _tmp3_ = NULL;
	GstElement* _tmp4_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (factoryname != NULL, NULL);
	_tmp0_ = factoryname;
	_tmp1_ = name;
	_tmp2_ = gst_element_factory_make (_tmp0_, _tmp1_);
	_tmp3_ = _g_object_ref0 (_tmp2_);
	element = _tmp3_;
	_tmp4_ = element;
	if (_tmp4_ == NULL) {
		const gchar* _tmp5_ = NULL;
		const gchar* _tmp6_ = NULL;
		GError* _tmp7_ = NULL;
		_tmp5_ = _ ("Required element %s missing");
		_tmp6_ = factoryname;
		_tmp7_ = g_error_new (RYGEL_GST_ERROR, RYGEL_GST_ERROR_MISSING_PLUGIN, _tmp5_, _tmp6_);
		_inner_error_ = _tmp7_;
		g_propagate_error (error, _inner_error_);
		_g_object_unref0 (element);
		return NULL;
	}
	result = element;
	return result;
}


static gchar* string_replace (const gchar* self, const gchar* old, const gchar* replacement) {
	gchar* result = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (old != NULL, NULL);
	g_return_val_if_fail (replacement != NULL, NULL);
	{
		GRegex* regex = NULL;
		const gchar* _tmp0_ = NULL;
		gchar* _tmp1_ = NULL;
		gchar* _tmp2_ = NULL;
		GRegex* _tmp3_ = NULL;
		GRegex* _tmp4_ = NULL;
		gchar* _tmp5_ = NULL;
		GRegex* _tmp6_ = NULL;
		const gchar* _tmp7_ = NULL;
		gchar* _tmp8_ = NULL;
		_tmp0_ = old;
		_tmp1_ = g_regex_escape_string (_tmp0_, -1);
		_tmp2_ = _tmp1_;
		_tmp3_ = g_regex_new (_tmp2_, 0, 0, &_inner_error_);
		_tmp4_ = _tmp3_;
		_g_free0 (_tmp2_);
		regex = _tmp4_;
		if (_inner_error_ != NULL) {
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch3_g_regex_error;
			}
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		_tmp6_ = regex;
		_tmp7_ = replacement;
		_tmp8_ = g_regex_replace_literal (_tmp6_, self, (gssize) (-1), 0, _tmp7_, 0, &_inner_error_);
		_tmp5_ = _tmp8_;
		if (_inner_error_ != NULL) {
			_g_regex_unref0 (regex);
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch3_g_regex_error;
			}
			_g_regex_unref0 (regex);
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		result = _tmp5_;
		_g_regex_unref0 (regex);
		return result;
	}
	goto __finally3;
	__catch3_g_regex_error:
	{
		GError* e = NULL;
		e = _inner_error_;
		_inner_error_ = NULL;
		g_assert_not_reached ();
		_g_error_free0 (e);
	}
	__finally3:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
}


static inline void _dynamic_set_blocksize5 (GstElement* obj, glong value) {
	g_object_set (obj, "blocksize", value, NULL);
}


static inline void _dynamic_set_tcp_timeout6 (GstElement* obj, gint64 value) {
	g_object_set (obj, "tcp-timeout", value, NULL);
}


GstElement* rygel_gst_utils_create_source_for_uri (const gchar* uri) {
	GstElement* result = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (uri != NULL, NULL);
	{
		GstElement* src = NULL;
		const gchar* _tmp0_ = NULL;
		gboolean _tmp1_ = FALSE;
		GstElement* _tmp11_ = NULL;
		GObjectClass* _tmp12_ = NULL;
		GParamSpec* _tmp13_ = NULL;
		GstElement* _tmp15_ = NULL;
		GObjectClass* _tmp16_ = NULL;
		GParamSpec* _tmp17_ = NULL;
		_tmp0_ = uri;
		_tmp1_ = g_str_has_prefix (_tmp0_, "gst-launch://");
		if (_tmp1_) {
			gchar* description = NULL;
			const gchar* _tmp2_ = NULL;
			gchar* _tmp3_ = NULL;
			GstBin* _tmp4_ = NULL;
			const gchar* _tmp5_ = NULL;
			GstBin* _tmp6_ = NULL;
			_tmp2_ = uri;
			_tmp3_ = string_replace (_tmp2_, "gst-launch://", "");
			description = _tmp3_;
			_tmp5_ = description;
			_tmp6_ = gst_parse_bin_from_description_full (_tmp5_, TRUE, NULL, GST_PARSE_FLAG_NONE, &_inner_error_);
			_tmp4_ = _tmp6_;
			if (_inner_error_ != NULL) {
				_g_free0 (description);
				_g_object_unref0 (src);
				goto __catch2_g_error;
			}
			_g_object_unref0 (src);
			src = (GstElement*) _tmp4_;
			_g_free0 (description);
		} else {
			GstElement* _tmp7_ = NULL;
			const gchar* _tmp8_ = NULL;
			GstElement* _tmp9_ = NULL;
			GstElement* _tmp10_ = NULL;
			_tmp8_ = uri;
			_tmp9_ = gst_element_make_from_uri (GST_URI_SRC, _tmp8_, NULL, &_inner_error_);
			_tmp7_ = _tmp9_;
			if (_inner_error_ != NULL) {
				_g_object_unref0 (src);
				goto __catch2_g_error;
			}
			_tmp10_ = _g_object_ref0 (_tmp7_);
			_g_object_unref0 (src);
			src = _tmp10_;
		}
		_tmp11_ = src;
		_tmp12_ = G_OBJECT_GET_CLASS ((GObject*) _tmp11_);
		_tmp13_ = g_object_class_find_property (_tmp12_, "blocksize");
		if (_tmp13_ != NULL) {
			GstElement* _tmp14_ = NULL;
			_tmp14_ = src;
			_dynamic_set_blocksize5 (_tmp14_, (glong) 65536);
		}
		_tmp15_ = src;
		_tmp16_ = G_OBJECT_GET_CLASS ((GObject*) _tmp15_);
		_tmp17_ = g_object_class_find_property (_tmp16_, "tcp-timeout");
		if (_tmp17_ != NULL) {
			GstElement* _tmp18_ = NULL;
			_tmp18_ = src;
			_dynamic_set_tcp_timeout6 (_tmp18_, (gint64) 60000000);
		}
		result = src;
		return result;
	}
	goto __finally2;
	__catch2_g_error:
	{
		GError* _error_ = NULL;
		_error_ = _inner_error_;
		_inner_error_ = NULL;
		result = NULL;
		_g_error_free0 (_error_);
		return result;
	}
	__finally2:
	g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
	g_clear_error (&_inner_error_);
	return NULL;
}


void rygel_gst_utils_dump_encoding_profile (GstEncodingProfile* profile, gint indent) {
	gchar* indent_s = NULL;
	gint _tmp0_ = 0;
	gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	GstEncodingProfile* _tmp5_ = NULL;
	const gchar* _tmp6_ = NULL;
	const gchar* _tmp7_ = NULL;
	gchar* _tmp8_ = NULL;
	gchar* _tmp9_ = NULL;
	GstEncodingProfile* _tmp10_ = NULL;
	GstCaps* _tmp11_ = NULL;
	GstCaps* _tmp12_ = NULL;
	gchar* _tmp13_ = NULL;
	gchar* _tmp14_ = NULL;
	GstEncodingProfile* _tmp15_ = NULL;
	GstCaps* _tmp16_ = NULL;
	GstCaps* _tmp17_ = NULL;
	gboolean _tmp18_ = FALSE;
	GstEncodingProfile* _tmp27_ = NULL;
	g_return_if_fail (profile != NULL);
	_tmp0_ = indent;
	_tmp1_ = g_strnfill ((gsize) _tmp0_, ' ');
	indent_s = _tmp1_;
	_tmp2_ = indent_s;
	_tmp3_ = g_strconcat (_tmp2_, "%s:", NULL);
	_tmp4_ = _tmp3_;
	_tmp5_ = profile;
	_tmp6_ = gst_encoding_profile_get_name (_tmp5_);
	g_debug (_tmp4_, _tmp6_);
	_g_free0 (_tmp4_);
	_tmp7_ = indent_s;
	_tmp8_ = g_strconcat (_tmp7_, "  Format: %s", NULL);
	_tmp9_ = _tmp8_;
	_tmp10_ = profile;
	_tmp11_ = gst_encoding_profile_get_format (_tmp10_);
	_tmp12_ = _tmp11_;
	_tmp13_ = gst_caps_to_string (_tmp12_);
	_tmp14_ = _tmp13_;
	g_debug (_tmp9_, _tmp14_);
	_g_free0 (_tmp14_);
	_gst_caps_unref0 (_tmp12_);
	_g_free0 (_tmp9_);
	_tmp15_ = profile;
	_tmp16_ = gst_encoding_profile_get_restriction (_tmp15_);
	_tmp17_ = _tmp16_;
	_tmp18_ = _tmp17_ != NULL;
	_gst_caps_unref0 (_tmp17_);
	if (_tmp18_) {
		const gchar* _tmp19_ = NULL;
		gchar* _tmp20_ = NULL;
		gchar* _tmp21_ = NULL;
		GstEncodingProfile* _tmp22_ = NULL;
		GstCaps* _tmp23_ = NULL;
		GstCaps* _tmp24_ = NULL;
		gchar* _tmp25_ = NULL;
		gchar* _tmp26_ = NULL;
		_tmp19_ = indent_s;
		_tmp20_ = g_strconcat (_tmp19_, "  Restriction: %s", NULL);
		_tmp21_ = _tmp20_;
		_tmp22_ = profile;
		_tmp23_ = gst_encoding_profile_get_restriction (_tmp22_);
		_tmp24_ = _tmp23_;
		_tmp25_ = gst_caps_to_string (_tmp24_);
		_tmp26_ = _tmp25_;
		g_debug (_tmp21_, _tmp26_);
		_g_free0 (_tmp26_);
		_gst_caps_unref0 (_tmp24_);
		_g_free0 (_tmp21_);
	}
	_tmp27_ = profile;
	if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp27_, gst_encoding_container_profile_get_type ())) {
		GstEncodingContainerProfile* container = NULL;
		GstEncodingProfile* _tmp28_ = NULL;
		GstEncodingContainerProfile* _tmp29_ = NULL;
		GstEncodingContainerProfile* _tmp30_ = NULL;
		GList* _tmp31_ = NULL;
		_tmp28_ = profile;
		_tmp29_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp28_, gst_encoding_container_profile_get_type ()) ? ((GstEncodingContainerProfile*) _tmp28_) : NULL);
		container = _tmp29_;
		_tmp30_ = container;
		_tmp31_ = gst_encoding_container_profile_get_profiles (_tmp30_);
		{
			GList* subprofile_collection = NULL;
			GList* subprofile_it = NULL;
			subprofile_collection = _tmp31_;
			for (subprofile_it = subprofile_collection; subprofile_it != NULL; subprofile_it = subprofile_it->next) {
				GstEncodingProfile* _tmp32_ = NULL;
				GstEncodingProfile* subprofile = NULL;
				_tmp32_ = _g_object_ref0 ((GstEncodingProfile*) subprofile_it->data);
				subprofile = _tmp32_;
				{
					GstEncodingProfile* _tmp33_ = NULL;
					gint _tmp34_ = 0;
					_tmp33_ = subprofile;
					_tmp34_ = indent;
					rygel_gst_utils_dump_encoding_profile (_tmp33_, _tmp34_ + 4);
					_g_object_unref0 (subprofile);
				}
			}
		}
		_g_object_unref0 (container);
	}
	_g_free0 (indent_s);
}


static void _g_object_unref0_ (gpointer var) {
	(var == NULL) ? NULL : (var = (g_object_unref (var), NULL));
}


static void _g_list_free__g_object_unref0_ (GList* self) {
	g_list_foreach (self, (GFunc) _g_object_unref0_, NULL);
	g_list_free (self);
}


GstElement* rygel_gst_utils_get_rtp_depayloader (GstCaps* caps) {
	GstElement* result = NULL;
	GstCaps* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	GList* features = NULL;
	GList* _tmp2_ = NULL;
	GList* _tmp3_ = NULL;
	GstCaps* _tmp4_ = NULL;
	GList* _tmp5_ = NULL;
	GList* _tmp6_ = NULL;
	GList* _tmp7_ = NULL;
	gconstpointer _tmp8_ = NULL;
	gchar* _tmp9_ = NULL;
	gchar* _tmp10_ = NULL;
	gboolean _tmp11_ = FALSE;
	g_return_val_if_fail (caps != NULL, NULL);
	_tmp0_ = caps;
	_tmp1_ = rygel_gst_utils_need_rtp_depayloader (_tmp0_);
	if (!_tmp1_) {
		result = NULL;
		return result;
	}
	_tmp2_ = gst_element_factory_list_get_elements ((GstElementFactoryListType) GST_ELEMENT_FACTORY_TYPE_DEPAYLOADER, GST_RANK_NONE);
	features = _tmp2_;
	_tmp3_ = features;
	_tmp4_ = caps;
	_tmp5_ = gst_element_factory_list_filter (_tmp3_, _tmp4_, GST_PAD_SINK, FALSE);
	__g_list_free__g_object_unref0_0 (features);
	features = _tmp5_;
	_tmp6_ = features;
	if (_tmp6_ == NULL) {
		result = NULL;
		__g_list_free__g_object_unref0_0 (features);
		return result;
	}
	_tmp7_ = features;
	_tmp8_ = _tmp7_->data;
	_tmp9_ = gst_object_get_name ((GstObject*) ((GstElementFactory*) _tmp8_));
	_tmp10_ = _tmp9_;
	_tmp11_ = g_strcmp0 (_tmp10_, "rtpdepay") == 0;
	_g_free0 (_tmp10_);
	if (_tmp11_) {
		GList* _tmp12_ = NULL;
		GList* _tmp13_ = NULL;
		_tmp12_ = features;
		_tmp13_ = _tmp12_->next;
		if (_tmp13_ != NULL) {
			GList* _tmp14_ = NULL;
			GList* _tmp15_ = NULL;
			gconstpointer _tmp16_ = NULL;
			GstElement* _tmp17_ = NULL;
			GstElement* _tmp18_ = NULL;
			_tmp14_ = features;
			_tmp15_ = _tmp14_->next;
			_tmp16_ = _tmp15_->data;
			_tmp17_ = gst_element_factory_create ((GstElementFactory*) _tmp16_, NULL);
			_tmp18_ = _g_object_ref0 (_tmp17_);
			result = _tmp18_;
			__g_list_free__g_object_unref0_0 (features);
			return result;
		}
		result = NULL;
		__g_list_free__g_object_unref0_0 (features);
		return result;
	} else {
		GList* _tmp19_ = NULL;
		gconstpointer _tmp20_ = NULL;
		GstElement* _tmp21_ = NULL;
		GstElement* _tmp22_ = NULL;
		_tmp19_ = features;
		_tmp20_ = _tmp19_->data;
		_tmp21_ = gst_element_factory_create ((GstElementFactory*) _tmp20_, NULL);
		_tmp22_ = _g_object_ref0 (_tmp21_);
		result = _tmp22_;
		__g_list_free__g_object_unref0_0 (features);
		return result;
	}
	__g_list_free__g_object_unref0_0 (features);
}


static gboolean rygel_gst_utils_need_rtp_depayloader (GstCaps* caps) {
	gboolean result = FALSE;
	GstStructure* structure = NULL;
	GstCaps* _tmp0_ = NULL;
	GstStructure* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	g_return_val_if_fail (caps != NULL, FALSE);
	_tmp0_ = caps;
	_tmp1_ = gst_caps_get_structure (_tmp0_, (guint) 0);
	structure = _tmp1_;
	_tmp2_ = gst_structure_get_name (structure);
	result = g_strcmp0 (_tmp2_, "application/x-rtp") == 0;
	return result;
}


RygelGstUtils* rygel_gst_utils_construct (GType object_type) {
	RygelGstUtils* self = NULL;
	self = (RygelGstUtils*) g_type_create_instance (object_type);
	return self;
}


static void rygel_value_gst_utils_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void rygel_value_gst_utils_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		rygel_gst_utils_unref (value->data[0].v_pointer);
	}
}


static void rygel_value_gst_utils_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = rygel_gst_utils_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer rygel_value_gst_utils_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* rygel_value_gst_utils_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		RygelGstUtils* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = rygel_gst_utils_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* rygel_value_gst_utils_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	RygelGstUtils** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = rygel_gst_utils_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* rygel_param_spec_gst_utils (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	RygelParamSpecGstUtils* spec;
	g_return_val_if_fail (g_type_is_a (object_type, RYGEL_TYPE_GST_UTILS), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer rygel_value_get_gst_utils (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_TYPE_GST_UTILS), NULL);
	return value->data[0].v_pointer;
}


void rygel_value_set_gst_utils (GValue* value, gpointer v_object) {
	RygelGstUtils* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_TYPE_GST_UTILS));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, RYGEL_TYPE_GST_UTILS));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		rygel_gst_utils_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		rygel_gst_utils_unref (old);
	}
}


void rygel_value_take_gst_utils (GValue* value, gpointer v_object) {
	RygelGstUtils* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_TYPE_GST_UTILS));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, RYGEL_TYPE_GST_UTILS));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		rygel_gst_utils_unref (old);
	}
}


static void rygel_gst_utils_class_init (RygelGstUtilsClass * klass) {
	rygel_gst_utils_parent_class = g_type_class_peek_parent (klass);
	RYGEL_GST_UTILS_CLASS (klass)->finalize = rygel_gst_utils_finalize;
}


static void rygel_gst_utils_instance_init (RygelGstUtils * self) {
	self->ref_count = 1;
}


static void rygel_gst_utils_finalize (RygelGstUtils* obj) {
	RygelGstUtils * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_GST_UTILS, RygelGstUtils);
}


GType rygel_gst_utils_get_type (void) {
	static volatile gsize rygel_gst_utils_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_gst_utils_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { rygel_value_gst_utils_init, rygel_value_gst_utils_free_value, rygel_value_gst_utils_copy_value, rygel_value_gst_utils_peek_pointer, "p", rygel_value_gst_utils_collect_value, "p", rygel_value_gst_utils_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (RygelGstUtilsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_gst_utils_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelGstUtils), 0, (GInstanceInitFunc) rygel_gst_utils_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType rygel_gst_utils_type_id;
		rygel_gst_utils_type_id = g_type_register_fundamental (g_type_fundamental_next (), "RygelGstUtils", &g_define_type_info, &g_define_type_fundamental_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&rygel_gst_utils_type_id__volatile, rygel_gst_utils_type_id);
	}
	return rygel_gst_utils_type_id__volatile;
}


gpointer rygel_gst_utils_ref (gpointer instance) {
	RygelGstUtils* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void rygel_gst_utils_unref (gpointer instance) {
	RygelGstUtils* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		RYGEL_GST_UTILS_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}



