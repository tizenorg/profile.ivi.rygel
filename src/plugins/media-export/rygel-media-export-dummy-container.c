/* rygel-media-export-dummy-container.c generated by valac 0.18.0, the Vala compiler
 * generated from rygel-media-export-dummy-container.vala, do not modify */

/*
 * Copyright (C) 2009,2010 Jens Georg <mail@jensge.org>.
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
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>


#define RYGEL_MEDIA_EXPORT_TYPE_DB_CONTAINER (rygel_media_export_db_container_get_type ())
#define RYGEL_MEDIA_EXPORT_DB_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_DB_CONTAINER, RygelMediaExportDBContainer))
#define RYGEL_MEDIA_EXPORT_DB_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIA_EXPORT_TYPE_DB_CONTAINER, RygelMediaExportDBContainerClass))
#define RYGEL_MEDIA_EXPORT_IS_DB_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_DB_CONTAINER))
#define RYGEL_MEDIA_EXPORT_IS_DB_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIA_EXPORT_TYPE_DB_CONTAINER))
#define RYGEL_MEDIA_EXPORT_DB_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIA_EXPORT_TYPE_DB_CONTAINER, RygelMediaExportDBContainerClass))

typedef struct _RygelMediaExportDBContainer RygelMediaExportDBContainer;
typedef struct _RygelMediaExportDBContainerClass RygelMediaExportDBContainerClass;
typedef struct _RygelMediaExportDBContainerPrivate RygelMediaExportDBContainerPrivate;

#define RYGEL_MEDIA_EXPORT_TYPE_MEDIA_CACHE (rygel_media_export_media_cache_get_type ())
#define RYGEL_MEDIA_EXPORT_MEDIA_CACHE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_MEDIA_CACHE, RygelMediaExportMediaCache))
#define RYGEL_MEDIA_EXPORT_MEDIA_CACHE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIA_EXPORT_TYPE_MEDIA_CACHE, RygelMediaExportMediaCacheClass))
#define RYGEL_MEDIA_EXPORT_IS_MEDIA_CACHE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_MEDIA_CACHE))
#define RYGEL_MEDIA_EXPORT_IS_MEDIA_CACHE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIA_EXPORT_TYPE_MEDIA_CACHE))
#define RYGEL_MEDIA_EXPORT_MEDIA_CACHE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIA_EXPORT_TYPE_MEDIA_CACHE, RygelMediaExportMediaCacheClass))

typedef struct _RygelMediaExportMediaCache RygelMediaExportMediaCache;
typedef struct _RygelMediaExportMediaCacheClass RygelMediaExportMediaCacheClass;

#define RYGEL_MEDIA_EXPORT_TYPE_TRACKABLE_DB_CONTAINER (rygel_media_export_trackable_db_container_get_type ())
#define RYGEL_MEDIA_EXPORT_TRACKABLE_DB_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_TRACKABLE_DB_CONTAINER, RygelMediaExportTrackableDbContainer))
#define RYGEL_MEDIA_EXPORT_TRACKABLE_DB_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIA_EXPORT_TYPE_TRACKABLE_DB_CONTAINER, RygelMediaExportTrackableDbContainerClass))
#define RYGEL_MEDIA_EXPORT_IS_TRACKABLE_DB_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_TRACKABLE_DB_CONTAINER))
#define RYGEL_MEDIA_EXPORT_IS_TRACKABLE_DB_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIA_EXPORT_TYPE_TRACKABLE_DB_CONTAINER))
#define RYGEL_MEDIA_EXPORT_TRACKABLE_DB_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIA_EXPORT_TYPE_TRACKABLE_DB_CONTAINER, RygelMediaExportTrackableDbContainerClass))

typedef struct _RygelMediaExportTrackableDbContainer RygelMediaExportTrackableDbContainer;
typedef struct _RygelMediaExportTrackableDbContainerClass RygelMediaExportTrackableDbContainerClass;
typedef struct _RygelMediaExportTrackableDbContainerPrivate RygelMediaExportTrackableDbContainerPrivate;

#define RYGEL_MEDIA_EXPORT_TYPE_DUMMY_CONTAINER (rygel_media_export_dummy_container_get_type ())
#define RYGEL_MEDIA_EXPORT_DUMMY_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIA_EXPORT_TYPE_DUMMY_CONTAINER, RygelMediaExportDummyContainer))
#define RYGEL_MEDIA_EXPORT_DUMMY_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIA_EXPORT_TYPE_DUMMY_CONTAINER, RygelMediaExportDummyContainerClass))
#define RYGEL_MEDIA_EXPORT_IS_DUMMY_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIA_EXPORT_TYPE_DUMMY_CONTAINER))
#define RYGEL_MEDIA_EXPORT_IS_DUMMY_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIA_EXPORT_TYPE_DUMMY_CONTAINER))
#define RYGEL_MEDIA_EXPORT_DUMMY_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIA_EXPORT_TYPE_DUMMY_CONTAINER, RygelMediaExportDummyContainerClass))

typedef struct _RygelMediaExportDummyContainer RygelMediaExportDummyContainer;
typedef struct _RygelMediaExportDummyContainerClass RygelMediaExportDummyContainerClass;
typedef struct _RygelMediaExportDummyContainerPrivate RygelMediaExportDummyContainerPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

struct _RygelMediaExportDBContainer {
	RygelMediaContainer parent_instance;
	RygelMediaExportDBContainerPrivate * priv;
	RygelMediaExportMediaCache* media_db;
};

struct _RygelMediaExportDBContainerClass {
	RygelMediaContainerClass parent_class;
	gint (*count_children) (RygelMediaExportDBContainer* self);
	void (*search) (RygelMediaExportDBContainer* self, RygelSearchExpression* expression, guint offset, guint max_count, const gchar* sort_criteria, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
	RygelMediaObjects* (*search_finish) (RygelMediaExportDBContainer* self, GAsyncResult* _res_, guint* total_matches, GError** error);
};

struct _RygelMediaExportTrackableDbContainer {
	RygelMediaExportDBContainer parent_instance;
	RygelMediaExportTrackableDbContainerPrivate * priv;
};

struct _RygelMediaExportTrackableDbContainerClass {
	RygelMediaExportDBContainerClass parent_class;
	gchar* (*get_service_reset_token) (RygelMediaExportTrackableDbContainer* self);
	void (*set_service_reset_token) (RygelMediaExportTrackableDbContainer* self, const gchar* token);
	guint32 (*get_system_update_id) (RygelMediaExportTrackableDbContainer* self);
};

struct _RygelMediaExportDummyContainer {
	RygelMediaExportTrackableDbContainer parent_instance;
	RygelMediaExportDummyContainerPrivate * priv;
	GFile* file;
	GeeList* children;
};

struct _RygelMediaExportDummyContainerClass {
	RygelMediaExportTrackableDbContainerClass parent_class;
};

typedef enum  {
	RYGEL_MEDIA_EXPORT_DATABASE_ERROR_IO_ERROR,
	RYGEL_MEDIA_EXPORT_DATABASE_ERROR_SQLITE_ERROR
} RygelMediaExportDatabaseError;
#define RYGEL_MEDIA_EXPORT_DATABASE_ERROR rygel_media_export_database_error_quark ()

static gpointer rygel_media_export_dummy_container_parent_class = NULL;

GType rygel_media_export_db_container_get_type (void) G_GNUC_CONST;
GType rygel_media_export_media_cache_get_type (void) G_GNUC_CONST;
GType rygel_media_export_trackable_db_container_get_type (void) G_GNUC_CONST;
GType rygel_media_export_dummy_container_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_MEDIA_EXPORT_DUMMY_CONTAINER_DUMMY_PROPERTY
};
RygelMediaExportDummyContainer* rygel_media_export_dummy_container_new (GFile* file, RygelMediaContainer* parent);
RygelMediaExportDummyContainer* rygel_media_export_dummy_container_construct (GType object_type, GFile* file, RygelMediaContainer* parent);
RygelMediaExportMediaCache* rygel_media_export_media_cache_get_default (void);
gchar* rygel_media_export_media_cache_get_id (GFile* file);
RygelMediaExportTrackableDbContainer* rygel_media_export_trackable_db_container_new (const gchar* id, const gchar* title);
RygelMediaExportTrackableDbContainer* rygel_media_export_trackable_db_container_construct (GType object_type, const gchar* id, const gchar* title);
void rygel_media_export_media_cache_get_track_properties (RygelMediaExportMediaCache* self, const gchar* id, guint32* object_update_id, guint32* container_update_id, guint32* total_deleted_child_count);
GQuark rygel_media_export_database_error_quark (void);
GeeArrayList* rygel_media_export_media_cache_get_child_ids (RygelMediaExportMediaCache* self, const gchar* container_id, GError** error);
void rygel_media_export_dummy_container_seen (RygelMediaExportDummyContainer* self, GFile* file);
static void rygel_media_export_dummy_container_finalize (GObject* obj);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


RygelMediaExportDummyContainer* rygel_media_export_dummy_container_construct (GType object_type, GFile* file, RygelMediaContainer* parent) {
	RygelMediaExportDummyContainer * self = NULL;
	RygelMediaExportMediaCache* _tmp0_ = NULL;
	RygelMediaExportMediaCache* cache;
	GFile* _tmp1_;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_;
	GFile* _tmp4_;
	gchar* _tmp5_ = NULL;
	gchar* _tmp6_;
	guint32 object_update_id = 0U;
	guint32 container_update_id = 0U;
	guint32 total_deleted_child_count = 0U;
	RygelMediaExportMediaCache* _tmp7_;
	const gchar* _tmp8_;
	const gchar* _tmp9_;
	guint32 _tmp10_ = 0U;
	guint32 _tmp11_ = 0U;
	guint32 _tmp12_ = 0U;
	RygelMediaContainer* _tmp13_;
	GFile* _tmp14_;
	GFile* _tmp15_;
	GeeArrayList* _tmp16_;
	GFile* _tmp17_;
	gchar* _tmp18_ = NULL;
	gchar* _tmp19_;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (file != NULL, NULL);
	g_return_val_if_fail (parent != NULL, NULL);
	_tmp0_ = rygel_media_export_media_cache_get_default ();
	cache = _tmp0_;
	_tmp1_ = file;
	_tmp2_ = rygel_media_export_media_cache_get_id (_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = file;
	_tmp5_ = g_file_get_basename (_tmp4_);
	_tmp6_ = _tmp5_;
	self = (RygelMediaExportDummyContainer*) rygel_media_export_trackable_db_container_construct (object_type, _tmp3_, _tmp6_);
	_g_free0 (_tmp6_);
	_g_free0 (_tmp3_);
	_tmp7_ = ((RygelMediaExportDBContainer*) self)->media_db;
	_tmp8_ = rygel_media_object_get_id ((RygelMediaObject*) self);
	_tmp9_ = _tmp8_;
	rygel_media_export_media_cache_get_track_properties (_tmp7_, _tmp9_, &_tmp10_, &_tmp11_, &_tmp12_);
	object_update_id = _tmp10_;
	container_update_id = _tmp11_;
	total_deleted_child_count = _tmp12_;
	rygel_media_object_set_object_update_id ((RygelMediaObject*) self, (guint) object_update_id);
	((RygelMediaContainer*) self)->update_id = container_update_id;
	((RygelMediaContainer*) self)->total_deleted_child_count = (gint64) total_deleted_child_count;
	_tmp13_ = parent;
	rygel_media_object_set_parent_ref ((RygelMediaObject*) self, _tmp13_);
	_tmp14_ = file;
	_tmp15_ = _g_object_ref0 (_tmp14_);
	_g_object_unref0 (self->file);
	self->file = _tmp15_;
	_tmp16_ = ((RygelMediaObject*) self)->uris;
	_tmp17_ = file;
	_tmp18_ = g_file_get_uri (_tmp17_);
	_tmp19_ = _tmp18_;
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp16_, _tmp19_);
	_g_free0 (_tmp19_);
	{
		const gchar* _tmp20_;
		const gchar* _tmp21_;
		GeeArrayList* _tmp22_ = NULL;
		GeeArrayList* _tmp23_;
		GeeList* _tmp24_;
		gint _tmp25_;
		gint _tmp26_;
		_tmp20_ = rygel_media_object_get_id ((RygelMediaObject*) self);
		_tmp21_ = _tmp20_;
		_tmp22_ = rygel_media_export_media_cache_get_child_ids (cache, _tmp21_, &_inner_error_);
		_tmp23_ = _tmp22_;
		if (_inner_error_ != NULL) {
			goto __catch36_g_error;
		}
		_g_object_unref0 (self->children);
		self->children = (GeeList*) _tmp23_;
		_tmp24_ = self->children;
		_tmp25_ = gee_collection_get_size ((GeeCollection*) _tmp24_);
		_tmp26_ = _tmp25_;
		rygel_media_container_set_child_count ((RygelMediaContainer*) self, _tmp26_);
	}
	goto __finally36;
	__catch36_g_error:
	{
		GError* _error_ = NULL;
		GeeArrayList* _tmp27_;
		_error_ = _inner_error_;
		_inner_error_ = NULL;
		_tmp27_ = gee_array_list_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL, NULL);
		_g_object_unref0 (self->children);
		self->children = (GeeList*) _tmp27_;
		rygel_media_container_set_child_count ((RygelMediaContainer*) self, 0);
		_g_error_free0 (_error_);
	}
	__finally36:
	if (_inner_error_ != NULL) {
		_g_object_unref0 (cache);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
	_g_object_unref0 (cache);
	return self;
}


RygelMediaExportDummyContainer* rygel_media_export_dummy_container_new (GFile* file, RygelMediaContainer* parent) {
	return rygel_media_export_dummy_container_construct (RYGEL_MEDIA_EXPORT_TYPE_DUMMY_CONTAINER, file, parent);
}


void rygel_media_export_dummy_container_seen (RygelMediaExportDummyContainer* self, GFile* file) {
	GeeList* _tmp0_;
	GFile* _tmp1_;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (file != NULL);
	_tmp0_ = self->children;
	_tmp1_ = file;
	_tmp2_ = rygel_media_export_media_cache_get_id (_tmp1_);
	_tmp3_ = _tmp2_;
	gee_collection_remove ((GeeCollection*) _tmp0_, _tmp3_);
	_g_free0 (_tmp3_);
}


static void rygel_media_export_dummy_container_class_init (RygelMediaExportDummyContainerClass * klass) {
	rygel_media_export_dummy_container_parent_class = g_type_class_peek_parent (klass);
	G_OBJECT_CLASS (klass)->finalize = rygel_media_export_dummy_container_finalize;
}


static void rygel_media_export_dummy_container_instance_init (RygelMediaExportDummyContainer * self) {
}


static void rygel_media_export_dummy_container_finalize (GObject* obj) {
	RygelMediaExportDummyContainer * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_MEDIA_EXPORT_TYPE_DUMMY_CONTAINER, RygelMediaExportDummyContainer);
	_g_object_unref0 (self->file);
	_g_object_unref0 (self->children);
	G_OBJECT_CLASS (rygel_media_export_dummy_container_parent_class)->finalize (obj);
}


GType rygel_media_export_dummy_container_get_type (void) {
	static volatile gsize rygel_media_export_dummy_container_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_media_export_dummy_container_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelMediaExportDummyContainerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_media_export_dummy_container_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelMediaExportDummyContainer), 0, (GInstanceInitFunc) rygel_media_export_dummy_container_instance_init, NULL };
		GType rygel_media_export_dummy_container_type_id;
		rygel_media_export_dummy_container_type_id = g_type_register_static (RYGEL_MEDIA_EXPORT_TYPE_TRACKABLE_DB_CONTAINER, "RygelMediaExportDummyContainer", &g_define_type_info, 0);
		g_once_init_leave (&rygel_media_export_dummy_container_type_id__volatile, rygel_media_export_dummy_container_type_id);
	}
	return rygel_media_export_dummy_container_type_id__volatile;
}



