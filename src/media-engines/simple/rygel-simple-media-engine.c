/* rygel-simple-media-engine.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-simple-media-engine.vala, do not modify */

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
#include <rygel-server.h>
#include <stdlib.h>
#include <string.h>


#define RYGEL_TYPE_SIMPLE_MEDIA_ENGINE (rygel_simple_media_engine_get_type ())
#define RYGEL_SIMPLE_MEDIA_ENGINE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_SIMPLE_MEDIA_ENGINE, RygelSimpleMediaEngine))
#define RYGEL_SIMPLE_MEDIA_ENGINE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_SIMPLE_MEDIA_ENGINE, RygelSimpleMediaEngineClass))
#define RYGEL_IS_SIMPLE_MEDIA_ENGINE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_SIMPLE_MEDIA_ENGINE))
#define RYGEL_IS_SIMPLE_MEDIA_ENGINE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_SIMPLE_MEDIA_ENGINE))
#define RYGEL_SIMPLE_MEDIA_ENGINE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_SIMPLE_MEDIA_ENGINE, RygelSimpleMediaEngineClass))

typedef struct _RygelSimpleMediaEngine RygelSimpleMediaEngine;
typedef struct _RygelSimpleMediaEngineClass RygelSimpleMediaEngineClass;
typedef struct _RygelSimpleMediaEnginePrivate RygelSimpleMediaEnginePrivate;
#define __g_list_free__rygel_dlna_profile_unref0_0(var) ((var == NULL) ? NULL : (var = (_g_list_free__rygel_dlna_profile_unref0_ (var), NULL)))

#define RYGEL_TYPE_SIMPLE_DATA_SOURCE (rygel_simple_data_source_get_type ())
#define RYGEL_SIMPLE_DATA_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_SIMPLE_DATA_SOURCE, RygelSimpleDataSource))
#define RYGEL_SIMPLE_DATA_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_SIMPLE_DATA_SOURCE, RygelSimpleDataSourceClass))
#define RYGEL_IS_SIMPLE_DATA_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_SIMPLE_DATA_SOURCE))
#define RYGEL_IS_SIMPLE_DATA_SOURCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_SIMPLE_DATA_SOURCE))
#define RYGEL_SIMPLE_DATA_SOURCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_SIMPLE_DATA_SOURCE, RygelSimpleDataSourceClass))

typedef struct _RygelSimpleDataSource RygelSimpleDataSource;
typedef struct _RygelSimpleDataSourceClass RygelSimpleDataSourceClass;

struct _RygelSimpleMediaEngine {
	RygelMediaEngine parent_instance;
	RygelSimpleMediaEnginePrivate * priv;
};

struct _RygelSimpleMediaEngineClass {
	RygelMediaEngineClass parent_class;
};

struct _RygelSimpleMediaEnginePrivate {
	GList* profiles;
};


static gpointer rygel_simple_media_engine_parent_class = NULL;

GType rygel_simple_media_engine_get_type (void) G_GNUC_CONST;
#define RYGEL_SIMPLE_MEDIA_ENGINE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_SIMPLE_MEDIA_ENGINE, RygelSimpleMediaEnginePrivate))
enum  {
	RYGEL_SIMPLE_MEDIA_ENGINE_DUMMY_PROPERTY
};
static void _rygel_dlna_profile_unref0_ (gpointer var);
static void _g_list_free__rygel_dlna_profile_unref0_ (GList* self);
RygelSimpleMediaEngine* rygel_simple_media_engine_new (void);
RygelSimpleMediaEngine* rygel_simple_media_engine_construct (GType object_type);
static GList* rygel_simple_media_engine_real_get_dlna_profiles (RygelMediaEngine* base);
static GList* rygel_simple_media_engine_real_get_transcoders (RygelMediaEngine* base);
static RygelDataSource* rygel_simple_media_engine_real_create_data_source (RygelMediaEngine* base, const gchar* uri);
RygelSimpleDataSource* rygel_simple_data_source_new (const gchar* uri);
RygelSimpleDataSource* rygel_simple_data_source_construct (GType object_type, const gchar* uri);
GType rygel_simple_data_source_get_type (void) G_GNUC_CONST;
static void rygel_simple_media_engine_finalize (GObject* obj);
RygelMediaEngine* module_get_instance (void);


static void _rygel_dlna_profile_unref0_ (gpointer var) {
	(var == NULL) ? NULL : (var = (rygel_dlna_profile_unref (var), NULL));
}


static void _g_list_free__rygel_dlna_profile_unref0_ (GList* self) {
	g_list_foreach (self, (GFunc) _rygel_dlna_profile_unref0_, NULL);
	g_list_free (self);
}


