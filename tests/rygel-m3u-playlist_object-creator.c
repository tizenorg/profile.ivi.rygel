/* rygel-m3u-playlist_object-creator.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-m3u-playlist_object-creator.vala, do not modify */

/*
 * Copyright (C) 2013 Jens Georg.
 *
 * Authors: Jens Georg <mail@jensge.org>
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
#include <gee.h>
#include <libgupnp-av/gupnp-av.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gi18n-lib.h>


#define RYGEL_TYPE_M3_UPLAY_LIST (rygel_m3_uplay_list_get_type ())
#define RYGEL_M3_UPLAY_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_M3_UPLAY_LIST, RygelM3UPlayList))
#define RYGEL_M3_UPLAY_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_M3_UPLAY_LIST, RygelM3UPlayListClass))
#define RYGEL_IS_M3_UPLAY_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_M3_UPLAY_LIST))
#define RYGEL_IS_M3_UPLAY_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_M3_UPLAY_LIST))
#define RYGEL_M3_UPLAY_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_M3_UPLAY_LIST, RygelM3UPlayListClass))

typedef struct _RygelM3UPlayList RygelM3UPlayList;
typedef struct _RygelM3UPlayListClass RygelM3UPlayListClass;
typedef struct _RygelM3UPlayListPrivate RygelM3UPlayListPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define __g_list_free__g_object_unref0_0(var) ((var == NULL) ? NULL : (var = (_g_list_free__g_object_unref0_ (var), NULL)))
#define _g_string_free0(var) ((var == NULL) ? NULL : (var = (g_string_free (var, TRUE), NULL)))

struct _RygelM3UPlayList {
	GObject parent_instance;
	RygelM3UPlayListPrivate * priv;
};

struct _RygelM3UPlayListClass {
	GObjectClass parent_class;
};

struct _RygelM3UPlayListPrivate {
	GeeLinkedList* items;
	GUPnPDIDLLiteWriter* writer;
};


static gpointer rygel_m3_uplay_list_parent_class = NULL;

GType rygel_m3_uplay_list_get_type (void) G_GNUC_CONST;
#define RYGEL_M3_UPLAY_LIST_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_M3_UPLAY_LIST, RygelM3UPlayListPrivate))
enum  {
	RYGEL_M3_UPLAY_LIST_DUMMY_PROPERTY
};
RygelM3UPlayList* rygel_m3_uplay_list_new (void);
RygelM3UPlayList* rygel_m3_uplay_list_construct (GType object_type);
static void rygel_m3_uplay_list_real_constructed (GObject* base);
GUPnPDIDLLiteItem* rygel_m3_uplay_list_add_item (RygelM3UPlayList* self);
gchar* rygel_m3_uplay_list_get_string (RygelM3UPlayList* self);
static void _g_object_unref0_ (gpointer var);
static void _g_list_free__g_object_unref0_ (GList* self);
static void rygel_m3_uplay_list_finalize (GObject* obj);


RygelM3UPlayList* rygel_m3_uplay_list_construct (GType object_type) {
	RygelM3UPlayList * self = NULL;
#line 40 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	self = (RygelM3UPlayList*) g_object_new (object_type, NULL);
#line 39 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	return self;
#line 89 "rygel-m3u-playlist_object-creator.c"
}


RygelM3UPlayList* rygel_m3_uplay_list_new (void) {
#line 39 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	return rygel_m3_uplay_list_construct (RYGEL_TYPE_M3_UPLAY_LIST);
#line 96 "rygel-m3u-playlist_object-creator.c"
}


static void rygel_m3_uplay_list_real_constructed (GObject* base) {
	RygelM3UPlayList * self;
	GeeLinkedList* _tmp0_ = NULL;
	GUPnPDIDLLiteWriter* _tmp1_ = NULL;
#line 43 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	self = (RygelM3UPlayList*) base;
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	_tmp0_ = gee_linked_list_new (gupnp_didl_lite_item_get_type (), (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL);
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	_g_object_unref0 (self->priv->items);
#line 44 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	self->priv->items = _tmp0_;
#line 45 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	_tmp1_ = gupnp_didl_lite_writer_new (NULL);
#line 45 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	_g_object_unref0 (self->priv->writer);
#line 45 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	self->priv->writer = _tmp1_;
#line 118 "rygel-m3u-playlist_object-creator.c"
}


GUPnPDIDLLiteItem* rygel_m3_uplay_list_add_item (RygelM3UPlayList* self) {
	GUPnPDIDLLiteItem* result = NULL;
	GeeLinkedList* _tmp0_ = NULL;
	GUPnPDIDLLiteWriter* _tmp1_ = NULL;
	GUPnPDIDLLiteItem* _tmp2_ = NULL;
	GUPnPDIDLLiteItem* _tmp3_ = NULL;
	GeeLinkedList* _tmp4_ = NULL;
	gpointer _tmp5_ = NULL;
#line 49 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 50 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	_tmp0_ = self->priv->items;
#line 50 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	_tmp1_ = self->priv->writer;
#line 50 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	_tmp2_ = gupnp_didl_lite_writer_add_item (_tmp1_);
#line 50 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	_tmp3_ = _tmp2_;
#line 50 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp0_, _tmp3_);
#line 50 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	_g_object_unref0 (_tmp3_);
#line 52 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	_tmp4_ = self->priv->items;
#line 52 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	_tmp5_ = gee_linked_list_last (_tmp4_);
#line 52 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	result = (GUPnPDIDLLiteItem*) _tmp5_;
#line 52 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	return result;
#line 152 "rygel-m3u-playlist_object-creator.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 58 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	return self ? g_object_ref (self) : NULL;
#line 159 "rygel-m3u-playlist_object-creator.c"
}


static void _g_object_unref0_ (gpointer var) {
#line 60 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	(var == NULL) ? NULL : (var = (g_object_unref (var), NULL));
#line 166 "rygel-m3u-playlist_object-creator.c"
}


static void _g_list_free__g_object_unref0_ (GList* self) {
#line 60 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	g_list_foreach (self, (GFunc) _g_object_unref0_, NULL);
#line 60 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	g_list_free (self);
#line 175 "rygel-m3u-playlist_object-creator.c"
}


gchar* rygel_m3_uplay_list_get_string (RygelM3UPlayList* self) {
	gchar* result = NULL;
	GString* builder = NULL;
	GString* _tmp0_ = NULL;
	GString* _tmp50_ = NULL;
	const gchar* _tmp51_ = NULL;
	gchar* _tmp52_ = NULL;
#line 55 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 56 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	_tmp0_ = g_string_new ("#EXTM3U\r\n");
#line 56 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	builder = _tmp0_;
#line 192 "rygel-m3u-playlist_object-creator.c"
	{
		GeeLinkedList* _item_list = NULL;
		GeeLinkedList* _tmp1_ = NULL;
		GeeLinkedList* _tmp2_ = NULL;
		gint _item_size = 0;
		GeeLinkedList* _tmp3_ = NULL;
		gint _tmp4_ = 0;
		gint _tmp5_ = 0;
		gint _item_index = 0;
#line 58 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
		_tmp1_ = self->priv->items;
#line 58 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
		_tmp2_ = _g_object_ref0 (_tmp1_);
#line 58 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
		_item_list = _tmp2_;
#line 58 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
		_tmp3_ = _item_list;
#line 58 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
		_tmp4_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp3_);
#line 58 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
		_tmp5_ = _tmp4_;
#line 58 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
		_item_size = _tmp5_;
#line 58 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
		_item_index = -1;
#line 58 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
		while (TRUE) {
#line 220 "rygel-m3u-playlist_object-creator.c"
			gint _tmp6_ = 0;
			gint _tmp7_ = 0;
			gint _tmp8_ = 0;
			GUPnPDIDLLiteItem* item = NULL;
			GeeLinkedList* _tmp9_ = NULL;
			gint _tmp10_ = 0;
			gpointer _tmp11_ = NULL;
			GList* resources = NULL;
			GUPnPDIDLLiteItem* _tmp12_ = NULL;
			GList* _tmp13_ = NULL;
			GList* _tmp14_ = NULL;
#line 58 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
			_tmp6_ = _item_index;
#line 58 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
			_item_index = _tmp6_ + 1;
#line 58 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
			_tmp7_ = _item_index;
#line 58 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
			_tmp8_ = _item_size;
#line 58 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
			if (!(_tmp7_ < _tmp8_)) {
#line 58 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				break;
#line 244 "rygel-m3u-playlist_object-creator.c"
			}
#line 58 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
			_tmp9_ = _item_list;
#line 58 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
			_tmp10_ = _item_index;
#line 58 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
			_tmp11_ = gee_abstract_list_get ((GeeAbstractList*) _tmp9_, _tmp10_);
#line 58 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
			item = (GUPnPDIDLLiteItem*) _tmp11_;
#line 59 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
			_tmp12_ = item;
#line 59 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
			_tmp13_ = gupnp_didl_lite_object_get_resources ((GUPnPDIDLLiteObject*) _tmp12_);
#line 59 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
			resources = _tmp13_;
#line 60 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
			_tmp14_ = resources;
#line 60 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
			if (_tmp14_ != NULL) {
#line 264 "rygel-m3u-playlist_object-creator.c"
				GList* authors = NULL;
				GUPnPDIDLLiteItem* _tmp15_ = NULL;
				GList* _tmp16_ = NULL;
				GString* _tmp17_ = NULL;
				GList* _tmp18_ = NULL;
				gconstpointer _tmp19_ = NULL;
				glong _tmp20_ = 0L;
				glong _tmp21_ = 0L;
				GList* _tmp22_ = NULL;
				gchar* _tmp33_ = NULL;
				GUPnPDIDLLiteItem* _tmp34_ = NULL;
				const gchar* _tmp35_ = NULL;
				const gchar* _tmp36_ = NULL;
				gchar* _tmp37_ = NULL;
				const gchar* _tmp38_ = NULL;
				GString* _tmp41_ = NULL;
				const gchar* _tmp42_ = NULL;
				GString* _tmp43_ = NULL;
				GString* _tmp44_ = NULL;
				GList* _tmp45_ = NULL;
				gconstpointer _tmp46_ = NULL;
				const gchar* _tmp47_ = NULL;
				const gchar* _tmp48_ = NULL;
				GString* _tmp49_ = NULL;
#line 61 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				_tmp15_ = item;
#line 61 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				_tmp16_ = gupnp_didl_lite_object_get_artists ((GUPnPDIDLLiteObject*) _tmp15_);
#line 61 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				authors = _tmp16_;
#line 62 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				_tmp17_ = builder;
#line 62 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				_tmp18_ = resources;
#line 62 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				_tmp19_ = _tmp18_->data;
#line 62 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				_tmp20_ = gupnp_didl_lite_resource_get_duration ((GUPnPDIDLLiteResource*) _tmp19_);
#line 62 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				_tmp21_ = _tmp20_;
#line 62 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				g_string_append_printf (_tmp17_, "#EXTINF:%ld,", _tmp21_);
#line 64 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				_tmp22_ = authors;
#line 64 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				if (_tmp22_ != NULL) {
#line 311 "rygel-m3u-playlist_object-creator.c"
					gchar* _tmp23_ = NULL;
					GList* _tmp24_ = NULL;
					gconstpointer _tmp25_ = NULL;
					const gchar* _tmp26_ = NULL;
					gchar* _tmp27_ = NULL;
					const gchar* _tmp28_ = NULL;
					GString* _tmp31_ = NULL;
					const gchar* _tmp32_ = NULL;
#line 66 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
					_tmp24_ = authors;
#line 66 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
					_tmp25_ = _tmp24_->data;
#line 66 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
					_tmp26_ = gupnp_didl_lite_contributor_get_name ((GUPnPDIDLLiteContributor*) _tmp25_);
#line 66 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
					_tmp27_ = g_strdup (_tmp26_);
#line 66 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
					_tmp23_ = _tmp27_;
#line 66 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
					_tmp28_ = _tmp23_;
#line 66 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
					if (_tmp28_ == NULL) {
#line 334 "rygel-m3u-playlist_object-creator.c"
						const gchar* _tmp29_ = NULL;
						gchar* _tmp30_ = NULL;
#line 67 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
						_tmp29_ = _ ("Unknown");
#line 67 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
						_tmp30_ = g_strdup (_tmp29_);
#line 67 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
						_g_free0 (_tmp23_);
#line 67 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
						_tmp23_ = _tmp30_;
#line 345 "rygel-m3u-playlist_object-creator.c"
					}
#line 65 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
					_tmp31_ = builder;
#line 65 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
					_tmp32_ = _tmp23_;
#line 65 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
					g_string_append_printf (_tmp31_, "%s - ", _tmp32_);
#line 64 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
					_g_free0 (_tmp23_);
#line 355 "rygel-m3u-playlist_object-creator.c"
				}
#line 70 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				_tmp34_ = item;
#line 70 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				_tmp35_ = gupnp_didl_lite_object_get_title ((GUPnPDIDLLiteObject*) _tmp34_);
#line 70 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				_tmp36_ = _tmp35_;
#line 70 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				_tmp37_ = g_strdup (_tmp36_);
#line 70 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				_tmp33_ = _tmp37_;
#line 70 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				_tmp38_ = _tmp33_;
#line 70 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				if (_tmp38_ == NULL) {
#line 371 "rygel-m3u-playlist_object-creator.c"
					const gchar* _tmp39_ = NULL;
					gchar* _tmp40_ = NULL;
#line 70 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
					_tmp39_ = _ ("Unknown");
#line 70 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
					_tmp40_ = g_strdup (_tmp39_);
#line 70 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
					_g_free0 (_tmp33_);
#line 70 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
					_tmp33_ = _tmp40_;
#line 382 "rygel-m3u-playlist_object-creator.c"
				}
#line 70 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				_tmp41_ = builder;
#line 70 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				_tmp42_ = _tmp33_;
#line 70 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				g_string_append (_tmp41_, _tmp42_);
#line 71 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				_tmp43_ = builder;
#line 71 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				g_string_append (_tmp43_, "\r\n");
#line 72 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				_tmp44_ = builder;
#line 72 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				_tmp45_ = resources;
#line 72 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				_tmp46_ = _tmp45_->data;
#line 72 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				_tmp47_ = gupnp_didl_lite_resource_get_uri ((GUPnPDIDLLiteResource*) _tmp46_);
#line 72 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				_tmp48_ = _tmp47_;
#line 72 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				g_string_append (_tmp44_, _tmp48_);
#line 73 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				_tmp49_ = builder;
#line 73 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				g_string_append (_tmp49_, "\r\n");
#line 60 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				_g_free0 (_tmp33_);
#line 60 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
				__g_list_free__g_object_unref0_0 (authors);
#line 414 "rygel-m3u-playlist_object-creator.c"
			}
#line 58 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
			__g_list_free__g_object_unref0_0 (resources);
#line 58 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
			_g_object_unref0 (item);
#line 420 "rygel-m3u-playlist_object-creator.c"
		}
#line 58 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
		_g_object_unref0 (_item_list);
#line 424 "rygel-m3u-playlist_object-creator.c"
	}
#line 77 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	_tmp50_ = builder;
#line 77 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	_tmp51_ = _tmp50_->str;
#line 77 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	_tmp52_ = g_strdup (_tmp51_);
#line 77 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	result = _tmp52_;
#line 77 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	_g_string_free0 (builder);
#line 77 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	return result;
#line 438 "rygel-m3u-playlist_object-creator.c"
}


static void rygel_m3_uplay_list_class_init (RygelM3UPlayListClass * klass) {
#line 33 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	rygel_m3_uplay_list_parent_class = g_type_class_peek_parent (klass);
#line 33 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	g_type_class_add_private (klass, sizeof (RygelM3UPlayListPrivate));
#line 33 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	G_OBJECT_CLASS (klass)->constructed = rygel_m3_uplay_list_real_constructed;
#line 33 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	G_OBJECT_CLASS (klass)->finalize = rygel_m3_uplay_list_finalize;
#line 451 "rygel-m3u-playlist_object-creator.c"
}


static void rygel_m3_uplay_list_instance_init (RygelM3UPlayList * self) {
#line 33 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	self->priv = RYGEL_M3_UPLAY_LIST_GET_PRIVATE (self);
#line 458 "rygel-m3u-playlist_object-creator.c"
}


static void rygel_m3_uplay_list_finalize (GObject* obj) {
	RygelM3UPlayList * self;
#line 33 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_M3_UPLAY_LIST, RygelM3UPlayList);
#line 34 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	_g_object_unref0 (self->priv->items);
#line 37 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	_g_object_unref0 (self->priv->writer);
#line 33 "/home/jku/src/jhbuild/sources/rygel/tests/rygel-m3u-playlist_object-creator.vala"
	G_OBJECT_CLASS (rygel_m3_uplay_list_parent_class)->finalize (obj);
#line 472 "rygel-m3u-playlist_object-creator.c"
}


/**
 * Serializer class that serializes to an EXTM3U playlist for use with normal
 * media players or UPnP Renderers that don't support DIDL_S.
 *
 * For the description of the EXTM3U format, see
 * http://en.wikipedia.org/wiki/M3U#Extended_M3U_directives
 */
GType rygel_m3_uplay_list_get_type (void) {
	static volatile gsize rygel_m3_uplay_list_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_m3_uplay_list_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelM3UPlayListClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_m3_uplay_list_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelM3UPlayList), 0, (GInstanceInitFunc) rygel_m3_uplay_list_instance_init, NULL };
		GType rygel_m3_uplay_list_type_id;
		rygel_m3_uplay_list_type_id = g_type_register_static (G_TYPE_OBJECT, "RygelM3UPlayList", &g_define_type_info, 0);
		g_once_init_leave (&rygel_m3_uplay_list_type_id__volatile, rygel_m3_uplay_list_type_id);
	}
	return rygel_m3_uplay_list_type_id__volatile;
}



