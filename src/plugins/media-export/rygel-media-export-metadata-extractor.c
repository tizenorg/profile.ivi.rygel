/* rygel-media-export-metadata-extractor.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-media-export-metadata-extractor.vala, do not modify */

/*
 * Copyright (C) 2008 Zeeshan Ali (Khattak) <zeeshanak@gnome.org>.
 * Copyright (C) 2009 Jens Georg <mail@jensge.org>.
 *
 * Author: Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
 * Author: Jens Georg <mail@jensge.org>
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
#include <libgupnp-dlna/gupnp-dlna.h>
#include <gee.h>
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>
#include <rygel-core.h>
#include <gst/gst.h>
#include <libgupnp-dlna/gupnp-dlna-gst-utils.h>
#include <glib/gi18n-lib.h>


#define RYGEL_MEDIA_EXPORT_TYPE_METADATA_EXTRACTOR (rygel_media_export_metadata_extractor_get_type ())
#define RYGEL_MEDIA_EXPORT_METADATA_EXTRACTOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_METADATA_EXTRACTOR, RygelMediaExportMetadataExtractor))
#define RYGEL_MEDIA_EXPORT_METADATA_EXTRACTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIA_EXPORT_TYPE_METADATA_EXTRACTOR, RygelMediaExportMetadataExtractorClass))
#define RYGEL_MEDIA_EXPORT_IS_METADATA_EXTRACTOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_METADATA_EXTRACTOR))
#define RYGEL_MEDIA_EXPORT_IS_METADATA_EXTRACTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIA_EXPORT_TYPE_METADATA_EXTRACTOR))
#define RYGEL_MEDIA_EXPORT_METADATA_EXTRACTOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIA_EXPORT_TYPE_METADATA_EXTRACTOR, RygelMediaExportMetadataExtractorClass))

typedef struct _RygelMediaExportMetadataExtractor RygelMediaExportMetadataExtractor;
typedef struct _RygelMediaExportMetadataExtractorClass RygelMediaExportMetadataExtractorClass;
typedef struct _RygelMediaExportMetadataExtractorPrivate RygelMediaExportMetadataExtractorPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _RygelMediaExportMetadataExtractor {
	GObject parent_instance;
	RygelMediaExportMetadataExtractorPrivate * priv;
};

struct _RygelMediaExportMetadataExtractorClass {
	GObjectClass parent_class;
};

struct _RygelMediaExportMetadataExtractorPrivate {
	GstDiscoverer* discoverer;
	GUPnPDLNAProfileGuesser* guesser;
	GeeHashMap* file_hash;
	guint timeout;
	gboolean extract_metadata;
};


static gpointer rygel_media_export_metadata_extractor_parent_class = NULL;

GType rygel_media_export_metadata_extractor_get_type (void) G_GNUC_CONST;
#define RYGEL_MEDIA_EXPORT_METADATA_EXTRACTOR_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_MEDIA_EXPORT_TYPE_METADATA_EXTRACTOR, RygelMediaExportMetadataExtractorPrivate))
enum  {
	RYGEL_MEDIA_EXPORT_METADATA_EXTRACTOR_DUMMY_PROPERTY
};
RygelMediaExportMetadataExtractor* rygel_media_export_metadata_extractor_new (void);
RygelMediaExportMetadataExtractor* rygel_media_export_metadata_extractor_construct (GType object_type);
static void rygel_media_export_metadata_extractor_on_config_changed (RygelMediaExportMetadataExtractor* self, RygelConfiguration* config, const gchar* section, const gchar* key);
static void _rygel_media_export_metadata_extractor_on_config_changed_rygel_configuration_setting_changed (RygelConfiguration* _sender, const gchar* section, const gchar* key, gpointer self);
#define RYGEL_MEDIA_EXPORT_PLUGIN_NAME "MediaExport"
void rygel_media_export_metadata_extractor_extract (RygelMediaExportMetadataExtractor* self, GFile* file, const gchar* content_type);
static void rygel_media_export_metadata_extractor_extract_basic_information (RygelMediaExportMetadataExtractor* self, GFile* file, GstDiscovererInfo* info, GUPnPDLNAProfile* dlna);
static void rygel_media_export_metadata_extractor_on_done (RygelMediaExportMetadataExtractor* self, GstDiscovererInfo* info, GError* err);
static void _rygel_media_export_metadata_extractor_on_done_gst_pb_utils_discoverer_discovered (GstDiscoverer* _sender, GstDiscovererInfo* info, GError* err, gpointer self);
static void g_cclosure_user_marshal_VOID__OBJECT_OBJECT_OBJECT_OBJECT (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
static void g_cclosure_user_marshal_VOID__OBJECT_POINTER (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
static void rygel_media_export_metadata_extractor_finalize (GObject* obj);


static void _rygel_media_export_metadata_extractor_on_config_changed_rygel_configuration_setting_changed (RygelConfiguration* _sender, const gchar* section, const gchar* key, gpointer self) {
	rygel_media_export_metadata_extractor_on_config_changed (self, _sender, section, key);
}


RygelMediaExportMetadataExtractor* rygel_media_export_metadata_extractor_construct (GType object_type) {
	RygelMediaExportMetadataExtractor * self = NULL;
	GeeHashMap* _tmp0_ = NULL;
	RygelMetaConfig* config = NULL;
	RygelMetaConfig* _tmp1_ = NULL;
	self = (RygelMediaExportMetadataExtractor*) g_object_new (object_type, NULL);
	_tmp0_ = gee_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, G_TYPE_FILE, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	_g_object_unref0 (self->priv->file_hash);
	self->priv->file_hash = _tmp0_;
	_tmp1_ = rygel_meta_config_get_default ();
	config = _tmp1_;
	g_signal_connect_object ((RygelConfiguration*) config, "setting-changed", (GCallback) _rygel_media_export_metadata_extractor_on_config_changed_rygel_configuration_setting_changed, self, 0);
	rygel_media_export_metadata_extractor_on_config_changed (self, (RygelConfiguration*) config, RYGEL_MEDIA_EXPORT_PLUGIN_NAME, "extract-metadata");
	_g_object_unref0 (config);
	return self;
}


RygelMediaExportMetadataExtractor* rygel_media_export_metadata_extractor_new (void) {
	return rygel_media_export_metadata_extractor_construct (RYGEL_MEDIA_EXPORT_TYPE_METADATA_EXTRACTOR);
}


static void _rygel_media_export_metadata_extractor_on_done_gst_pb_utils_discoverer_discovered (GstDiscoverer* _sender, GstDiscovererInfo* info, GError* err, gpointer self) {
	rygel_media_export_metadata_extractor_on_done (self, info, err);
}


void rygel_media_export_metadata_extractor_extract (RygelMediaExportMetadataExtractor* self, GFile* file, const gchar* content_type) {
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	gboolean _tmp4_ = FALSE;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (file != NULL);
	g_return_if_fail (content_type != NULL);
	_tmp1_ = self->priv->extract_metadata;
	if (_tmp1_) {
		const gchar* _tmp2_ = NULL;
		gboolean _tmp3_ = FALSE;
		_tmp2_ = content_type;
		_tmp3_ = g_str_has_prefix (_tmp2_, "text/");
		_tmp0_ = !_tmp3_;
	} else {
		_tmp0_ = FALSE;
	}
	_tmp4_ = _tmp0_;
	if (_tmp4_) {
		gchar* uri = NULL;
		GFile* _tmp5_ = NULL;
		gchar* _tmp6_ = NULL;
		GeeHashMap* _tmp12_ = NULL;
		const gchar* _tmp13_ = NULL;
		GFile* _tmp14_ = NULL;
		GstDiscoverer* _tmp15_ = NULL;
		GstDiscoverer* _tmp16_ = NULL;
		GstDiscoverer* _tmp17_ = NULL;
		const gchar* _tmp18_ = NULL;
		GUPnPDLNAProfileGuesser* _tmp19_ = NULL;
		_tmp5_ = file;
		_tmp6_ = g_file_get_uri (_tmp5_);
		uri = _tmp6_;
		{
			GstClockTime gst_timeout = 0ULL;
			guint _tmp7_ = 0U;
			GstDiscoverer* _tmp8_ = NULL;
			GstClockTime _tmp9_ = 0ULL;
			GstDiscoverer* _tmp10_ = NULL;
			_tmp7_ = self->priv->timeout;
			gst_timeout = (GstClockTime) (_tmp7_ * GST_SECOND);
			_tmp9_ = gst_timeout;
			_tmp10_ = gst_discoverer_new (_tmp9_, &_inner_error_);
			_tmp8_ = _tmp10_;
			if (_inner_error_ != NULL) {
				goto __catch36_g_error;
			}
			_g_object_unref0 (self->priv->discoverer);
			self->priv->discoverer = _tmp8_;
		}
		goto __finally36;
		__catch36_g_error:
		{
			GError* _error_ = NULL;
			GFile* _tmp11_ = NULL;
			_error_ = _inner_error_;
			_inner_error_ = NULL;
			g_debug ("rygel-media-export-metadata-extractor.vala:78: Failed to create a disc" \
"overer. Doing basic extraction.");
			_tmp11_ = file;
			rygel_media_export_metadata_extractor_extract_basic_information (self, _tmp11_, NULL, NULL);
			_g_error_free0 (_error_);
			_g_free0 (uri);
			return;
		}
		__finally36:
		if (_inner_error_ != NULL) {
			_g_free0 (uri);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
		_tmp12_ = self->priv->file_hash;
		_tmp13_ = uri;
		_tmp14_ = file;
		gee_abstract_map_set ((GeeAbstractMap*) _tmp12_, _tmp13_, _tmp14_);
		_tmp15_ = self->priv->discoverer;
		g_signal_connect_object (_tmp15_, "discovered", (GCallback) _rygel_media_export_metadata_extractor_on_done_gst_pb_utils_discoverer_discovered, self, 0);
		_tmp16_ = self->priv->discoverer;
		gst_discoverer_start (_tmp16_);
		_tmp17_ = self->priv->discoverer;
		_tmp18_ = uri;
		gst_discoverer_discover_uri_async (_tmp17_, _tmp18_);
		_tmp19_ = gupnp_dlna_profile_guesser_new (TRUE, TRUE);
		_g_object_unref0 (self->priv->guesser);
		self->priv->guesser = _tmp19_;
		_g_free0 (uri);
	} else {
		GFile* _tmp20_ = NULL;
		_tmp20_ = file;
		rygel_media_export_metadata_extractor_extract_basic_information (self, _tmp20_, NULL, NULL);
	}
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void rygel_media_export_metadata_extractor_on_done (RygelMediaExportMetadataExtractor* self, GstDiscovererInfo* info, GError* err) {
	GFile* file = NULL;
	GeeHashMap* _tmp0_ = NULL;
	GstDiscovererInfo* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	gpointer _tmp3_ = NULL;
	GFile* _tmp4_ = NULL;
	GeeHashMap* _tmp7_ = NULL;
	GstDiscovererInfo* _tmp8_ = NULL;
	const gchar* _tmp9_ = NULL;
	gboolean _tmp10_ = FALSE;
	GstDiscovererInfo* _tmp11_ = NULL;
	GstDiscovererResult _tmp12_ = 0;
	gboolean _tmp15_ = FALSE;
	GUPnPDLNAInformation* dlna_info = NULL;
	GstDiscovererInfo* _tmp37_ = NULL;
	GUPnPDLNAInformation* _tmp38_ = NULL;
	GUPnPDLNAProfile* dlna = NULL;
	GUPnPDLNAProfileGuesser* _tmp39_ = NULL;
	GUPnPDLNAInformation* _tmp40_ = NULL;
	GUPnPDLNAProfile* _tmp41_ = NULL;
	GUPnPDLNAProfile* _tmp42_ = NULL;
	GFile* _tmp43_ = NULL;
	GstDiscovererInfo* _tmp44_ = NULL;
	GUPnPDLNAProfile* _tmp45_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (info != NULL);
	_g_object_unref0 (self->priv->discoverer);
	self->priv->discoverer = NULL;
	_tmp0_ = self->priv->file_hash;
	_tmp1_ = info;
	_tmp2_ = gst_discoverer_info_get_uri (_tmp1_);
	_tmp3_ = gee_abstract_map_get ((GeeAbstractMap*) _tmp0_, _tmp2_);
	file = (GFile*) _tmp3_;
	_tmp4_ = file;
	if (_tmp4_ == NULL) {
		GstDiscovererInfo* _tmp5_ = NULL;
		const gchar* _tmp6_ = NULL;
		_tmp5_ = info;
		_tmp6_ = gst_discoverer_info_get_uri (_tmp5_);
		g_warning ("rygel-media-export-metadata-extractor.vala:97: File %s already handled" \
", ignoring event", _tmp6_);
		_g_object_unref0 (file);
		return;
	}
	_tmp7_ = self->priv->file_hash;
	_tmp8_ = info;
	_tmp9_ = gst_discoverer_info_get_uri (_tmp8_);
	gee_abstract_map_unset ((GeeAbstractMap*) _tmp7_, _tmp9_, NULL);
	_tmp11_ = info;
	_tmp12_ = gst_discoverer_info_get_result (_tmp11_);
	if (_tmp12_ == GST_DISCOVERER_ERROR) {
		_tmp10_ = TRUE;
	} else {
		GstDiscovererInfo* _tmp13_ = NULL;
		GstDiscovererResult _tmp14_ = 0;
		_tmp13_ = info;
		_tmp14_ = gst_discoverer_info_get_result (_tmp13_);
		_tmp10_ = _tmp14_ == GST_DISCOVERER_URI_INVALID;
	}
	_tmp15_ = _tmp10_;
	if (_tmp15_) {
		GFile* _tmp16_ = NULL;
		GError* _tmp17_ = NULL;
		_tmp16_ = file;
		_tmp17_ = err;
		g_signal_emit_by_name (self, "error", _tmp16_, _tmp17_);
		_g_object_unref0 (file);
		return;
	} else {
		gboolean _tmp18_ = FALSE;
		gboolean _tmp19_ = FALSE;
		GstDiscovererInfo* _tmp20_ = NULL;
		GstDiscovererResult _tmp21_ = 0;
		gboolean _tmp24_ = FALSE;
		gboolean _tmp27_ = FALSE;
		_tmp20_ = info;
		_tmp21_ = gst_discoverer_info_get_result (_tmp20_);
		if (_tmp21_ == GST_DISCOVERER_TIMEOUT) {
			_tmp19_ = TRUE;
		} else {
			GstDiscovererInfo* _tmp22_ = NULL;
			GstDiscovererResult _tmp23_ = 0;
			_tmp22_ = info;
			_tmp23_ = gst_discoverer_info_get_result (_tmp22_);
			_tmp19_ = _tmp23_ == GST_DISCOVERER_BUSY;
		}
		_tmp24_ = _tmp19_;
		if (_tmp24_) {
			_tmp18_ = TRUE;
		} else {
			GstDiscovererInfo* _tmp25_ = NULL;
			GstDiscovererResult _tmp26_ = 0;
			_tmp25_ = info;
			_tmp26_ = gst_discoverer_info_get_result (_tmp25_);
			_tmp18_ = _tmp26_ == GST_DISCOVERER_MISSING_PLUGINS;
		}
		_tmp27_ = _tmp18_;
		if (_tmp27_) {
			GstDiscovererInfo* _tmp28_ = NULL;
			GstDiscovererResult _tmp29_ = 0;
			GFile* _tmp36_ = NULL;
			_tmp28_ = info;
			_tmp29_ = gst_discoverer_info_get_result (_tmp28_);
			if (_tmp29_ == GST_DISCOVERER_MISSING_PLUGINS) {
				GFile* _tmp30_ = NULL;
				gchar* _tmp31_ = NULL;
				gchar* _tmp32_ = NULL;
				_tmp30_ = file;
				_tmp31_ = g_file_get_uri (_tmp30_);
				_tmp32_ = _tmp31_;
				g_debug ("rygel-media-export-metadata-extractor.vala:114: Plugins are missing fo" \
"r extraction of file %s", _tmp32_);
				_g_free0 (_tmp32_);
			} else {
				GFile* _tmp33_ = NULL;
				gchar* _tmp34_ = NULL;
				gchar* _tmp35_ = NULL;
				_tmp33_ = file;
				_tmp34_ = g_file_get_uri (_tmp33_);
				_tmp35_ = _tmp34_;
				g_debug ("rygel-media-export-metadata-extractor.vala:117: Extraction timed out o" \
"n %s", _tmp35_);
				_g_free0 (_tmp35_);
			}
			_tmp36_ = file;
			rygel_media_export_metadata_extractor_extract_basic_information (self, _tmp36_, NULL, NULL);
			_g_object_unref0 (file);
			return;
		}
	}
	_tmp37_ = info;
	_tmp38_ = gupnp_dlna_gst_utils_information_from_discoverer_info (_tmp37_);
	dlna_info = _tmp38_;
	_tmp39_ = self->priv->guesser;
	_tmp40_ = dlna_info;
	_tmp41_ = gupnp_dlna_profile_guesser_guess_profile_from_info (_tmp39_, _tmp40_);
	_tmp42_ = _g_object_ref0 (_tmp41_);
	dlna = _tmp42_;
	_tmp43_ = file;
	_tmp44_ = info;
	_tmp45_ = dlna;
	rygel_media_export_metadata_extractor_extract_basic_information (self, _tmp43_, _tmp44_, _tmp45_);
	_g_object_unref0 (dlna);
	_g_object_unref0 (dlna_info);
	_g_object_unref0 (file);
}


static void rygel_media_export_metadata_extractor_extract_basic_information (RygelMediaExportMetadataExtractor* self, GFile* file, GstDiscovererInfo* info, GUPnPDLNAProfile* dlna) {
	GFileInfo* file_info = NULL;
	GFile* _tmp12_ = NULL;
	GstDiscovererInfo* _tmp13_ = NULL;
	GUPnPDLNAProfile* _tmp14_ = NULL;
	GFileInfo* _tmp15_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (file != NULL);
	{
		GFileInfo* _tmp0_ = NULL;
		GFile* _tmp1_ = NULL;
		GFileInfo* _tmp2_ = NULL;
		_tmp1_ = file;
		_tmp2_ = g_file_query_info (_tmp1_, G_FILE_ATTRIBUTE_STANDARD_CONTENT_TYPE "," G_FILE_ATTRIBUTE_STANDARD_SIZE "," G_FILE_ATTRIBUTE_TIME_MODIFIED "," G_FILE_ATTRIBUTE_STANDARD_DISPLAY_NAME, G_FILE_QUERY_INFO_NONE, NULL, &_inner_error_);
		_tmp0_ = _tmp2_;
		if (_inner_error_ != NULL) {
			goto __catch37_g_error;
		}
		_g_object_unref0 (file_info);
		file_info = _tmp0_;
	}
	goto __finally37;
	__catch37_g_error:
	{
		GError* _error_ = NULL;
		gchar* uri = NULL;
		GFile* _tmp3_ = NULL;
		gchar* _tmp4_ = NULL;
		const gchar* _tmp5_ = NULL;
		const gchar* _tmp6_ = NULL;
		const gchar* _tmp7_ = NULL;
		GError* _tmp8_ = NULL;
		const gchar* _tmp9_ = NULL;
		GFile* _tmp10_ = NULL;
		GError* _tmp11_ = NULL;
		_error_ = _inner_error_;
		_inner_error_ = NULL;
		_tmp3_ = file;
		_tmp4_ = g_file_get_uri (_tmp3_);
		uri = _tmp4_;
		_tmp5_ = _ ("Failed to query content type for '%s'");
		_tmp6_ = uri;
		g_warning (_tmp5_, _tmp6_);
		_tmp7_ = uri;
		_tmp8_ = _error_;
		_tmp9_ = _tmp8_->message;
		g_debug ("rygel-media-export-metadata-extractor.vala:147: Failed to extract basi" \
"c metadata from %s: %s", _tmp7_, _tmp9_);
		_tmp10_ = file;
		_tmp11_ = _error_;
		g_signal_emit_by_name (self, "error", _tmp10_, _tmp11_);
		_g_free0 (uri);
		_g_error_free0 (_error_);
		_g_object_unref0 (file_info);
		return;
	}
	__finally37:
	if (_inner_error_ != NULL) {
		_g_object_unref0 (file_info);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
	_tmp12_ = file;
	_tmp13_ = info;
	_tmp14_ = dlna;
	_tmp15_ = file_info;
	g_signal_emit_by_name (self, "extraction-done", _tmp12_, _tmp13_, _tmp14_, _tmp15_);
	_g_object_unref0 (file_info);
}


static void rygel_media_export_metadata_extractor_on_config_changed (RygelMediaExportMetadataExtractor* self, RygelConfiguration* config, const gchar* section, const gchar* key) {
	gboolean _tmp0_ = FALSE;
	const gchar* _tmp1_ = NULL;
	gboolean _tmp3_ = FALSE;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (config != NULL);
	g_return_if_fail (section != NULL);
	g_return_if_fail (key != NULL);
	_tmp1_ = section;
	if (g_strcmp0 (_tmp1_, RYGEL_MEDIA_EXPORT_PLUGIN_NAME) != 0) {
		_tmp0_ = TRUE;
	} else {
		const gchar* _tmp2_ = NULL;
		_tmp2_ = key;
		_tmp0_ = g_strcmp0 (_tmp2_, "extract-metadata") != 0;
	}
	_tmp3_ = _tmp0_;
	if (_tmp3_) {
		return;
	}
	{
		gboolean _tmp4_ = FALSE;
		RygelConfiguration* _tmp5_ = NULL;
		gboolean _tmp6_ = FALSE;
		_tmp5_ = config;
		_tmp6_ = rygel_configuration_get_bool (_tmp5_, RYGEL_MEDIA_EXPORT_PLUGIN_NAME, "extract-metadata", &_inner_error_);
		_tmp4_ = _tmp6_;
		if (_inner_error_ != NULL) {
			goto __catch38_g_error;
		}
		self->priv->extract_metadata = _tmp4_;
	}
	goto __finally38;
	__catch38_g_error:
	{
		GError* _error_ = NULL;
		_error_ = _inner_error_;
		_inner_error_ = NULL;
		self->priv->extract_metadata = TRUE;
		_g_error_free0 (_error_);
	}
	__finally38:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
}


static void g_cclosure_user_marshal_VOID__OBJECT_OBJECT_OBJECT_OBJECT (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) {
	typedef void (*GMarshalFunc_VOID__OBJECT_OBJECT_OBJECT_OBJECT) (gpointer data1, gpointer arg_1, gpointer arg_2, gpointer arg_3, gpointer arg_4, gpointer data2);
	register GMarshalFunc_VOID__OBJECT_OBJECT_OBJECT_OBJECT callback;
	register GCClosure * cc;
	register gpointer data1;
	register gpointer data2;
	cc = (GCClosure *) closure;
	g_return_if_fail (n_param_values == 5);
	if (G_CCLOSURE_SWAP_DATA (closure)) {
		data1 = closure->data;
		data2 = param_values->data[0].v_pointer;
	} else {
		data1 = param_values->data[0].v_pointer;
		data2 = closure->data;
	}
	callback = (GMarshalFunc_VOID__OBJECT_OBJECT_OBJECT_OBJECT) (marshal_data ? marshal_data : cc->callback);
	callback (data1, g_value_get_object (param_values + 1), g_value_get_object (param_values + 2), g_value_get_object (param_values + 3), g_value_get_object (param_values + 4), data2);
}


static void g_cclosure_user_marshal_VOID__OBJECT_POINTER (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) {
	typedef void (*GMarshalFunc_VOID__OBJECT_POINTER) (gpointer data1, gpointer arg_1, gpointer arg_2, gpointer data2);
	register GMarshalFunc_VOID__OBJECT_POINTER callback;
	register GCClosure * cc;
	register gpointer data1;
	register gpointer data2;
	cc = (GCClosure *) closure;
	g_return_if_fail (n_param_values == 3);
	if (G_CCLOSURE_SWAP_DATA (closure)) {
		data1 = closure->data;
		data2 = param_values->data[0].v_pointer;
	} else {
		data1 = param_values->data[0].v_pointer;
		data2 = closure->data;
	}
	callback = (GMarshalFunc_VOID__OBJECT_POINTER) (marshal_data ? marshal_data : cc->callback);
	callback (data1, g_value_get_object (param_values + 1), g_value_get_pointer (param_values + 2), data2);
}


static void rygel_media_export_metadata_extractor_class_init (RygelMediaExportMetadataExtractorClass * klass) {
	rygel_media_export_metadata_extractor_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (RygelMediaExportMetadataExtractorPrivate));
	G_OBJECT_CLASS (klass)->finalize = rygel_media_export_metadata_extractor_finalize;
	g_signal_new ("extraction_done", RYGEL_MEDIA_EXPORT_TYPE_METADATA_EXTRACTOR, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_VOID__OBJECT_OBJECT_OBJECT_OBJECT, G_TYPE_NONE, 4, G_TYPE_FILE, gst_discoverer_info_get_type (), gupnp_dlna_profile_get_type (), g_file_info_get_type ());
	/**
	     * Signalize that an error occured during metadata extraction
	     */
	g_signal_new ("error", RYGEL_MEDIA_EXPORT_TYPE_METADATA_EXTRACTOR, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_VOID__OBJECT_POINTER, G_TYPE_NONE, 2, G_TYPE_FILE, G_TYPE_POINTER);
}


