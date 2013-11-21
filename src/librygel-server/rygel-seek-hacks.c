/* rygel-seek-hacks.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-seek-hacks.vala, do not modify */

/*
 * Copyright (C) 2013 Jens Georg <mail@jensge.org>
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

#define RYGEL_TYPE_SEEK_HACKS (rygel_seek_hacks_get_type ())
#define RYGEL_SEEK_HACKS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_SEEK_HACKS, RygelSeekHacks))
#define RYGEL_SEEK_HACKS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_SEEK_HACKS, RygelSeekHacksClass))
#define RYGEL_IS_SEEK_HACKS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_SEEK_HACKS))
#define RYGEL_IS_SEEK_HACKS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_SEEK_HACKS))
#define RYGEL_SEEK_HACKS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_SEEK_HACKS, RygelSeekHacksClass))

typedef struct _RygelSeekHacks RygelSeekHacks;
typedef struct _RygelSeekHacksClass RygelSeekHacksClass;
typedef struct _RygelSeekHacksPrivate RygelSeekHacksPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

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

struct _RygelSeekHacks {
	RygelClientHacks parent_instance;
	RygelSeekHacksPrivate * priv;
};

struct _RygelSeekHacksClass {
	RygelClientHacksClass parent_class;
};

typedef enum  {
	RYGEL_CLIENT_HACKS_ERROR_NA
} RygelClientHacksError;
#define RYGEL_CLIENT_HACKS_ERROR rygel_client_hacks_error_quark ()

static gpointer rygel_seek_hacks_parent_class = NULL;

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
GType rygel_seek_hacks_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_SEEK_HACKS_DUMMY_PROPERTY
};
#define RYGEL_SEEK_HACKS_AGENT ".*Mediabolic-IMHTTP.*|" ".*PLAYSTATION 3.*|" ".*SHARP-AQUOS-DMP.*|" ".*alphanetworks.*"
GQuark rygel_client_hacks_error_quark (void);
RygelSeekHacks* rygel_seek_hacks_new (SoupMessage* message, GError** error);
RygelSeekHacks* rygel_seek_hacks_construct (GType object_type, SoupMessage* message, GError** error);
RygelClientHacks* rygel_client_hacks_construct (GType object_type, const gchar* agent, SoupMessage* message, GError** error);
static gboolean rygel_seek_hacks_real_force_seek (RygelClientHacks* base);


RygelSeekHacks* rygel_seek_hacks_construct (GType object_type, SoupMessage* message, GError** error) {
	RygelSeekHacks * self = NULL;
	SoupMessage* _tmp0_ = NULL;
	GError * _inner_error_ = NULL;
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-seek-hacks.vala"
	_tmp0_ = message;
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-seek-hacks.vala"
	self = (RygelSeekHacks*) rygel_client_hacks_construct (object_type, RYGEL_SEEK_HACKS_AGENT, _tmp0_, &_inner_error_);
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-seek-hacks.vala"
	if (_inner_error_ != NULL) {
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-seek-hacks.vala"
		if (_inner_error_->domain == RYGEL_CLIENT_HACKS_ERROR) {
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-seek-hacks.vala"
			g_propagate_error (error, _inner_error_);
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-seek-hacks.vala"
			_g_object_unref0 (self);
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-seek-hacks.vala"
			return NULL;
#line 198 "rygel-seek-hacks.c"
		} else {
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-seek-hacks.vala"
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-seek-hacks.vala"
			g_clear_error (&_inner_error_);
#line 47 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-seek-hacks.vala"
			return NULL;
#line 206 "rygel-seek-hacks.c"
		}
	}
#line 46 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-seek-hacks.vala"
	return self;
#line 211 "rygel-seek-hacks.c"
}


RygelSeekHacks* rygel_seek_hacks_new (SoupMessage* message, GError** error) {
#line 46 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-seek-hacks.vala"
	return rygel_seek_hacks_construct (RYGEL_TYPE_SEEK_HACKS, message, error);
#line 218 "rygel-seek-hacks.c"
}


static gboolean rygel_seek_hacks_real_force_seek (RygelClientHacks* base) {
	RygelSeekHacks * self;
	gboolean result = FALSE;
#line 50 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-seek-hacks.vala"
	self = (RygelSeekHacks*) base;
#line 51 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-seek-hacks.vala"
	result = TRUE;
#line 51 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-seek-hacks.vala"
	return result;
#line 231 "rygel-seek-hacks.c"
}


static void rygel_seek_hacks_class_init (RygelSeekHacksClass * klass) {
#line 40 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-seek-hacks.vala"
	rygel_seek_hacks_parent_class = g_type_class_peek_parent (klass);
#line 40 "/home/jku/src/jhbuild/sources/rygel/src/librygel-server/rygel-seek-hacks.vala"
	RYGEL_CLIENT_HACKS_CLASS (klass)->force_seek = rygel_seek_hacks_real_force_seek;
#line 240 "rygel-seek-hacks.c"
}


static void rygel_seek_hacks_instance_init (RygelSeekHacks * self) {
}


/**
 * Hacks class to accept seeks that are invalid according to DLNA.
 *
 * Some devices always request the full range on a non-seekable stream, be it
 * transcoded or live, regardless of what DLNA.ORG_OP says. This hack just
 * accepts this seek request.
 *
 * Supported devices are:
 *  - Onkyo (Mediabolic-IMHTTP)
 *  - PS3
 *  - Sharp TVs
 *  - WD TV Live (alphanetworks)
 *
 * Samsung devices are also affected but they need other hacks as well to
 * that's handled in the Samsung-specific class.
 */
GType rygel_seek_hacks_get_type (void) {
	static volatile gsize rygel_seek_hacks_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_seek_hacks_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelSeekHacksClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_seek_hacks_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelSeekHacks), 0, (GInstanceInitFunc) rygel_seek_hacks_instance_init, NULL };
		GType rygel_seek_hacks_type_id;
		rygel_seek_hacks_type_id = g_type_register_static (RYGEL_TYPE_CLIENT_HACKS, "RygelSeekHacks", &g_define_type_info, 0);
		g_once_init_leave (&rygel_seek_hacks_type_id__volatile, rygel_seek_hacks_type_id);
	}
	return rygel_seek_hacks_type_id__volatile;
}


