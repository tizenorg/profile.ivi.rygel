/* rygel-description-file.c generated by valac 0.18.0, the Vala compiler
 * generated from rygel-description-file.vala, do not modify */

/*
 * Copyright (C) 2011 Jens Georg
 *
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
#include <libgupnp/gupnp.h>
#include <stdlib.h>
#include <string.h>
#include <libxml/tree.h>
#include <gee.h>
#include <libxml/parser.h>
#include <libxml/xpath.h>
#include <stdio.h>
#include <glib/gi18n-lib.h>
#include <gio/gio.h>


#define RYGEL_TYPE_DESCRIPTION_FILE (rygel_description_file_get_type ())
#define RYGEL_DESCRIPTION_FILE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_DESCRIPTION_FILE, RygelDescriptionFile))
#define RYGEL_DESCRIPTION_FILE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_DESCRIPTION_FILE, RygelDescriptionFileClass))
#define RYGEL_IS_DESCRIPTION_FILE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_DESCRIPTION_FILE))
#define RYGEL_IS_DESCRIPTION_FILE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_DESCRIPTION_FILE))
#define RYGEL_DESCRIPTION_FILE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_DESCRIPTION_FILE, RygelDescriptionFileClass))

typedef struct _RygelDescriptionFile RygelDescriptionFile;
typedef struct _RygelDescriptionFileClass RygelDescriptionFileClass;
typedef struct _RygelDescriptionFilePrivate RygelDescriptionFilePrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define RYGEL_TYPE_PLUGIN_CAPABILITIES (rygel_plugin_capabilities_get_type ())

#define RYGEL_TYPE_META_CONFIG (rygel_meta_config_get_type ())
#define RYGEL_META_CONFIG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_META_CONFIG, RygelMetaConfig))
#define RYGEL_META_CONFIG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_META_CONFIG, RygelMetaConfigClass))
#define RYGEL_IS_META_CONFIG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_META_CONFIG))
#define RYGEL_IS_META_CONFIG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_META_CONFIG))
#define RYGEL_META_CONFIG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_META_CONFIG, RygelMetaConfigClass))

typedef struct _RygelMetaConfig RygelMetaConfig;
typedef struct _RygelMetaConfigClass RygelMetaConfigClass;

#define RYGEL_TYPE_CONFIGURATION (rygel_configuration_get_type ())
#define RYGEL_CONFIGURATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_CONFIGURATION, RygelConfiguration))
#define RYGEL_IS_CONFIGURATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_CONFIGURATION))
#define RYGEL_CONFIGURATION_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), RYGEL_TYPE_CONFIGURATION, RygelConfigurationIface))

typedef struct _RygelConfiguration RygelConfiguration;
typedef struct _RygelConfigurationIface RygelConfigurationIface;
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _xmlXPathFreeContext0(var) ((var == NULL) ? NULL : (var = (xmlXPathFreeContext (var), NULL)))
#define _fclose0(var) ((var == NULL) ? NULL : (var = (fclose (var), NULL)))
#define _g_regex_unref0(var) ((var == NULL) ? NULL : (var = (g_regex_unref (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _RygelDescriptionFile {
	GObject parent_instance;
	RygelDescriptionFilePrivate * priv;
};

struct _RygelDescriptionFileClass {
	GObjectClass parent_class;
};

struct _RygelDescriptionFilePrivate {
	GUPnPXMLDoc* doc;
};

typedef enum  {
	RYGEL_PLUGIN_CAPABILITIES_NONE = 0,
	RYGEL_PLUGIN_CAPABILITIES_IMAGE_UPLOAD = 1 << 0,
	RYGEL_PLUGIN_CAPABILITIES_VIDEO_UPLOAD = 1 << 1,
	RYGEL_PLUGIN_CAPABILITIES_AUDIO_UPLOAD = 1 << 2,
	RYGEL_PLUGIN_CAPABILITIES_UPLOAD = (RYGEL_PLUGIN_CAPABILITIES_IMAGE_UPLOAD | RYGEL_PLUGIN_CAPABILITIES_VIDEO_UPLOAD) | RYGEL_PLUGIN_CAPABILITIES_AUDIO_UPLOAD,
	RYGEL_PLUGIN_CAPABILITIES_TRACK_CHANGES = 1 << 3,
	RYGEL_PLUGIN_CAPABILITIES_CREATE_CONTAINERS = 1 << 4
} RygelPluginCapabilities;

struct _RygelConfigurationIface {
	GTypeInterface parent_iface;
	gboolean (*get_upnp_enabled) (RygelConfiguration* self, GError** error);
	gchar* (*get_interface) (RygelConfiguration* self, GError** error);
	gchar** (*get_interfaces) (RygelConfiguration* self, GError** error);
	gint (*get_port) (RygelConfiguration* self, GError** error);
	gboolean (*get_transcoding) (RygelConfiguration* self, GError** error);
	gboolean (*get_allow_upload) (RygelConfiguration* self, GError** error);
	gboolean (*get_allow_deletion) (RygelConfiguration* self, GError** error);
	gchar* (*get_log_levels) (RygelConfiguration* self, GError** error);
	gchar* (*get_plugin_path) (RygelConfiguration* self, GError** error);
	gchar* (*get_engine_path) (RygelConfiguration* self, GError** error);
	gchar* (*get_media_engine) (RygelConfiguration* self, GError** error);
	gchar* (*get_video_upload_folder) (RygelConfiguration* self, GError** error);
	gchar* (*get_music_upload_folder) (RygelConfiguration* self, GError** error);
	gchar* (*get_picture_upload_folder) (RygelConfiguration* self, GError** error);
	gboolean (*get_enabled) (RygelConfiguration* self, const gchar* section, GError** error);
	gchar* (*get_title) (RygelConfiguration* self, const gchar* section, GError** error);
	gchar* (*get_string) (RygelConfiguration* self, const gchar* section, const gchar* key, GError** error);
	GeeArrayList* (*get_string_list) (RygelConfiguration* self, const gchar* section, const gchar* key, GError** error);
	gint (*get_int) (RygelConfiguration* self, const gchar* section, const gchar* key, gint min, gint max, GError** error);
	GeeArrayList* (*get_int_list) (RygelConfiguration* self, const gchar* section, const gchar* key, GError** error);
	gboolean (*get_bool) (RygelConfiguration* self, const gchar* section, const gchar* key, GError** error);
};


static gpointer rygel_description_file_parent_class = NULL;

GType rygel_description_file_get_type (void) G_GNUC_CONST;
#define RYGEL_DESCRIPTION_FILE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_DESCRIPTION_FILE, RygelDescriptionFilePrivate))
enum  {
	RYGEL_DESCRIPTION_FILE_DUMMY_PROPERTY
};
#define RYGEL_DESCRIPTION_FILE_SERVICE_TYPE_TEMPLATE "//*[.='%s']"
RygelDescriptionFile* rygel_description_file_new (const gchar* template_file, GError** error);
RygelDescriptionFile* rygel_description_file_construct (GType object_type, const gchar* template_file, GError** error);
RygelDescriptionFile* rygel_description_file_new_from_xml_document (GUPnPXMLDoc* doc);
RygelDescriptionFile* rygel_description_file_construct_from_xml_document (GType object_type, GUPnPXMLDoc* doc);
void rygel_description_file_set_device_type (RygelDescriptionFile* self, const gchar* device_type);
static void rygel_description_file_set_device_element (RygelDescriptionFile* self, const gchar* element, const gchar* new_value);
void rygel_description_file_set_model_name (RygelDescriptionFile* self, const gchar* model_name);
void rygel_description_file_set_model_number (RygelDescriptionFile* self, const gchar* model_number);
void rygel_description_file_set_friendly_name (RygelDescriptionFile* self, const gchar* friendly_name);
gchar* rygel_description_file_get_friendly_name (RygelDescriptionFile* self);
xmlNode* rygel_xml_utils_get_element (xmlNode* node, ...);
GType rygel_plugin_capabilities_get_type (void) G_GNUC_CONST;
void rygel_description_file_set_dlna_caps (RygelDescriptionFile* self, RygelPluginCapabilities capabilities);
GType rygel_meta_config_get_type (void) G_GNUC_CONST;
RygelMetaConfig* rygel_meta_config_get_default (void);
GType rygel_configuration_get_type (void) G_GNUC_CONST;
gboolean rygel_configuration_get_allow_upload (RygelConfiguration* self, GError** error);
gboolean rygel_configuration_get_allow_deletion (RygelConfiguration* self, GError** error);
static void _vala_array_add1 (gchar*** array, int* length, int* size, gchar* value);
static void _vala_array_add2 (gchar*** array, int* length, int* size, gchar* value);
static void _vala_array_add3 (gchar*** array, int* length, int* size, gchar* value);
static void _vala_array_add4 (gchar*** array, int* length, int* size, gchar* value);
static void _vala_array_add5 (gchar*** array, int* length, int* size, gchar* value);
static void _vala_array_add6 (gchar*** array, int* length, int* size, gchar* value);
static void _vala_array_add7 (gchar*** array, int* length, int* size, gchar* value);
void rygel_description_file_modify_service_type (RygelDescriptionFile* self, const gchar* old_type, const gchar* new_type);
void rygel_description_file_save (RygelDescriptionFile* self, const gchar* path, GError** error);
static void rygel_description_file_finalize (GObject* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


/**
     * Constructor to load a description file from disk
     *
     * @param template_file the path to the description file.
     * @throws GUPnP.XMLError.PARSE if there was an error reading or parsing
     * the file.
     */
