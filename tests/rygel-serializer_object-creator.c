/* rygel-serializer_object-creator.c generated by valac 0.20.1.53-91609, the Vala compiler
 * generated from rygel-serializer_object-creator.vala, do not modify */

/*
 * Copyright (C) 2012 Intel Corporation.
 *
 * Author: Jens Georg <jensg@openismus.com>
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
#include <libgupnp-av/gupnp-av.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_SERIALIZER_TYPE (serializer_type_get_type ())

#define RYGEL_TYPE_SERIALIZER (rygel_serializer_get_type ())
#define RYGEL_SERIALIZER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_SERIALIZER, RygelSerializer))
#define RYGEL_SERIALIZER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_SERIALIZER, RygelSerializerClass))
#define RYGEL_IS_SERIALIZER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_SERIALIZER))
#define RYGEL_IS_SERIALIZER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_SERIALIZER))
#define RYGEL_SERIALIZER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_SERIALIZER, RygelSerializerClass))

typedef struct _RygelSerializer RygelSerializer;
typedef struct _RygelSerializerClass RygelSerializerClass;
typedef struct _RygelSerializerPrivate RygelSerializerPrivate;

#define RYGEL_TYPE_M3_UPLAY_LIST (rygel_m3_uplay_list_get_type ())
#define RYGEL_M3_UPLAY_LIST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_M3_UPLAY_LIST, RygelM3UPlayList))
#define RYGEL_M3_UPLAY_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_M3_UPLAY_LIST, RygelM3UPlayListClass))
#define RYGEL_IS_M3_UPLAY_LIST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_M3_UPLAY_LIST))
#define RYGEL_IS_M3_UPLAY_LIST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_M3_UPLAY_LIST))
#define RYGEL_M3_UPLAY_LIST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_M3_UPLAY_LIST, RygelM3UPlayListClass))

typedef struct _RygelM3UPlayList RygelM3UPlayList;
typedef struct _RygelM3UPlayListClass RygelM3UPlayListClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

typedef enum  {
	SERIALIZER_TYPE_GENERIC_DIDL,
	SERIALIZER_TYPE_DIDL_S,
	SERIALIZER_TYPE_M3UEXT
} SerializerType;

struct _RygelSerializer {
	GObject parent_instance;
	RygelSerializerPrivate * priv;
};

struct _RygelSerializerClass {
	GObjectClass parent_class;
};

struct _RygelSerializerPrivate {
	GUPnPDIDLLiteWriter* writer;
	GUPnPMediaCollection* collection;
	RygelM3UPlayList* playlist;
	SerializerType _serializer_type;
};


static gpointer rygel_serializer_parent_class = NULL;

GType serializer_type_get_type (void) G_GNUC_CONST;
GType rygel_serializer_get_type (void) G_GNUC_CONST;
GType rygel_m3_uplay_list_get_type (void) G_GNUC_CONST;
#define RYGEL_SERIALIZER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_SERIALIZER, RygelSerializerPrivate))
enum  {
	RYGEL_SERIALIZER_DUMMY_PROPERTY,
	RYGEL_SERIALIZER_SERIALIZER_TYPE
};
RygelSerializer* rygel_serializer_new (SerializerType type);
RygelSerializer* rygel_serializer_construct (GType object_type, SerializerType type);
static void rygel_serializer_real_constructed (GObject* base);
static SerializerType rygel_serializer_get_serializer_type (RygelSerializer* self);
RygelM3UPlayList* rygel_m3_uplay_list_new (void);
RygelM3UPlayList* rygel_m3_uplay_list_construct (GType object_type);
GUPnPDIDLLiteItem* rygel_serializer_add_item (RygelSerializer* self);
GUPnPDIDLLiteItem* rygel_m3_uplay_list_add_item (RygelM3UPlayList* self);
GUPnPDIDLLiteContainer* rygel_serializer_add_container (RygelSerializer* self);
void rygel_serializer_filter (RygelSerializer* self, const gchar* filter_string);
gchar* rygel_serializer_get_string (RygelSerializer* self);
gchar* rygel_m3_uplay_list_get_string (RygelM3UPlayList* self);
static void rygel_serializer_set_serializer_type (RygelSerializer* self, SerializerType value);
static void rygel_serializer_finalize (GObject* obj);
static void _vala_rygel_serializer_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_rygel_serializer_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


GType serializer_type_get_type (void) {
	static volatile gsize serializer_type_type_id__volatile = 0;
	if (g_once_init_enter (&serializer_type_type_id__volatile)) {
		static const GEnumValue values[] = {{SERIALIZER_TYPE_GENERIC_DIDL, "SERIALIZER_TYPE_GENERIC_DIDL", "generic-didl"}, {SERIALIZER_TYPE_DIDL_S, "SERIALIZER_TYPE_DIDL_S", "didl-s"}, {SERIALIZER_TYPE_M3UEXT, "SERIALIZER_TYPE_M3UEXT", "m3uext"}, {0, NULL, NULL}};
		GType serializer_type_type_id;
		serializer_type_type_id = g_enum_register_static ("SerializerType", values);
		g_once_init_leave (&serializer_type_type_id__volatile, serializer_type_type_id);
	}
	return serializer_type_type_id__volatile;
}


RygelSerializer* rygel_serializer_construct (GType object_type, SerializerType type) {
	RygelSerializer * self = NULL;
	SerializerType _tmp0_ = 0;
#line 49 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	_tmp0_ = type;
#line 49 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	self = (RygelSerializer*) g_object_new (object_type, "serializer-type", _tmp0_, NULL);
#line 48 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	return self;
#line 130 "rygel-serializer_object-creator.c"
}


RygelSerializer* rygel_serializer_new (SerializerType type) {
#line 48 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	return rygel_serializer_construct (RYGEL_TYPE_SERIALIZER, type);
#line 137 "rygel-serializer_object-creator.c"
}


static void rygel_serializer_real_constructed (GObject* base) {
	RygelSerializer * self;
	SerializerType _tmp0_ = 0;
#line 52 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	self = (RygelSerializer*) base;
#line 53 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	_tmp0_ = self->priv->_serializer_type;
#line 53 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	switch (_tmp0_) {
#line 53 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		case SERIALIZER_TYPE_GENERIC_DIDL:
#line 152 "rygel-serializer_object-creator.c"
		{
			GUPnPDIDLLiteWriter* _tmp1_ = NULL;
#line 55 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			_tmp1_ = gupnp_didl_lite_writer_new (NULL);
#line 55 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			_g_object_unref0 (self->priv->writer);
#line 55 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			self->priv->writer = _tmp1_;
#line 56 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			break;
#line 163 "rygel-serializer_object-creator.c"
		}
#line 53 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		case SERIALIZER_TYPE_DIDL_S:
#line 167 "rygel-serializer_object-creator.c"
		{
			GUPnPMediaCollection* _tmp2_ = NULL;
#line 58 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			_tmp2_ = gupnp_media_collection_new ();
#line 58 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			_g_object_unref0 (self->priv->collection);
#line 58 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			self->priv->collection = _tmp2_;
#line 59 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			break;
#line 178 "rygel-serializer_object-creator.c"
		}
#line 53 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		case SERIALIZER_TYPE_M3UEXT:
#line 182 "rygel-serializer_object-creator.c"
		{
			RygelM3UPlayList* _tmp3_ = NULL;
#line 61 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			_tmp3_ = rygel_m3_uplay_list_new ();
#line 61 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			_g_object_unref0 (self->priv->playlist);
#line 61 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			self->priv->playlist = _tmp3_;
#line 62 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			break;
#line 193 "rygel-serializer_object-creator.c"
		}
		default:
		{
#line 64 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			g_assert_not_reached ();
#line 199 "rygel-serializer_object-creator.c"
		}
	}
#line 67 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	G_OBJECT_CLASS (rygel_serializer_parent_class)->constructed (G_TYPE_CHECK_INSTANCE_CAST (self, G_TYPE_OBJECT, GObject));
#line 204 "rygel-serializer_object-creator.c"
}


GUPnPDIDLLiteItem* rygel_serializer_add_item (RygelSerializer* self) {
	GUPnPDIDLLiteItem* result = NULL;
	SerializerType _tmp0_ = 0;
#line 70 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 71 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	_tmp0_ = self->priv->_serializer_type;
#line 71 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	switch (_tmp0_) {
#line 71 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		case SERIALIZER_TYPE_GENERIC_DIDL:
#line 219 "rygel-serializer_object-creator.c"
		{
			GUPnPDIDLLiteWriter* _tmp1_ = NULL;
			GUPnPDIDLLiteItem* _tmp2_ = NULL;
#line 73 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			_tmp1_ = self->priv->writer;
#line 73 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			_tmp2_ = gupnp_didl_lite_writer_add_item (_tmp1_);
#line 73 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			result = _tmp2_;
#line 73 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			return result;
#line 231 "rygel-serializer_object-creator.c"
		}
#line 71 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		case SERIALIZER_TYPE_DIDL_S:
#line 235 "rygel-serializer_object-creator.c"
		{
			GUPnPMediaCollection* _tmp3_ = NULL;
			GUPnPDIDLLiteItem* _tmp4_ = NULL;
#line 75 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			_tmp3_ = self->priv->collection;
#line 75 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			_tmp4_ = gupnp_media_collection_add_item (_tmp3_);
#line 75 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			result = _tmp4_;
#line 75 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			return result;
#line 247 "rygel-serializer_object-creator.c"
		}
#line 71 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		case SERIALIZER_TYPE_M3UEXT:
#line 251 "rygel-serializer_object-creator.c"
		{
			RygelM3UPlayList* _tmp5_ = NULL;
			GUPnPDIDLLiteItem* _tmp6_ = NULL;
#line 77 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			_tmp5_ = self->priv->playlist;
#line 77 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			_tmp6_ = rygel_m3_uplay_list_add_item (_tmp5_);
#line 77 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			result = _tmp6_;
#line 77 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			return result;
#line 263 "rygel-serializer_object-creator.c"
		}
		default:
		{
#line 79 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			result = NULL;
#line 79 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			return result;
#line 271 "rygel-serializer_object-creator.c"
		}
	}
}


GUPnPDIDLLiteContainer* rygel_serializer_add_container (RygelSerializer* self) {
	GUPnPDIDLLiteContainer* result = NULL;
	GUPnPDIDLLiteWriter* _tmp0_ = NULL;
#line 83 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 84 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	_tmp0_ = self->priv->writer;
#line 84 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	if (_tmp0_ != NULL) {
#line 286 "rygel-serializer_object-creator.c"
		GUPnPDIDLLiteWriter* _tmp1_ = NULL;
		GUPnPDIDLLiteContainer* _tmp2_ = NULL;
#line 85 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		_tmp1_ = self->priv->writer;
#line 85 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		_tmp2_ = gupnp_didl_lite_writer_add_container (_tmp1_);
#line 85 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		result = _tmp2_;
#line 85 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		return result;
#line 297 "rygel-serializer_object-creator.c"
	} else {
#line 87 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		result = NULL;
#line 87 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		return result;
#line 303 "rygel-serializer_object-creator.c"
	}
}


void rygel_serializer_filter (RygelSerializer* self, const gchar* filter_string) {
	GUPnPDIDLLiteWriter* _tmp0_ = NULL;
#line 91 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	g_return_if_fail (self != NULL);
#line 91 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	g_return_if_fail (filter_string != NULL);
#line 92 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	_tmp0_ = self->priv->writer;
#line 92 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	if (_tmp0_ != NULL) {
#line 318 "rygel-serializer_object-creator.c"
		GUPnPDIDLLiteWriter* _tmp1_ = NULL;
		const gchar* _tmp2_ = NULL;
#line 93 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		_tmp1_ = self->priv->writer;
#line 93 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		_tmp2_ = filter_string;
#line 93 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		gupnp_didl_lite_writer_filter (_tmp1_, _tmp2_);
#line 327 "rygel-serializer_object-creator.c"
	}
}


gchar* rygel_serializer_get_string (RygelSerializer* self) {
	gchar* result = NULL;
	SerializerType _tmp0_ = 0;
#line 97 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 98 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	_tmp0_ = self->priv->_serializer_type;
#line 98 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	switch (_tmp0_) {
#line 98 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		case SERIALIZER_TYPE_GENERIC_DIDL:
#line 343 "rygel-serializer_object-creator.c"
		{
			GUPnPDIDLLiteWriter* _tmp1_ = NULL;
			gchar* _tmp2_ = NULL;
#line 100 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			_tmp1_ = self->priv->writer;
#line 100 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			_tmp2_ = gupnp_didl_lite_writer_get_string (_tmp1_);
#line 100 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			result = _tmp2_;
#line 100 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			return result;
#line 355 "rygel-serializer_object-creator.c"
		}
#line 98 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		case SERIALIZER_TYPE_DIDL_S:
#line 359 "rygel-serializer_object-creator.c"
		{
			GUPnPMediaCollection* _tmp3_ = NULL;
			gchar* _tmp4_ = NULL;
#line 102 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			_tmp3_ = self->priv->collection;
#line 102 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			_tmp4_ = gupnp_media_collection_get_string (_tmp3_);
#line 102 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			result = _tmp4_;
#line 102 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			return result;
#line 371 "rygel-serializer_object-creator.c"
		}
#line 98 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		case SERIALIZER_TYPE_M3UEXT:
#line 375 "rygel-serializer_object-creator.c"
		{
			RygelM3UPlayList* _tmp5_ = NULL;
			gchar* _tmp6_ = NULL;
#line 104 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			_tmp5_ = self->priv->playlist;
#line 104 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			_tmp6_ = rygel_m3_uplay_list_get_string (_tmp5_);
#line 104 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			result = _tmp6_;
#line 104 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			return result;
#line 387 "rygel-serializer_object-creator.c"
		}
		default:
		{
			gchar* _tmp7_ = NULL;
#line 106 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			_tmp7_ = g_strdup ("");
#line 106 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			result = _tmp7_;
#line 106 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
			return result;
#line 398 "rygel-serializer_object-creator.c"
		}
	}
}


static SerializerType rygel_serializer_get_serializer_type (RygelSerializer* self) {
	SerializerType result;
	SerializerType _tmp0_ = 0;
#line 46 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	g_return_val_if_fail (self != NULL, 0);
#line 46 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	_tmp0_ = self->priv->_serializer_type;
#line 46 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	result = _tmp0_;
#line 46 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	return result;
#line 415 "rygel-serializer_object-creator.c"
}


static void rygel_serializer_set_serializer_type (RygelSerializer* self, SerializerType value) {
	SerializerType _tmp0_ = 0;
#line 46 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	g_return_if_fail (self != NULL);
#line 46 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	_tmp0_ = value;
#line 46 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	self->priv->_serializer_type = _tmp0_;
#line 46 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	g_object_notify ((GObject *) self, "serializer-type");
#line 429 "rygel-serializer_object-creator.c"
}


static void rygel_serializer_class_init (RygelSerializerClass * klass) {
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	rygel_serializer_parent_class = g_type_class_peek_parent (klass);
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	g_type_class_add_private (klass, sizeof (RygelSerializerPrivate));
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	G_OBJECT_CLASS (klass)->constructed = rygel_serializer_real_constructed;
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_rygel_serializer_get_property;
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_rygel_serializer_set_property;
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	G_OBJECT_CLASS (klass)->finalize = rygel_serializer_finalize;
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_SERIALIZER_SERIALIZER_TYPE, g_param_spec_enum ("serializer-type", "serializer-type", "serializer-type", TYPE_SERIALIZER_TYPE, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 448 "rygel-serializer_object-creator.c"
}


static void rygel_serializer_instance_init (RygelSerializer * self) {
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	self->priv = RYGEL_SERIALIZER_GET_PRIVATE (self);
#line 455 "rygel-serializer_object-creator.c"
}


static void rygel_serializer_finalize (GObject* obj) {
	RygelSerializer * self;
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_SERIALIZER, RygelSerializer);
#line 41 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	_g_object_unref0 (self->priv->writer);
#line 42 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	_g_object_unref0 (self->priv->collection);
#line 43 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	_g_object_unref0 (self->priv->playlist);
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	G_OBJECT_CLASS (rygel_serializer_parent_class)->finalize (obj);
#line 471 "rygel-serializer_object-creator.c"
}


/**
 * Proxy class hiding the different serializers (DIDL, DIDL_S, M3U) behind a
 * single implementation.
 */
