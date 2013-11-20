/* rygel-gst-launch-audio-item.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-gst-launch-audio-item.vala, do not modify */

/*
 * Copyright (C) 2009 Thijs Vermeir <thijsvermeir@gmail.com>
 * Copyright (C) 2010 Nokia Corporation.
 * Copyright (C) 2012 Intel Corporation.
 *
 * Author: Thijs Vermeir <thijsvermeir@gmail.com>
 * Author: Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
 *                               <zeeshan.ali@nokia.com>
 *         Jens Georg <jensg@openismus.com>
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


#define RYGEL_GST_LAUNCH_TYPE_ITEM (rygel_gst_launch_item_get_type ())
#define RYGEL_GST_LAUNCH_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_GST_LAUNCH_TYPE_ITEM, RygelGstLaunchItem))
#define RYGEL_GST_LAUNCH_IS_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_GST_LAUNCH_TYPE_ITEM))
#define RYGEL_GST_LAUNCH_ITEM_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), RYGEL_GST_LAUNCH_TYPE_ITEM, RygelGstLaunchItemIface))

typedef struct _RygelGstLaunchItem RygelGstLaunchItem;
typedef struct _RygelGstLaunchItemIface RygelGstLaunchItemIface;

#define RYGEL_GST_LAUNCH_TYPE_AUDIO_ITEM (rygel_gst_launch_audio_item_get_type ())
#define RYGEL_GST_LAUNCH_AUDIO_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_GST_LAUNCH_TYPE_AUDIO_ITEM, RygelGstLaunchAudioItem))
#define RYGEL_GST_LAUNCH_AUDIO_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_GST_LAUNCH_TYPE_AUDIO_ITEM, RygelGstLaunchAudioItemClass))
#define RYGEL_GST_LAUNCH_IS_AUDIO_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_GST_LAUNCH_TYPE_AUDIO_ITEM))
#define RYGEL_GST_LAUNCH_IS_AUDIO_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_GST_LAUNCH_TYPE_AUDIO_ITEM))
#define RYGEL_GST_LAUNCH_AUDIO_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_GST_LAUNCH_TYPE_AUDIO_ITEM, RygelGstLaunchAudioItemClass))

typedef struct _RygelGstLaunchAudioItem RygelGstLaunchAudioItem;
typedef struct _RygelGstLaunchAudioItemClass RygelGstLaunchAudioItemClass;
typedef struct _RygelGstLaunchAudioItemPrivate RygelGstLaunchAudioItemPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))

struct _RygelGstLaunchItemIface {
	GTypeInterface parent_iface;
	const gchar* (*get_launch_line) (RygelGstLaunchItem* self);
	void (*set_launch_line) (RygelGstLaunchItem* self, const gchar* value);
};

struct _RygelGstLaunchAudioItem {
	RygelAudioItem parent_instance;
	RygelGstLaunchAudioItemPrivate * priv;
};

struct _RygelGstLaunchAudioItemClass {
	RygelAudioItemClass parent_class;
};

struct _RygelGstLaunchAudioItemPrivate {
	gchar* _launch_line;
};


static gpointer rygel_gst_launch_audio_item_parent_class = NULL;
static RygelGstLaunchItemIface* rygel_gst_launch_audio_item_rygel_gst_launch_item_parent_iface = NULL;

GType rygel_gst_launch_item_get_type (void) G_GNUC_CONST;
GType rygel_gst_launch_audio_item_get_type (void) G_GNUC_CONST;
#define RYGEL_GST_LAUNCH_AUDIO_ITEM_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_GST_LAUNCH_TYPE_AUDIO_ITEM, RygelGstLaunchAudioItemPrivate))
enum  {
	RYGEL_GST_LAUNCH_AUDIO_ITEM_DUMMY_PROPERTY,
	RYGEL_GST_LAUNCH_AUDIO_ITEM_LAUNCH_LINE
};
RygelGstLaunchAudioItem* rygel_gst_launch_audio_item_new (const gchar* id, RygelMediaContainer* parent, const gchar* title, const gchar* mime_type, const gchar* launch_line);
RygelGstLaunchAudioItem* rygel_gst_launch_audio_item_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title, const gchar* mime_type, const gchar* launch_line);
void rygel_gst_launch_item_set_launch_line (RygelGstLaunchItem* self, const gchar* value);
static RygelDataSource* rygel_gst_launch_audio_item_real_create_stream_source (RygelMediaItem* base, const gchar* host_ip);
RygelDataSource* rygel_gst_launch_item_create_source (RygelGstLaunchItem* self);
static void rygel_gst_launch_audio_item_finalize (GObject* obj);
const gchar* rygel_gst_launch_item_get_launch_line (RygelGstLaunchItem* self);
static void _vala_rygel_gst_launch_audio_item_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_rygel_gst_launch_audio_item_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


RygelGstLaunchAudioItem* rygel_gst_launch_audio_item_construct (GType object_type, const gchar* id, RygelMediaContainer* parent, const gchar* title, const gchar* mime_type, const gchar* launch_line) {
	RygelGstLaunchAudioItem * self = NULL;
	const gchar* _tmp0_ = NULL;
	RygelMediaContainer* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	const gchar* _tmp4_ = NULL;
	g_return_val_if_fail (id != NULL, NULL);
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (title != NULL, NULL);
	g_return_val_if_fail (mime_type != NULL, NULL);
	g_return_val_if_fail (launch_line != NULL, NULL);
	_tmp0_ = id;
	_tmp1_ = parent;
	_tmp2_ = title;
	self = (RygelGstLaunchAudioItem*) rygel_audio_item_construct (object_type, _tmp0_, _tmp1_, _tmp2_, RYGEL_AUDIO_ITEM_UPNP_CLASS);
	_tmp3_ = mime_type;
	rygel_media_item_set_mime_type ((RygelMediaItem*) self, _tmp3_);
	_tmp4_ = launch_line;
	rygel_gst_launch_item_set_launch_line ((RygelGstLaunchItem*) self, _tmp4_);
	return self;
}


RygelGstLaunchAudioItem* rygel_gst_launch_audio_item_new (const gchar* id, RygelMediaContainer* parent, const gchar* title, const gchar* mime_type, const gchar* launch_line) {
	return rygel_gst_launch_audio_item_construct (RYGEL_GST_LAUNCH_TYPE_AUDIO_ITEM, id, parent, title, mime_type, launch_line);
}


static RygelDataSource* rygel_gst_launch_audio_item_real_create_stream_source (RygelMediaItem* base, const gchar* host_ip) {
	RygelGstLaunchAudioItem * self;
	RygelDataSource* result = NULL;
	RygelDataSource* _tmp0_ = NULL;
	self = (RygelGstLaunchAudioItem*) base;
	_tmp0_ = rygel_gst_launch_item_create_source ((RygelGstLaunchItem*) self);
	result = _tmp0_;
	return result;
}


static const gchar* rygel_gst_launch_audio_item_real_get_launch_line (RygelGstLaunchItem* base) {
	const gchar* result;
	RygelGstLaunchAudioItem* self;
	const gchar* _tmp0_ = NULL;
	self = (RygelGstLaunchAudioItem*) base;
	_tmp0_ = self->priv->_launch_line;
	result = _tmp0_;
	return result;
}


static void rygel_gst_launch_audio_item_real_set_launch_line (RygelGstLaunchItem* base, const gchar* value) {
	RygelGstLaunchAudioItem* self;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	self = (RygelGstLaunchAudioItem*) base;
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_launch_line);
	self->priv->_launch_line = _tmp1_;
	g_object_notify ((GObject *) self, "launch-line");
}


static void rygel_gst_launch_audio_item_class_init (RygelGstLaunchAudioItemClass * klass) {
	rygel_gst_launch_audio_item_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (RygelGstLaunchAudioItemPrivate));
	RYGEL_MEDIA_ITEM_CLASS (klass)->create_stream_source = rygel_gst_launch_audio_item_real_create_stream_source;
	G_OBJECT_CLASS (klass)->get_property = _vala_rygel_gst_launch_audio_item_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_rygel_gst_launch_audio_item_set_property;
	G_OBJECT_CLASS (klass)->finalize = rygel_gst_launch_audio_item_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_GST_LAUNCH_AUDIO_ITEM_LAUNCH_LINE, g_param_spec_string ("launch-line", "launch-line", "launch-line", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void rygel_gst_launch_audio_item_rygel_gst_launch_item_interface_init (RygelGstLaunchItemIface * iface) {
	rygel_gst_launch_audio_item_rygel_gst_launch_item_parent_iface = g_type_interface_peek_parent (iface);
	iface->get_launch_line = rygel_gst_launch_audio_item_real_get_launch_line;
	iface->set_launch_line = rygel_gst_launch_audio_item_real_set_launch_line;
}


static void rygel_gst_launch_audio_item_instance_init (RygelGstLaunchAudioItem * self) {
	self->priv = RYGEL_GST_LAUNCH_AUDIO_ITEM_GET_PRIVATE (self);
}


static void rygel_gst_launch_audio_item_finalize (GObject* obj) {
	RygelGstLaunchAudioItem * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_GST_LAUNCH_TYPE_AUDIO_ITEM, RygelGstLaunchAudioItem);
	_g_free0 (self->priv->_launch_line);
	G_OBJECT_CLASS (rygel_gst_launch_audio_item_parent_class)->finalize (obj);
}


/**
 * Audio item that serves data from a gst-launch commandline.
 */