RygelDescriptionFile* rygel_description_file_construct (GType object_type, const gchar* template_file, GError** error) {
	RygelDescriptionFile * self = NULL;
	const gchar* _tmp0_;
	GUPnPXMLDoc* _tmp1_;
	GUPnPXMLDoc* _tmp2_;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (template_file != NULL, NULL);
	self = (RygelDescriptionFile*) g_object_new (object_type, NULL);
	_tmp0_ = template_file;
	_tmp1_ = gupnp_xml_doc_new_from_path (_tmp0_, &_inner_error_);
	_tmp2_ = _tmp1_;
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		_g_object_unref0 (self);
		return NULL;
	}
	_g_object_unref0 (self->priv->doc);
	self->priv->doc = _tmp2_;
	return self;
}


RygelDescriptionFile* rygel_description_file_new (const gchar* template_file, GError** error) {
	return rygel_description_file_construct (RYGEL_TYPE_DESCRIPTION_FILE, template_file, error);
}


/**
     * Constructor which wraps an existing GUPnP.XMLDoc as a description file.
     *
     * @param doc is the GUPnP.XMLDoc to wrap.
     */
static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


RygelDescriptionFile* rygel_description_file_construct_from_xml_document (GType object_type, GUPnPXMLDoc* doc) {
	RygelDescriptionFile * self = NULL;
	GUPnPXMLDoc* _tmp0_;
	GUPnPXMLDoc* _tmp1_;
	g_return_val_if_fail (doc != NULL, NULL);
	self = (RygelDescriptionFile*) g_object_new (object_type, NULL);
	_tmp0_ = doc;
	_tmp1_ = _g_object_ref0 (_tmp0_);
	_g_object_unref0 (self->priv->doc);
	self->priv->doc = _tmp1_;
	return self;
}


