/* rygel-mediathek-mov-playlist-parser.c generated by valac 0.16.1, the Vala compiler
 * generated from rygel-mediathek-mov-playlist-parser.vala, do not modify */

/*
 * Copyright (C) 2011 Jens Georg
 *
 * Author: Jens Georg <mail@jensge.org>
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
#include <gee.h>
#include <libsoup/soup.h>


#define RYGEL_MEDIATHEK_TYPE_PLAYLIST_PARSER (rygel_mediathek_playlist_parser_get_type ())
#define RYGEL_MEDIATHEK_PLAYLIST_PARSER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIATHEK_TYPE_PLAYLIST_PARSER, RygelMediathekPlaylistParser))
#define RYGEL_MEDIATHEK_PLAYLIST_PARSER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIATHEK_TYPE_PLAYLIST_PARSER, RygelMediathekPlaylistParserClass))
#define RYGEL_MEDIATHEK_IS_PLAYLIST_PARSER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIATHEK_TYPE_PLAYLIST_PARSER))
#define RYGEL_MEDIATHEK_IS_PLAYLIST_PARSER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIATHEK_TYPE_PLAYLIST_PARSER))
#define RYGEL_MEDIATHEK_PLAYLIST_PARSER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIATHEK_TYPE_PLAYLIST_PARSER, RygelMediathekPlaylistParserClass))

typedef struct _RygelMediathekPlaylistParser RygelMediathekPlaylistParser;
typedef struct _RygelMediathekPlaylistParserClass RygelMediathekPlaylistParserClass;
typedef struct _RygelMediathekPlaylistParserPrivate RygelMediathekPlaylistParserPrivate;

#define RYGEL_MEDIATHEK_TYPE_MOV_PLAYLIST_PARSER (rygel_mediathek_mov_playlist_parser_get_type ())
#define RYGEL_MEDIATHEK_MOV_PLAYLIST_PARSER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_MEDIATHEK_TYPE_MOV_PLAYLIST_PARSER, RygelMediathekMovPlaylistParser))
#define RYGEL_MEDIATHEK_MOV_PLAYLIST_PARSER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_MEDIATHEK_TYPE_MOV_PLAYLIST_PARSER, RygelMediathekMovPlaylistParserClass))
#define RYGEL_MEDIATHEK_IS_MOV_PLAYLIST_PARSER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_MEDIATHEK_TYPE_MOV_PLAYLIST_PARSER))
#define RYGEL_MEDIATHEK_IS_MOV_PLAYLIST_PARSER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_MEDIATHEK_TYPE_MOV_PLAYLIST_PARSER))
#define RYGEL_MEDIATHEK_MOV_PLAYLIST_PARSER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_MEDIATHEK_TYPE_MOV_PLAYLIST_PARSER, RygelMediathekMovPlaylistParserClass))

typedef struct _RygelMediathekMovPlaylistParser RygelMediathekMovPlaylistParser;
typedef struct _RygelMediathekMovPlaylistParserClass RygelMediathekMovPlaylistParserClass;
typedef struct _RygelMediathekMovPlaylistParserPrivate RygelMediathekMovPlaylistParserPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

typedef enum  {
	RYGEL_MEDIATHEK_VIDEO_ITEM_ERROR_XML_PARSE_ERROR,
	RYGEL_MEDIATHEK_VIDEO_ITEM_ERROR_NETWORK_ERROR
} RygelMediathekVideoItemError;
#define RYGEL_MEDIATHEK_VIDEO_ITEM_ERROR rygel_mediathek_video_item_error_quark ()
struct _RygelMediathekPlaylistParser {
	GObject parent_instance;
	RygelMediathekPlaylistParserPrivate * priv;
};

struct _RygelMediathekPlaylistParserClass {
	GObjectClass parent_class;
	GeeList* (*parse_playlist) (RygelMediathekPlaylistParser* self, const gchar* data, gint length, GError** error);
};

struct _RygelMediathekMovPlaylistParser {
	RygelMediathekPlaylistParser parent_instance;
	RygelMediathekMovPlaylistParserPrivate * priv;
};

struct _RygelMediathekMovPlaylistParserClass {
	RygelMediathekPlaylistParserClass parent_class;
};


static gpointer rygel_mediathek_mov_playlist_parser_parent_class = NULL;

GType rygel_mediathek_playlist_parser_get_type (void) G_GNUC_CONST;
GQuark rygel_mediathek_video_item_error_quark (void);
GType rygel_mediathek_mov_playlist_parser_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_MEDIATHEK_MOV_PLAYLIST_PARSER_DUMMY_PROPERTY
};
RygelMediathekMovPlaylistParser* rygel_mediathek_mov_playlist_parser_new (SoupSession* session);
RygelMediathekMovPlaylistParser* rygel_mediathek_mov_playlist_parser_construct (GType object_type, SoupSession* session);
static GeeList* rygel_mediathek_mov_playlist_parser_real_parse_playlist (RygelMediathekPlaylistParser* base, const gchar* data, gint length, GError** error);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);
static gint _vala_array_length (gpointer array);


RygelMediathekMovPlaylistParser* rygel_mediathek_mov_playlist_parser_construct (GType object_type, SoupSession* session) {
	RygelMediathekMovPlaylistParser * self = NULL;
	SoupSession* _tmp0_;
#line 27 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	g_return_val_if_fail (session != NULL, NULL);
#line 28 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	_tmp0_ = session;
#line 28 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	self = (RygelMediathekMovPlaylistParser*) g_object_new (object_type, "session", _tmp0_, "playlist-suffix", ".mov", "mime-type", "video/mp4", NULL);
#line 27 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	return self;
#line 110 "rygel-mediathek-mov-playlist-parser.c"
}


RygelMediathekMovPlaylistParser* rygel_mediathek_mov_playlist_parser_new (SoupSession* session) {
#line 27 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	return rygel_mediathek_mov_playlist_parser_construct (RYGEL_MEDIATHEK_TYPE_MOV_PLAYLIST_PARSER, session);
#line 117 "rygel-mediathek-mov-playlist-parser.c"
}


static GeeList* rygel_mediathek_mov_playlist_parser_real_parse_playlist (RygelMediathekPlaylistParser* base, const gchar* data, gint length, GError** error) {
	RygelMediathekMovPlaylistParser * self;
	GeeList* result = NULL;
	const gchar* _tmp0_;
	gchar** _tmp1_;
	gchar** _tmp2_ = NULL;
	gchar** lines;
	gint lines_length1;
	gint _lines_size_;
	gchar** _tmp3_;
	gint _tmp3__length1;
	gchar** _tmp5_;
	gint _tmp5__length1;
	const gchar* _tmp6_;
	gchar** _tmp8_;
	gint _tmp8__length1;
	const gchar* _tmp9_;
	gboolean _tmp10_ = FALSE;
	GeeArrayList* _tmp12_;
	GeeArrayList* list;
	GeeArrayList* _tmp13_;
	gchar** _tmp14_;
	gint _tmp14__length1;
	const gchar* _tmp15_;
	GError * _inner_error_ = NULL;
#line 33 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	self = (RygelMediathekMovPlaylistParser*) base;
#line 33 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	g_return_val_if_fail (data != NULL, NULL);
#line 36 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	_tmp0_ = data;
#line 36 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	_tmp2_ = _tmp1_ = g_strsplit (_tmp0_, "\n", 0);
#line 36 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	lines = _tmp2_;
#line 36 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	lines_length1 = _vala_array_length (_tmp1_);
#line 36 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	_lines_size_ = lines_length1;
#line 37 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	_tmp3_ = lines;
#line 37 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	_tmp3__length1 = lines_length1;
#line 37 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	if (_tmp3__length1 < 2) {
#line 166 "rygel-mediathek-mov-playlist-parser.c"
		GError* _tmp4_;
#line 38 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
		_tmp4_ = g_error_new_literal (RYGEL_MEDIATHEK_VIDEO_ITEM_ERROR, RYGEL_MEDIATHEK_VIDEO_ITEM_ERROR_XML_PARSE_ERROR, "Not enough entries in playlist");
#line 38 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
		_inner_error_ = _tmp4_;
#line 38 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
		if (_inner_error_->domain == RYGEL_MEDIATHEK_VIDEO_ITEM_ERROR) {
#line 38 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
			g_propagate_error (error, _inner_error_);
#line 38 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
			lines = (_vala_array_free (lines, lines_length1, (GDestroyNotify) g_free), NULL);
#line 38 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
			return NULL;
#line 180 "rygel-mediathek-mov-playlist-parser.c"
		} else {
#line 38 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
			lines = (_vala_array_free (lines, lines_length1, (GDestroyNotify) g_free), NULL);
#line 38 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 38 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
			g_clear_error (&_inner_error_);
#line 38 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
			return NULL;
#line 190 "rygel-mediathek-mov-playlist-parser.c"
		}
	}
#line 42 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	_tmp5_ = lines;
#line 42 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	_tmp5__length1 = lines_length1;
#line 42 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	_tmp6_ = _tmp5_[0];
#line 42 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	if (g_strcmp0 (_tmp6_, "RTSPtext") != 0) {
#line 201 "rygel-mediathek-mov-playlist-parser.c"
		GError* _tmp7_;
#line 43 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
		_tmp7_ = g_error_new_literal (RYGEL_MEDIATHEK_VIDEO_ITEM_ERROR, RYGEL_MEDIATHEK_VIDEO_ITEM_ERROR_XML_PARSE_ERROR, "Invalid playlist format");
#line 43 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
		_inner_error_ = _tmp7_;
#line 43 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
		if (_inner_error_->domain == RYGEL_MEDIATHEK_VIDEO_ITEM_ERROR) {
#line 43 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
			g_propagate_error (error, _inner_error_);
#line 43 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
			lines = (_vala_array_free (lines, lines_length1, (GDestroyNotify) g_free), NULL);
#line 43 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
			return NULL;
#line 215 "rygel-mediathek-mov-playlist-parser.c"
		} else {
#line 43 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
			lines = (_vala_array_free (lines, lines_length1, (GDestroyNotify) g_free), NULL);
#line 43 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 43 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
			g_clear_error (&_inner_error_);
#line 43 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
			return NULL;
#line 225 "rygel-mediathek-mov-playlist-parser.c"
		}
	}
#line 46 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	_tmp8_ = lines;
#line 46 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	_tmp8__length1 = lines_length1;
#line 46 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	_tmp9_ = _tmp8_[1];
#line 46 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	_tmp10_ = g_str_has_prefix (_tmp9_, "rtsp");
#line 46 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	if (!_tmp10_) {
#line 238 "rygel-mediathek-mov-playlist-parser.c"
		GError* _tmp11_;
#line 47 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
		_tmp11_ = g_error_new_literal (RYGEL_MEDIATHEK_VIDEO_ITEM_ERROR, RYGEL_MEDIATHEK_VIDEO_ITEM_ERROR_XML_PARSE_ERROR, "No rtsp url found in playlist");
#line 47 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
		_inner_error_ = _tmp11_;
#line 47 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
		if (_inner_error_->domain == RYGEL_MEDIATHEK_VIDEO_ITEM_ERROR) {
#line 47 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
			g_propagate_error (error, _inner_error_);
#line 47 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
			lines = (_vala_array_free (lines, lines_length1, (GDestroyNotify) g_free), NULL);
#line 47 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
			return NULL;
#line 252 "rygel-mediathek-mov-playlist-parser.c"
		} else {
#line 47 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
			lines = (_vala_array_free (lines, lines_length1, (GDestroyNotify) g_free), NULL);
#line 47 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
#line 47 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
			g_clear_error (&_inner_error_);
#line 47 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
			return NULL;
#line 262 "rygel-mediathek-mov-playlist-parser.c"
		}
	}
#line 51 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	_tmp12_ = gee_array_list_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL);
#line 51 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	list = _tmp12_;
#line 52 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	_tmp13_ = list;
#line 52 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	_tmp14_ = lines;
#line 52 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	_tmp14__length1 = lines_length1;
#line 52 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	_tmp15_ = _tmp14_[1];
#line 52 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp13_, _tmp15_);
#line 54 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	result = (GeeList*) list;
#line 54 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	lines = (_vala_array_free (lines, lines_length1, (GDestroyNotify) g_free), NULL);
#line 54 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	return result;
#line 285 "rygel-mediathek-mov-playlist-parser.c"
}


static void rygel_mediathek_mov_playlist_parser_class_init (RygelMediathekMovPlaylistParserClass * klass) {
#line 26 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	rygel_mediathek_mov_playlist_parser_parent_class = g_type_class_peek_parent (klass);
#line 26 "/home/mryan/src/rygel/src/plugins/mediathek/rygel-mediathek-mov-playlist-parser.vala"
	RYGEL_MEDIATHEK_PLAYLIST_PARSER_CLASS (klass)->parse_playlist = rygel_mediathek_mov_playlist_parser_real_parse_playlist;
#line 294 "rygel-mediathek-mov-playlist-parser.c"
}


static void rygel_mediathek_mov_playlist_parser_instance_init (RygelMediathekMovPlaylistParser * self) {
}


GType rygel_mediathek_mov_playlist_parser_get_type (void) {
	static volatile gsize rygel_mediathek_mov_playlist_parser_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_mediathek_mov_playlist_parser_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelMediathekMovPlaylistParserClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_mediathek_mov_playlist_parser_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelMediathekMovPlaylistParser), 0, (GInstanceInitFunc) rygel_mediathek_mov_playlist_parser_instance_init, NULL };
		GType rygel_mediathek_mov_playlist_parser_type_id;
		rygel_mediathek_mov_playlist_parser_type_id = g_type_register_static (RYGEL_MEDIATHEK_TYPE_PLAYLIST_PARSER, "RygelMediathekMovPlaylistParser", &g_define_type_info, 0);
		g_once_init_leave (&rygel_mediathek_mov_playlist_parser_type_id__volatile, rygel_mediathek_mov_playlist_parser_type_id);
	}
	return rygel_mediathek_mov_playlist_parser_type_id__volatile;
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}


static gint _vala_array_length (gpointer array) {
	int length;
	length = 0;
	if (array) {
		while (((gpointer*) array)[length]) {
			length++;
		}
	}
	return length;
}



