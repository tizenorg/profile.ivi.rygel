/* rygel-tracker-music-item-factory.c generated by valac 0.16.1, the Vala compiler
 * generated from rygel-tracker-music-item-factory.vala, do not modify */

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

#define RYGEL_TRACKER_TYPE_MUSIC_ITEM_FACTORY (rygel_tracker_music_item_factory_get_type ())
#define RYGEL_TRACKER_MUSIC_ITEM_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_MUSIC_ITEM_FACTORY, RygelTrackerMusicItemFactory))
#define RYGEL_TRACKER_MUSIC_ITEM_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_MUSIC_ITEM_FACTORY, RygelTrackerMusicItemFactoryClass))
#define RYGEL_TRACKER_IS_MUSIC_ITEM_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_MUSIC_ITEM_FACTORY))
#define RYGEL_TRACKER_IS_MUSIC_ITEM_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_MUSIC_ITEM_FACTORY))
#define RYGEL_TRACKER_MUSIC_ITEM_FACTORY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_MUSIC_ITEM_FACTORY, RygelTrackerMusicItemFactoryClass))

typedef struct _RygelTrackerMusicItemFactory RygelTrackerMusicItemFactory;
typedef struct _RygelTrackerMusicItemFactoryClass RygelTrackerMusicItemFactoryClass;
typedef struct _RygelTrackerMusicItemFactoryPrivate RygelTrackerMusicItemFactoryPrivate;

#define RYGEL_TRACKER_ITEM_FACTORY_TYPE_METADATA (rygel_tracker_item_factory_metadata_get_type ())

#define RYGEL_TRACKER_MUSIC_ITEM_FACTORY_TYPE_MUSIC_METADATA (rygel_tracker_music_item_factory_music_metadata_get_type ())
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

struct _RygelTrackerMusicItemFactory {
	RygelTrackerItemFactory parent_instance;
	RygelTrackerMusicItemFactoryPrivate * priv;
};

struct _RygelTrackerMusicItemFactoryClass {
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
	RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_DURATION = RYGEL_TRACKER_ITEM_FACTORY_METADATA_LAST_KEY,
	RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_AUDIO_ALBUM,
	RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_AUDIO_ARTIST,
	RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_AUDIO_TRACK_NUM,
	RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_AUDIO_GENRE,
	RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_SAMPLE_RATE,
	RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_CHANNELS,
	RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_BITS_PER_SAMPLE,
	RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_BITRATE,
	RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_LAST_KEY
} RygelTrackerMusicItemFactoryMusicMetadata;


static gpointer rygel_tracker_music_item_factory_parent_class = NULL;

gpointer rygel_tracker_item_factory_ref (gpointer instance);
void rygel_tracker_item_factory_unref (gpointer instance);
GParamSpec* rygel_tracker_param_spec_item_factory (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_tracker_value_set_item_factory (GValue* value, gpointer v_object);
void rygel_tracker_value_take_item_factory (GValue* value, gpointer v_object);
gpointer rygel_tracker_value_get_item_factory (const GValue* value);
GType rygel_tracker_item_factory_get_type (void) G_GNUC_CONST;
GType rygel_tracker_search_container_get_type (void) G_GNUC_CONST;
GType rygel_tracker_music_item_factory_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_TRACKER_MUSIC_ITEM_FACTORY_DUMMY_PROPERTY
};
GType rygel_tracker_item_factory_metadata_get_type (void) G_GNUC_CONST;
static GType rygel_tracker_music_item_factory_music_metadata_get_type (void) G_GNUC_UNUSED;
#define RYGEL_TRACKER_MUSIC_ITEM_FACTORY_CATEGORY "nmm:MusicPiece"
#define RYGEL_TRACKER_MUSIC_ITEM_FACTORY_CATEGORY_IRI "http://www.tracker-project.org/" "temp/nmm#MusicPiece"
RygelTrackerMusicItemFactory* rygel_tracker_music_item_factory_new (void);
RygelTrackerMusicItemFactory* rygel_tracker_music_item_factory_construct (GType object_type);
RygelTrackerItemFactory* rygel_tracker_item_factory_construct (GType object_type, const gchar* category, const gchar* category_iri, const gchar* upnp_class, const gchar* upload_dir);
static RygelMediaItem* rygel_tracker_music_item_factory_real_create (RygelTrackerItemFactory* base, const gchar* id, const gchar* uri, RygelTrackerSearchContainer* parent, TrackerSparqlCursor* metadata, GError** error);
void rygel_tracker_item_factory_set_metadata (RygelTrackerItemFactory* self, RygelMediaItem* item, const gchar* uri, TrackerSparqlCursor* metadata, GError** error);
static void rygel_tracker_music_item_factory_real_set_metadata (RygelTrackerItemFactory* base, RygelMediaItem* item, const gchar* uri, TrackerSparqlCursor* metadata, GError** error);
void rygel_tracker_item_factory_set_ref_id (RygelTrackerItemFactory* self, RygelMediaItem* item, const gchar* prefix);


