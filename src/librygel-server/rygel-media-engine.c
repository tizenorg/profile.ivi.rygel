/* rygel-media-engine.c generated by valac 0.16.1, the Vala compiler
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
#include <rygel-core.h>
#include <glib/gi18n-lib.h>
#include <gobject/gvaluecollector.h>


#define RYGEL_TYPE_DLNA_PROFILE (rygel_dlna_profile_get_type ())
#define RYGEL_DLNA_PROFILE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_DLNA_PROFILE, RygelDLNAProfile))
#define RYGEL_DLNA_PROFILE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_DLNA_PROFILE, RygelDLNAProfileClass))
#define RYGEL_IS_DLNA_PROFILE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_DLNA_PROFILE))
#define RYGEL_IS_DLNA_PROFILE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_DLNA_PROFILE))
#define RYGEL_DLNA_PROFILE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_DLNA_PROFILE, RygelDLNAProfileClass))

typedef struct _RygelDLNAProfile RygelDLNAProfile;
typedef struct _RygelDLNAProfileClass RygelDLNAProfileClass;
typedef struct _RygelDLNAProfilePrivate RygelDLNAProfilePrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _RygelParamSpecDLNAProfile RygelParamSpecDLNAProfile;

#define RYGEL_TYPE_MEDIA_ENGINE (rygel_media_engine_get_type ())
#define RYGEL_MEDIA_ENGINE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_ENGINE, RygelMediaEngine))
#define RYGEL_MEDIA_ENGINE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_ENGINE, RygelMediaEngineClass))
#define RYGEL_IS_MEDIA_ENGINE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_ENGINE))
#define RYGEL_IS_MEDIA_ENGINE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_ENGINE))
#define RYGEL_MEDIA_ENGINE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_ENGINE, RygelMediaEngineClass))

typedef struct _RygelMediaEngine RygelMediaEngine;
typedef struct _RygelMediaEngineClass RygelMediaEngineClass;
typedef struct _RygelMediaEnginePrivate RygelMediaEnginePrivate;

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

struct _RygelDLNAProfile {
	GTypeInstance parent_instance;
	volatile int ref_count;
	RygelDLNAProfilePrivate * priv;
	gchar* mime;
	gchar* name;
};

struct _RygelDLNAProfileClass {
	GTypeClass parent_class;
	void (*finalize) (RygelDLNAProfile *self);
};

struct _RygelParamSpecDLNAProfile {
	GParamSpec parent_instance;
};

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


static gpointer rygel_dlna_profile_parent_class = NULL;
static gpointer rygel_media_engine_parent_class = NULL;
static RygelMediaEngine* rygel_media_engine_instance;
static RygelMediaEngine* rygel_media_engine_instance = NULL;

gpointer rygel_dlna_profile_ref (gpointer instance);
void rygel_dlna_profile_unref (gpointer instance);
GParamSpec* rygel_param_spec_dlna_profile (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_value_set_dlna_profile (GValue* value, gpointer v_object);
void rygel_value_take_dlna_profile (GValue* value, gpointer v_object);
gpointer rygel_value_get_dlna_profile (const GValue* value);
GType rygel_dlna_profile_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_DLNA_PROFILE_DUMMY_PROPERTY
};
RygelDLNAProfile* rygel_dlna_profile_new (const gchar* name, const gchar* mime);
RygelDLNAProfile* rygel_dlna_profile_construct (GType object_type, const gchar* name, const gchar* mime);
gint rygel_dlna_profile_compare_by_name (RygelDLNAProfile* a, RygelDLNAProfile* b);
static void rygel_dlna_profile_finalize (RygelDLNAProfile* obj);
GQuark rygel_media_engine_error_quark (void);
GType rygel_media_engine_get_type (void) G_GNUC_CONST;
GType rygel_transcoder_get_type (void) G_GNUC_CONST;
GType rygel_http_seek_get_type (void) G_GNUC_CONST;
GType rygel_data_source_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_MEDIA_ENGINE_DUMMY_PROPERTY
};
void rygel_media_engine_init (GError** error);
RygelEngineLoader* rygel_engine_loader_new (void);
RygelEngineLoader* rygel_engine_loader_construct (GType object_type);
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


RygelDLNAProfile* rygel_dlna_profile_construct (GType object_type, const gchar* name, const gchar* mime) {
	RygelDLNAProfile* self = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_;
	const gchar* _tmp2_;
	gchar* _tmp3_;
#line 33 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	g_return_val_if_fail (name != NULL, NULL);
#line 33 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	g_return_val_if_fail (mime != NULL, NULL);
#line 33 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	self = (RygelDLNAProfile*) g_type_create_instance (object_type);
#line 34 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	_tmp0_ = mime;
#line 34 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 34 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	_g_free0 (self->mime);
#line 34 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	self->mime = _tmp1_;
#line 35 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	_tmp2_ = name;
#line 35 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	_tmp3_ = g_strdup (_tmp2_);
#line 35 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	_g_free0 (self->name);
#line 35 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	self->name = _tmp3_;
#line 33 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	return self;
#line 214 "rygel-media-engine.c"
}


RygelDLNAProfile* rygel_dlna_profile_new (const gchar* name, const gchar* mime) {
#line 33 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	return rygel_dlna_profile_construct (RYGEL_TYPE_DLNA_PROFILE, name, mime);
#line 221 "rygel-media-engine.c"
}


/**
     * Compare two DLNA profiles by name
     */
