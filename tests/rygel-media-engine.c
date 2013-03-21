/* rygel-media-engine.c generated by valac 0.18.0, the Vala compiler
 * generated from rygel-media-engine.vala, do not modify */

/*
 * Copyright (C) 2012 Intel Corporation.
 *
 * Author: Jens Georg <jensg@openismus.com>
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
#include <glib/gi18n-lib.h>


#define RYGEL_TYPE_MEDIA_ENGINE (rygel_media_engine_get_type ())
#define RYGEL_MEDIA_ENGINE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_ENGINE, RygelMediaEngine))
#define RYGEL_MEDIA_ENGINE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_ENGINE, RygelMediaEngineClass))
#define RYGEL_IS_MEDIA_ENGINE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_ENGINE))
#define RYGEL_IS_MEDIA_ENGINE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_ENGINE))
#define RYGEL_MEDIA_ENGINE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_ENGINE, RygelMediaEngineClass))

typedef struct _RygelMediaEngine RygelMediaEngine;
typedef struct _RygelMediaEngineClass RygelMediaEngineClass;
typedef struct _RygelMediaEnginePrivate RygelMediaEnginePrivate;

#define RYGEL_TYPE_DLNA_PROFILE (rygel_dlna_profile_get_type ())
#define RYGEL_DLNA_PROFILE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_DLNA_PROFILE, RygelDLNAProfile))
#define RYGEL_DLNA_PROFILE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_DLNA_PROFILE, RygelDLNAProfileClass))
#define RYGEL_IS_DLNA_PROFILE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_DLNA_PROFILE))
#define RYGEL_IS_DLNA_PROFILE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_DLNA_PROFILE))
#define RYGEL_DLNA_PROFILE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_DLNA_PROFILE, RygelDLNAProfileClass))

typedef struct _RygelDLNAProfile RygelDLNAProfile;
typedef struct _RygelDLNAProfileClass RygelDLNAProfileClass;

#define RYGEL_TYPE_TRANSCODER (rygel_transcoder_get_type ())
#define RYGEL_TRANSCODER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_TRANSCODER, RygelTranscoder))
#define RYGEL_TRANSCODER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_TRANSCODER, RygelTranscoderClass))
#define RYGEL_IS_TRANSCODER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_TRANSCODER))
#define RYGEL_IS_TRANSCODER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_TRANSCODER))
#define RYGEL_TRANSCODER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_TRANSCODER, RygelTranscoderClass))

typedef struct _RygelTranscoder RygelTranscoder;
typedef struct _RygelTranscoderClass RygelTranscoderClass;

#define RYGEL_TYPE_DATA_SOURCE (rygel_data_source_get_type ())
#define RYGEL_DATA_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_DATA_SOURCE, RygelDataSource))
#define RYGEL_IS_DATA_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_DATA_SOURCE))
#define RYGEL_DATA_SOURCE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), RYGEL_TYPE_DATA_SOURCE, RygelDataSourceIface))

typedef struct _RygelDataSource RygelDataSource;
typedef struct _RygelDataSourceIface RygelDataSourceIface;

#define RYGEL_TYPE_HTTP_SEEK (rygel_http_seek_get_type ())
#define RYGEL_HTTP_SEEK(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_HTTP_SEEK, RygelHTTPSeek))
#define RYGEL_HTTP_SEEK_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_HTTP_SEEK, RygelHTTPSeekClass))
#define RYGEL_IS_HTTP_SEEK(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_HTTP_SEEK))
#define RYGEL_IS_HTTP_SEEK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_HTTP_SEEK))
#define RYGEL_HTTP_SEEK_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_HTTP_SEEK, RygelHTTPSeekClass))

typedef struct _RygelHTTPSeek RygelHTTPSeek;
typedef struct _RygelHTTPSeekClass RygelHTTPSeekClass;

#define RYGEL_TYPE_ENGINE_LOADER (rygel_engine_loader_get_type ())
#define RYGEL_ENGINE_LOADER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_ENGINE_LOADER, RygelEngineLoader))
#define RYGEL_ENGINE_LOADER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_ENGINE_LOADER, RygelEngineLoaderClass))
#define RYGEL_IS_ENGINE_LOADER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_ENGINE_LOADER))
#define RYGEL_IS_ENGINE_LOADER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_ENGINE_LOADER))
#define RYGEL_ENGINE_LOADER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_ENGINE_LOADER, RygelEngineLoaderClass))

typedef struct _RygelEngineLoader RygelEngineLoader;
typedef struct _RygelEngineLoaderClass RygelEngineLoaderClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _rygel_engine_loader_unref0(var) ((var == NULL) ? NULL : (var = (rygel_engine_loader_unref (var), NULL)))

typedef enum  {
	RYGEL_MEDIA_ENGINE_ERROR_NOT_FOUND
} RygelMediaEngineError;
#define RYGEL_MEDIA_ENGINE_ERROR rygel_media_engine_error_quark ()
struct _RygelDataSourceIface {
	GTypeInterface parent_iface;
	void (*start) (RygelDataSource* self, RygelHTTPSeek* offsets, GError** error);
	void (*freeze) (RygelDataSource* self);
	void (*thaw) (RygelDataSource* self);
	void (*stop) (RygelDataSource* self);
};

struct _RygelMediaEngine {
	GObject parent_instance;
	RygelMediaEnginePrivate * priv;
};

struct _RygelMediaEngineClass {
	GObjectClass parent_class;
	GList* (*get_dlna_profiles) (RygelMediaEngine* self);
	GList* (*get_transcoders) (RygelMediaEngine* self);
	RygelDataSource* (*create_data_source) (RygelMediaEngine* self, const gchar* uri);
};


static gpointer rygel_media_engine_parent_class = NULL;
static RygelMediaEngine* rygel_media_engine_instance;
static RygelMediaEngine* rygel_media_engine_instance = NULL;

GQuark rygel_media_engine_error_quark (void);
GType rygel_media_engine_get_type (void) G_GNUC_CONST;
gpointer rygel_dlna_profile_ref (gpointer instance);
void rygel_dlna_profile_unref (gpointer instance);
GParamSpec* rygel_param_spec_dlna_profile (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_value_set_dlna_profile (GValue* value, gpointer v_object);
void rygel_value_take_dlna_profile (GValue* value, gpointer v_object);
gpointer rygel_value_get_dlna_profile (const GValue* value);
GType rygel_dlna_profile_get_type (void) G_GNUC_CONST;
gpointer rygel_transcoder_ref (gpointer instance);
void rygel_transcoder_unref (gpointer instance);
GParamSpec* rygel_param_spec_transcoder (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_value_set_transcoder (GValue* value, gpointer v_object);
void rygel_value_take_transcoder (GValue* value, gpointer v_object);
gpointer rygel_value_get_transcoder (const GValue* value);
GType rygel_transcoder_get_type (void) G_GNUC_CONST;
GType rygel_http_seek_get_type (void) G_GNUC_CONST;
GType rygel_data_source_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_MEDIA_ENGINE_DUMMY_PROPERTY
};
void rygel_media_engine_init (GError** error);
RygelEngineLoader* rygel_engine_loader_new (void);
RygelEngineLoader* rygel_engine_loader_construct (GType object_type);
gpointer rygel_engine_loader_ref (gpointer instance);
void rygel_engine_loader_unref (gpointer instance);
GParamSpec* rygel_param_spec_engine_loader (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_value_set_engine_loader (GValue* value, gpointer v_object);
void rygel_value_take_engine_loader (GValue* value, gpointer v_object);
gpointer rygel_value_get_engine_loader (const GValue* value);
GType rygel_engine_loader_get_type (void) G_GNUC_CONST;
RygelMediaEngine* rygel_engine_loader_load_engine (RygelEngineLoader* self);
RygelMediaEngine* rygel_media_engine_get_default (void);
GList* rygel_media_engine_get_dlna_profiles (RygelMediaEngine* self);
static GList* rygel_media_engine_real_get_dlna_profiles (RygelMediaEngine* self);
GList* rygel_media_engine_get_transcoders (RygelMediaEngine* self);
static GList* rygel_media_engine_real_get_transcoders (RygelMediaEngine* self);
RygelDataSource* rygel_media_engine_create_data_source (RygelMediaEngine* self, const gchar* uri);
static RygelDataSource* rygel_media_engine_real_create_data_source (RygelMediaEngine* self, const gchar* uri);
RygelMediaEngine* rygel_media_engine_construct (GType object_type);
static void rygel_media_engine_finalize (GObject* obj);


GQuark rygel_media_engine_error_quark (void) {
	return g_quark_from_static_string ("rygel_media_engine_error-quark");
}


void rygel_media_engine_init (GError** error) {
	RygelEngineLoader* _tmp0_;
	RygelEngineLoader* loader;
	RygelEngineLoader* _tmp1_;
	RygelMediaEngine* _tmp2_ = NULL;
	RygelMediaEngine* _tmp3_;
	GError * _inner_error_ = NULL;
	_tmp0_ = rygel_engine_loader_new ();
	loader = _tmp0_;
	_tmp1_ = loader;
	_tmp2_ = rygel_engine_loader_load_engine (_tmp1_);
	_g_object_unref0 (rygel_media_engine_instance);
	rygel_media_engine_instance = _tmp2_;
	_tmp3_ = rygel_media_engine_instance;
	if (_tmp3_ == NULL) {
		const gchar* _tmp4_ = NULL;
		GError* _tmp5_;
		_tmp4_ = _ ("No media engine found.");
		_tmp5_ = g_error_new_literal (RYGEL_MEDIA_ENGINE_ERROR, RYGEL_MEDIA_ENGINE_ERROR_NOT_FOUND, _tmp4_);
		_inner_error_ = _tmp5_;
		g_propagate_error (error, _inner_error_);
		_rygel_engine_loader_unref0 (loader);
		return;
	}
	_rygel_engine_loader_unref0 (loader);
}


/**
     * Get the singleton instance of the currently used media engine.
     *
     * @return An instance of a concrete #RygelMediaEngine implementation.
     */