GType rygel_gst_launch_audio_item_get_type (void) {
	static volatile gsize rygel_gst_launch_audio_item_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_gst_launch_audio_item_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelGstLaunchAudioItemClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_gst_launch_audio_item_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelGstLaunchAudioItem), 0, (GInstanceInitFunc) rygel_gst_launch_audio_item_instance_init, NULL };
		static const GInterfaceInfo rygel_gst_launch_item_info = { (GInterfaceInitFunc) rygel_gst_launch_audio_item_rygel_gst_launch_item_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType rygel_gst_launch_audio_item_type_id;
		rygel_gst_launch_audio_item_type_id = g_type_register_static (RYGEL_TYPE_AUDIO_ITEM, "RygelGstLaunchAudioItem", &g_define_type_info, 0);
		g_type_add_interface_static (rygel_gst_launch_audio_item_type_id, RYGEL_GST_LAUNCH_TYPE_ITEM, &rygel_gst_launch_item_info);
		g_once_init_leave (&rygel_gst_launch_audio_item_type_id__volatile, rygel_gst_launch_audio_item_type_id);
	}
	return rygel_gst_launch_audio_item_type_id__volatile;
}


static void _vala_rygel_gst_launch_audio_item_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	RygelGstLaunchAudioItem * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, RYGEL_GST_LAUNCH_TYPE_AUDIO_ITEM, RygelGstLaunchAudioItem);
	switch (property_id) {
		case RYGEL_GST_LAUNCH_AUDIO_ITEM_LAUNCH_LINE:
		g_value_set_string (value, rygel_gst_launch_item_get_launch_line ((RygelGstLaunchItem*) self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_rygel_gst_launch_audio_item_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	RygelGstLaunchAudioItem * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, RYGEL_GST_LAUNCH_TYPE_AUDIO_ITEM, RygelGstLaunchAudioItem);
	switch (property_id) {
		case RYGEL_GST_LAUNCH_AUDIO_ITEM_LAUNCH_LINE:
		rygel_gst_launch_item_set_launch_line ((RygelGstLaunchItem*) self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