RygelDescriptionFile* rygel_description_file_new_from_xml_document (GUPnPXMLDoc* doc) {
	return rygel_description_file_construct_from_xml_document (RYGEL_TYPE_DESCRIPTION_FILE, doc);
}


/**
     * Change the type of a service.
     *
     * Usually used to modify the device version, e.g. default device type is
     * "MediaServer:2" and device_type = "MediaServer:1".
     *
     * @param device_type is the current content of serviceType.
     */
void rygel_description_file_set_device_type (RygelDescriptionFile* self, const gchar* device_type) {
	const gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (device_type != NULL);
	_tmp0_ = device_type;
	rygel_description_file_set_device_element (self, "deviceType", _tmp0_);
}


/**
     * Modify the model name.
     *
     * Usually the name of the software implementing this device.
     *
     * @param model_name is the new model name.
     */
void rygel_description_file_set_model_name (RygelDescriptionFile* self, const gchar* model_name) {
	const gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (model_name != NULL);
	_tmp0_ = model_name;
	rygel_description_file_set_device_element (self, "modelName", _tmp0_);
}


/**
     * Modify the model number.
     *
     * Usually the version of the software implementing this device.
     *
     * @param model_number is the new model number.
     */
void rygel_description_file_set_model_number (RygelDescriptionFile* self, const gchar* model_number) {
	const gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (model_number != NULL);
	_tmp0_ = model_number;
	rygel_description_file_set_device_element (self, "modelNumber", _tmp0_);
}