static GType rygel_tracker_music_item_factory_music_metadata_get_type (void) {
	static volatile gsize rygel_tracker_music_item_factory_music_metadata_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_tracker_music_item_factory_music_metadata_type_id__volatile)) {
		static const GEnumValue values[] = {{RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_DURATION, "RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_DURATION", "duration"}, {RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_AUDIO_ALBUM, "RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_AUDIO_ALBUM", "audio-album"}, {RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_AUDIO_ARTIST, "RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_AUDIO_ARTIST", "audio-artist"}, {RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_AUDIO_TRACK_NUM, "RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_AUDIO_TRACK_NUM", "audio-track-num"}, {RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_AUDIO_GENRE, "RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_AUDIO_GENRE", "audio-genre"}, {RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_SAMPLE_RATE, "RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_SAMPLE_RATE", "sample-rate"}, {RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_CHANNELS, "RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_CHANNELS", "channels"}, {RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_BITS_PER_SAMPLE, "RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_BITS_PER_SAMPLE", "bits-per-sample"}, {RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_BITRATE, "RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_BITRATE", "bitrate"}, {RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_LAST_KEY, "RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_LAST_KEY", "last-key"}, {0, NULL, NULL}};
		GType rygel_tracker_music_item_factory_music_metadata_type_id;
		rygel_tracker_music_item_factory_music_metadata_type_id = g_enum_register_static ("RygelTrackerMusicItemFactoryMusicMetadata", values);
		g_once_init_leave (&rygel_tracker_music_item_factory_music_metadata_type_id__volatile, rygel_tracker_music_item_factory_music_metadata_type_id);
	}
	return rygel_tracker_music_item_factory_music_metadata_type_id__volatile;
}


RygelTrackerMusicItemFactory* rygel_tracker_music_item_factory_construct (GType object_type) {
	RygelTrackerMusicItemFactory* self = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_;
	gchar* upload_folder;
	const gchar* _tmp5_;
	GeeArrayList* _tmp6_;
	GeeArrayList* _tmp7_;
	GeeArrayList* _tmp8_;
	GeeArrayList* _tmp9_;
	GeeArrayList* _tmp10_;
	GeeArrayList* _tmp11_;
	GeeArrayList* _tmp12_;
	GeeArrayList* _tmp13_;
	GeeArrayList* _tmp14_;
	GError * _inner_error_ = NULL;
#line 53 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp0_ = g_get_user_special_dir (G_USER_DIRECTORY_MUSIC);
#line 53 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 53 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	upload_folder = _tmp1_;
#line 195 "rygel-tracker-music-item-factory.c"
	{
		RygelMetaConfig* _tmp2_ = NULL;
		RygelMetaConfig* config;
		gchar* _tmp3_ = NULL;
		gchar* _tmp4_;
#line 56 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp2_ = rygel_meta_config_get_default ();
#line 56 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		config = _tmp2_;
#line 57 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp3_ = rygel_configuration_get_music_upload_folder ((RygelConfiguration*) config, &_inner_error_);
#line 57 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp4_ = _tmp3_;
#line 57 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		if (_inner_error_ != NULL) {
#line 57 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
			_g_object_unref0 (config);
#line 213 "rygel-tracker-music-item-factory.c"
			goto __catch12_g_error;
		}
#line 57 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_g_free0 (upload_folder);
#line 57 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		upload_folder = _tmp4_;
#line 55 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_g_object_unref0 (config);
#line 222 "rygel-tracker-music-item-factory.c"
	}
	goto __finally12;
	__catch12_g_error:
	{
		GError* _error_ = NULL;
#line 55 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_error_ = _inner_error_;
#line 55 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_inner_error_ = NULL;
#line 55 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_g_error_free0 (_error_);
#line 234 "rygel-tracker-music-item-factory.c"
	}
	__finally12:
#line 55 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	if (_inner_error_ != NULL) {
#line 55 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_g_free0 (upload_folder);
#line 55 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 55 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		g_clear_error (&_inner_error_);
#line 55 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		return NULL;
#line 247 "rygel-tracker-music-item-factory.c"
	}
#line 60 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp5_ = upload_folder;
#line 60 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	self = (RygelTrackerMusicItemFactory*) rygel_tracker_item_factory_construct (object_type, RYGEL_TRACKER_MUSIC_ITEM_FACTORY_CATEGORY, RYGEL_TRACKER_MUSIC_ITEM_FACTORY_CATEGORY_IRI, RYGEL_MUSIC_ITEM_UPNP_CLASS, _tmp5_);
#line 63 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp6_ = ((RygelTrackerItemFactory*) self)->properties;
#line 63 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp6_, "res@duration");
#line 64 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp7_ = ((RygelTrackerItemFactory*) self)->properties;
#line 64 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp7_, "upnp:album");
#line 65 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp8_ = ((RygelTrackerItemFactory*) self)->properties;
#line 65 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp8_, "upnp:artist");
#line 66 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp9_ = ((RygelTrackerItemFactory*) self)->properties;
#line 66 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp9_, "upnp:originalTrackNumber");
#line 67 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp10_ = ((RygelTrackerItemFactory*) self)->properties;
#line 67 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp10_, "upnp:genre");
#line 68 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp11_ = ((RygelTrackerItemFactory*) self)->properties;
#line 68 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp11_, "sampleRate");
#line 69 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp12_ = ((RygelTrackerItemFactory*) self)->properties;
#line 69 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp12_, "upnp:nrAudioChannels");
#line 70 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp13_ = ((RygelTrackerItemFactory*) self)->properties;
#line 70 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp13_, "upnp:bitsPerSample");
#line 71 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp14_ = ((RygelTrackerItemFactory*) self)->properties;
#line 71 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp14_, "upnp:bitrate");
#line 52 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_g_free0 (upload_folder);
#line 52 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	return self;
#line 293 "rygel-tracker-music-item-factory.c"
}


RygelTrackerMusicItemFactory* rygel_tracker_music_item_factory_new (void) {
#line 52 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	return rygel_tracker_music_item_factory_construct (RYGEL_TRACKER_TYPE_MUSIC_ITEM_FACTORY);
#line 300 "rygel-tracker-music-item-factory.c"
}


static RygelMediaItem* rygel_tracker_music_item_factory_real_create (RygelTrackerItemFactory* base, const gchar* id, const gchar* uri, RygelTrackerSearchContainer* parent, TrackerSparqlCursor* metadata, GError** error) {
	RygelTrackerMusicItemFactory * self;
	RygelMediaItem* result = NULL;
	const gchar* _tmp0_;
	RygelTrackerSearchContainer* _tmp1_;
	RygelMusicItem* _tmp2_;
	RygelMusicItem* item;
	const gchar* _tmp3_;
	TrackerSparqlCursor* _tmp4_;
	GError * _inner_error_ = NULL;
#line 74 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	self = (RygelTrackerMusicItemFactory*) base;
#line 74 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	g_return_val_if_fail (id != NULL, NULL);
#line 74 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	g_return_val_if_fail (uri != NULL, NULL);
#line 74 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	g_return_val_if_fail (parent != NULL, NULL);
#line 74 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	g_return_val_if_fail (metadata != NULL, NULL);
#line 79 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp0_ = id;
#line 79 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp1_ = parent;
#line 79 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp2_ = rygel_music_item_new (_tmp0_, (RygelMediaContainer*) _tmp1_, "", RYGEL_MUSIC_ITEM_UPNP_CLASS);
#line 79 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	item = _tmp2_;
#line 81 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp3_ = uri;
#line 81 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp4_ = metadata;
#line 81 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	rygel_tracker_item_factory_set_metadata ((RygelTrackerItemFactory*) self, (RygelMediaItem*) item, _tmp3_, _tmp4_, &_inner_error_);
#line 81 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	if (_inner_error_ != NULL) {
#line 81 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		g_propagate_error (error, _inner_error_);
#line 81 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_g_object_unref0 (item);
#line 81 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		return NULL;
#line 346 "rygel-tracker-music-item-factory.c"
	}
#line 83 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	result = (RygelMediaItem*) item;
#line 83 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	return result;
#line 352 "rygel-tracker-music-item-factory.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 94 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	return self ? g_object_ref (self) : NULL;
#line 359 "rygel-tracker-music-item-factory.c"
}


