/* rygel-panasonic-hacks.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-panasonic-hacks.vala, do not modify */

/*
 * Copyright (C) 2011 Red Hat, Inc.
 *
 * Author: Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
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
#include <gio/gio.h>
#include <gee.h>
#include <libsoup/soup.h>
#include <rygel-core.h>
#include <libgupnp-av/gupnp-av.h>


#define RYGEL_TYPE_CLIENT_HACKS (rygel_client_hacks_get_type ())
#define RYGEL_CLIENT_HACKS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_CLIENT_HACKS, RygelClientHacks))
#define RYGEL_CLIENT_HACKS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_CLIENT_HACKS, RygelClientHacksClass))
#define RYGEL_IS_CLIENT_HACKS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_CLIENT_HACKS))
#define RYGEL_IS_CLIENT_HACKS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_CLIENT_HACKS))
#define RYGEL_CLIENT_HACKS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_CLIENT_HACKS, RygelClientHacksClass))

typedef struct _RygelClientHacks RygelClientHacks;
typedef struct _RygelClientHacksClass RygelClientHacksClass;
typedef struct _RygelClientHacksPrivate RygelClientHacksPrivate;

#define RYGEL_TYPE_MEDIA_QUERY_ACTION (rygel_media_query_action_get_type ())
#define RYGEL_MEDIA_QUERY_ACTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_QUERY_ACTION, RygelMediaQueryAction))
#define RYGEL_MEDIA_QUERY_ACTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_QUERY_ACTION, RygelMediaQueryActionClass))
#define RYGEL_IS_MEDIA_QUERY_ACTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_QUERY_ACTION))
#define RYGEL_IS_MEDIA_QUERY_ACTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_QUERY_ACTION))
#define RYGEL_MEDIA_QUERY_ACTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_QUERY_ACTION, RygelMediaQueryActionClass))

typedef struct _RygelMediaQueryAction RygelMediaQueryAction;
typedef struct _RygelMediaQueryActionClass RygelMediaQueryActionClass;

#define RYGEL_TYPE_MEDIA_OBJECT (rygel_media_object_get_type ())
#define RYGEL_MEDIA_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_OBJECT, RygelMediaObject))
#define RYGEL_MEDIA_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_OBJECT, RygelMediaObjectClass))
#define RYGEL_IS_MEDIA_OBJECT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_OBJECT))
#define RYGEL_IS_MEDIA_OBJECT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_OBJECT))
#define RYGEL_MEDIA_OBJECT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_OBJECT, RygelMediaObjectClass))

typedef struct _RygelMediaObject RygelMediaObject;
typedef struct _RygelMediaObjectClass RygelMediaObjectClass;

#define RYGEL_TYPE_MEDIA_CONTAINER (rygel_media_container_get_type ())
#define RYGEL_MEDIA_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_CONTAINER, RygelMediaContainer))
#define RYGEL_MEDIA_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_CONTAINER, RygelMediaContainerClass))
#define RYGEL_IS_MEDIA_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_CONTAINER))
#define RYGEL_IS_MEDIA_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_CONTAINER))
#define RYGEL_MEDIA_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_CONTAINER, RygelMediaContainerClass))

typedef struct _RygelMediaContainer RygelMediaContainer;
typedef struct _RygelMediaContainerClass RygelMediaContainerClass;

#define RYGEL_TYPE_SEARCHABLE_CONTAINER (rygel_searchable_container_get_type ())
#define RYGEL_SEARCHABLE_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_SEARCHABLE_CONTAINER, RygelSearchableContainer))
#define RYGEL_IS_SEARCHABLE_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_SEARCHABLE_CONTAINER))
#define RYGEL_SEARCHABLE_CONTAINER_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), RYGEL_TYPE_SEARCHABLE_CONTAINER, RygelSearchableContainerIface))

typedef struct _RygelSearchableContainer RygelSearchableContainer;
typedef struct _RygelSearchableContainerIface RygelSearchableContainerIface;

#define RYGEL_TYPE_SEARCH_EXPRESSION (rygel_search_expression_get_type ())
#define RYGEL_SEARCH_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_SEARCH_EXPRESSION, RygelSearchExpression))
#define RYGEL_SEARCH_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_SEARCH_EXPRESSION, RygelSearchExpressionClass))
#define RYGEL_IS_SEARCH_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_SEARCH_EXPRESSION))
#define RYGEL_IS_SEARCH_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_SEARCH_EXPRESSION))
#define RYGEL_SEARCH_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_SEARCH_EXPRESSION, RygelSearchExpressionClass))

typedef struct _RygelSearchExpression RygelSearchExpression;
typedef struct _RygelSearchExpressionClass RygelSearchExpressionClass;

#define RYGEL_TYPE_MEDIA_OBJECTS (rygel_media_objects_get_type ())
#define RYGEL_MEDIA_OBJECTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_OBJECTS, RygelMediaObjects))
#define RYGEL_MEDIA_OBJECTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_OBJECTS, RygelMediaObjectsClass))
#define RYGEL_IS_MEDIA_OBJECTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_OBJECTS))
#define RYGEL_IS_MEDIA_OBJECTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_OBJECTS))
#define RYGEL_MEDIA_OBJECTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_OBJECTS, RygelMediaObjectsClass))

typedef struct _RygelMediaObjects RygelMediaObjects;
typedef struct _RygelMediaObjectsClass RygelMediaObjectsClass;

#define RYGEL_TYPE_PANASONIC_HACKS (rygel_panasonic_hacks_get_type ())
#define RYGEL_PANASONIC_HACKS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_PANASONIC_HACKS, RygelPanasonicHacks))
#define RYGEL_PANASONIC_HACKS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_PANASONIC_HACKS, RygelPanasonicHacksClass))
#define RYGEL_IS_PANASONIC_HACKS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_PANASONIC_HACKS))
#define RYGEL_IS_PANASONIC_HACKS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_PANASONIC_HACKS))
#define RYGEL_PANASONIC_HACKS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_PANASONIC_HACKS, RygelPanasonicHacksClass))

typedef struct _RygelPanasonicHacks RygelPanasonicHacks;
typedef struct _RygelPanasonicHacksClass RygelPanasonicHacksClass;
typedef struct _RygelPanasonicHacksPrivate RygelPanasonicHacksPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define RYGEL_TYPE_MEDIA_ITEM (rygel_media_item_get_type ())
#define RYGEL_MEDIA_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_ITEM, RygelMediaItem))
#define RYGEL_MEDIA_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_ITEM, RygelMediaItemClass))
#define RYGEL_IS_MEDIA_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_ITEM))
#define RYGEL_IS_MEDIA_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_ITEM))
#define RYGEL_MEDIA_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_ITEM, RygelMediaItemClass))

typedef struct _RygelMediaItem RygelMediaItem;
typedef struct _RygelMediaItemClass RygelMediaItemClass;

#define RYGEL_TYPE_VISUAL_ITEM (rygel_visual_item_get_type ())
#define RYGEL_VISUAL_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_VISUAL_ITEM, RygelVisualItem))
#define RYGEL_IS_VISUAL_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_VISUAL_ITEM))
#define RYGEL_VISUAL_ITEM_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), RYGEL_TYPE_VISUAL_ITEM, RygelVisualItemIface))

typedef struct _RygelVisualItem RygelVisualItem;
typedef struct _RygelVisualItemIface RygelVisualItemIface;

#define RYGEL_TYPE_THUMBNAIL (rygel_thumbnail_get_type ())
#define RYGEL_THUMBNAIL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_THUMBNAIL, RygelThumbnail))
#define RYGEL_THUMBNAIL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_THUMBNAIL, RygelThumbnailClass))
#define RYGEL_IS_THUMBNAIL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_THUMBNAIL))
#define RYGEL_IS_THUMBNAIL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_THUMBNAIL))
#define RYGEL_THUMBNAIL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_THUMBNAIL, RygelThumbnailClass))

typedef struct _RygelThumbnail RygelThumbnail;
typedef struct _RygelThumbnailClass RygelThumbnailClass;
#define _rygel_icon_info_unref0(var) ((var == NULL) ? NULL : (var = (rygel_icon_info_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _RygelThumbnailPrivate RygelThumbnailPrivate;
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _g_regex_unref0(var) ((var == NULL) ? NULL : (var = (g_regex_unref (var), NULL)))

struct _RygelSearchableContainerIface {
	GTypeInterface parent_iface;
	void (*search) (RygelSearchableContainer* self, RygelSearchExpression* expression, guint offset, guint max_count, const gchar* sort_criteria, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
	RygelMediaObjects* (*search_finish) (RygelSearchableContainer* self, GAsyncResult* _res_, guint* total_matches, GError** error);
	GeeArrayList* (*get_search_classes) (RygelSearchableContainer* self);
	void (*set_search_classes) (RygelSearchableContainer* self, GeeArrayList* value);
};

struct _RygelClientHacks {
	GObject parent_instance;
	RygelClientHacksPrivate * priv;
	GRegex* agent_regex;
};

struct _RygelClientHacksClass {
	GObjectClass parent_class;
	void (*translate_container_id) (RygelClientHacks* self, RygelMediaQueryAction* action, gchar** container_id);
	void (*apply) (RygelClientHacks* self, RygelMediaObject* object);
	void (*filter_sort_criteria) (RygelClientHacks* self, gchar** sort_criteria);
	gboolean (*force_seek) (RygelClientHacks* self);
	void (*search) (RygelClientHacks* self, RygelSearchableContainer* container, RygelSearchExpression* expression, guint offset, guint max_count, const gchar* sort_criteria, GCancellable* cancellable, GAsyncReadyCallback _callback_, gpointer _user_data_);
	RygelMediaObjects* (*search_finish) (RygelClientHacks* self, GAsyncResult* _res_, guint* total_matches, GError** error);
};

struct _RygelPanasonicHacks {
	RygelClientHacks parent_instance;
	RygelPanasonicHacksPrivate * priv;
};

struct _RygelPanasonicHacksClass {
	RygelClientHacksClass parent_class;
};

typedef enum  {
	RYGEL_CLIENT_HACKS_ERROR_NA
} RygelClientHacksError;
#define RYGEL_CLIENT_HACKS_ERROR rygel_client_hacks_error_quark ()
struct _RygelVisualItemIface {
	GTypeInterface parent_iface;
	gint (*get_width) (RygelVisualItem* self);
	void (*set_width) (RygelVisualItem* self, gint value);
	gint (*get_height) (RygelVisualItem* self);
	void (*set_height) (RygelVisualItem* self, gint value);
	gint (*get_color_depth) (RygelVisualItem* self);
	void (*set_color_depth) (RygelVisualItem* self, gint value);
	GeeArrayList* (*get_thumbnails) (RygelVisualItem* self);
	void (*set_thumbnails) (RygelVisualItem* self, GeeArrayList* value);
};

struct _RygelThumbnail {
	RygelIconInfo parent_instance;
	RygelThumbnailPrivate * priv;
	gchar* dlna_profile;
};

struct _RygelThumbnailClass {
	RygelIconInfoClass parent_class;
	GUPnPDIDLLiteResource* (*add_resource) (RygelThumbnail* self, GUPnPDIDLLiteItem* didl_item, const gchar* protocol);
};


static gpointer rygel_panasonic_hacks_parent_class = NULL;
static GRegex* rygel_panasonic_hacks_mime_regex;
static GRegex* rygel_panasonic_hacks_mime_regex = NULL;
static GRegex* rygel_panasonic_hacks_dlna_regex;
static GRegex* rygel_panasonic_hacks_dlna_regex = NULL;

GType rygel_client_hacks_get_type (void) G_GNUC_CONST;
GType rygel_media_query_action_get_type (void) G_GNUC_CONST;
GType rygel_media_object_get_type (void) G_GNUC_CONST;
GType rygel_media_container_get_type (void) G_GNUC_CONST;
gpointer rygel_search_expression_ref (gpointer instance);
void rygel_search_expression_unref (gpointer instance);
GParamSpec* rygel_param_spec_search_expression (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_value_set_search_expression (GValue* value, gpointer v_object);
void rygel_value_take_search_expression (GValue* value, gpointer v_object);
gpointer rygel_value_get_search_expression (const GValue* value);
GType rygel_search_expression_get_type (void) G_GNUC_CONST;
GType rygel_media_objects_get_type (void) G_GNUC_CONST;
GType rygel_searchable_container_get_type (void) G_GNUC_CONST;
GType rygel_panasonic_hacks_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_PANASONIC_HACKS_DUMMY_PROPERTY
};
#define RYGEL_PANASONIC_HACKS_AGENT ".*Panasonic MIL DLNA CP.*"
GQuark rygel_client_hacks_error_quark (void);
RygelPanasonicHacks* rygel_panasonic_hacks_new (SoupMessage* message, GError** error);
RygelPanasonicHacks* rygel_panasonic_hacks_construct (GType object_type, SoupMessage* message, GError** error);
RygelClientHacks* rygel_client_hacks_construct (GType object_type, const gchar* agent, SoupMessage* message, GError** error);
static void rygel_panasonic_hacks_real_apply (RygelClientHacks* base, RygelMediaObject* object);
GType rygel_media_item_get_type (void) G_GNUC_CONST;
GType rygel_thumbnail_get_type (void) G_GNUC_CONST;
GType rygel_visual_item_get_type (void) G_GNUC_CONST;
GeeArrayList* rygel_visual_item_get_thumbnails (RygelVisualItem* self);
static void rygel_panasonic_hacks_finalize (GObject* obj);


RygelPanasonicHacks* rygel_panasonic_hacks_construct (GType object_type, SoupMessage* message, GError** error) {
	RygelPanasonicHacks * self = NULL;
	SoupMessage* _tmp0_ = NULL;
	GError * _inner_error_ = NULL;
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
	_tmp0_ = message;
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
	self = (RygelPanasonicHacks*) rygel_client_hacks_construct (object_type, RYGEL_PANASONIC_HACKS_AGENT, _tmp0_, &_inner_error_);
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
	if (_inner_error_ != NULL) {
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		if (_inner_error_->domain == RYGEL_CLIENT_HACKS_ERROR) {
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
			g_propagate_error (error, _inner_error_);
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
			_g_object_unref0 (self);
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
			return NULL;
#line 267 "rygel-panasonic-hacks.c"
		} else {
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
			g_clear_error (&_inner_error_);
#line 42 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
			return NULL;
#line 275 "rygel-panasonic-hacks.c"
		}
	}
#line 41 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
	return self;
#line 280 "rygel-panasonic-hacks.c"
}


RygelPanasonicHacks* rygel_panasonic_hacks_new (SoupMessage* message, GError** error) {
#line 41 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
	return rygel_panasonic_hacks_construct (RYGEL_TYPE_PANASONIC_HACKS, message, error);
#line 287 "rygel-panasonic-hacks.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 50 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
	return self ? g_object_ref (self) : NULL;
#line 294 "rygel-panasonic-hacks.c"
}


static void rygel_panasonic_hacks_real_apply (RygelClientHacks* base, RygelMediaObject* object) {
	RygelPanasonicHacks * self;
	RygelMediaObject* _tmp0_ = NULL;
	RygelMediaItem* item = NULL;
	RygelMediaObject* _tmp1_ = NULL;
	RygelMediaItem* _tmp2_ = NULL;
	RygelMediaItem* _tmp3_ = NULL;
	GError * _inner_error_ = NULL;
#line 45 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
	self = (RygelPanasonicHacks*) base;
#line 45 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
	g_return_if_fail (object != NULL);
#line 46 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
	_tmp0_ = object;
#line 46 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
	if (!G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, RYGEL_TYPE_MEDIA_ITEM)) {
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		return;
#line 316 "rygel-panasonic-hacks.c"
	}
#line 50 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
	_tmp1_ = object;
#line 50 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
	_tmp2_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, RYGEL_TYPE_MEDIA_ITEM) ? ((RygelMediaItem*) _tmp1_) : NULL);
#line 50 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
	item = _tmp2_;
#line 52 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
	_tmp3_ = item;
#line 52 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
	if (!G_TYPE_CHECK_INSTANCE_TYPE (_tmp3_, RYGEL_TYPE_VISUAL_ITEM)) {
#line 53 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		_g_object_unref0 (item);
#line 53 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		return;
#line 332 "rygel-panasonic-hacks.c"
	}
	{
		GeeArrayList* _thumbnail_list = NULL;
		RygelMediaItem* _tmp4_ = NULL;
		GeeArrayList* _tmp5_ = NULL;
		GeeArrayList* _tmp6_ = NULL;
		GeeArrayList* _tmp7_ = NULL;
		gint _thumbnail_size = 0;
		GeeArrayList* _tmp8_ = NULL;
		gint _tmp9_ = 0;
		gint _tmp10_ = 0;
		gint _thumbnail_index = 0;
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		_tmp4_ = item;
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		_tmp5_ = rygel_visual_item_get_thumbnails (G_TYPE_CHECK_INSTANCE_TYPE (_tmp4_, RYGEL_TYPE_VISUAL_ITEM) ? ((RygelVisualItem*) _tmp4_) : NULL);
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		_tmp6_ = _tmp5_;
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		_tmp7_ = _g_object_ref0 (_tmp6_);
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		_thumbnail_list = _tmp7_;
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		_tmp8_ = _thumbnail_list;
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		_tmp9_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp8_);
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		_tmp10_ = _tmp9_;
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		_thumbnail_size = _tmp10_;
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		_thumbnail_index = -1;
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		while (TRUE) {
#line 367 "rygel-panasonic-hacks.c"
			gint _tmp11_ = 0;
			gint _tmp12_ = 0;
			gint _tmp13_ = 0;
			RygelThumbnail* thumbnail = NULL;
			GeeArrayList* _tmp14_ = NULL;
			gint _tmp15_ = 0;
			gpointer _tmp16_ = NULL;
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
			_tmp11_ = _thumbnail_index;
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
			_thumbnail_index = _tmp11_ + 1;
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
			_tmp12_ = _thumbnail_index;
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
			_tmp13_ = _thumbnail_size;
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
			if (!(_tmp12_ < _tmp13_)) {
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				break;
#line 387 "rygel-panasonic-hacks.c"
			}
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
			_tmp14_ = _thumbnail_list;
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
			_tmp15_ = _thumbnail_index;
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
			_tmp16_ = gee_abstract_list_get ((GeeAbstractList*) _tmp14_, _tmp15_);
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
			thumbnail = (RygelThumbnail*) _tmp16_;
#line 397 "rygel-panasonic-hacks.c"
			{
				gchar* _tmp17_ = NULL;
				GRegex* _tmp18_ = NULL;
				RygelThumbnail* _tmp19_ = NULL;
				const gchar* _tmp20_ = NULL;
				gchar* _tmp21_ = NULL;
				RygelThumbnail* _tmp22_ = NULL;
				gchar* _tmp23_ = NULL;
				GRegex* _tmp24_ = NULL;
				RygelThumbnail* _tmp25_ = NULL;
				const gchar* _tmp26_ = NULL;
				gchar* _tmp27_ = NULL;
				RygelThumbnail* _tmp28_ = NULL;
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				_tmp18_ = rygel_panasonic_hacks_mime_regex;
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				_tmp19_ = thumbnail;
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				_tmp20_ = ((RygelIconInfo*) _tmp19_)->mime_type;
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				_tmp21_ = g_regex_replace_literal (_tmp18_, _tmp20_, (gssize) (-1), 0, "jpeg", 0, &_inner_error_);
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				_tmp17_ = _tmp21_;
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				if (_inner_error_ != NULL) {
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
					if (_inner_error_->domain == G_REGEX_ERROR) {
#line 425 "rygel-panasonic-hacks.c"
						goto __catch67_g_regex_error;
					}
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
					_rygel_icon_info_unref0 (thumbnail);
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
					_g_object_unref0 (_thumbnail_list);
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
					_g_object_unref0 (item);
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
					g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
					g_clear_error (&_inner_error_);
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
					return;
#line 440 "rygel-panasonic-hacks.c"
				}
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				_tmp22_ = thumbnail;
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				_g_free0 (((RygelIconInfo*) _tmp22_)->mime_type);
#line 58 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				((RygelIconInfo*) _tmp22_)->mime_type = _tmp17_;
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				_tmp24_ = rygel_panasonic_hacks_dlna_regex;
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				_tmp25_ = thumbnail;
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				_tmp26_ = _tmp25_->dlna_profile;
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				_tmp27_ = g_regex_replace_literal (_tmp24_, _tmp26_, (gssize) (-1), 0, "JPEG", 0, &_inner_error_);
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				_tmp23_ = _tmp27_;
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				if (_inner_error_ != NULL) {
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
					if (_inner_error_->domain == G_REGEX_ERROR) {
#line 462 "rygel-panasonic-hacks.c"
						goto __catch67_g_regex_error;
					}
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
					_rygel_icon_info_unref0 (thumbnail);
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
					_g_object_unref0 (_thumbnail_list);
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
					_g_object_unref0 (item);
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
					g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
					g_clear_error (&_inner_error_);
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
					return;
#line 477 "rygel-panasonic-hacks.c"
				}
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				_tmp28_ = thumbnail;
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				_g_free0 (_tmp28_->dlna_profile);
#line 60 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				_tmp28_->dlna_profile = _tmp23_;
#line 485 "rygel-panasonic-hacks.c"
			}
			goto __finally67;
			__catch67_g_regex_error:
			{
				GError* _error_ = NULL;
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				_error_ = _inner_error_;
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				_inner_error_ = NULL;
#line 63 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				g_assert_not_reached ();
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				_g_error_free0 (_error_);
#line 499 "rygel-panasonic-hacks.c"
			}
			__finally67:
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
			if (_inner_error_ != NULL) {
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				_rygel_icon_info_unref0 (thumbnail);
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				_g_object_unref0 (_thumbnail_list);
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				_g_object_unref0 (item);
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				g_clear_error (&_inner_error_);
#line 57 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
				return;
#line 516 "rygel-panasonic-hacks.c"
			}
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
			_rygel_icon_info_unref0 (thumbnail);
#line 520 "rygel-panasonic-hacks.c"
		}
#line 56 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		_g_object_unref0 (_thumbnail_list);
#line 524 "rygel-panasonic-hacks.c"
	}
#line 45 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
	_g_object_unref0 (item);
#line 528 "rygel-panasonic-hacks.c"
}


static void rygel_panasonic_hacks_class_init (RygelPanasonicHacksClass * klass) {
	GError * _inner_error_ = NULL;
#line 26 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
	rygel_panasonic_hacks_parent_class = g_type_class_peek_parent (klass);
#line 26 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
	RYGEL_CLIENT_HACKS_CLASS (klass)->apply = rygel_panasonic_hacks_real_apply;
#line 26 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
	G_OBJECT_CLASS (klass)->finalize = rygel_panasonic_hacks_finalize;
#line 540 "rygel-panasonic-hacks.c"
	{
		GRegex* _tmp0_ = NULL;
		GRegex* _tmp1_ = NULL;
		GRegex* _tmp2_ = NULL;
		GRegex* _tmp3_ = NULL;
#line 34 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		_tmp1_ = g_regex_new ("png", 0, 0, &_inner_error_);
#line 34 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		_tmp0_ = _tmp1_;
#line 34 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		if (_inner_error_ != NULL) {
#line 34 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
			if (_inner_error_->domain == G_REGEX_ERROR) {
#line 554 "rygel-panasonic-hacks.c"
				goto __catch68_g_regex_error;
			}
#line 34 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 34 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
			g_clear_error (&_inner_error_);
#line 561 "rygel-panasonic-hacks.c"
		}
#line 34 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		_g_regex_unref0 (rygel_panasonic_hacks_mime_regex);
#line 34 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		rygel_panasonic_hacks_mime_regex = _tmp0_;
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		_tmp3_ = g_regex_new ("PNG", 0, 0, &_inner_error_);
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		_tmp2_ = _tmp3_;
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		if (_inner_error_ != NULL) {
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
			if (_inner_error_->domain == G_REGEX_ERROR) {
#line 575 "rygel-panasonic-hacks.c"
				goto __catch68_g_regex_error;
			}
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
			g_clear_error (&_inner_error_);
#line 582 "rygel-panasonic-hacks.c"
		}
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		_g_regex_unref0 (rygel_panasonic_hacks_dlna_regex);
#line 35 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		rygel_panasonic_hacks_dlna_regex = _tmp2_;
#line 588 "rygel-panasonic-hacks.c"
	}
	goto __finally68;
	__catch68_g_regex_error:
	{
		GError* _error_ = NULL;
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		_error_ = _inner_error_;
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		_inner_error_ = NULL;
#line 37 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		g_assert_not_reached ();
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		_g_error_free0 (_error_);
#line 602 "rygel-panasonic-hacks.c"
	}
	__finally68:
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
	if (_inner_error_ != NULL) {
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 33 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
		g_clear_error (&_inner_error_);
#line 611 "rygel-panasonic-hacks.c"
	}
}


static void rygel_panasonic_hacks_instance_init (RygelPanasonicHacks * self) {
}


static void rygel_panasonic_hacks_finalize (GObject* obj) {
	RygelPanasonicHacks * self;
#line 26 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_PANASONIC_HACKS, RygelPanasonicHacks);
#line 26 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-panasonic-hacks.vala"
	G_OBJECT_CLASS (rygel_panasonic_hacks_parent_class)->finalize (obj);
#line 626 "rygel-panasonic-hacks.c"
}


GType rygel_panasonic_hacks_get_type (void) {
	static volatile gsize rygel_panasonic_hacks_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_panasonic_hacks_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelPanasonicHacksClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_panasonic_hacks_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelPanasonicHacks), 0, (GInstanceInitFunc) rygel_panasonic_hacks_instance_init, NULL };
		GType rygel_panasonic_hacks_type_id;
		rygel_panasonic_hacks_type_id = g_type_register_static (RYGEL_TYPE_CLIENT_HACKS, "RygelPanasonicHacks", &g_define_type_info, 0);
		g_once_init_leave (&rygel_panasonic_hacks_type_id__volatile, rygel_panasonic_hacks_type_id);
	}
	return rygel_panasonic_hacks_type_id__volatile;
}