/**
     * Set the friendly name of the device.
     *
     * The friendly name is the one usually presented to the user in control
     * points or DMPs
     *
     * @param friendly_name is the new friendly name of the device.
     */
void rygel_description_file_set_friendly_name (RygelDescriptionFile* self, const gchar* friendly_name) {
	const gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (friendly_name != NULL);
	_tmp0_ = friendly_name;
	rygel_description_file_set_device_element (self, "friendlyName", _tmp0_);
}


/**
     * Get the current friendly name of the device.
     *
     * @return The currenly set friendly name.
     */
gchar* rygel_description_file_get_friendly_name (RygelDescriptionFile* self) {
	gchar* result = NULL;
	GUPnPXMLDoc* _tmp0_;
	xmlDoc* _tmp1_;
	xmlNode* _tmp2_ = NULL;
	xmlNode* element;
	gchar* _tmp3_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->doc;
	_tmp1_ = _tmp0_->doc;
	_tmp2_ = rygel_xml_utils_get_element ((xmlNode*) _tmp1_, "root", "device", "friendlyName", NULL);
	element = _tmp2_;
	_vala_assert (element != NULL, "element != null");
	_tmp3_ = xmlNodeGetContent (element);
	result = _tmp3_;
	return result;
}


/**
     * Set the DLNA caps of this root device and while taking the
     * capabilities of the plugin into account.
     *
     * @param capabilities RygelPluginCapabilities flags
     */