GType rygel_serializer_get_type (void) {
	static volatile gsize rygel_serializer_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_serializer_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelSerializerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_serializer_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelSerializer), 0, (GInstanceInitFunc) rygel_serializer_instance_init, NULL };
		GType rygel_serializer_type_id;
		rygel_serializer_type_id = g_type_register_static (G_TYPE_OBJECT, "RygelSerializer", &g_define_type_info, 0);
		g_once_init_leave (&rygel_serializer_type_id__volatile, rygel_serializer_type_id);
	}
	return rygel_serializer_type_id__volatile;
}


static void _vala_rygel_serializer_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	RygelSerializer * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, RYGEL_TYPE_SERIALIZER, RygelSerializer);
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	switch (property_id) {
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		case RYGEL_SERIALIZER_SERIALIZER_TYPE:
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		g_value_set_enum (value, rygel_serializer_get_serializer_type (self));
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		break;
#line 502 "rygel-serializer_object-creator.c"
		default:
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		break;
#line 508 "rygel-serializer_object-creator.c"
	}
}


static void _vala_rygel_serializer_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	RygelSerializer * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, RYGEL_TYPE_SERIALIZER, RygelSerializer);
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
	switch (property_id) {
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		case RYGEL_SERIALIZER_SERIALIZER_TYPE:
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		rygel_serializer_set_serializer_type (self, g_value_get_enum (value));
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		break;
#line 524 "rygel-serializer_object-creator.c"
		default:
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 40 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/tests/rygel-serializer_object-creator.vala"
		break;
#line 530 "rygel-serializer_object-creator.c"
	}
}


