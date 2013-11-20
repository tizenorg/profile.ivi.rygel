/* rygel-tracker-picture-item-factory.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-tracker-picture-item-factory.vala, do not modify */

/*
 * Copyright (C) 2008 Zeeshan Ali <zeenix@gmail.com>.
 * Copyright (C) 2008 Nokia Corporation.
 * Copyright (C) 2010 MediaNet Inh.
 *
 * Authors: Zeeshan Ali <zeenix@gmail.com>
 *          Sunil Mohan Adapa <sunil@medhas.org>
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
#include <rygel-server.h>
#include <libtracker-sparql/tracker-sparql.h>
#include <gee.h>
#include <rygel-core.h>


#define RYGEL_TRACKER_TYPE_ITEM_FACTORY (rygel_tracker_item_factory_get_type ())
#define RYGEL_TRACKER_ITEM_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_ITEM_FACTORY, RygelTrackerItemFactory))
#define RYGEL_TRACKER_ITEM_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_ITEM_FACTORY, RygelTrackerItemFactoryClass))
#define RYGEL_TRACKER_IS_ITEM_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_ITEM_FACTORY))
#define RYGEL_TRACKER_IS_ITEM_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_ITEM_FACTORY))
#define RYGEL_TRACKER_ITEM_FACTORY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_ITEM_FACTORY, RygelTrackerItemFactoryClass))

typedef struct _RygelTrackerItemFactory RygelTrackerItemFactory;
typedef struct _RygelTrackerItemFactoryClass RygelTrackerItemFactoryClass;
typedef struct _RygelTrackerItemFactoryPrivate RygelTrackerItemFactoryPrivate;

#define RYGEL_TRACKER_TYPE_SEARCH_CONTAINER (rygel_tracker_search_container_get_type ())
#define RYGEL_TRACKER_SEARCH_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER, RygelTrackerSearchContainer))
#define RYGEL_TRACKER_SEARCH_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER, RygelTrackerSearchContainerClass))
#define RYGEL_TRACKER_IS_SEARCH_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER))
#define RYGEL_TRACKER_IS_SEARCH_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER))
#define RYGEL_TRACKER_SEARCH_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_SEARCH_CONTAINER, RygelTrackerSearchContainerClass))

typedef struct _RygelTrackerSearchContainer RygelTrackerSearchContainer;
typedef struct _RygelTrackerSearchContainerClass RygelTrackerSearchContainerClass;

#define RYGEL_TRACKER_TYPE_PICTURE_ITEM_FACTORY (rygel_tracker_picture_item_factory_get_type ())
#define RYGEL_TRACKER_PICTURE_ITEM_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_PICTURE_ITEM_FACTORY, RygelTrackerPictureItemFactory))
#define RYGEL_TRACKER_PICTURE_ITEM_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_PICTURE_ITEM_FACTORY, RygelTrackerPictureItemFactoryClass))
#define RYGEL_TRACKER_IS_PICTURE_ITEM_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_PICTURE_ITEM_FACTORY))
#define RYGEL_TRACKER_IS_PICTURE_ITEM_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_PICTURE_ITEM_FACTORY))
#define RYGEL_TRACKER_PICTURE_ITEM_FACTORY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_PICTURE_ITEM_FACTORY, RygelTrackerPictureItemFactoryClass))

typedef struct _RygelTrackerPictureItemFactory RygelTrackerPictureItemFactory;
typedef struct _RygelTrackerPictureItemFactoryClass RygelTrackerPictureItemFactoryClass;
typedef struct _RygelTrackerPictureItemFactoryPrivate RygelTrackerPictureItemFactoryPrivate;

#define RYGEL_TRACKER_ITEM_FACTORY_TYPE_METADATA (rygel_tracker_item_factory_metadata_get_type ())

#define RYGEL_TRACKER_PICTURE_ITEM_FACTORY_TYPE_PICTURE_METADATA (rygel_tracker_picture_item_factory_picture_metadata_get_type ())
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

struct _RygelTrackerItemFactory {
	GTypeInstance parent_instance;
	volatile int ref_count;
	RygelTrackerItemFactoryPrivate * priv;
	gchar* category;
	gchar* category_iri;
	gchar* upnp_class;
	gchar* upload_dir;
	GeeArrayList* properties;
};

struct _RygelTrackerItemFactoryClass {
	GTypeClass parent_class;
	void (*finalize) (RygelTrackerItemFactory *self);
	RygelMediaItem* (*create) (RygelTrackerItemFactory* self, const gchar* id, const gchar* uri, RygelTrackerSearchContainer* parent, TrackerSparqlCursor* metadata, GError** error);
	void (*set_metadata) (RygelTrackerItemFactory* self, RygelMediaItem* item, const gchar* uri, TrackerSparqlCursor* metadata, GError** error);
};

struct _RygelTrackerPictureItemFactory {
	RygelTrackerItemFactory parent_instance;
	RygelTrackerPictureItemFactoryPrivate * priv;
};

struct _RygelTrackerPictureItemFactoryClass {
	RygelTrackerItemFactoryClass parent_class;
};

typedef enum  {
	RYGEL_TRACKER_ITEM_FACTORY_METADATA_TRACKER_ID,
	RYGEL_TRACKER_ITEM_FACTORY_METADATA_URL,
	RYGEL_TRACKER_ITEM_FACTORY_METADATA_PLACE_HOLDER,
	RYGEL_TRACKER_ITEM_FACTORY_METADATA_FILE_NAME,
	RYGEL_TRACKER_ITEM_FACTORY_METADATA_TITLE,
	RYGEL_TRACKER_ITEM_FACTORY_METADATA_DLNA_PROFILE,
	RYGEL_TRACKER_ITEM_FACTORY_METADATA_MIME,
	RYGEL_TRACKER_ITEM_FACTORY_METADATA_SIZE,
	RYGEL_TRACKER_ITEM_FACTORY_METADATA_DATE,
	RYGEL_TRACKER_ITEM_FACTORY_METADATA_LAST_KEY
} RygelTrackerItemFactoryMetadata;

typedef enum  {
	RYGEL_TRACKER_PICTURE_ITEM_FACTORY_PICTURE_METADATA_HEIGHT = RYGEL_TRACKER_ITEM_FACTORY_METADATA_LAST_KEY,
	RYGEL_TRACKER_PICTURE_ITEM_FACTORY_PICTURE_METADATA_WIDTH,
	RYGEL_TRACKER_PICTURE_ITEM_FACTORY_PICTURE_METADATA_LAST_KEY
} RygelTrackerPictureItemFactoryPictureMetadata;


static gpointer rygel_tracker_picture_item_factory_parent_class = NULL;

gpointer rygel_tracker_item_factory_ref (gpointer instance);
void rygel_tracker_item_factory_unref (gpointer instance);
GParamSpec* rygel_tracker_param_spec_item_factory (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_tracker_value_set_item_factory (GValue* value, gpointer v_object);
void rygel_tracker_value_take_item_factory (GValue* value, gpointer v_object);
gpointer rygel_tracker_value_get_item_factory (const GValue* value);
GType rygel_tracker_item_factory_get_type (void) G_GNUC_CONST;
GType rygel_tracker_search_container_get_type (void) G_GNUC_CONST;
GType rygel_tracker_picture_item_factory_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_TRACKER_PICTURE_ITEM_FACTORY_DUMMY_PROPERTY
};
GType rygel_tracker_item_factory_metadata_get_type (void) G_GNUC_CONST;
static GType rygel_tracker_picture_item_factory_picture_metadata_get_type (void) G_GNUC_UNUSED;
#define RYGEL_TRACKER_PICTURE_ITEM_FACTORY_CATEGORY "nmm:Photo"
#define RYGEL_TRACKER_PICTURE_ITEM_FACTORY_CATEGORY_IRI "http://www.tracker-project.org/" "temp/nmm#Photo"
RygelTrackerPictureItemFactory* rygel_tracker_picture_item_factory_new (void);
RygelTrackerPictureItemFactory* rygel_tracker_picture_item_factory_construct (GType object_type);
RygelTrackerItemFactory* rygel_tracker_item_factory_construct (GType object_type, const gchar* category, const gchar* category_iri, const gchar* upnp_class, const gchar* upload_dir);
static RygelMediaItem* rygel_tracker_picture_item_factory_real_create (RygelTrackerItemFactory* base, const gchar* id, const gchar* uri, RygelTrackerSearchContainer* parent, TrackerSparqlCursor* metadata, GError** error);
void rygel_tracker_item_factory_set_metadata (RygelTrackerItemFactory* self, RygelMediaItem* item, const gchar* uri, TrackerSparqlCursor* metadata, GError** error);
static void rygel_tracker_picture_item_factory_real_set_metadata (RygelTrackerItemFactory* base, RygelMediaItem* item, const gchar* uri, TrackerSparqlCursor* metadata, GError** error);
void rygel_tracker_item_factory_set_ref_id (RygelTrackerItemFactory* self, RygelMediaItem* item, const gchar* prefix);


static GType rygel_tracker_picture_item_factory_picture_metadata_get_type (void) {
	static volatile gsize rygel_tracker_picture_item_factory_picture_metadata_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_tracker_picture_item_factory_picture_metadata_type_id__volatile)) {
		static const GEnumValue values[] = {{RYGEL_TRACKER_PICTURE_ITEM_FACTORY_PICTURE_METADATA_HEIGHT, "RYGEL_TRACKER_PICTURE_ITEM_FACTORY_PICTURE_METADATA_HEIGHT", "height"}, {RYGEL_TRACKER_PICTURE_ITEM_FACTORY_PICTURE_METADATA_WIDTH, "RYGEL_TRACKER_PICTURE_ITEM_FACTORY_PICTURE_METADATA_WIDTH", "width"}, {RYGEL_TRACKER_PICTURE_ITEM_FACTORY_PICTURE_METADATA_LAST_KEY, "RYGEL_TRACKER_PICTURE_ITEM_FACTORY_PICTURE_METADATA_LAST_KEY", "last-key"}, {0, NULL, NULL}};
		GType rygel_tracker_picture_item_factory_picture_metadata_type_id;
		rygel_tracker_picture_item_factory_picture_metadata_type_id = g_enum_register_static ("RygelTrackerPictureItemFactoryPictureMetadata", values);
		g_once_init_leave (&rygel_tracker_picture_item_factory_picture_metadata_type_id__volatile, rygel_tracker_picture_item_factory_picture_metadata_type_id);
	}
	return rygel_tracker_picture_item_factory_picture_metadata_type_id__volatile;
}


RygelTrackerPictureItemFactory* rygel_tracker_picture_item_factory_construct (GType object_type) {
	RygelTrackerPictureItemFactory* self = NULL;
	gchar* upload_folder = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	const gchar* _tmp5_ = NULL;
	GeeArrayList* _tmp6_ = NULL;
	GeeArrayList* _tmp7_ = NULL;
	GError * _inner_error_ = NULL;
#line 45 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	_tmp0_ = g_get_user_special_dir (G_USER_DIRECTORY_PICTURES);
#line 45 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 45 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	upload_folder = _tmp1_;
#line 180 "rygel-tracker-picture-item-factory.c"
	{
		RygelMetaConfig* config = NULL;
		RygelMetaConfig* _tmp2_ = NULL;
		gchar* _tmp3_ = NULL;
		gchar* _tmp4_ = NULL;
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		_tmp2_ = rygel_meta_config_get_default ();
#line 48 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		config = _tmp2_;
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		_tmp4_ = rygel_configuration_get_picture_upload_folder ((RygelConfiguration*) config, &_inner_error_);
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		_tmp3_ = _tmp4_;
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		if (_inner_error_ != NULL) {
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
			_g_object_unref0 (config);
#line 198 "rygel-tracker-picture-item-factory.c"
			goto __catch13_g_error;
		}
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		_g_free0 (upload_folder);
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		upload_folder = _tmp3_;
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		_g_object_unref0 (config);
#line 207 "rygel-tracker-picture-item-factory.c"
	}
	goto __finally13;
	__catch13_g_error:
	{
		GError* _error_ = NULL;
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		_error_ = _inner_error_;
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		_inner_error_ = NULL;
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		_g_error_free0 (_error_);
#line 219 "rygel-tracker-picture-item-factory.c"
	}
	__finally13:
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	if (_inner_error_ != NULL) {
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		_g_free0 (upload_folder);
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		g_clear_error (&_inner_error_);
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		return NULL;
#line 232 "rygel-tracker-picture-item-factory.c"
	}
#line 52 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	_tmp5_ = upload_folder;
#line 52 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	self = (RygelTrackerPictureItemFactory*) rygel_tracker_item_factory_construct (object_type, RYGEL_TRACKER_PICTURE_ITEM_FACTORY_CATEGORY, RYGEL_TRACKER_PICTURE_ITEM_FACTORY_CATEGORY_IRI, RYGEL_PHOTO_ITEM_UPNP_CLASS, _tmp5_);
#line 55 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	_tmp6_ = ((RygelTrackerItemFactory*) self)->properties;
#line 55 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp6_, "height");
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	_tmp7_ = ((RygelTrackerItemFactory*) self)->properties;
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp7_, "width");
#line 44 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	_g_free0 (upload_folder);
#line 44 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	return self;
#line 250 "rygel-tracker-picture-item-factory.c"
}


RygelTrackerPictureItemFactory* rygel_tracker_picture_item_factory_new (void) {
#line 44 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	return rygel_tracker_picture_item_factory_construct (RYGEL_TRACKER_TYPE_PICTURE_ITEM_FACTORY);
#line 257 "rygel-tracker-picture-item-factory.c"
}


static RygelMediaItem* rygel_tracker_picture_item_factory_real_create (RygelTrackerItemFactory* base, const gchar* id, const gchar* uri, RygelTrackerSearchContainer* parent, TrackerSparqlCursor* metadata, GError** error) {
	RygelTrackerPictureItemFactory * self;
	RygelMediaItem* result = NULL;
	RygelPhotoItem* item = NULL;
	const gchar* _tmp0_ = NULL;
	RygelTrackerSearchContainer* _tmp1_ = NULL;
	RygelPhotoItem* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	TrackerSparqlCursor* _tmp4_ = NULL;
	GError * _inner_error_ = NULL;
#line 59 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	self = (RygelTrackerPictureItemFactory*) base;
#line 59 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	g_return_val_if_fail (id != NULL, NULL);
#line 59 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	g_return_val_if_fail (uri != NULL, NULL);
#line 59 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	g_return_val_if_fail (parent != NULL, NULL);
#line 59 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	g_return_val_if_fail (metadata != NULL, NULL);
#line 64 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	_tmp0_ = id;
#line 64 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	_tmp1_ = parent;
#line 64 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	_tmp2_ = rygel_photo_item_new (_tmp0_, (RygelMediaContainer*) _tmp1_, "", RYGEL_PHOTO_ITEM_UPNP_CLASS);
#line 64 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	item = _tmp2_;
#line 66 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	_tmp3_ = uri;
#line 66 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	_tmp4_ = metadata;
#line 66 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	rygel_tracker_item_factory_set_metadata ((RygelTrackerItemFactory*) self, (RygelMediaItem*) item, _tmp3_, _tmp4_, &_inner_error_);
#line 66 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	if (_inner_error_ != NULL) {
#line 66 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		g_propagate_error (error, _inner_error_);
#line 66 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		_g_object_unref0 (item);
#line 66 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		return NULL;
#line 303 "rygel-tracker-picture-item-factory.c"
	}
#line 68 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	result = (RygelMediaItem*) item;
#line 68 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	return result;
#line 309 "rygel-tracker-picture-item-factory.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 79 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	return self ? g_object_ref (self) : NULL;
#line 316 "rygel-tracker-picture-item-factory.c"
}


static void rygel_tracker_picture_item_factory_real_set_metadata (RygelTrackerItemFactory* base, RygelMediaItem* item, const gchar* uri, TrackerSparqlCursor* metadata, GError** error) {
	RygelTrackerPictureItemFactory * self;
	RygelMediaItem* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	TrackerSparqlCursor* _tmp2_ = NULL;
	RygelMediaItem* _tmp3_ = NULL;
	RygelPhotoItem* photo = NULL;
	RygelMediaItem* _tmp4_ = NULL;
	RygelPhotoItem* _tmp5_ = NULL;
	TrackerSparqlCursor* _tmp6_ = NULL;
	gboolean _tmp7_ = FALSE;
	TrackerSparqlCursor* _tmp11_ = NULL;
	gboolean _tmp12_ = FALSE;
	GError * _inner_error_ = NULL;
#line 71 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	self = (RygelTrackerPictureItemFactory*) base;
#line 71 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	g_return_if_fail (item != NULL);
#line 71 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	g_return_if_fail (uri != NULL);
#line 71 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	g_return_if_fail (metadata != NULL);
#line 75 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	_tmp0_ = item;
#line 75 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	_tmp1_ = uri;
#line 75 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	_tmp2_ = metadata;
#line 75 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	RYGEL_TRACKER_ITEM_FACTORY_CLASS (rygel_tracker_picture_item_factory_parent_class)->set_metadata (G_TYPE_CHECK_INSTANCE_CAST (self, RYGEL_TRACKER_TYPE_ITEM_FACTORY, RygelTrackerItemFactory), _tmp0_, _tmp1_, _tmp2_, &_inner_error_);
#line 75 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	if (_inner_error_ != NULL) {
#line 75 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		g_propagate_error (error, _inner_error_);
#line 75 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		return;
#line 356 "rygel-tracker-picture-item-factory.c"
	}
#line 77 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	_tmp3_ = item;
#line 77 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	rygel_tracker_item_factory_set_ref_id ((RygelTrackerItemFactory*) self, _tmp3_, "AllPictures");
#line 79 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	_tmp4_ = item;
#line 79 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	_tmp5_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp4_, RYGEL_TYPE_PHOTO_ITEM) ? ((RygelPhotoItem*) _tmp4_) : NULL);
#line 79 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	photo = _tmp5_;
#line 81 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	_tmp6_ = metadata;
#line 81 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	_tmp7_ = tracker_sparql_cursor_is_bound (_tmp6_, (gint) RYGEL_TRACKER_PICTURE_ITEM_FACTORY_PICTURE_METADATA_WIDTH);
#line 81 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	if (_tmp7_) {
#line 374 "rygel-tracker-picture-item-factory.c"
		RygelPhotoItem* _tmp8_ = NULL;
		TrackerSparqlCursor* _tmp9_ = NULL;
		gint64 _tmp10_ = 0LL;
#line 82 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		_tmp8_ = photo;
#line 82 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		_tmp9_ = metadata;
#line 82 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		_tmp10_ = tracker_sparql_cursor_get_integer (_tmp9_, (gint) RYGEL_TRACKER_PICTURE_ITEM_FACTORY_PICTURE_METADATA_WIDTH);
#line 82 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		rygel_visual_item_set_width ((RygelVisualItem*) _tmp8_, (gint) _tmp10_);
#line 386 "rygel-tracker-picture-item-factory.c"
	}
#line 85 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	_tmp11_ = metadata;
#line 85 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	_tmp12_ = tracker_sparql_cursor_is_bound (_tmp11_, (gint) RYGEL_TRACKER_PICTURE_ITEM_FACTORY_PICTURE_METADATA_HEIGHT);
#line 85 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	if (_tmp12_) {
#line 394 "rygel-tracker-picture-item-factory.c"
		RygelPhotoItem* _tmp13_ = NULL;
		TrackerSparqlCursor* _tmp14_ = NULL;
		gint64 _tmp15_ = 0LL;
#line 86 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		_tmp13_ = photo;
#line 86 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		_tmp14_ = metadata;
#line 86 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		_tmp15_ = tracker_sparql_cursor_get_integer (_tmp14_, (gint) RYGEL_TRACKER_PICTURE_ITEM_FACTORY_PICTURE_METADATA_HEIGHT);
#line 86 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
		rygel_visual_item_set_height ((RygelVisualItem*) _tmp13_, (gint) _tmp15_);
#line 406 "rygel-tracker-picture-item-factory.c"
	}
#line 71 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	_g_object_unref0 (photo);
#line 410 "rygel-tracker-picture-item-factory.c"
}


static void rygel_tracker_picture_item_factory_class_init (RygelTrackerPictureItemFactoryClass * klass) {
#line 32 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	rygel_tracker_picture_item_factory_parent_class = g_type_class_peek_parent (klass);
#line 32 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	RYGEL_TRACKER_ITEM_FACTORY_CLASS (klass)->create = rygel_tracker_picture_item_factory_real_create;
#line 32 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-picture-item-factory.vala"
	RYGEL_TRACKER_ITEM_FACTORY_CLASS (klass)->set_metadata = rygel_tracker_picture_item_factory_real_set_metadata;
#line 421 "rygel-tracker-picture-item-factory.c"
}


static void rygel_tracker_picture_item_factory_instance_init (RygelTrackerPictureItemFactory * self) {
}


/**
 * Tracker picture item factory.
 */
GType rygel_tracker_picture_item_factory_get_type (void) {
	static volatile gsize rygel_tracker_picture_item_factory_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_tracker_picture_item_factory_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelTrackerPictureItemFactoryClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_tracker_picture_item_factory_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelTrackerPictureItemFactory), 0, (GInstanceInitFunc) rygel_tracker_picture_item_factory_instance_init, NULL };
		GType rygel_tracker_picture_item_factory_type_id;
		rygel_tracker_picture_item_factory_type_id = g_type_register_static (RYGEL_TRACKER_TYPE_ITEM_FACTORY, "RygelTrackerPictureItemFactory", &g_define_type_info, 0);
		g_once_init_leave (&rygel_tracker_picture_item_factory_type_id__volatile, rygel_tracker_picture_item_factory_type_id);
	}
	return rygel_tracker_picture_item_factory_type_id__volatile;
}