static void rygel_media_export_metadata_extractor_instance_init (RygelMediaExportMetadataExtractor * self) {
	self->priv = RYGEL_MEDIA_EXPORT_METADATA_EXTRACTOR_GET_PRIVATE (self);
	self->priv->timeout = (guint) 10;
}


static void rygel_media_export_metadata_extractor_finalize (GObject* obj) {
	RygelMediaExportMetadataExtractor * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_MEDIA_EXPORT_TYPE_METADATA_EXTRACTOR, RygelMediaExportMetadataExtractor);
	_g_object_unref0 (self->priv->discoverer);
	_g_object_unref0 (self->priv->guesser);
	_g_object_unref0 (self->priv->file_hash);
	G_OBJECT_CLASS (rygel_media_export_metadata_extractor_parent_class)->finalize (obj);
}


/**
 * Metadata extractor based on Gstreamer. Just set the URI of the media on the
 * uri property, it will extact the metadata for you and emit signal
 * metadata_available for each key/value pair extracted.
 */
GType rygel_media_export_metadata_extractor_get_type (void) {
	static volatile gsize rygel_media_export_metadata_extractor_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_media_export_metadata_extractor_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelMediaExportMetadataExtractorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_media_export_metadata_extractor_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelMediaExportMetadataExtractor), 0, (GInstanceInitFunc) rygel_media_export_metadata_extractor_instance_init, NULL };
		GType rygel_media_export_metadata_extractor_type_id;
		rygel_media_export_metadata_extractor_type_id = g_type_register_static (G_TYPE_OBJECT, "RygelMediaExportMetadataExtractor", &g_define_type_info, 0);
		g_once_init_leave (&rygel_media_export_metadata_extractor_type_id__volatile, rygel_media_export_metadata_extractor_type_id);
	}
	return rygel_media_export_metadata_extractor_type_id__volatile;
}