RygelSimpleMediaEngine* rygel_simple_media_engine_construct (GType object_type) {
	RygelSimpleMediaEngine * self = NULL;
	self = (RygelSimpleMediaEngine*) rygel_media_engine_construct (object_type);
	return self;
}


RygelSimpleMediaEngine* rygel_simple_media_engine_new (void) {
	return rygel_simple_media_engine_construct (RYGEL_TYPE_SIMPLE_MEDIA_ENGINE);
}


static GList* rygel_simple_media_engine_real_get_dlna_profiles (RygelMediaEngine* base) {
	RygelSimpleMediaEngine * self;
	GList* result = NULL;
	GList* _tmp0_ = NULL;
	self = (RygelSimpleMediaEngine*) base;
	_tmp0_ = self->priv->profiles;
	result = _tmp0_;
	return result;
}


static GList* rygel_simple_media_engine_real_get_transcoders (RygelMediaEngine* base) {
	RygelSimpleMediaEngine * self;
	GList* result = NULL;
	self = (RygelSimpleMediaEngine*) base;
	result = NULL;
	return result;
}


static RygelDataSource* rygel_simple_media_engine_real_create_data_source (RygelMediaEngine* base, const gchar* uri) {
	RygelSimpleMediaEngine * self;
	RygelDataSource* result = NULL;
	const gchar* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	const gchar* _tmp2_ = NULL;
	RygelSimpleDataSource* _tmp3_ = NULL;
	self = (RygelSimpleMediaEngine*) base;
	g_return_val_if_fail (uri != NULL, NULL);
	_tmp0_ = uri;
	_tmp1_ = g_str_has_prefix (_tmp0_, "file://");
	if (!_tmp1_) {
		result = NULL;
		return result;
	}
	_tmp2_ = uri;
	_tmp3_ = rygel_simple_data_source_new (_tmp2_);
	result = (RygelDataSource*) _tmp3_;
	return result;
}


static void rygel_simple_media_engine_class_init (RygelSimpleMediaEngineClass * klass) {
	rygel_simple_media_engine_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (RygelSimpleMediaEnginePrivate));
	RYGEL_MEDIA_ENGINE_CLASS (klass)->get_dlna_profiles = rygel_simple_media_engine_real_get_dlna_profiles;
	RYGEL_MEDIA_ENGINE_CLASS (klass)->get_transcoders = rygel_simple_media_engine_real_get_transcoders;
	RYGEL_MEDIA_ENGINE_CLASS (klass)->create_data_source = rygel_simple_media_engine_real_create_data_source;
	G_OBJECT_CLASS (klass)->finalize = rygel_simple_media_engine_finalize;
}


static void rygel_simple_media_engine_instance_init (RygelSimpleMediaEngine * self) {
	self->priv = RYGEL_SIMPLE_MEDIA_ENGINE_GET_PRIVATE (self);
	self->priv->profiles = NULL;
}


static void rygel_simple_media_engine_finalize (GObject* obj) {
	RygelSimpleMediaEngine * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_SIMPLE_MEDIA_ENGINE, RygelSimpleMediaEngine);
	__g_list_free__rygel_dlna_profile_unref0_0 (self->priv->profiles);
	G_OBJECT_CLASS (rygel_simple_media_engine_parent_class)->finalize (obj);
}


/**
 * The simple media engine does not use GStreamer or any other
 * multimedia framework. Therefore its capabilities are limited.
 *
 * It does not support transcoding - get_transcoders() returns null.
 * Also, its RygelSimpleDataSource does not support time-base seeking.
 */
GType rygel_simple_media_engine_get_type (void) {
	static volatile gsize rygel_simple_media_engine_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_simple_media_engine_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelSimpleMediaEngineClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_simple_media_engine_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelSimpleMediaEngine), 0, (GInstanceInitFunc) rygel_simple_media_engine_instance_init, NULL };
		GType rygel_simple_media_engine_type_id;
		rygel_simple_media_engine_type_id = g_type_register_static (RYGEL_TYPE_MEDIA_ENGINE, "RygelSimpleMediaEngine", &g_define_type_info, 0);
		g_once_init_leave (&rygel_simple_media_engine_type_id__volatile, rygel_simple_media_engine_type_id);
	}
	return rygel_simple_media_engine_type_id__volatile;
}


RygelMediaEngine* module_get_instance (void) {
	RygelMediaEngine* result = NULL;
	RygelSimpleMediaEngine* _tmp0_ = NULL;
	_tmp0_ = rygel_simple_media_engine_new ();
	result = (RygelMediaEngine*) _tmp0_;
	return result;
}