static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


RygelMediaEngine* rygel_media_engine_get_default (void) {
	RygelMediaEngine* result = NULL;
	RygelMediaEngine* _tmp0_;
	RygelMediaEngine* _tmp2_;
	RygelMediaEngine* _tmp3_;
	_tmp0_ = rygel_media_engine_instance;
	if (_tmp0_ == NULL) {
		const gchar* _tmp1_ = NULL;
		_tmp1_ = _ ("MediaEngine.init was not called. Cannot continue.");
		g_error ("rygel-media-engine.vala:80: %s", _tmp1_);
	}
	_tmp2_ = rygel_media_engine_instance;
	_tmp3_ = _g_object_ref0 (_tmp2_);
	result = _tmp3_;
	return result;
}


/**
     * Get a list of the DLNA profiles that are supported by this media
     * engine when calling rygel_media_engine_create_data_source().
     *
     * Other DLNA profiles may be supported as transcoding targets -
     *
     * This information is needed to implement DLNA's
     * ConnectionManager.GetProtocolInfo call and to determine whether Rygel
     * can accept an uploaded file.
     *
     * @return A list of #RygelDLNAProfile<!-- -->s
     * @see rygel_media_engine_get_transcoders().
     */
static GList* rygel_media_engine_real_get_dlna_profiles (RygelMediaEngine* self) {
	g_critical ("Type `%s' does not implement abstract method `rygel_media_engine_get_dlna_profiles'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}


GList* rygel_media_engine_get_dlna_profiles (RygelMediaEngine* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_MEDIA_ENGINE_GET_CLASS (self)->get_dlna_profiles (self);
}


/**
     * Get a list of the transcoders that are provided by this media engine.
     *
     * @return A list of #RygelTranscoder<!-- -->s or null if not supported.
     */
static GList* rygel_media_engine_real_get_transcoders (RygelMediaEngine* self) {
	g_critical ("Type `%s' does not implement abstract method `rygel_media_engine_get_transcoders'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}


GList* rygel_media_engine_get_transcoders (RygelMediaEngine* self) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_MEDIA_ENGINE_GET_CLASS (self)->get_transcoders (self);
}


/**
     * Get a data source for the URI.
     *
     * @param uri to create the data source for.
     * @return A data source representing the uri
     */
static RygelDataSource* rygel_media_engine_real_create_data_source (RygelMediaEngine* self, const gchar* uri) {
	g_critical ("Type `%s' does not implement abstract method `rygel_media_engine_create_data_source'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}


RygelDataSource* rygel_media_engine_create_data_source (RygelMediaEngine* self, const gchar* uri) {
	g_return_val_if_fail (self != NULL, NULL);
	return RYGEL_MEDIA_ENGINE_GET_CLASS (self)->create_data_source (self, uri);
}


RygelMediaEngine* rygel_media_engine_construct (GType object_type) {
	RygelMediaEngine * self = NULL;
	self = (RygelMediaEngine*) g_object_new (object_type, NULL);
	return self;
}


static void rygel_media_engine_class_init (RygelMediaEngineClass * klass) {
	rygel_media_engine_parent_class = g_type_class_peek_parent (klass);
	RYGEL_MEDIA_ENGINE_CLASS (klass)->get_dlna_profiles = rygel_media_engine_real_get_dlna_profiles;
	RYGEL_MEDIA_ENGINE_CLASS (klass)->get_transcoders = rygel_media_engine_real_get_transcoders;
	RYGEL_MEDIA_ENGINE_CLASS (klass)->create_data_source = rygel_media_engine_real_create_data_source;
	G_OBJECT_CLASS (klass)->finalize = rygel_media_engine_finalize;
}


static void rygel_media_engine_instance_init (RygelMediaEngine * self) {
}


static void rygel_media_engine_finalize (GObject* obj) {
	RygelMediaEngine * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_MEDIA_ENGINE, RygelMediaEngine);
	G_OBJECT_CLASS (rygel_media_engine_parent_class)->finalize (obj);
}


/**
 * This is the base class for media engines that contain knowledge about 
 * the streaming and (optionally) the transcoding and seeking capabilites
 * of the media library in use. Derived classes also instantiate any
 * transcoding objects supported by the media engine and specify the list
 * of media formats the engine is capable of playing.
 *
 * See, for instance, Rygel's built-in "gstreamer" and "simple" media engines,
 * or the external rygel-gst-0-10-media-engine module.
 *
 * The actual media engine used by Rygel at runtime is specified
 * by the media-engine configuration key.
 * For instance, in rygel.conf:
 * media-engine=librygel-media-engine-gst.so
 *
 * Media engines should also derive their own #RygelDataSource,
 * returning an instance of it from create_data_source().
 *
 * If this media engine supports transcoding then it will typically
 * implement a set of transcoding classes, typically with one 
 * base class and a number of sub-classes - one for each transcoding
 * format you want to support. These should be returned by the
 * get_transcoders() virtual function. The base transcoder class could
 * provide a generic way to create a #RygelDataSource capable of
 * providing Rygel with a transcoded version of a file using the
 * underlying media framework. The sub-classes could contain the
 * various media-framework-specific parameters required to 
 * transcode to a given format and implement a heuristic that
 * can be used to order an item's transcoded resources.
 *
 * See the
 * <link linkend="implementing-media-engines">Implementing Media Engines</link> section.
 */
GType rygel_media_engine_get_type (void) {
	static volatile gsize rygel_media_engine_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_media_engine_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelMediaEngineClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_media_engine_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelMediaEngine), 0, (GInstanceInitFunc) rygel_media_engine_instance_init, NULL };
		GType rygel_media_engine_type_id;
		rygel_media_engine_type_id = g_type_register_static (G_TYPE_OBJECT, "RygelMediaEngine", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&rygel_media_engine_type_id__volatile, rygel_media_engine_type_id);
	}
	return rygel_media_engine_type_id__volatile;
}



