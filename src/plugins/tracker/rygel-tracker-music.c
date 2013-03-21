/* rygel-tracker-music.c generated by valac 0.18.0, the Vala compiler
 * generated from rygel-tracker-music.vala, do not modify */

/*
 * Copyright (C) 2009 Nokia Corporation.
 *
 * Author: Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
 *                               <zeeshan.ali@nokia.com>
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
#include <gee.h>


#define RYGEL_TRACKER_TYPE_CATEGORY_CONTAINER (rygel_tracker_category_container_get_type ())
#define RYGEL_TRACKER_CATEGORY_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_CATEGORY_CONTAINER, RygelTrackerCategoryContainer))
#define RYGEL_TRACKER_CATEGORY_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_CATEGORY_CONTAINER, RygelTrackerCategoryContainerClass))
#define RYGEL_TRACKER_IS_CATEGORY_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_CATEGORY_CONTAINER))
#define RYGEL_TRACKER_IS_CATEGORY_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_CATEGORY_CONTAINER))
#define RYGEL_TRACKER_CATEGORY_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_CATEGORY_CONTAINER, RygelTrackerCategoryContainerClass))

typedef struct _RygelTrackerCategoryContainer RygelTrackerCategoryContainer;
typedef struct _RygelTrackerCategoryContainerClass RygelTrackerCategoryContainerClass;
typedef struct _RygelTrackerCategoryContainerPrivate RygelTrackerCategoryContainerPrivate;

#define RYGEL_TRACKER_TYPE_ITEM_FACTORY (rygel_tracker_item_factory_get_type ())
#define RYGEL_TRACKER_ITEM_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_ITEM_FACTORY, RygelTrackerItemFactory))
#define RYGEL_TRACKER_ITEM_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_ITEM_FACTORY, RygelTrackerItemFactoryClass))
#define RYGEL_TRACKER_IS_ITEM_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_ITEM_FACTORY))
#define RYGEL_TRACKER_IS_ITEM_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_ITEM_FACTORY))
#define RYGEL_TRACKER_ITEM_FACTORY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_ITEM_FACTORY, RygelTrackerItemFactoryClass))

typedef struct _RygelTrackerItemFactory RygelTrackerItemFactory;
typedef struct _RygelTrackerItemFactoryClass RygelTrackerItemFactoryClass;

#define RYGEL_TRACKER_TYPE_MUSIC (rygel_tracker_music_get_type ())
#define RYGEL_TRACKER_MUSIC(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_MUSIC, RygelTrackerMusic))
#define RYGEL_TRACKER_MUSIC_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_MUSIC, RygelTrackerMusicClass))
#define RYGEL_TRACKER_IS_MUSIC(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_MUSIC))
#define RYGEL_TRACKER_IS_MUSIC_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_MUSIC))
#define RYGEL_TRACKER_MUSIC_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_MUSIC, RygelTrackerMusicClass))

typedef struct _RygelTrackerMusic RygelTrackerMusic;
typedef struct _RygelTrackerMusicClass RygelTrackerMusicClass;
typedef struct _RygelTrackerMusicPrivate RygelTrackerMusicPrivate;

#define RYGEL_TRACKER_TYPE_MUSIC_ITEM_FACTORY (rygel_tracker_music_item_factory_get_type ())
#define RYGEL_TRACKER_MUSIC_ITEM_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_MUSIC_ITEM_FACTORY, RygelTrackerMusicItemFactory))
#define RYGEL_TRACKER_MUSIC_ITEM_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_MUSIC_ITEM_FACTORY, RygelTrackerMusicItemFactoryClass))
#define RYGEL_TRACKER_IS_MUSIC_ITEM_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_MUSIC_ITEM_FACTORY))
#define RYGEL_TRACKER_IS_MUSIC_ITEM_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_MUSIC_ITEM_FACTORY))
#define RYGEL_TRACKER_MUSIC_ITEM_FACTORY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_MUSIC_ITEM_FACTORY, RygelTrackerMusicItemFactoryClass))

typedef struct _RygelTrackerMusicItemFactory RygelTrackerMusicItemFactory;
typedef struct _RygelTrackerMusicItemFactoryClass RygelTrackerMusicItemFactoryClass;
#define _rygel_tracker_item_factory_unref0(var) ((var == NULL) ? NULL : (var = (rygel_tracker_item_factory_unref (var), NULL)))

#define RYGEL_TRACKER_TYPE_METADATA_CONTAINER (rygel_tracker_metadata_container_get_type ())
#define RYGEL_TRACKER_METADATA_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_METADATA_CONTAINER, RygelTrackerMetadataContainer))
#define RYGEL_TRACKER_METADATA_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_METADATA_CONTAINER, RygelTrackerMetadataContainerClass))
#define RYGEL_TRACKER_IS_METADATA_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_METADATA_CONTAINER))
#define RYGEL_TRACKER_IS_METADATA_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_METADATA_CONTAINER))
#define RYGEL_TRACKER_METADATA_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_METADATA_CONTAINER, RygelTrackerMetadataContainerClass))

typedef struct _RygelTrackerMetadataContainer RygelTrackerMetadataContainer;
typedef struct _RygelTrackerMetadataContainerClass RygelTrackerMetadataContainerClass;

#define RYGEL_TRACKER_TYPE_METADATA_VALUES (rygel_tracker_metadata_values_get_type ())
#define RYGEL_TRACKER_METADATA_VALUES(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_METADATA_VALUES, RygelTrackerMetadataValues))
#define RYGEL_TRACKER_METADATA_VALUES_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_METADATA_VALUES, RygelTrackerMetadataValuesClass))
#define RYGEL_TRACKER_IS_METADATA_VALUES(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_METADATA_VALUES))
#define RYGEL_TRACKER_IS_METADATA_VALUES_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_METADATA_VALUES))
#define RYGEL_TRACKER_METADATA_VALUES_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_METADATA_VALUES, RygelTrackerMetadataValuesClass))

typedef struct _RygelTrackerMetadataValues RygelTrackerMetadataValues;
typedef struct _RygelTrackerMetadataValuesClass RygelTrackerMetadataValuesClass;

#define RYGEL_TRACKER_TYPE_ARTISTS (rygel_tracker_artists_get_type ())
#define RYGEL_TRACKER_ARTISTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_ARTISTS, RygelTrackerArtists))
#define RYGEL_TRACKER_ARTISTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_ARTISTS, RygelTrackerArtistsClass))
#define RYGEL_TRACKER_IS_ARTISTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_ARTISTS))
#define RYGEL_TRACKER_IS_ARTISTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_ARTISTS))
#define RYGEL_TRACKER_ARTISTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_ARTISTS, RygelTrackerArtistsClass))

typedef struct _RygelTrackerArtists RygelTrackerArtists;
typedef struct _RygelTrackerArtistsClass RygelTrackerArtistsClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define RYGEL_TRACKER_TYPE_ALBUMS (rygel_tracker_albums_get_type ())
#define RYGEL_TRACKER_ALBUMS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_ALBUMS, RygelTrackerAlbums))
#define RYGEL_TRACKER_ALBUMS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_ALBUMS, RygelTrackerAlbumsClass))
#define RYGEL_TRACKER_IS_ALBUMS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_ALBUMS))
#define RYGEL_TRACKER_IS_ALBUMS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_ALBUMS))
#define RYGEL_TRACKER_ALBUMS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_ALBUMS, RygelTrackerAlbumsClass))

typedef struct _RygelTrackerAlbums RygelTrackerAlbums;
typedef struct _RygelTrackerAlbumsClass RygelTrackerAlbumsClass;

#define RYGEL_TRACKER_TYPE_GENRE (rygel_tracker_genre_get_type ())
#define RYGEL_TRACKER_GENRE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TRACKER_TYPE_GENRE, RygelTrackerGenre))
#define RYGEL_TRACKER_GENRE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TRACKER_TYPE_GENRE, RygelTrackerGenreClass))
#define RYGEL_TRACKER_IS_GENRE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TRACKER_TYPE_GENRE))
#define RYGEL_TRACKER_IS_GENRE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TRACKER_TYPE_GENRE))
#define RYGEL_TRACKER_GENRE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TRACKER_TYPE_GENRE, RygelTrackerGenreClass))

typedef struct _RygelTrackerGenre RygelTrackerGenre;
typedef struct _RygelTrackerGenreClass RygelTrackerGenreClass;

struct _RygelTrackerCategoryContainer {
	RygelSimpleContainer parent_instance;
	RygelTrackerCategoryContainerPrivate * priv;
	RygelTrackerItemFactory* item_factory;
};

struct _RygelTrackerCategoryContainerClass {
	RygelSimpleContainerClass parent_class;
};

struct _RygelTrackerMusic {
	RygelTrackerCategoryContainer parent_instance;
	RygelTrackerMusicPrivate * priv;
};

struct _RygelTrackerMusicClass {
	RygelTrackerCategoryContainerClass parent_class;
};


static gpointer rygel_tracker_music_parent_class = NULL;

GType rygel_tracker_category_container_get_type (void) G_GNUC_CONST;
gpointer rygel_tracker_item_factory_ref (gpointer instance);
void rygel_tracker_item_factory_unref (gpointer instance);
GParamSpec* rygel_tracker_param_spec_item_factory (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_tracker_value_set_item_factory (GValue* value, gpointer v_object);
void rygel_tracker_value_take_item_factory (GValue* value, gpointer v_object);
gpointer rygel_tracker_value_get_item_factory (const GValue* value);
GType rygel_tracker_item_factory_get_type (void) G_GNUC_CONST;
GType rygel_tracker_music_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_TRACKER_MUSIC_DUMMY_PROPERTY
};
RygelTrackerMusic* rygel_tracker_music_new (const gchar* id, RygelMediaContainer* parent, const gchar* title);
RygelTrackerMusic* rygel_tracker_music_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title);
RygelTrackerMusicItemFactory* rygel_tracker_music_item_factory_new (void);
RygelTrackerMusicItemFactory* rygel_tracker_music_item_factory_construct (GType object_type);
GType rygel_tracker_music_item_factory_get_type (void) G_GNUC_CONST;
RygelTrackerCategoryContainer* rygel_tracker_category_container_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title, RygelTrackerItemFactory* item_factory);
RygelTrackerArtists* rygel_tracker_artists_new (RygelTrackerMusic* parent);
RygelTrackerArtists* rygel_tracker_artists_construct (GType object_type, RygelTrackerMusic* parent);
GType rygel_tracker_metadata_container_get_type (void) G_GNUC_CONST;
GType rygel_tracker_metadata_values_get_type (void) G_GNUC_CONST;
GType rygel_tracker_artists_get_type (void) G_GNUC_CONST;
RygelTrackerAlbums* rygel_tracker_albums_new (RygelTrackerMusic* parent);
RygelTrackerAlbums* rygel_tracker_albums_construct (GType object_type, RygelTrackerMusic* parent);
GType rygel_tracker_albums_get_type (void) G_GNUC_CONST;
RygelTrackerGenre* rygel_tracker_genre_new (RygelTrackerMusic* parent);
RygelTrackerGenre* rygel_tracker_genre_construct (GType object_type, RygelTrackerMusic* parent);
GType rygel_tracker_genre_get_type (void) G_GNUC_CONST;
void rygel_tracker_category_container_add_create_class (RygelTrackerCategoryContainer* self, const gchar* create_class);


RygelTrackerMusic* rygel_tracker_music_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title) {
	RygelTrackerMusic * self = NULL;
	const gchar* _tmp0_;
	RygelMediaContainer* _tmp1_;
	const gchar* _tmp2_;
	RygelTrackerMusicItemFactory* _tmp3_;
	RygelTrackerMusicItemFactory* _tmp4_;
	RygelTrackerArtists* _tmp5_;
	RygelTrackerArtists* _tmp6_;
	RygelTrackerAlbums* _tmp7_;
	RygelTrackerAlbums* _tmp8_;
	RygelTrackerGenre* _tmp9_;
	RygelTrackerGenre* _tmp10_;
	GeeArrayList* _tmp11_;
	GeeArrayList* _tmp12_;
	GeeArrayList* _tmp13_;
	GeeArrayList* _tmp14_;
	g_return_val_if_fail (id != NULL, NULL);
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (title != NULL, NULL);
	_tmp0_ = id;
	_tmp1_ = parent;
	_tmp2_ = title;
	_tmp3_ = rygel_tracker_music_item_factory_new ();
	_tmp4_ = _tmp3_;
	self = (RygelTrackerMusic*) rygel_tracker_category_container_construct (object_type, _tmp0_, _tmp1_, _tmp2_, (RygelTrackerItemFactory*) _tmp4_);
	_rygel_tracker_item_factory_unref0 (_tmp4_);
	_tmp5_ = rygel_tracker_artists_new (self);
	_tmp6_ = _tmp5_;
	rygel_simple_container_add_child_container ((RygelSimpleContainer*) self, (RygelMediaContainer*) _tmp6_);
	_g_object_unref0 (_tmp6_);
	_tmp7_ = rygel_tracker_albums_new (self);
	_tmp8_ = _tmp7_;
	rygel_simple_container_add_child_container ((RygelSimpleContainer*) self, (RygelMediaContainer*) _tmp8_);
	_g_object_unref0 (_tmp8_);
	_tmp9_ = rygel_tracker_genre_new (self);
	_tmp10_ = _tmp9_;
	rygel_simple_container_add_child_container ((RygelSimpleContainer*) self, (RygelMediaContainer*) _tmp10_);
	_g_object_unref0 (_tmp10_);
	_tmp11_ = rygel_searchable_container_get_search_classes ((RygelSearchableContainer*) self);
	_tmp12_ = _tmp11_;
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp12_, RYGEL_AUDIO_ITEM_UPNP_CLASS);
	_tmp13_ = rygel_searchable_container_get_search_classes ((RygelSearchableContainer*) self);
	_tmp14_ = _tmp13_;
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp14_, RYGEL_MUSIC_ITEM_UPNP_CLASS);
	rygel_tracker_category_container_add_create_class ((RygelTrackerCategoryContainer*) self, RYGEL_AUDIO_ITEM_UPNP_CLASS);
	return self;
}


RygelTrackerMusic* rygel_tracker_music_new (const gchar* id, RygelMediaContainer* parent, const gchar* title) {
	return rygel_tracker_music_construct (RYGEL_TRACKER_TYPE_MUSIC, id, parent, title);
}


static void rygel_tracker_music_class_init (RygelTrackerMusicClass * klass) {
	rygel_tracker_music_parent_class = g_type_class_peek_parent (klass);
}


static void rygel_tracker_music_instance_init (RygelTrackerMusic * self) {
}


/**
 * Container listing Music content hierarchy.
 */
GType rygel_tracker_music_get_type (void) {
	static volatile gsize rygel_tracker_music_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_tracker_music_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelTrackerMusicClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_tracker_music_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelTrackerMusic), 0, (GInstanceInitFunc) rygel_tracker_music_instance_init, NULL };
		GType rygel_tracker_music_type_id;
		rygel_tracker_music_type_id = g_type_register_static (RYGEL_TRACKER_TYPE_CATEGORY_CONTAINER, "RygelTrackerMusic", &g_define_type_info, 0);
		g_once_init_leave (&rygel_tracker_music_type_id__volatile, rygel_tracker_music_type_id);
	}
	return rygel_tracker_music_type_id__volatile;
}



