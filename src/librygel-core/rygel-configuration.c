/* rygel-configuration.c generated by valac 0.18.0, the Vala compiler
 * generated from rygel-configuration.vala, do not modify */

/*
 * Copyright (C) 2008,2009 Nokia Corporation.
 * Copyright (C) 2008,2009 Zeeshan Ali (Khattak) <zeeshanak@gnome.org>.
 * Copyright (C) 2012 Intel Corporation.
 *
 * Author: Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
 *                               <zeeshan.ali@nokia.com>
 *         Krzesimir Nowak <krnowak@openismus.com>
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
#include <stdlib.h>
#include <string.h>
#include <gee.h>


#define RYGEL_TYPE_CONFIGURATION_ENTRY (rygel_configuration_entry_get_type ())

#define RYGEL_TYPE_SECTION_ENTRY (rygel_section_entry_get_type ())

#define RYGEL_TYPE_CONFIGURATION (rygel_configuration_get_type ())
#define RYGEL_CONFIGURATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_CONFIGURATION, RygelConfiguration))
#define RYGEL_IS_CONFIGURATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_CONFIGURATION))
#define RYGEL_CONFIGURATION_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), RYGEL_TYPE_CONFIGURATION, RygelConfigurationIface))

typedef struct _RygelConfiguration RygelConfiguration;
typedef struct _RygelConfigurationIface RygelConfigurationIface;

typedef enum  {
	RYGEL_CONFIGURATION_ERROR_NO_VALUE_SET,
	RYGEL_CONFIGURATION_ERROR_VALUE_OUT_OF_RANGE
} RygelConfigurationError;
#define RYGEL_CONFIGURATION_ERROR rygel_configuration_error_quark ()
typedef enum  {
	RYGEL_CONFIGURATION_ENTRY_UPNP_ENABLED,
	RYGEL_CONFIGURATION_ENTRY_INTERFACE,
	RYGEL_CONFIGURATION_ENTRY_PORT,
	RYGEL_CONFIGURATION_ENTRY_TRANSCODING,
	RYGEL_CONFIGURATION_ENTRY_ALLOW_UPLOAD,
	RYGEL_CONFIGURATION_ENTRY_ALLOW_DELETION,
	RYGEL_CONFIGURATION_ENTRY_LOG_LEVELS,
	RYGEL_CONFIGURATION_ENTRY_PLUGIN_PATH,
	RYGEL_CONFIGURATION_ENTRY_VIDEO_UPLOAD_FOLDER,
	RYGEL_CONFIGURATION_ENTRY_MUSIC_UPLOAD_FOLDER,
	RYGEL_CONFIGURATION_ENTRY_PICTURE_UPLOAD_FOLDER
} RygelConfigurationEntry;

typedef enum  {
	RYGEL_SECTION_ENTRY_TITLE,
	RYGEL_SECTION_ENTRY_ENABLED
} RygelSectionEntry;

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



GQuark rygel_configuration_error_quark (void);
GType rygel_configuration_entry_get_type (void) G_GNUC_CONST;
GType rygel_section_entry_get_type (void) G_GNUC_CONST;
GType rygel_configuration_get_type (void) G_GNUC_CONST;
gboolean rygel_configuration_get_upnp_enabled (RygelConfiguration* self, GError** error);
gchar* rygel_configuration_get_interface (RygelConfiguration* self, GError** error) G_GNUC_DEPRECATED;
gchar** rygel_configuration_get_interfaces (RygelConfiguration* self, GError** error);
gint rygel_configuration_get_port (RygelConfiguration* self, GError** error);
gboolean rygel_configuration_get_transcoding (RygelConfiguration* self, GError** error);
gboolean rygel_configuration_get_allow_upload (RygelConfiguration* self, GError** error);
gboolean rygel_configuration_get_allow_deletion (RygelConfiguration* self, GError** error);
gchar* rygel_configuration_get_log_levels (RygelConfiguration* self, GError** error);
gchar* rygel_configuration_get_plugin_path (RygelConfiguration* self, GError** error);
gchar* rygel_configuration_get_engine_path (RygelConfiguration* self, GError** error);
gchar* rygel_configuration_get_media_engine (RygelConfiguration* self, GError** error);
gchar* rygel_configuration_get_video_upload_folder (RygelConfiguration* self, GError** error);
gchar* rygel_configuration_get_music_upload_folder (RygelConfiguration* self, GError** error);
gchar* rygel_configuration_get_picture_upload_folder (RygelConfiguration* self, GError** error);
gboolean rygel_configuration_get_enabled (RygelConfiguration* self, const gchar* section, GError** error);
gchar* rygel_configuration_get_title (RygelConfiguration* self, const gchar* section, GError** error);
gchar* rygel_configuration_get_string (RygelConfiguration* self, const gchar* section, const gchar* key, GError** error);
GeeArrayList* rygel_configuration_get_string_list (RygelConfiguration* self, const gchar* section, const gchar* key, GError** error);
gint rygel_configuration_get_int (RygelConfiguration* self, const gchar* section, const gchar* key, gint min, gint max, GError** error);
GeeArrayList* rygel_configuration_get_int_list (RygelConfiguration* self, const gchar* section, const gchar* key, GError** error);
gboolean rygel_configuration_get_bool (RygelConfiguration* self, const gchar* section, const gchar* key, GError** error);
static void g_cclosure_user_marshal_VOID__STRING_ENUM (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);
static void g_cclosure_user_marshal_VOID__STRING_STRING (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);


GQuark rygel_configuration_error_quark (void) {
	return g_quark_from_static_string ("rygel_configuration_error-quark");
}


GType rygel_configuration_entry_get_type (void) {
	static volatile gsize rygel_configuration_entry_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_configuration_entry_type_id__volatile)) {
		static const GEnumValue values[] = {{RYGEL_CONFIGURATION_ENTRY_UPNP_ENABLED, "RYGEL_CONFIGURATION_ENTRY_UPNP_ENABLED", "upnp-enabled"}, {RYGEL_CONFIGURATION_ENTRY_INTERFACE, "RYGEL_CONFIGURATION_ENTRY_INTERFACE", "interface"}, {RYGEL_CONFIGURATION_ENTRY_PORT, "RYGEL_CONFIGURATION_ENTRY_PORT", "port"}, {RYGEL_CONFIGURATION_ENTRY_TRANSCODING, "RYGEL_CONFIGURATION_ENTRY_TRANSCODING", "transcoding"}, {RYGEL_CONFIGURATION_ENTRY_ALLOW_UPLOAD, "RYGEL_CONFIGURATION_ENTRY_ALLOW_UPLOAD", "allow-upload"}, {RYGEL_CONFIGURATION_ENTRY_ALLOW_DELETION, "RYGEL_CONFIGURATION_ENTRY_ALLOW_DELETION", "allow-deletion"}, {RYGEL_CONFIGURATION_ENTRY_LOG_LEVELS, "RYGEL_CONFIGURATION_ENTRY_LOG_LEVELS", "log-levels"}, {RYGEL_CONFIGURATION_ENTRY_PLUGIN_PATH, "RYGEL_CONFIGURATION_ENTRY_PLUGIN_PATH", "plugin-path"}, {RYGEL_CONFIGURATION_ENTRY_VIDEO_UPLOAD_FOLDER, "RYGEL_CONFIGURATION_ENTRY_VIDEO_UPLOAD_FOLDER", "video-upload-folder"}, {RYGEL_CONFIGURATION_ENTRY_MUSIC_UPLOAD_FOLDER, "RYGEL_CONFIGURATION_ENTRY_MUSIC_UPLOAD_FOLDER", "music-upload-folder"}, {RYGEL_CONFIGURATION_ENTRY_PICTURE_UPLOAD_FOLDER, "RYGEL_CONFIGURATION_ENTRY_PICTURE_UPLOAD_FOLDER", "picture-upload-folder"}, {0, NULL, NULL}};
		GType rygel_configuration_entry_type_id;
		rygel_configuration_entry_type_id = g_enum_register_static ("RygelConfigurationEntry", values);
		g_once_init_leave (&rygel_configuration_entry_type_id__volatile, rygel_configuration_entry_type_id);
	}
	return rygel_configuration_entry_type_id__volatile;
}


GType rygel_section_entry_get_type (void) {
	static volatile gsize rygel_section_entry_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_section_entry_type_id__volatile)) {
		static const GEnumValue values[] = {{RYGEL_SECTION_ENTRY_TITLE, "RYGEL_SECTION_ENTRY_TITLE", "title"}, {RYGEL_SECTION_ENTRY_ENABLED, "RYGEL_SECTION_ENTRY_ENABLED", "enabled"}, {0, NULL, NULL}};
		GType rygel_section_entry_type_id;
		rygel_section_entry_type_id = g_enum_register_static ("RygelSectionEntry", values);
		g_once_init_leave (&rygel_section_entry_type_id__volatile, rygel_section_entry_type_id);
	}
	return rygel_section_entry_type_id__volatile;
}


gboolean rygel_configuration_get_upnp_enabled (RygelConfiguration* self, GError** error) {
	g_return_val_if_fail (self != NULL, FALSE);
	return RYGEL_CONFIGURATION_GET_INTERFACE (self)->get_upnp_enabled (self, error);
}


gchar* rygel_configuration_get_interface (RygelConfiguration* self, GError** error) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_CONFIGURATION_GET_INTERFACE (self)->get_interface (self, error);
}


gchar** rygel_configuration_get_interfaces (RygelConfiguration* self, GError** error) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_CONFIGURATION_GET_INTERFACE (self)->get_interfaces (self, error);
}


gint rygel_configuration_get_port (RygelConfiguration* self, GError** error) {
	g_return_val_if_fail (self != NULL, 0);
	return RYGEL_CONFIGURATION_GET_INTERFACE (self)->get_port (self, error);
}


gboolean rygel_configuration_get_transcoding (RygelConfiguration* self, GError** error) {
	g_return_val_if_fail (self != NULL, FALSE);
	return RYGEL_CONFIGURATION_GET_INTERFACE (self)->get_transcoding (self, error);
}


gboolean rygel_configuration_get_allow_upload (RygelConfiguration* self, GError** error) {
	g_return_val_if_fail (self != NULL, FALSE);
	return RYGEL_CONFIGURATION_GET_INTERFACE (self)->get_allow_upload (self, error);
}


gboolean rygel_configuration_get_allow_deletion (RygelConfiguration* self, GError** error) {
	g_return_val_if_fail (self != NULL, FALSE);
	return RYGEL_CONFIGURATION_GET_INTERFACE (self)->get_allow_deletion (self, error);
}


gchar* rygel_configuration_get_log_levels (RygelConfiguration* self, GError** error) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_CONFIGURATION_GET_INTERFACE (self)->get_log_levels (self, error);
}


gchar* rygel_configuration_get_plugin_path (RygelConfiguration* self, GError** error) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_CONFIGURATION_GET_INTERFACE (self)->get_plugin_path (self, error);
}


gchar* rygel_configuration_get_engine_path (RygelConfiguration* self, GError** error) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_CONFIGURATION_GET_INTERFACE (self)->get_engine_path (self, error);
}


gchar* rygel_configuration_get_media_engine (RygelConfiguration* self, GError** error) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_CONFIGURATION_GET_INTERFACE (self)->get_media_engine (self, error);
}


gchar* rygel_configuration_get_video_upload_folder (RygelConfiguration* self, GError** error) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_CONFIGURATION_GET_INTERFACE (self)->get_video_upload_folder (self, error);
}


gchar* rygel_configuration_get_music_upload_folder (RygelConfiguration* self, GError** error) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_CONFIGURATION_GET_INTERFACE (self)->get_music_upload_folder (self, error);
}


gchar* rygel_configuration_get_picture_upload_folder (RygelConfiguration* self, GError** error) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_CONFIGURATION_GET_INTERFACE (self)->get_picture_upload_folder (self, error);
}


gboolean rygel_configuration_get_enabled (RygelConfiguration* self, const gchar* section, GError** error) {
	g_return_val_if_fail (self != NULL, FALSE);
	return RYGEL_CONFIGURATION_GET_INTERFACE (self)->get_enabled (self, section, error);
}


gchar* rygel_configuration_get_title (RygelConfiguration* self, const gchar* section, GError** error) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_CONFIGURATION_GET_INTERFACE (self)->get_title (self, section, error);
}


gchar* rygel_configuration_get_string (RygelConfiguration* self, const gchar* section, const gchar* key, GError** error) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_CONFIGURATION_GET_INTERFACE (self)->get_string (self, section, key, error);
}


GeeArrayList* rygel_configuration_get_string_list (RygelConfiguration* self, const gchar* section, const gchar* key, GError** error) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_CONFIGURATION_GET_INTERFACE (self)->get_string_list (self, section, key, error);
}


gint rygel_configuration_get_int (RygelConfiguration* self, const gchar* section, const gchar* key, gint min, gint max, GError** error) {
	g_return_val_if_fail (self != NULL, 0);
	return RYGEL_CONFIGURATION_GET_INTERFACE (self)->get_int (self, section, key, min, max, error);
}


GeeArrayList* rygel_configuration_get_int_list (RygelConfiguration* self, const gchar* section, const gchar* key, GError** error) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_CONFIGURATION_GET_INTERFACE (self)->get_int_list (self, section, key, error);
}


gboolean rygel_configuration_get_bool (RygelConfiguration* self, const gchar* section, const gchar* key, GError** error) {
	g_return_val_if_fail (self != NULL, FALSE);
	return RYGEL_CONFIGURATION_GET_INTERFACE (self)->get_bool (self, section, key, error);
}


static void g_cclosure_user_marshal_VOID__STRING_ENUM (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) {
	typedef void (*GMarshalFunc_VOID__STRING_ENUM) (gpointer data1, const char* arg_1, gint arg_2, gpointer data2);
	register GMarshalFunc_VOID__STRING_ENUM callback;
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
	callback = (GMarshalFunc_VOID__STRING_ENUM) (marshal_data ? marshal_data : cc->callback);
	callback (data1, g_value_get_string (param_values + 1), g_value_get_enum (param_values + 2), data2);
}


static void g_cclosure_user_marshal_VOID__STRING_STRING (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) {
	typedef void (*GMarshalFunc_VOID__STRING_STRING) (gpointer data1, const char* arg_1, const char* arg_2, gpointer data2);
	register GMarshalFunc_VOID__STRING_STRING callback;
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
	callback = (GMarshalFunc_VOID__STRING_STRING) (marshal_data ? marshal_data : cc->callback);
	callback (data1, g_value_get_string (param_values + 1), g_value_get_string (param_values + 2), data2);
}


static void rygel_configuration_base_init (RygelConfigurationIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
		/**
		     * Emitted when any of known configuration settings has
		     * changed. RygelConfigurationEntry lists known configuration
		     * settings.
		     */
		g_signal_new ("configuration_changed", RYGEL_TYPE_CONFIGURATION, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__ENUM, G_TYPE_NONE, 1, RYGEL_TYPE_CONFIGURATION_ENTRY);
		/**
		     * Emitted when any of section settings has
		     * changed. RygelSectionEntry lists known section settings.
		     */
		g_signal_new ("section_changed", RYGEL_TYPE_CONFIGURATION, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_VOID__STRING_ENUM, G_TYPE_NONE, 2, G_TYPE_STRING, RYGEL_TYPE_SECTION_ENTRY);
		/**
		     * Emitted when some custom setting has changed. That happens when
		     * changed setting does fit into neither configuration_changed nor
		     * section_changed signal.
		     */
		g_signal_new ("setting_changed", RYGEL_TYPE_CONFIGURATION, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_VOID__STRING_STRING, G_TYPE_NONE, 2, G_TYPE_STRING, G_TYPE_STRING);
	}
}


/**
 * Interface for dealing with Rygel configuration.
 */
GType rygel_configuration_get_type (void) {
	static volatile gsize rygel_configuration_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_configuration_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelConfigurationIface), (GBaseInitFunc) rygel_configuration_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType rygel_configuration_type_id;
		rygel_configuration_type_id = g_type_register_static (G_TYPE_INTERFACE, "RygelConfiguration", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (rygel_configuration_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&rygel_configuration_type_id__volatile, rygel_configuration_type_id);
	}
	return rygel_configuration_type_id__volatile;
}