static void rygel_tracker_music_item_factory_real_set_metadata (RygelTrackerItemFactory* base, RygelMediaItem* item, const gchar* uri, TrackerSparqlCursor* metadata, GError** error) {
	RygelTrackerMusicItemFactory * self;
	RygelMediaItem* _tmp0_;
	const gchar* _tmp1_;
	TrackerSparqlCursor* _tmp2_;
	RygelMediaItem* _tmp3_;
	RygelMediaItem* _tmp4_;
	RygelMusicItem* _tmp5_;
	RygelMusicItem* music;
	gboolean _tmp6_ = FALSE;
	TrackerSparqlCursor* _tmp7_;
	gboolean _tmp8_ = FALSE;
	gboolean _tmp11_;
	TrackerSparqlCursor* _tmp15_;
	gboolean _tmp16_ = FALSE;
	TrackerSparqlCursor* _tmp20_;
	gboolean _tmp21_ = FALSE;
	TrackerSparqlCursor* _tmp25_;
	gboolean _tmp26_ = FALSE;
	TrackerSparqlCursor* _tmp30_;
	gboolean _tmp31_ = FALSE;
	TrackerSparqlCursor* _tmp35_;
	gboolean _tmp36_ = FALSE;
	TrackerSparqlCursor* _tmp40_;
	gboolean _tmp41_ = FALSE;
	TrackerSparqlCursor* _tmp45_;
	gboolean _tmp46_ = FALSE;
	TrackerSparqlCursor* _tmp50_;
	gboolean _tmp51_ = FALSE;
	RygelMusicItem* _tmp55_;
	GError * _inner_error_ = NULL;
#line 86 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	self = (RygelTrackerMusicItemFactory*) base;
#line 86 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	g_return_if_fail (item != NULL);
#line 86 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	g_return_if_fail (uri != NULL);
#line 86 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	g_return_if_fail (metadata != NULL);
#line 90 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp0_ = item;
#line 90 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp1_ = uri;
#line 90 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp2_ = metadata;
#line 90 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	RYGEL_TRACKER_ITEM_FACTORY_CLASS (rygel_tracker_music_item_factory_parent_class)->set_metadata (RYGEL_TRACKER_ITEM_FACTORY (self), _tmp0_, _tmp1_, _tmp2_, &_inner_error_);
#line 90 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	if (_inner_error_ != NULL) {
#line 90 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		g_propagate_error (error, _inner_error_);
#line 90 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		return;
#line 416 "rygel-tracker-music-item-factory.c"
	}
#line 92 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp3_ = item;
#line 92 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	rygel_tracker_item_factory_set_ref_id ((RygelTrackerItemFactory*) self, _tmp3_, "AllMusic");
#line 94 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp4_ = item;
#line 94 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp5_ = _g_object_ref0 (RYGEL_IS_MUSIC_ITEM (_tmp4_) ? ((RygelMusicItem*) _tmp4_) : NULL);
#line 94 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	music = _tmp5_;
#line 96 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp7_ = metadata;
#line 96 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp8_ = tracker_sparql_cursor_is_bound (_tmp7_, (gint) RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_DURATION);
#line 96 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	if (_tmp8_) {
#line 434 "rygel-tracker-music-item-factory.c"
		TrackerSparqlCursor* _tmp9_;
		const gchar* _tmp10_ = NULL;
#line 97 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp9_ = metadata;
#line 97 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp10_ = tracker_sparql_cursor_get_string (_tmp9_, (gint) RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_DURATION, NULL);
#line 97 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp6_ = g_strcmp0 (_tmp10_, "0") != 0;
#line 443 "rygel-tracker-music-item-factory.c"
	} else {
#line 96 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp6_ = FALSE;
#line 447 "rygel-tracker-music-item-factory.c"
	}
#line 96 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp11_ = _tmp6_;
#line 96 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	if (_tmp11_) {
#line 453 "rygel-tracker-music-item-factory.c"
		RygelMusicItem* _tmp12_;
		TrackerSparqlCursor* _tmp13_;
		gint64 _tmp14_ = 0LL;
#line 98 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp12_ = music;
#line 98 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp13_ = metadata;
#line 98 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp14_ = tracker_sparql_cursor_get_integer (_tmp13_, (gint) RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_DURATION);
#line 98 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		rygel_audio_item_set_duration ((RygelAudioItem*) _tmp12_, (glong) _tmp14_);
#line 465 "rygel-tracker-music-item-factory.c"
	}
