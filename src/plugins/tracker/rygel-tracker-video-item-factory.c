/* rygel-tracker-video-item-factory.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-tracker-video-item-factory.vala, do not modify */

/*
 * Copyright (C) 2008 Zeeshan Ali <zeenix@gmail.com>.
 * Copyright (C) 2008-2012 Nokia Corporation.
 * Copyright (C) 2010 MediaNet Inh.
 *
 * Authors: Zeeshan Ali <zeenix@gmail.com>
 *          Sunil Mohan Adapa <sunil@medhas.org>
 *          Jens Georg <jensg@openismus.com>
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

#define RYGEL_TRACKER_TYPE_VIDEO_ITEM_FACTORY (rygel_tracker_video_item_factory_get_type ())
#define RYGEL_TRACKER_VIDEO_ITEM_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_VIDEO_ITEM_FACTORY, RygelTrackerVideoItemFactory))
#define RYGEL_TRACKER_VIDEO_ITEM_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_VIDEO_ITEM_FACTORY, RygelTrackerVideoItemFactoryClass))
#define RYGEL_TRACKER_IS_VIDEO_ITEM_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_VIDEO_ITEM_FACTORY))
#define RYGEL_TRACKER_IS_VIDEO_ITEM_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_VIDEO_ITEM_FACTORY))
#define RYGEL_TRACKER_VIDEO_ITEM_FACTORY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_VIDEO_ITEM_FACTORY, RygelTrackerVideoItemFactoryClass))

typedef struct _RygelTrackerVideoItemFactory RygelTrackerVideoItemFactory;
typedef struct _RygelTrackerVideoItemFactoryClass RygelTrackerVideoItemFactoryClass;
typedef struct _RygelTrackerVideoItemFactoryPrivate RygelTrackerVideoItemFactoryPrivate;

#define RYGEL_TRACKER_ITEM_FACTORY_TYPE_METADATA (rygel_tracker_item_factory_metadata_get_type ())

#define RYGEL_TRACKER_VIDEO_ITEM_FACTORY_TYPE_VIDEO_METADATA (rygel_tracker_video_item_factory_video_metadata_get_type ())
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

struct _RygelTrackerVideoItemFactory {
	RygelTrackerItemFactory parent_instance;
	RygelTrackerVideoItemFactoryPrivate * priv;
};

struct _RygelTrackerVideoItemFactoryClass {
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
	RYGEL_TRACKER_VIDEO_ITEM_FACTORY_VIDEO_METADATA_HEIGHT = RYGEL_TRACKER_ITEM_FACTORY_METADATA_LAST_KEY,
	RYGEL_TRACKER_VIDEO_ITEM_FACTORY_VIDEO_METADATA_WIDTH,
	RYGEL_TRACKER_VIDEO_ITEM_FACTORY_VIDEO_METADATA_DURATION,
	RYGEL_TRACKER_VIDEO_ITEM_FACTORY_VIDEO_METADATA_LAST_KEY
} RygelTrackerVideoItemFactoryVideoMetadata;


static gpointer rygel_tracker_video_item_factory_parent_class = NULL;

gpointer rygel_tracker_item_factory_ref (gpointer instance);
void rygel_tracker_item_factory_unref (gpointer instance);
GParamSpec* rygel_tracker_param_spec_item_factory (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_tracker_value_set_item_factory (GValue* value, gpointer v_object);
void rygel_tracker_value_take_item_factory (GValue* value, gpointer v_object);
gpointer rygel_tracker_value_get_item_factory (const GValue* value);
GType rygel_tracker_item_factory_get_type (void) G_GNUC_CONST;
GType rygel_tracker_search_container_get_type (void) G_GNUC_CONST;
GType rygel_tracker_video_item_factory_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_TRACKER_VIDEO_ITEM_FACTORY_DUMMY_PROPERTY
};
GType rygel_tracker_item_factory_metadata_get_type (void) G_GNUC_CONST;
static GType rygel_tracker_video_item_factory_video_metadata_get_type (void) G_GNUC_UNUSED;
#define RYGEL_TRACKER_VIDEO_ITEM_FACTORY_CATEGORY "nmm:Video"
#define RYGEL_TRACKER_VIDEO_ITEM_FACTORY_CATEGORY_IRI "http://www.tracker-project.org/" "temp/nmm#Video"
RygelTrackerVideoItemFactory* rygel_tracker_video_item_factory_new (void);
RygelTrackerVideoItemFactory* rygel_tracker_video_item_factory_construct (GType object_type);
RygelTrackerItemFactory* rygel_tracker_item_factory_construct (GType object_type, const gchar* category, const gchar* category_iri, const gchar* upnp_class, const gchar* upload_dir);
static RygelMediaItem* rygel_tracker_video_item_factory_real_create (RygelTrackerItemFactory* base, const gchar* id, const gchar* uri, RygelTrackerSearchContainer* parent, TrackerSparqlCursor* metadata, GError** error);
void rygel_tracker_item_factory_set_metadata (RygelTrackerItemFactory* self, RygelMediaItem* item, const gchar* uri, TrackerSparqlCursor* metadata, GError** error);
static void rygel_tracker_video_item_factory_real_set_metadata (RygelTrackerItemFactory* base, RygelMediaItem* item, const gchar* uri, TrackerSparqlCursor* metadata, GError** error);
void rygel_tracker_item_factory_set_ref_id (RygelTrackerItemFactory* self, RygelMediaItem* item, const gchar* prefix);


static GType rygel_tracker_video_item_factory_video_metadata_get_type (void) {
	static volatile gsize rygel_tracker_video_item_factory_video_metadata_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_tracker_video_item_factory_video_metadata_type_id__volatile)) {
		static const GEnumValue values[] = {{RYGEL_TRACKER_VIDEO_ITEM_FACTORY_VIDEO_METADATA_HEIGHT, "RYGEL_TRACKER_VIDEO_ITEM_FACTORY_VIDEO_METADATA_HEIGHT", "height"}, {RYGEL_TRACKER_VIDEO_ITEM_FACTORY_VIDEO_METADATA_WIDTH, "RYGEL_TRACKER_VIDEO_ITEM_FACTORY_VIDEO_METADATA_WIDTH", "width"}, {RYGEL_TRACKER_VIDEO_ITEM_FACTORY_VIDEO_METADATA_DURATION, "RYGEL_TRACKER_VIDEO_ITEM_FACTORY_VIDEO_METADATA_DURATION", "duration"}, {RYGEL_TRACKER_VIDEO_ITEM_FACTORY_VIDEO_METADATA_LAST_KEY, "RYGEL_TRACKER_VIDEO_ITEM_FACTORY_VIDEO_METADATA_LAST_KEY", "last-key"}, {0, NULL, NULL}};
		GType rygel_tracker_video_item_factory_video_metadata_type_id;
		rygel_tracker_video_item_factory_video_metadata_type_id = g_enum_register_static ("RygelTrackerVideoItemFactoryVideoMetadata", values);
		g_once_init_leave (&rygel_tracker_video_item_factory_video_metadata_type_id__volatile, rygel_tracker_video_item_factory_video_metadata_type_id);
	}
	return rygel_tracker_video_item_factory_video_metadata_type_id__volatile;
}


RygelTrackerVideoItemFactory* rygel_tracker_video_item_factory_construct (GType object_type) {
	RygelTrackerVideoItemFactory* self = NULL;
	gchar* upload_folder = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	const gchar* _tmp5_ = NULL;
	GeeArrayList* _tmp6_ = NULL;
	GeeArrayList* _tmp7_ = NULL;
	GeeArrayList* _tmp8_ = NULL;
	GError * _inner_error_ = NULL;
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_tmp0_ = g_get_user_special_dir (G_USER_DIRECTORY_VIDEOS);
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	upload_folder = _tmp1_;
#line 183 "rygel-tracker-video-item-factory.c"
	{
		RygelMetaConfig* config = NULL;
		RygelMetaConfig* _tmp2_ = NULL;
		gchar* _tmp3_ = NULL;
		gchar* _tmp4_ = NULL;
#line 50 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		_tmp2_ = rygel_meta_config_get_default ();
#line 50 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		config = _tmp2_;
#line 51 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		_tmp4_ = rygel_configuration_get_video_upload_folder ((RygelConfiguration*) config, &_inner_error_);
#line 51 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		_tmp3_ = _tmp4_;
#line 51 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		if (_inner_error_ != NULL) {
#line 51 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
			_g_object_unref0 (config);
#line 201 "rygel-tracker-video-item-factory.c"
			goto __catch11_g_error;
		}
#line 51 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		_g_free0 (upload_folder);
#line 51 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		upload_folder = _tmp3_;
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		_g_object_unref0 (config);
#line 210 "rygel-tracker-video-item-factory.c"
	}
	goto __finally11;
	__catch11_g_error:
	{
		GError* _error_ = NULL;
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		_error_ = _inner_error_;
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		_inner_error_ = NULL;
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		_g_error_free0 (_error_);
#line 222 "rygel-tracker-video-item-factory.c"
	}
	__finally11:
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	if (_inner_error_ != NULL) {
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		_g_free0 (upload_folder);
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		g_clear_error (&_inner_error_);
#line 49 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		return NULL;
#line 235 "rygel-tracker-video-item-factory.c"
	}
#line 54 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_tmp5_ = upload_folder;
#line 54 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	self = (RygelTrackerVideoItemFactory*) rygel_tracker_item_factory_construct (object_type, RYGEL_TRACKER_VIDEO_ITEM_FACTORY_CATEGORY, RYGEL_TRACKER_VIDEO_ITEM_FACTORY_CATEGORY_IRI, RYGEL_VIDEO_ITEM_UPNP_CLASS, _tmp5_);
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_tmp6_ = ((RygelTrackerItemFactory*) self)->properties;
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp6_, "height");
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_tmp7_ = ((RygelTrackerItemFactory*) self)->properties;
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp7_, "width");
#line 59 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_tmp8_ = ((RygelTrackerItemFactory*) self)->properties;
#line 59 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp8_, "res@duration");
#line 46 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_g_free0 (upload_folder);
#line 46 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	return self;
#line 257 "rygel-tracker-video-item-factory.c"
}


RygelTrackerVideoItemFactory* rygel_tracker_video_item_factory_new (void) {
#line 46 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	return rygel_tracker_video_item_factory_construct (RYGEL_TRACKER_TYPE_VIDEO_ITEM_FACTORY);
#line 264 "rygel-tracker-video-item-factory.c"
}


static RygelMediaItem* rygel_tracker_video_item_factory_real_create (RygelTrackerItemFactory* base, const gchar* id, const gchar* uri, RygelTrackerSearchContainer* parent, TrackerSparqlCursor* metadata, GError** error) {
	RygelTrackerVideoItemFactory * self;
	RygelMediaItem* result = NULL;
	RygelVideoItem* item = NULL;
	const gchar* _tmp0_ = NULL;
	RygelTrackerSearchContainer* _tmp1_ = NULL;
	RygelVideoItem* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	TrackerSparqlCursor* _tmp4_ = NULL;
	GError * _inner_error_ = NULL;
#line 62 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	self = (RygelTrackerVideoItemFactory*) base;
#line 62 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	g_return_val_if_fail (id != NULL, NULL);
#line 62 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	g_return_val_if_fail (uri != NULL, NULL);
#line 62 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	g_return_val_if_fail (parent != NULL, NULL);
#line 62 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	g_return_val_if_fail (metadata != NULL, NULL);
#line 67 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_tmp0_ = id;
#line 67 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_tmp1_ = parent;
#line 67 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_tmp2_ = rygel_video_item_new (_tmp0_, (RygelMediaContainer*) _tmp1_, "", RYGEL_VIDEO_ITEM_UPNP_CLASS);
#line 67 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	item = _tmp2_;
#line 69 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_tmp3_ = uri;
#line 69 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_tmp4_ = metadata;
#line 69 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	rygel_tracker_item_factory_set_metadata ((RygelTrackerItemFactory*) self, (RygelMediaItem*) item, _tmp3_, _tmp4_, &_inner_error_);
#line 69 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	if (_inner_error_ != NULL) {
#line 69 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		g_propagate_error (error, _inner_error_);
#line 69 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		_g_object_unref0 (item);
#line 69 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		return NULL;
#line 310 "rygel-tracker-video-item-factory.c"
	}
#line 71 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	result = (RygelMediaItem*) item;
#line 71 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	return result;
#line 316 "rygel-tracker-video-item-factory.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 82 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	return self ? g_object_ref (self) : NULL;
#line 323 "rygel-tracker-video-item-factory.c"
}


static void rygel_tracker_video_item_factory_real_set_metadata (RygelTrackerItemFactory* base, RygelMediaItem* item, const gchar* uri, TrackerSparqlCursor* metadata, GError** error) {
	RygelTrackerVideoItemFactory * self;
	RygelMediaItem* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	TrackerSparqlCursor* _tmp2_ = NULL;
	RygelMediaItem* _tmp3_ = NULL;
	RygelVideoItem* video = NULL;
	RygelMediaItem* _tmp4_ = NULL;
	RygelVideoItem* _tmp5_ = NULL;
	TrackerSparqlCursor* _tmp6_ = NULL;
	gboolean _tmp7_ = FALSE;
	TrackerSparqlCursor* _tmp11_ = NULL;
	gboolean _tmp12_ = FALSE;
	TrackerSparqlCursor* _tmp16_ = NULL;
	gboolean _tmp17_ = FALSE;
	GError * _inner_error_ = NULL;
#line 74 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	self = (RygelTrackerVideoItemFactory*) base;
#line 74 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	g_return_if_fail (item != NULL);
#line 74 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	g_return_if_fail (uri != NULL);
#line 74 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	g_return_if_fail (metadata != NULL);
#line 78 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_tmp0_ = item;
#line 78 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_tmp1_ = uri;
#line 78 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_tmp2_ = metadata;
#line 78 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	RYGEL_TRACKER_ITEM_FACTORY_CLASS (rygel_tracker_video_item_factory_parent_class)->set_metadata (G_TYPE_CHECK_INSTANCE_CAST (self, RYGEL_TRACKER_TYPE_ITEM_FACTORY, RygelTrackerItemFactory), _tmp0_, _tmp1_, _tmp2_, &_inner_error_);
#line 78 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	if (_inner_error_ != NULL) {
#line 78 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		g_propagate_error (error, _inner_error_);
#line 78 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		return;
#line 365 "rygel-tracker-video-item-factory.c"
	}
#line 80 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_tmp3_ = item;
#line 80 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	rygel_tracker_item_factory_set_ref_id ((RygelTrackerItemFactory*) self, _tmp3_, "AllVideos");
#line 82 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_tmp4_ = item;
#line 82 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_tmp5_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp4_, RYGEL_TYPE_VIDEO_ITEM) ? ((RygelVideoItem*) _tmp4_) : NULL);
#line 82 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	video = _tmp5_;
#line 84 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_tmp6_ = metadata;
#line 84 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_tmp7_ = tracker_sparql_cursor_is_bound (_tmp6_, (gint) RYGEL_TRACKER_VIDEO_ITEM_FACTORY_VIDEO_METADATA_WIDTH);
#line 84 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	if (_tmp7_) {
#line 383 "rygel-tracker-video-item-factory.c"
		RygelVideoItem* _tmp8_ = NULL;
		TrackerSparqlCursor* _tmp9_ = NULL;
		gint64 _tmp10_ = 0LL;
#line 85 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		_tmp8_ = video;
#line 85 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		_tmp9_ = metadata;
#line 85 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		_tmp10_ = tracker_sparql_cursor_get_integer (_tmp9_, (gint) RYGEL_TRACKER_VIDEO_ITEM_FACTORY_VIDEO_METADATA_WIDTH);
#line 85 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		rygel_visual_item_set_width ((RygelVisualItem*) _tmp8_, (gint) _tmp10_);
#line 395 "rygel-tracker-video-item-factory.c"
	}
#line 87 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_tmp11_ = metadata;
#line 87 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_tmp12_ = tracker_sparql_cursor_is_bound (_tmp11_, (gint) RYGEL_TRACKER_VIDEO_ITEM_FACTORY_VIDEO_METADATA_HEIGHT);
#line 87 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	if (_tmp12_) {
#line 403 "rygel-tracker-video-item-factory.c"
		RygelVideoItem* _tmp13_ = NULL;
		TrackerSparqlCursor* _tmp14_ = NULL;
		gint64 _tmp15_ = 0LL;
#line 88 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		_tmp13_ = video;
#line 88 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		_tmp14_ = metadata;
#line 88 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		_tmp15_ = tracker_sparql_cursor_get_integer (_tmp14_, (gint) RYGEL_TRACKER_VIDEO_ITEM_FACTORY_VIDEO_METADATA_HEIGHT);
#line 88 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		rygel_visual_item_set_height ((RygelVisualItem*) _tmp13_, (gint) _tmp15_);
#line 415 "rygel-tracker-video-item-factory.c"
	}
#line 90 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_tmp16_ = metadata;
#line 90 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_tmp17_ = tracker_sparql_cursor_is_bound (_tmp16_, (gint) RYGEL_TRACKER_VIDEO_ITEM_FACTORY_VIDEO_METADATA_DURATION);
#line 90 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	if (_tmp17_) {
#line 423 "rygel-tracker-video-item-factory.c"
		RygelVideoItem* _tmp18_ = NULL;
		TrackerSparqlCursor* _tmp19_ = NULL;
		gint64 _tmp20_ = 0LL;
#line 91 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		_tmp18_ = video;
#line 91 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		_tmp19_ = metadata;
#line 91 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		_tmp20_ = tracker_sparql_cursor_get_integer (_tmp19_, (gint) RYGEL_TRACKER_VIDEO_ITEM_FACTORY_VIDEO_METADATA_DURATION);
#line 91 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
		rygel_audio_item_set_duration ((RygelAudioItem*) _tmp18_, (glong) ((gint) _tmp20_));
#line 435 "rygel-tracker-video-item-factory.c"
	}
#line 74 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	_g_object_unref0 (video);
#line 439 "rygel-tracker-video-item-factory.c"
}


static void rygel_tracker_video_item_factory_class_init (RygelTrackerVideoItemFactoryClass * klass) {
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	rygel_tracker_video_item_factory_parent_class = g_type_class_peek_parent (klass);
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	RYGEL_TRACKER_ITEM_FACTORY_CLASS (klass)->create = rygel_tracker_video_item_factory_real_create;
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/plugins/tracker/rygel-tracker-video-item-factory.vala"
	RYGEL_TRACKER_ITEM_FACTORY_CLASS (klass)->set_metadata = rygel_tracker_video_item_factory_real_set_metadata;
#line 450 "rygel-tracker-video-item-factory.c"
}


static void rygel_tracker_video_item_factory_instance_init (RygelTrackerVideoItemFactory * self) {
}


/**
 * Tracker video item factory.
 */
GType rygel_tracker_video_item_factory_get_type (void) {
	static volatile gsize rygel_tracker_video_item_factory_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_tracker_video_item_factory_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelTrackerVideoItemFactoryClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_tracker_video_item_factory_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelTrackerVideoItemFactory), 0, (GInstanceInitFunc) rygel_tracker_video_item_factory_instance_init, NULL };
		GType rygel_tracker_video_item_factory_type_id;
		rygel_tracker_video_item_factory_type_id = g_type_register_static (RYGEL_TRACKER_TYPE_ITEM_FACTORY, "RygelTrackerVideoItemFactory", &g_define_type_info, 0);
		g_once_init_leave (&rygel_tracker_video_item_factory_type_id__volatile, rygel_tracker_video_item_factory_type_id);
	}
	return rygel_tracker_video_item_factory_type_id__volatile;
}