gint rygel_dlna_profile_compare_by_name (RygelDLNAProfile* a, RygelDLNAProfile* b) {
	gint result = 0;
	RygelDLNAProfile* _tmp0_;
	const gchar* _tmp1_;
	RygelDLNAProfile* _tmp2_;
	const gchar* _tmp3_;
	gint _tmp4_ = 0;
#line 41 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	g_return_val_if_fail (a != NULL, 0);
#line 41 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	g_return_val_if_fail (b != NULL, 0);
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	_tmp0_ = a;
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	_tmp1_ = _tmp0_->name;
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	_tmp2_ = b;
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	_tmp3_ = _tmp2_->name;
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	_tmp4_ = g_ascii_strcasecmp (_tmp1_, _tmp3_);
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	result = _tmp4_;
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	return result;
#line 253 "rygel-media-engine.c"
}


static void rygel_value_dlna_profile_init (GValue* value) {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	value->data[0].v_pointer = NULL;
#line 260 "rygel-media-engine.c"
}


static void rygel_value_dlna_profile_free_value (GValue* value) {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	if (value->data[0].v_pointer) {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		rygel_dlna_profile_unref (value->data[0].v_pointer);
#line 269 "rygel-media-engine.c"
	}
}


static void rygel_value_dlna_profile_copy_value (const GValue* src_value, GValue* dest_value) {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	if (src_value->data[0].v_pointer) {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		dest_value->data[0].v_pointer = rygel_dlna_profile_ref (src_value->data[0].v_pointer);
#line 279 "rygel-media-engine.c"
	} else {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		dest_value->data[0].v_pointer = NULL;
#line 283 "rygel-media-engine.c"
	}
}


static gpointer rygel_value_dlna_profile_peek_pointer (const GValue* value) {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	return value->data[0].v_pointer;
#line 291 "rygel-media-engine.c"
}


static gchar* rygel_value_dlna_profile_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	if (collect_values[0].v_pointer) {
#line 298 "rygel-media-engine.c"
		RygelDLNAProfile* object;
		object = collect_values[0].v_pointer;
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		if (object->parent_instance.g_class == NULL) {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 305 "rygel-media-engine.c"
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
#line 309 "rygel-media-engine.c"
		}
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		value->data[0].v_pointer = rygel_dlna_profile_ref (object);
#line 313 "rygel-media-engine.c"
	} else {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		value->data[0].v_pointer = NULL;
#line 317 "rygel-media-engine.c"
	}
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	return NULL;
#line 321 "rygel-media-engine.c"
}


