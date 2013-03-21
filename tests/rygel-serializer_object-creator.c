/* rygel-serializer_object-creator.c generated by valac 0.18.0, the Vala compiler
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
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

typedef enum  {
	SERIALIZER_TYPE_GENERIC_DIDL,
	SERIALIZER_TYPE_DIDL_S
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
};


static gpointer rygel_serializer_parent_class = NULL;

GType serializer_type_get_type (void) G_GNUC_CONST;
GType rygel_serializer_get_type (void) G_GNUC_CONST;
#define RYGEL_SERIALIZER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_SERIALIZER, RygelSerializerPrivate))
enum  {
	RYGEL_SERIALIZER_DUMMY_PROPERTY
};
RygelSerializer* rygel_serializer_new (SerializerType type);
RygelSerializer* rygel_serializer_construct (GType object_type, SerializerType type);
GUPnPDIDLLiteItem* rygel_serializer_add_item (RygelSerializer* self);
GUPnPDIDLLiteContainer* rygel_serializer_add_container (RygelSerializer* self);
void rygel_serializer_filter (RygelSerializer* self, const gchar* filter_string);
gchar* rygel_serializer_get_string (RygelSerializer* self);
static void rygel_serializer_finalize (GObject* obj);


GType serializer_type_get_type (void) {
	static volatile gsize serializer_type_type_id__volatile = 0;
	if (g_once_init_enter (&serializer_type_type_id__volatile)) {
		static const GEnumValue values[] = {{SERIALIZER_TYPE_GENERIC_DIDL, "SERIALIZER_TYPE_GENERIC_DIDL", "generic-didl"}, {SERIALIZER_TYPE_DIDL_S, "SERIALIZER_TYPE_DIDL_S", "didl-s"}, {0, NULL, NULL}};
		GType serializer_type_type_id;
		serializer_type_type_id = g_enum_register_static ("SerializerType", values);
		g_once_init_leave (&serializer_type_type_id__volatile, serializer_type_type_id);
	}
	return serializer_type_type_id__volatile;
}


RygelSerializer* rygel_serializer_construct (GType object_type, SerializerType type) {
	RygelSerializer * self = NULL;
	SerializerType _tmp0_;
	self = (RygelSerializer*) g_object_new (object_type, NULL);
	_tmp0_ = type;
	switch (_tmp0_) {
		case SERIALIZER_TYPE_GENERIC_DIDL:
		{
			GUPnPDIDLLiteWriter* _tmp1_;
			_tmp1_ = gupnp_didl_lite_writer_new (NULL);
			_g_object_unref0 (self->priv->writer);
			self->priv->writer = _tmp1_;
			break;
		}
		case SERIALIZER_TYPE_DIDL_S:
		{
			GUPnPMediaCollection* _tmp2_;
			_tmp2_ = gupnp_media_collection_new ();
			_g_object_unref0 (self->priv->collection);
			self->priv->collection = _tmp2_;
			break;
		}
		default:
		{
			g_assert_not_reached ();
		}
	}
	return self;
}


RygelSerializer* rygel_serializer_new (SerializerType type) {
	return rygel_serializer_construct (RYGEL_TYPE_SERIALIZER, type);
}


GUPnPDIDLLiteItem* rygel_serializer_add_item (RygelSerializer* self) {
	GUPnPDIDLLiteItem* result = NULL;
	GUPnPDIDLLiteWriter* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->writer;
	if (_tmp0_ != NULL) {
		GUPnPDIDLLiteWriter* _tmp1_;
		GUPnPDIDLLiteItem* _tmp2_ = NULL;
		_tmp1_ = self->priv->writer;
		_tmp2_ = gupnp_didl_lite_writer_add_item (_tmp1_);
		result = _tmp2_;
		return result;
	} else {
		GUPnPMediaCollection* _tmp3_;
		GUPnPDIDLLiteItem* _tmp4_ = NULL;
		_tmp3_ = self->priv->collection;
		_tmp4_ = gupnp_media_collection_add_item (_tmp3_);
		result = _tmp4_;
		return result;
	}
}


GUPnPDIDLLiteContainer* rygel_serializer_add_container (RygelSerializer* self) {
	GUPnPDIDLLiteContainer* result = NULL;
	GUPnPDIDLLiteWriter* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->writer;
	if (_tmp0_ != NULL) {
		GUPnPDIDLLiteWriter* _tmp1_;
		GUPnPDIDLLiteContainer* _tmp2_ = NULL;
		_tmp1_ = self->priv->writer;
		_tmp2_ = gupnp_didl_lite_writer_add_container (_tmp1_);
		result = _tmp2_;
		return result;
	} else {
		result = NULL;
		return result;
	}
}


void rygel_serializer_filter (RygelSerializer* self, const gchar* filter_string) {
	GUPnPDIDLLiteWriter* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (filter_string != NULL);
	_tmp0_ = self->priv->writer;
	if (_tmp0_ != NULL) {
		GUPnPDIDLLiteWriter* _tmp1_;
		const gchar* _tmp2_;
		_tmp1_ = self->priv->writer;
		_tmp2_ = filter_string;
		gupnp_didl_lite_writer_filter (_tmp1_, _tmp2_);
	}
}


gchar* rygel_serializer_get_string (RygelSerializer* self) {
	gchar* result = NULL;
	GUPnPDIDLLiteWriter* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->writer;
	if (_tmp0_ != NULL) {
		GUPnPDIDLLiteWriter* _tmp1_;
		gchar* _tmp2_ = NULL;
		_tmp1_ = self->priv->writer;
		_tmp2_ = gupnp_didl_lite_writer_get_string (_tmp1_);
		result = _tmp2_;
		return result;
	} else {
		GUPnPMediaCollection* _tmp3_;
		gchar* _tmp4_ = NULL;
		_tmp3_ = self->priv->collection;
		_tmp4_ = gupnp_media_collection_get_string (_tmp3_);
		result = _tmp4_;
		return result;
	}
}


static void rygel_serializer_class_init (RygelSerializerClass * klass) {
	rygel_serializer_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (RygelSerializerPrivate));
	G_OBJECT_CLASS (klass)->finalize = rygel_serializer_finalize;
}


static void rygel_serializer_instance_init (RygelSerializer * self) {
	self->priv = RYGEL_SERIALIZER_GET_PRIVATE (self);
}


static void rygel_serializer_finalize (GObject* obj) {
	RygelSerializer * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_SERIALIZER, RygelSerializer);
	_g_object_unref0 (self->priv->writer);
	_g_object_unref0 (self->priv->collection);
	G_OBJECT_CLASS (rygel_serializer_parent_class)->finalize (obj);
}


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