#line 102 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp15_ = metadata;
#line 102 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp16_ = tracker_sparql_cursor_is_bound (_tmp15_, (gint) RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_SAMPLE_RATE);
#line 102 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	if (_tmp16_) {
#line 473 "rygel-tracker-music-item-factory.c"
		RygelMusicItem* _tmp17_;
		TrackerSparqlCursor* _tmp18_;
		gint64 _tmp19_ = 0LL;
#line 103 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp17_ = music;
#line 103 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp18_ = metadata;
#line 103 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp19_ = tracker_sparql_cursor_get_integer (_tmp18_, (gint) RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_SAMPLE_RATE);
#line 103 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		rygel_audio_item_set_sample_freq ((RygelAudioItem*) _tmp17_, (gint) _tmp19_);
#line 485 "rygel-tracker-music-item-factory.c"
	}
#line 107 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp20_ = metadata;
#line 107 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp21_ = tracker_sparql_cursor_is_bound (_tmp20_, (gint) RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_CHANNELS);
#line 107 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	if (_tmp21_) {
#line 493 "rygel-tracker-music-item-factory.c"
		RygelMusicItem* _tmp22_;
		TrackerSparqlCursor* _tmp23_;
		gint64 _tmp24_ = 0LL;
#line 108 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp22_ = music;
#line 108 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp23_ = metadata;
#line 108 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp24_ = tracker_sparql_cursor_get_integer (_tmp23_, (gint) RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_CHANNELS);
#line 108 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		rygel_audio_item_set_channels ((RygelAudioItem*) _tmp22_, (gint) _tmp24_);
#line 505 "rygel-tracker-music-item-factory.c"
	}
#line 112 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp25_ = metadata;
#line 112 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp26_ = tracker_sparql_cursor_is_bound (_tmp25_, (gint) RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_BITS_PER_SAMPLE);
#line 112 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	if (_tmp26_) {
#line 513 "rygel-tracker-music-item-factory.c"
		RygelMusicItem* _tmp27_;
		TrackerSparqlCursor* _tmp28_;
		gint64 _tmp29_ = 0LL;
#line 113 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp27_ = music;
#line 113 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp28_ = metadata;
#line 113 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp29_ = tracker_sparql_cursor_get_integer (_tmp28_, (gint) RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_BITS_PER_SAMPLE);
#line 113 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		rygel_audio_item_set_bits_per_sample ((RygelAudioItem*) _tmp27_, (gint) _tmp29_);
#line 525 "rygel-tracker-music-item-factory.c"
	}
#line 117 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp30_ = metadata;
#line 117 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp31_ = tracker_sparql_cursor_is_bound (_tmp30_, (gint) RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_BITRATE);
#line 117 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	if (_tmp31_) {
#line 533 "rygel-tracker-music-item-factory.c"
		RygelMusicItem* _tmp32_;
		TrackerSparqlCursor* _tmp33_;
		gint64 _tmp34_ = 0LL;
#line 118 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp32_ = music;
#line 118 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp33_ = metadata;
#line 118 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp34_ = tracker_sparql_cursor_get_integer (_tmp33_, (gint) RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_BITRATE);
#line 118 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		rygel_audio_item_set_bitrate ((RygelAudioItem*) _tmp32_, ((gint) _tmp34_) / 8);
#line 545 "rygel-tracker-music-item-factory.c"
	}
#line 122 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp35_ = metadata;
#line 122 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp36_ = tracker_sparql_cursor_is_bound (_tmp35_, (gint) RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_AUDIO_TRACK_NUM);
#line 122 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	if (_tmp36_) {
#line 553 "rygel-tracker-music-item-factory.c"
		RygelMusicItem* _tmp37_;
		TrackerSparqlCursor* _tmp38_;
		gint64 _tmp39_ = 0LL;
#line 123 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp37_ = music;
#line 123 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp38_ = metadata;
#line 123 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp39_ = tracker_sparql_cursor_get_integer (_tmp38_, (gint) RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_AUDIO_TRACK_NUM);
#line 123 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		rygel_music_item_set_track_number (_tmp37_, (gint) _tmp39_);
#line 565 "rygel-tracker-music-item-factory.c"
	}