static gchar* rygel_value_dlna_profile_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	RygelDLNAProfile** object_p;
	object_p = collect_values[0].v_pointer;
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	if (!object_p) {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
#line 332 "rygel-media-engine.c"
	}
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	if (!value->data[0].v_pointer) {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		*object_p = NULL;
#line 338 "rygel-media-engine.c"
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		*object_p = value->data[0].v_pointer;
#line 342 "rygel-media-engine.c"
	} else {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		*object_p = rygel_dlna_profile_ref (value->data[0].v_pointer);
#line 346 "rygel-media-engine.c"
	}
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	return NULL;
#line 350 "rygel-media-engine.c"
}


GParamSpec* rygel_param_spec_dlna_profile (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	RygelParamSpecDLNAProfile* spec;
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	g_return_val_if_fail (g_type_is_a (object_type, RYGEL_TYPE_DLNA_PROFILE), NULL);
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	G_PARAM_SPEC (spec)->value_type = object_type;
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	return G_PARAM_SPEC (spec);
#line 364 "rygel-media-engine.c"
}


gpointer rygel_value_get_dlna_profile (const GValue* value) {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_TYPE_DLNA_PROFILE), NULL);
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	return value->data[0].v_pointer;
#line 373 "rygel-media-engine.c"
}


void rygel_value_set_dlna_profile (GValue* value, gpointer v_object) {
	RygelDLNAProfile* old;
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_TYPE_DLNA_PROFILE));
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	old = value->data[0].v_pointer;
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	if (v_object) {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, RYGEL_TYPE_DLNA_PROFILE));
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		value->data[0].v_pointer = v_object;
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		rygel_dlna_profile_ref (value->data[0].v_pointer);
#line 393 "rygel-media-engine.c"
	} else {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		value->data[0].v_pointer = NULL;
#line 397 "rygel-media-engine.c"
	}
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	if (old) {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		rygel_dlna_profile_unref (old);
#line 403 "rygel-media-engine.c"
	}
}


void rygel_value_take_dlna_profile (GValue* value, gpointer v_object) {
	RygelDLNAProfile* old;
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_TYPE_DLNA_PROFILE));
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	old = value->data[0].v_pointer;
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	if (v_object) {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, RYGEL_TYPE_DLNA_PROFILE));
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		value->data[0].v_pointer = v_object;
#line 422 "rygel-media-engine.c"
	} else {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		value->data[0].v_pointer = NULL;
#line 426 "rygel-media-engine.c"
	}
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	if (old) {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		rygel_dlna_profile_unref (old);
#line 432 "rygel-media-engine.c"
	}
}


static void rygel_dlna_profile_class_init (RygelDLNAProfileClass * klass) {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	rygel_dlna_profile_parent_class = g_type_class_peek_parent (klass);
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	RYGEL_DLNA_PROFILE_CLASS (klass)->finalize = rygel_dlna_profile_finalize;
#line 442 "rygel-media-engine.c"
}


static void rygel_dlna_profile_instance_init (RygelDLNAProfile * self) {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	self->ref_count = 1;
#line 449 "rygel-media-engine.c"
}


static void rygel_dlna_profile_finalize (RygelDLNAProfile* obj) {
	RygelDLNAProfile * self;
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	self = RYGEL_DLNA_PROFILE (obj);
#line 30 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	_g_free0 (self->mime);
#line 31 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	_g_free0 (self->name);
#line 461 "rygel-media-engine.c"
}


/**
 * Data class representing a DLNA profile.
 * It contains the name and the corresponding DLNA mime type.
 *
 * Note: The mime type can deviate from mime types typically used elsewhere.
 */
