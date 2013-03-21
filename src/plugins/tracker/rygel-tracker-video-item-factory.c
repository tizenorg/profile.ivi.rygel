/* rygel-tracker-video-item-factory.c generated by valac 0.18.0, the Vala compiler
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
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_;
	gchar* upload_folder;
	const gchar* _tmp5_;
	GeeArrayList* _tmp6_;
	GeeArrayList* _tmp7_;
	GeeArrayList* _tmp8_;
	GError * _inner_error_ = NULL;
	_tmp0_ = g_get_user_special_dir (G_USER_DIRECTORY_VIDEOS);
	_tmp1_ = g_strdup (_tmp0_);
	upload_folder = _tmp1_;
	{
		RygelMetaConfig* _tmp2_ = NULL;
		RygelMetaConfig* config;
		gchar* _tmp3_ = NULL;
		gchar* _tmp4_;
		_tmp2_ = rygel_meta_config_get_default ();
		config = _tmp2_;
		_tmp3_ = rygel_configuration_get_video_upload_folder ((RygelConfiguration*) config, &_inner_error_);
		_tmp4_ = _tmp3_;
		if (_inner_error_ != NULL) {
			_g_object_unref0 (config);
			goto __catch11_g_error;
		}
		_g_free0 (upload_folder);
		upload_folder = _tmp4_;
		_g_object_unref0 (config);
	}
	goto __finally11;
	__catch11_g_error:
	{
		GError* _error_ = NULL;
		_error_ = _inner_error_;
		_inner_error_ = NULL;
		_g_error_free0 (_error_);
	}
	__finally11:
	if (_inner_error_ != NULL) {
		_g_free0 (upload_folder);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
	_tmp5_ = upload_folder;
	self = (RygelTrackerVideoItemFactory*) rygel_tracker_item_factory_construct (object_type, RYGEL_TRACKER_VIDEO_ITEM_FACTORY_CATEGORY, RYGEL_TRACKER_VIDEO_ITEM_FACTORY_CATEGORY_IRI, RYGEL_VIDEO_ITEM_UPNP_CLASS, _tmp5_);
	_tmp6_ = ((RygelTrackerItemFactory*) self)->properties;
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp6_, "height");
	_tmp7_ = ((RygelTrackerItemFactory*) self)->properties;
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp7_, "width");
	_tmp8_ = ((RygelTrackerItemFactory*) self)->properties;
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp8_, "res@duration");
	_g_free0 (upload_folder);
	return self;
}


RygelTrackerVideoItemFactory* rygel_tracker_video_item_factory_new (void) {
	return rygel_tracker_video_item_factory_construct (RYGEL_TRACKER_TYPE_VIDEO_ITEM_FACTORY);
}


static RygelMediaItem* rygel_tracker_video_item_factory_real_create (RygelTrackerItemFactory* base, const gchar* id, const gchar* uri, RygelTrackerSearchContainer* parent, TrackerSparqlCursor* metadata, GError** error) {
	RygelTrackerVideoItemFactory * self;
	RygelMediaItem* result = NULL;
	const gchar* _tmp0_;
	RygelTrackerSearchContainer* _tmp1_;
	RygelVideoItem* _tmp2_;
	RygelVideoItem* item;
	const gchar* _tmp3_;
	TrackerSparqlCursor* _tmp4_;
	GError * _inner_error_ = NULL;
	self = (RygelTrackerVideoItemFactory*) base;
	g_return_val_if_fail (id != NULL, NULL);
	g_return_val_if_fail (uri != NULL, NULL);
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (metadata != NULL, NULL);
	_tmp0_ = id;
	_tmp1_ = parent;
	_tmp2_ = rygel_video_item_new (_tmp0_, (RygelMediaContainer*) _tmp1_, "", RYGEL_VIDEO_ITEM_UPNP_CLASS);
	item = _tmp2_;
	_tmp3_ = uri;
	_tmp4_ = metadata;
	rygel_tracker_item_factory_set_metadata ((RygelTrackerItemFactory*) self, (RygelMediaItem*) item, _tmp3_, _tmp4_, &_inner_error_);
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		_g_object_unref0 (item);
		return NULL;
	}
	result = (RygelMediaItem*) item;
	return result;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void rygel_tracker_video_item_factory_real_set_metadata (RygelTrackerItemFactory* base, RygelMediaItem* item, const gchar* uri, TrackerSparqlCursor* metadata, GError** error) {
	RygelTrackerVideoItemFactory * self;
	RygelMediaItem* _tmp0_;
	const gchar* _tmp1_;
	TrackerSparqlCursor* _tmp2_;
	RygelMediaItem* _tmp3_;
	RygelMediaItem* _tmp4_;
	RygelVideoItem* _tmp5_;
	RygelVideoItem* video;
	TrackerSparqlCursor* _tmp6_;
	gboolean _tmp7_ = FALSE;
	TrackerSparqlCursor* _tmp11_;
	gboolean _tmp12_ = FALSE;
	TrackerSparqlCursor* _tmp16_;
	gboolean _tmp17_ = FALSE;
	GError * _inner_error_ = NULL;
	self = (RygelTrackerVideoItemFactory*) base;
	g_return_if_fail (item != NULL);
	g_return_if_fail (uri != NULL);
	g_return_if_fail (metadata != NULL);
	_tmp0_ = item;
	_tmp1_ = uri;
	_tmp2_ = metadata;
	RYGEL_TRACKER_ITEM_FACTORY_CLASS (rygel_tracker_video_item_factory_parent_class)->set_metadata (G_TYPE_CHECK_INSTANCE_CAST (self, RYGEL_TRACKER_TYPE_ITEM_FACTORY, RygelTrackerItemFactory), _tmp0_, _tmp1_, _tmp2_, &_inner_error_);
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		return;
	}
	_tmp3_ = item;
	rygel_tracker_item_factory_set_ref_id ((RygelTrackerItemFactory*) self, _tmp3_, "AllVideos");
	_tmp4_ = item;
	_tmp5_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp4_, RYGEL_TYPE_VIDEO_ITEM) ? ((RygelVideoItem*) _tmp4_) : NULL);
	video = _tmp5_;
	_tmp6_ = metadata;
	_tmp7_ = tracker_sparql_cursor_is_bound (_tmp6_, (gint) RYGEL_TRACKER_VIDEO_ITEM_FACTORY_VIDEO_METADATA_WIDTH);
	if (_tmp7_) {
		RygelVideoItem* _tmp8_;
		TrackerSparqlCursor* _tmp9_;
		gint64 _tmp10_ = 0LL;
		_tmp8_ = video;
		_tmp9_ = metadata;
		_tmp10_ = tracker_sparql_cursor_get_integer (_tmp9_, (gint) RYGEL_TRACKER_VIDEO_ITEM_FACTORY_VIDEO_METADATA_WIDTH);
		rygel_visual_item_set_width ((RygelVisualItem*) _tmp8_, (gint) _tmp10_);
	}
	_tmp11_ = metadata;
	_tmp12_ = tracker_sparql_cursor_is_bound (_tmp11_, (gint) RYGEL_TRACKER_VIDEO_ITEM_FACTORY_VIDEO_METADATA_HEIGHT);
	if (_tmp12_) {
		RygelVideoItem* _tmp13_;
		TrackerSparqlCursor* _tmp14_;
		gint64 _tmp15_ = 0LL;
		_tmp13_ = video;
		_tmp14_ = metadata;
		_tmp15_ = tracker_sparql_cursor_get_integer (_tmp14_, (gint) RYGEL_TRACKER_VIDEO_ITEM_FACTORY_VIDEO_METADATA_HEIGHT);
		rygel_visual_item_set_height ((RygelVisualItem*) _tmp13_, (gint) _tmp15_);
	}
	_tmp16_ = metadata;
	_tmp17_ = tracker_sparql_cursor_is_bound (_tmp16_, (gint) RYGEL_TRACKER_VIDEO_ITEM_FACTORY_VIDEO_METADATA_DURATION);
	if (_tmp17_) {
		RygelVideoItem* _tmp18_;
		TrackerSparqlCursor* _tmp19_;
		gint64 _tmp20_ = 0LL;
		_tmp18_ = video;
		_tmp19_ = metadata;
		_tmp20_ = tracker_sparql_cursor_get_integer (_tmp19_, (gint) RYGEL_TRACKER_VIDEO_ITEM_FACTORY_VIDEO_METADATA_DURATION);
		rygel_audio_item_set_duration ((RygelAudioItem*) _tmp18_, (glong) ((gint) _tmp20_));
	}
	_g_object_unref0 (video);
}


static void rygel_tracker_video_item_factory_class_init (RygelTrackerVideoItemFactoryClass * klass) {
	rygel_tracker_video_item_factory_parent_class = g_type_class_peek_parent (klass);
	RYGEL_TRACKER_ITEM_FACTORY_CLASS (klass)->create = rygel_tracker_video_item_factory_real_create;
	RYGEL_TRACKER_ITEM_FACTORY_CLASS (klass)->set_metadata = rygel_tracker_video_item_factory_real_set_metadata;
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