#line 127 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp40_ = metadata;
#line 127 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp41_ = tracker_sparql_cursor_is_bound (_tmp40_, (gint) RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_AUDIO_ARTIST);
#line 127 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	if (_tmp41_) {
#line 573 "rygel-tracker-music-item-factory.c"
		RygelMusicItem* _tmp42_;
		TrackerSparqlCursor* _tmp43_;
		const gchar* _tmp44_ = NULL;
#line 128 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp42_ = music;
#line 128 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp43_ = metadata;
#line 128 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp44_ = tracker_sparql_cursor_get_string (_tmp43_, (gint) RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_AUDIO_ARTIST, NULL);
#line 128 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		rygel_music_item_set_artist (_tmp42_, _tmp44_);
#line 585 "rygel-tracker-music-item-factory.c"
	}
#line 131 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp45_ = metadata;
#line 131 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp46_ = tracker_sparql_cursor_is_bound (_tmp45_, (gint) RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_AUDIO_ALBUM);
#line 131 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	if (_tmp46_) {
#line 593 "rygel-tracker-music-item-factory.c"
		RygelMusicItem* _tmp47_;
		TrackerSparqlCursor* _tmp48_;
		const gchar* _tmp49_ = NULL;
#line 132 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp47_ = music;
#line 132 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp48_ = metadata;
#line 132 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp49_ = tracker_sparql_cursor_get_string (_tmp48_, (gint) RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_AUDIO_ALBUM, NULL);
#line 132 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		rygel_music_item_set_album (_tmp47_, _tmp49_);
#line 605 "rygel-tracker-music-item-factory.c"
	}
#line 135 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp50_ = metadata;
#line 135 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp51_ = tracker_sparql_cursor_is_bound (_tmp50_, (gint) RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_AUDIO_GENRE);
#line 135 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	if (_tmp51_) {
#line 613 "rygel-tracker-music-item-factory.c"
		RygelMusicItem* _tmp52_;
		TrackerSparqlCursor* _tmp53_;
		const gchar* _tmp54_ = NULL;
#line 136 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp52_ = music;
#line 136 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp53_ = metadata;
#line 136 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		_tmp54_ = tracker_sparql_cursor_get_string (_tmp53_, (gint) RYGEL_TRACKER_MUSIC_ITEM_FACTORY_MUSIC_METADATA_AUDIO_GENRE, NULL);
#line 136 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
		rygel_music_item_set_genre (_tmp52_, _tmp54_);
#line 625 "rygel-tracker-music-item-factory.c"
	}
#line 139 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_tmp55_ = music;
#line 139 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	rygel_music_item_lookup_album_art (_tmp55_);
#line 86 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	_g_object_unref0 (music);
#line 633 "rygel-tracker-music-item-factory.c"
}


static void rygel_tracker_music_item_factory_class_init (RygelTrackerMusicItemFactoryClass * klass) {
#line 33 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	rygel_tracker_music_item_factory_parent_class = g_type_class_peek_parent (klass);
#line 33 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	RYGEL_TRACKER_ITEM_FACTORY_CLASS (klass)->create = rygel_tracker_music_item_factory_real_create;
#line 33 "/home/mryan/src/rygel/src/plugins/tracker/rygel-tracker-music-item-factory.vala"
	RYGEL_TRACKER_ITEM_FACTORY_CLASS (klass)->set_metadata = rygel_tracker_music_item_factory_real_set_metadata;
#line 644 "rygel-tracker-music-item-factory.c"
}


static void rygel_tracker_music_item_factory_instance_init (RygelTrackerMusicItemFactory * self) {
}


/**
 * Tracker music item factory.
 */
GType rygel_tracker_music_item_factory_get_type (void) {
	static volatile gsize rygel_tracker_music_item_factory_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_tracker_music_item_factory_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelTrackerMusicItemFactoryClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_tracker_music_item_factory_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelTrackerMusicItemFactory), 0, (GInstanceInitFunc) rygel_tracker_music_item_factory_instance_init, NULL };
		GType rygel_tracker_music_item_factory_type_id;
		rygel_tracker_music_item_factory_type_id = g_type_register_static (RYGEL_TRACKER_TYPE_ITEM_FACTORY, "RygelTrackerMusicItemFactory", &g_define_type_info, 0);
		g_once_init_leave (&rygel_tracker_music_item_factory_type_id__volatile, rygel_tracker_music_item_factory_type_id);
	}
	return rygel_tracker_music_item_factory_type_id__volatile;
}