GType rygel_dlna_profile_get_type (void) {
	static volatile gsize rygel_dlna_profile_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_dlna_profile_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { rygel_value_dlna_profile_init, rygel_value_dlna_profile_free_value, rygel_value_dlna_profile_copy_value, rygel_value_dlna_profile_peek_pointer, "p", rygel_value_dlna_profile_collect_value, "p", rygel_value_dlna_profile_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (RygelDLNAProfileClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_dlna_profile_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelDLNAProfile), 0, (GInstanceInitFunc) rygel_dlna_profile_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType rygel_dlna_profile_type_id;
		rygel_dlna_profile_type_id = g_type_register_fundamental (g_type_fundamental_next (), "RygelDLNAProfile", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&rygel_dlna_profile_type_id__volatile, rygel_dlna_profile_type_id);
	}
	return rygel_dlna_profile_type_id__volatile;
}


gpointer rygel_dlna_profile_ref (gpointer instance) {
	RygelDLNAProfile* self;
	self = instance;
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	g_atomic_int_inc (&self->ref_count);
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	return instance;
#line 492 "rygel-media-engine.c"
}


void rygel_dlna_profile_unref (gpointer instance) {
	RygelDLNAProfile* self;
	self = instance;
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		RYGEL_DLNA_PROFILE_GET_CLASS (self)->finalize (self);
#line 29 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		g_type_free_instance ((GTypeInstance *) self);
#line 505 "rygel-media-engine.c"
	}
}


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
#line 68 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	_tmp0_ = rygel_engine_loader_new ();
#line 68 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	loader = _tmp0_;
#line 69 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	_tmp1_ = loader;
#line 69 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	_tmp2_ = rygel_engine_loader_load_engine (_tmp1_);
#line 69 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	_g_object_unref0 (rygel_media_engine_instance);
#line 69 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	rygel_media_engine_instance = _tmp2_;
#line 70 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	_tmp3_ = rygel_media_engine_instance;
#line 70 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	if (_tmp3_ == NULL) {
#line 538 "rygel-media-engine.c"
		const gchar* _tmp4_ = NULL;
		GError* _tmp5_;
#line 71 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		_tmp4_ = _ ("No media engine found.");
#line 71 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		_tmp5_ = g_error_new_literal (RYGEL_MEDIA_ENGINE_ERROR, RYGEL_MEDIA_ENGINE_ERROR_NOT_FOUND, _tmp4_);
#line 71 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		_inner_error_ = _tmp5_;
#line 71 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		g_propagate_error (error, _inner_error_);
#line 71 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		_g_object_unref0 (loader);
#line 71 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		return;
#line 553 "rygel-media-engine.c"
	}
#line 66 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	_g_object_unref0 (loader);
#line 557 "rygel-media-engine.c"
}


/**
     * Get the singleton instance of the currently used media engine.
     *
     * @return An instance of a concrete #MediaEngine implementation.
     */
static gpointer _g_object_ref0 (gpointer self) {
#line 86 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	return self ? g_object_ref (self) : NULL;
#line 569 "rygel-media-engine.c"
}


RygelMediaEngine* rygel_media_engine_get_default (void) {
	RygelMediaEngine* result = NULL;
	RygelMediaEngine* _tmp0_;
	RygelMediaEngine* _tmp2_;
	RygelMediaEngine* _tmp3_;
#line 82 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	_tmp0_ = rygel_media_engine_instance;
#line 82 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	if (_tmp0_ == NULL) {
#line 582 "rygel-media-engine.c"
		const gchar* _tmp1_ = NULL;
#line 83 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		_tmp1_ = _ ("MediaEngine.init was not called. Cannot continue.");
#line 83 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
		g_error ("rygel-media-engine.vala:83: %s", _tmp1_);
#line 588 "rygel-media-engine.c"
	}
#line 86 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	_tmp2_ = rygel_media_engine_instance;
#line 86 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	_tmp3_ = _g_object_ref0 (_tmp2_);
#line 86 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	result = _tmp3_;
#line 86 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	return result;
#line 598 "rygel-media-engine.c"
}


/**
     * Get a list of the DLNA profiles that are supported by this media
     * engine.
     *
     * @return A list of #DLNAProfile<!-- -->s
     */