static void _vala_array_add1 (gchar*** array, int* length, int* size, gchar* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (gchar*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}


static void _vala_array_add2 (gchar*** array, int* length, int* size, gchar* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (gchar*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}


static void _vala_array_add3 (gchar*** array, int* length, int* size, gchar* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (gchar*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}


static void _vala_array_add4 (gchar*** array, int* length, int* size, gchar* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (gchar*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}


static void _vala_array_add5 (gchar*** array, int* length, int* size, gchar* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (gchar*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}


static void _vala_array_add6 (gchar*** array, int* length, int* size, gchar* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (gchar*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}


static void _vala_array_add7 (gchar*** array, int* length, int* size, gchar* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (gchar*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}


void rygel_description_file_set_dlna_caps (RygelDescriptionFile* self, RygelPluginCapabilities capabilities) {
	gchar** _tmp0_ = NULL;
	gchar** flags;
	gint flags_length1;
	gint _flags_size_;
	gchar* _tmp1_;
	gchar* content;
	RygelPluginCapabilities _tmp2_;
	RygelPluginCapabilities _tmp23_;
	gboolean _tmp28_ = FALSE;
	RygelPluginCapabilities _tmp29_;
	gboolean _tmp31_;
	gchar** _tmp34_;
	gint _tmp34__length1;
	const gchar* _tmp37_;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_new0 (gchar*, 0 + 1);
	flags = _tmp0_;
	flags_length1 = 0;
	_flags_size_ = flags_length1;
	_tmp1_ = g_strdup ("");
	content = _tmp1_;
	_tmp2_ = capabilities;
	if ((RYGEL_PLUGIN_CAPABILITIES_UPLOAD & _tmp2_) != 0) {
		gboolean allow_upload;
		gboolean allow_delete;
		gboolean _tmp10_;
		gboolean _tmp20_;
		allow_upload = TRUE;
		allow_delete = FALSE;
		{
			RygelMetaConfig* _tmp3_ = NULL;
			RygelMetaConfig* config;
			RygelMetaConfig* _tmp4_;
			gboolean _tmp5_ = FALSE;
			gboolean _tmp6_;
			RygelMetaConfig* _tmp7_;
			gboolean _tmp8_ = FALSE;
			gboolean _tmp9_;
			_tmp3_ = rygel_meta_config_get_default ();
			config = _tmp3_;
			_tmp4_ = config;
			_tmp5_ = rygel_configuration_get_allow_upload ((RygelConfiguration*) _tmp4_, &_inner_error_);
			_tmp6_ = _tmp5_;
			if (_inner_error_ != NULL) {
				_g_object_unref0 (config);
				goto __catch0_g_error;
			}
			allow_upload = _tmp6_;
			_tmp7_ = config;
			_tmp8_ = rygel_configuration_get_allow_deletion ((RygelConfiguration*) _tmp7_, &_inner_error_);
			_tmp9_ = _tmp8_;
			if (_inner_error_ != NULL) {
				_g_object_unref0 (config);
				goto __catch0_g_error;
			}
			allow_delete = _tmp9_;
			_g_object_unref0 (config);
		}
		goto __finally0;
		__catch0_g_error:
		{
			GError* _error_ = NULL;
			_error_ = _inner_error_;
			_inner_error_ = NULL;
			_g_error_free0 (_error_);
		}
		__finally0:
		if (_inner_error_ != NULL) {
			_g_free0 (content);
			flags = (_vala_array_free (flags, flags_length1, (GDestroyNotify) g_free), NULL);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
		_tmp10_ = allow_upload;
		if (_tmp10_) {
			RygelPluginCapabilities _tmp11_;
			RygelPluginCapabilities _tmp14_;
			RygelPluginCapabilities _tmp17_;
			_tmp11_ = capabilities;
			if ((_tmp11_ & RYGEL_PLUGIN_CAPABILITIES_IMAGE_UPLOAD) == RYGEL_PLUGIN_CAPABILITIES_IMAGE_UPLOAD) {
				gchar** _tmp12_;
				gint _tmp12__length1;
				gchar* _tmp13_;
				_tmp12_ = flags;
				_tmp12__length1 = flags_length1;
				_tmp13_ = g_strdup ("image-upload");
				_vala_array_add1 (&flags, &flags_length1, &_flags_size_, _tmp13_);
			}
			_tmp14_ = capabilities;
			if ((_tmp14_ & RYGEL_PLUGIN_CAPABILITIES_VIDEO_UPLOAD) == RYGEL_PLUGIN_CAPABILITIES_VIDEO_UPLOAD) {
				gchar** _tmp15_;
				gint _tmp15__length1;
				gchar* _tmp16_;
				_tmp15_ = flags;
				_tmp15__length1 = flags_length1;
				_tmp16_ = g_strdup ("av-upload");
				_vala_array_add2 (&flags, &flags_length1, &_flags_size_, _tmp16_);
			}
			_tmp17_ = capabilities;
			if ((_tmp17_ & RYGEL_PLUGIN_CAPABILITIES_AUDIO_UPLOAD) == RYGEL_PLUGIN_CAPABILITIES_AUDIO_UPLOAD) {
				gchar** _tmp18_;
				gint _tmp18__length1;
				gchar* _tmp19_;
				_tmp18_ = flags;
				_tmp18__length1 = flags_length1;
				_tmp19_ = g_strdup ("audio-upload");
				_vala_array_add3 (&flags, &flags_length1, &_flags_size_, _tmp19_);
			}
		}
		_tmp20_ = allow_delete;
		if (_tmp20_) {
			gchar** _tmp21_;
			gint _tmp21__length1;
			gchar* _tmp22_;
			_tmp21_ = flags;
			_tmp21__length1 = flags_length1;
			_tmp22_ = g_strdup ("create-item-with-OCM-destroy-item");
			_vala_array_add4 (&flags, &flags_length1, &_flags_size_, _tmp22_);
		}
	}
	_tmp23_ = capabilities;
	if ((_tmp23_ & RYGEL_PLUGIN_CAPABILITIES_TRACK_CHANGES) == RYGEL_PLUGIN_CAPABILITIES_TRACK_CHANGES) {
		gchar** _tmp24_;
		gint _tmp24__length1;
		gchar* _tmp25_;
		gchar** _tmp26_;
		gint _tmp26__length1;
		gchar* _tmp27_;
		_tmp24_ = flags;
		_tmp24__length1 = flags_length1;
		_tmp25_ = g_strdup ("content-synchronization");
		_vala_array_add5 (&flags, &flags_length1, &_flags_size_, _tmp25_);
		_tmp26_ = flags;
		_tmp26__length1 = flags_length1;
		_tmp27_ = g_strdup ("create-child-container");
		_vala_array_add6 (&flags, &flags_length1, &_flags_size_, _tmp27_);
	}
	_tmp29_ = capabilities;
	if ((_tmp29_ & RYGEL_PLUGIN_CAPABILITIES_CREATE_CONTAINERS) == RYGEL_PLUGIN_CAPABILITIES_CREATE_CONTAINERS) {
		RygelPluginCapabilities _tmp30_;
		_tmp30_ = capabilities;
		_tmp28_ = !((_tmp30_ & RYGEL_PLUGIN_CAPABILITIES_TRACK_CHANGES) == RYGEL_PLUGIN_CAPABILITIES_TRACK_CHANGES);
	} else {
		_tmp28_ = FALSE;
	}
	_tmp31_ = _tmp28_;
	if (_tmp31_) {
		gchar** _tmp32_;
		gint _tmp32__length1;
		gchar* _tmp33_;
		_tmp32_ = flags;
		_tmp32__length1 = flags_length1;
		_tmp33_ = g_strdup ("create-child-container");
		_vala_array_add7 (&flags, &flags_length1, &_flags_size_, _tmp33_);
	}
	_tmp34_ = flags;
	_tmp34__length1 = flags_length1;
	if (_tmp34__length1 > 0) {
		gchar** _tmp35_;
		gint _tmp35__length1;
		gchar* _tmp36_ = NULL;
		_tmp35_ = flags;
		_tmp35__length1 = flags_length1;
		_tmp36_ = g_strjoinv (",", _tmp35_);
		_g_free0 (content);
		content = _tmp36_;
	}
	_tmp37_ = content;
	rygel_description_file_set_device_element (self, "X_DLNACAP", _tmp37_);
	_g_free0 (content);
	flags = (_vala_array_free (flags, flags_length1, (GDestroyNotify) g_free), NULL);
}


/**
     * Change the type of a service.
     *
     * Usually used to modify the service version, e.g. old_type =
     * "ContentDirectory:2" and new_type = "ContentDirectory:1".
     *
     * @param old_type is the current content of serviceType.
     * @param new_type is the content serviceType will be set to.
     */
void rygel_description_file_modify_service_type (RygelDescriptionFile* self, const gchar* old_type, const gchar* new_type) {
	GUPnPXMLDoc* _tmp0_;
	xmlDoc* _tmp1_;
	xmlXPathContext* _tmp2_;
	xmlXPathContext* context;
	const gchar* _tmp3_;
	gchar* _tmp4_ = NULL;
	gchar* xpath;
	xmlXPathObject* _tmp5_ = NULL;
	xmlXPathObject* xpath_object;
	xmlXPathObjectType _tmp6_;
	xmlNodeSet* _tmp7_;
	gboolean _tmp8_ = FALSE;
	xmlNodeSet* _tmp9_;
	xmlNode* _tmp10_ = NULL;
	const gchar* _tmp11_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (old_type != NULL);
	g_return_if_fail (new_type != NULL);
	_tmp0_ = self->priv->doc;
	_tmp1_ = _tmp0_->doc;
	_tmp2_ = xmlXPathNewContext (_tmp1_);
	context = _tmp2_;
	_tmp3_ = old_type;
	_tmp4_ = g_strdup_printf (RYGEL_DESCRIPTION_FILE_SERVICE_TYPE_TEMPLATE, _tmp3_);
	xpath = _tmp4_;
	_tmp5_ = xmlXPathEvalExpression (xpath, context);
	xpath_object = _tmp5_;
	_vala_assert (xpath_object != NULL, "xpath_object != null");
	_tmp6_ = xpath_object->type;
	_vala_assert (_tmp6_ == XPATH_NODESET, "xpath_object->type == XPath.ObjectType.NODESET");
	_tmp7_ = xpath_object->nodesetval;
	_tmp8_ = xmlXPathNodeSetIsEmpty (_tmp7_);
	_vala_assert (!_tmp8_, "!xpath_object->nodesetval->is_empty ()");
	_tmp9_ = xpath_object->nodesetval;
	_tmp10_ = xmlXPathNodeSetItem (_tmp9_, 0);
	_tmp11_ = new_type;
	xmlNodeSetContent (_tmp10_, _tmp11_);
	xmlXPathFreeObject (xpath_object);
	_g_free0 (xpath);
	_xmlXPathFreeContext0 (context);
}


/**
     * Writes the current document to a file.
     *
     * It makes sure that the resulting file has the correct UTF-8 encoding
     * and does not have any kind of newlines. This is necessary as some
     * devices with broken XML parsers can't cope with UNIX newlines.
     * If a file with the same name exists it will be overwritten.
     *
     * @param path is a path to a file.
     * @throws GLib.Error if anything fails while creating the XML dump.
     */
static gchar* string_replace (const gchar* self, const gchar* old, const gchar* replacement) {
	gchar* result = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (old != NULL, NULL);
	g_return_val_if_fail (replacement != NULL, NULL);
	{
		const gchar* _tmp0_;
		gchar* _tmp1_ = NULL;
		gchar* _tmp2_;
		GRegex* _tmp3_;
		GRegex* _tmp4_;
		GRegex* regex;
		GRegex* _tmp5_;
		const gchar* _tmp6_;
		gchar* _tmp7_ = NULL;
		gchar* _tmp8_;
		_tmp0_ = old;
		_tmp1_ = g_regex_escape_string (_tmp0_, -1);
		_tmp2_ = _tmp1_;
		_tmp3_ = g_regex_new (_tmp2_, 0, 0, &_inner_error_);
		_tmp4_ = _tmp3_;
		_g_free0 (_tmp2_);
		regex = _tmp4_;
		if (_inner_error_ != NULL) {
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch1_g_regex_error;
			}
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		_tmp5_ = regex;
		_tmp6_ = replacement;
		_tmp7_ = g_regex_replace_literal (_tmp5_, self, (gssize) (-1), 0, _tmp6_, 0, &_inner_error_);
		_tmp8_ = _tmp7_;
		if (_inner_error_ != NULL) {
			_g_regex_unref0 (regex);
			if (_inner_error_->domain == G_REGEX_ERROR) {
				goto __catch1_g_regex_error;
			}
			_g_regex_unref0 (regex);
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
		result = _tmp8_;
		_g_regex_unref0 (regex);
		return result;
	}
	goto __finally1;
	__catch1_g_regex_error:
	{
		GError* e = NULL;
		e = _inner_error_;
		_inner_error_ = NULL;
		g_assert_not_reached ();
		_g_error_free0 (e);
	}
	__finally1:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
}


void rygel_description_file_save (RygelDescriptionFile* self, const gchar* path, GError** error) {
	const gchar* _tmp0_;
	FILE* _tmp1_ = NULL;
	FILE* file;
	const gchar* _tmp2_ = NULL;
	gchar* _tmp3_;
	gchar* message;
	FILE* _tmp4_;
	gboolean _tmp5_ = FALSE;
	gchar* mem;
	gint len;
	GUPnPXMLDoc* _tmp9_;
	xmlDoc* _tmp10_;
	gchar* _tmp11_ = NULL;
	gint _tmp12_ = 0;
	gint _tmp13_;
	gboolean _tmp14_ = FALSE;
	FILE* _tmp18_;
	const gchar* _tmp19_;
	gchar* _tmp20_ = NULL;
	gchar* _tmp21_;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (path != NULL);
	_tmp0_ = path;
	_tmp1_ = fopen (_tmp0_, "w+");
	file = _tmp1_;
	_tmp2_ = _ ("Failed to write modified description to %s");
	_tmp3_ = g_strdup (_tmp2_);
	message = _tmp3_;
	_tmp4_ = file;
	_tmp5_ = G_UNLIKELY (_tmp4_ == NULL);
	if (_tmp5_) {
		const gchar* _tmp6_;
		const gchar* _tmp7_;
		GError* _tmp8_;
		_tmp6_ = message;
		_tmp7_ = path;
		_tmp8_ = g_error_new (G_IO_ERROR, G_IO_ERROR_FAILED, _tmp6_, _tmp7_);
		_inner_error_ = _tmp8_;
		g_propagate_error (error, _inner_error_);
		_g_free0 (message);
		_fclose0 (file);
		return;
	}
	mem = NULL;
	len = -1;
	_tmp9_ = self->priv->doc;
	_tmp10_ = _tmp9_->doc;
	xmlDocDumpMemoryEnc (_tmp10_, &_tmp11_, &_tmp12_, "UTF-8");
	_g_free0 (mem);
	mem = _tmp11_;
	len = _tmp12_;
	_tmp13_ = len;
	_tmp14_ = G_UNLIKELY (_tmp13_ <= 0);
	if (_tmp14_) {
		const gchar* _tmp15_;
		const gchar* _tmp16_;
		GError* _tmp17_;
		_tmp15_ = message;
		_tmp16_ = path;
		_tmp17_ = g_error_new (G_IO_ERROR, G_IO_ERROR_FAILED, _tmp15_, _tmp16_);
		_inner_error_ = _tmp17_;
		g_propagate_error (error, _inner_error_);
		_g_free0 (mem);
		_g_free0 (message);
		_fclose0 (file);
		return;
	}
	_tmp18_ = file;
	_tmp19_ = mem;
	_tmp20_ = string_replace (_tmp19_, "\n", "");
	_tmp21_ = _tmp20_;
	fputs (_tmp21_, _tmp18_);
	_g_free0 (_tmp21_);
	_g_free0 (mem);
	_g_free0 (message);
	_fclose0 (file);
}


/**
     * Internal helper function to set an element to a new value.
     *
     * @param element below /root/device to be set.
     * @param new_vale is the new content of that element.
     */
static void rygel_description_file_set_device_element (RygelDescriptionFile* self, const gchar* element, const gchar* new_value) {
	GUPnPXMLDoc* _tmp0_;
	xmlDoc* _tmp1_;
	const gchar* _tmp2_;
	xmlNode* _tmp3_ = NULL;
	xmlNode* xml_element;
	const gchar* _tmp4_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (element != NULL);
	g_return_if_fail (new_value != NULL);
	_tmp0_ = self->priv->doc;
	_tmp1_ = _tmp0_->doc;
	_tmp2_ = element;
	_tmp3_ = rygel_xml_utils_get_element ((xmlNode*) _tmp1_, "root", "device", _tmp2_, NULL);
	xml_element = _tmp3_;
	_tmp4_ = element;
	if (_tmp4_ != NULL) {
		xmlNode* _tmp5_;
		const gchar* _tmp6_;
		_tmp5_ = xml_element;
		_tmp6_ = new_value;
		xmlNodeSetContent (_tmp5_, _tmp6_);
	}
}


static void rygel_description_file_class_init (RygelDescriptionFileClass * klass) {
	rygel_description_file_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (RygelDescriptionFilePrivate));
	G_OBJECT_CLASS (klass)->finalize = rygel_description_file_finalize;
}


static void rygel_description_file_instance_init (RygelDescriptionFile * self) {
	self->priv = RYGEL_DESCRIPTION_FILE_GET_PRIVATE (self);
}


static void rygel_description_file_finalize (GObject* obj) {
	RygelDescriptionFile * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_DESCRIPTION_FILE, RygelDescriptionFile);
	_g_object_unref0 (self->priv->doc);
	G_OBJECT_CLASS (rygel_description_file_parent_class)->finalize (obj);
}


/**
 * Represents a device description document and offers methods for easy
 * manipulation of those.
 */
GType rygel_description_file_get_type (void) {
	static volatile gsize rygel_description_file_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_description_file_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelDescriptionFileClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_description_file_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelDescriptionFile), 0, (GInstanceInitFunc) rygel_description_file_instance_init, NULL };
		GType rygel_description_file_type_id;
		rygel_description_file_type_id = g_type_register_static (G_TYPE_OBJECT, "RygelDescriptionFile", &g_define_type_info, 0);
		g_once_init_leave (&rygel_description_file_type_id__volatile, rygel_description_file_type_id);
	}
	return rygel_description_file_type_id__volatile;
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}