static GList* rygel_media_engine_real_get_dlna_profiles (RygelMediaEngine* self) {
#line 95 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	g_critical ("Type `%s' does not implement abstract method `rygel_media_engine_get_dlna_profiles'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
#line 95 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	return NULL;
#line 613 "rygel-media-engine.c"
}


GList* rygel_media_engine_get_dlna_profiles (RygelMediaEngine* self) {
#line 95 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 95 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	return RYGEL_MEDIA_ENGINE_GET_CLASS (self)->get_dlna_profiles (self);
#line 622 "rygel-media-engine.c"
}


/**
     * Get a list of the Transcoders that are supported by this media engine.
     *
     * @return A list of #Transcoder<!-- -->s or null if not supported.
     */
static GList* rygel_media_engine_real_get_transcoders (RygelMediaEngine* self) {
#line 102 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	g_critical ("Type `%s' does not implement abstract method `rygel_media_engine_get_transcoders'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
#line 102 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	return NULL;
#line 636 "rygel-media-engine.c"
}


GList* rygel_media_engine_get_transcoders (RygelMediaEngine* self) {
#line 102 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 102 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	return RYGEL_MEDIA_ENGINE_GET_CLASS (self)->get_transcoders (self);
#line 645 "rygel-media-engine.c"
}


/**
     * Get a data source for the URI.
     *
     * @param uri to create the data source for.
     * @return A data source representing the uri
     */
static RygelDataSource* rygel_media_engine_real_create_data_source (RygelMediaEngine* self, const gchar* uri) {
#line 110 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	g_critical ("Type `%s' does not implement abstract method `rygel_media_engine_create_data_source'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
#line 110 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	return NULL;
#line 660 "rygel-media-engine.c"
}


RygelDataSource* rygel_media_engine_create_data_source (RygelMediaEngine* self, const gchar* uri) {
#line 110 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 110 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	return RYGEL_MEDIA_ENGINE_GET_CLASS (self)->create_data_source (self, uri);
#line 669 "rygel-media-engine.c"
}


RygelMediaEngine* rygel_media_engine_construct (GType object_type) {
	RygelMediaEngine * self = NULL;
#line 63 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	self = (RygelMediaEngine*) g_object_new (object_type, NULL);
#line 63 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	return self;
#line 679 "rygel-media-engine.c"
}


static void rygel_media_engine_class_init (RygelMediaEngineClass * klass) {
#line 63 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	rygel_media_engine_parent_class = g_type_class_peek_parent (klass);
#line 63 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	RYGEL_MEDIA_ENGINE_CLASS (klass)->get_dlna_profiles = rygel_media_engine_real_get_dlna_profiles;
#line 63 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	RYGEL_MEDIA_ENGINE_CLASS (klass)->get_transcoders = rygel_media_engine_real_get_transcoders;
#line 63 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	RYGEL_MEDIA_ENGINE_CLASS (klass)->create_data_source = rygel_media_engine_real_create_data_source;
#line 63 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	G_OBJECT_CLASS (klass)->finalize = rygel_media_engine_finalize;
#line 694 "rygel-media-engine.c"
}


static void rygel_media_engine_instance_init (RygelMediaEngine * self) {
}


static void rygel_media_engine_finalize (GObject* obj) {
	RygelMediaEngine * self;
#line 63 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	self = RYGEL_MEDIA_ENGINE (obj);
#line 63 "/home/mryan/src/rygel/src/librygel-server/rygel-media-engine.vala"
	G_OBJECT_CLASS (rygel_media_engine_parent_class)->finalize (obj);
#line 708 "rygel-media-engine.c"
}


/**
 * This is the base class for media engines that contain knowledge about 
 * streaming and transcoding capabilites of the media library in use.
 *
 * See, for instance, Rygel's "gstreamer" and "simple" media engines.
 * The actual media engine used by Rygel at runtime is specified
 * by the media-engine configuration key/
 * For instance, in rygel.conf:
 * media-engine=librygel-media-engine-gst.so
 *
 * Media engines should also derive their own Rygel.DataSource,
 * returning an instance of it from create_data_source().
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



