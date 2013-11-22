/* rygel-playbin-renderer.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-playbin-renderer.vala, do not modify */

/*
 * Copyright (C) 2012 Openismus GmbH.
 * Copyright (C) 2012 Intel Corporation.
 *
 * Author: Jens Georg <jensg@openismus.com>
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
#include <rygel-renderer.h>
#include <stdlib.h>
#include <string.h>
#include <gst/gst.h>


#define RYGEL_PLAYBIN_TYPE_RENDERER (rygel_playbin_renderer_get_type ())
#define RYGEL_PLAYBIN_RENDERER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_PLAYBIN_TYPE_RENDERER, RygelPlaybinRenderer))
#define RYGEL_PLAYBIN_RENDERER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_PLAYBIN_TYPE_RENDERER, RygelPlaybinRendererClass))
#define RYGEL_PLAYBIN_IS_RENDERER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_PLAYBIN_TYPE_RENDERER))
#define RYGEL_PLAYBIN_IS_RENDERER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_PLAYBIN_TYPE_RENDERER))
#define RYGEL_PLAYBIN_RENDERER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_PLAYBIN_TYPE_RENDERER, RygelPlaybinRendererClass))

typedef struct _RygelPlaybinRenderer RygelPlaybinRenderer;
typedef struct _RygelPlaybinRendererClass RygelPlaybinRendererClass;
typedef struct _RygelPlaybinRendererPrivate RygelPlaybinRendererPrivate;

#define RYGEL_PLAYBIN_TYPE_PLAYER (rygel_playbin_player_get_type ())
#define RYGEL_PLAYBIN_PLAYER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_PLAYBIN_TYPE_PLAYER, RygelPlaybinPlayer))
#define RYGEL_PLAYBIN_PLAYER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_PLAYBIN_TYPE_PLAYER, RygelPlaybinPlayerClass))
#define RYGEL_PLAYBIN_IS_PLAYER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_PLAYBIN_TYPE_PLAYER))
#define RYGEL_PLAYBIN_IS_PLAYER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_PLAYBIN_TYPE_PLAYER))
#define RYGEL_PLAYBIN_PLAYER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_PLAYBIN_TYPE_PLAYER, RygelPlaybinPlayerClass))

typedef struct _RygelPlaybinPlayer RygelPlaybinPlayer;
typedef struct _RygelPlaybinPlayerClass RygelPlaybinPlayerClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _RygelPlaybinRenderer {
	RygelMediaRenderer parent_instance;
	RygelPlaybinRendererPrivate * priv;
};

struct _RygelPlaybinRendererClass {
	RygelMediaRendererClass parent_class;
};


static gpointer rygel_playbin_renderer_parent_class = NULL;

GType rygel_playbin_renderer_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_PLAYBIN_RENDERER_DUMMY_PROPERTY
};
RygelPlaybinRenderer* rygel_playbin_renderer_new (const gchar* title);
RygelPlaybinRenderer* rygel_playbin_renderer_construct (GType object_type, const gchar* title);
GType rygel_playbin_player_get_type (void) G_GNUC_CONST;
RygelPlaybinPlayer* rygel_playbin_player_get_default (void);
RygelPlaybinRenderer* rygel_playbin_renderer_new_wrap (GstElement* pipeline, const gchar* title);
RygelPlaybinRenderer* rygel_playbin_renderer_construct_wrap (GType object_type, GstElement* pipeline, const gchar* title);
RygelPlaybinPlayer* rygel_playbin_player_new_wrap (GstElement* playbin);
RygelPlaybinPlayer* rygel_playbin_player_construct_wrap (GType object_type, GstElement* playbin);
GstElement* rygel_playbin_renderer_get_playbin (RygelPlaybinRenderer* self);
GstElement* rygel_playbin_player_get_playbin (RygelPlaybinPlayer* self);


/**
     * Create a new instance of Renderer.
     *
     * Renderer will instantiate its own instance of GstPlayBin.
     * The GstPlayBin can be accessed by using rygel_playbin_player_get_playbin().
     *
     * @param title Friendly name of the new UPnP renderer on the network.
     */
RygelPlaybinRenderer* rygel_playbin_renderer_construct (GType object_type, const gchar* title) {
	RygelPlaybinRenderer * self = NULL;
	const gchar* _tmp0_ = NULL;
	RygelPlaybinPlayer* _tmp1_ = NULL;
	RygelPlaybinPlayer* _tmp2_ = NULL;
	g_return_val_if_fail (title != NULL, NULL);
	_tmp0_ = title;
	_tmp1_ = rygel_playbin_player_get_default ();
	_tmp2_ = _tmp1_;
	self = (RygelPlaybinRenderer*) g_object_new (object_type, "title", _tmp0_, "player", _tmp2_, NULL);
	_g_object_unref0 (_tmp2_);
	return self;
}


RygelPlaybinRenderer* rygel_playbin_renderer_new (const gchar* title) {
	return rygel_playbin_renderer_construct (RYGEL_PLAYBIN_TYPE_RENDERER, title);
}


/**
     * Create a new instance of Renderer, wrapping an existing GstPlayBin
     * instance.
     *
     * @param pipeline Instance of GstPlayBin to wrap.
     * @param title Friendly name of the new UPnP renderer on the network.
     */
RygelPlaybinRenderer* rygel_playbin_renderer_construct_wrap (GType object_type, GstElement* pipeline, const gchar* title) {
	RygelPlaybinRenderer * self = NULL;
	GstElement* _tmp0_ = NULL;
	GstElement* _tmp1_ = NULL;
	GType _tmp2_ = 0UL;
	const gchar* _tmp3_ = NULL;
	const gchar* _tmp4_ = NULL;
	GstElement* _tmp5_ = NULL;
	RygelPlaybinPlayer* _tmp6_ = NULL;
	RygelPlaybinPlayer* _tmp7_ = NULL;
	g_return_val_if_fail (pipeline != NULL, NULL);
	g_return_val_if_fail (title != NULL, NULL);
	_tmp0_ = pipeline;
	g_return_val_if_fail (_tmp0_ != NULL, NULL);
	_tmp1_ = pipeline;
	_tmp2_ = G_TYPE_FROM_INSTANCE ((GObject*) _tmp1_);
	_tmp3_ = g_type_name (_tmp2_);
	g_return_val_if_fail (g_strcmp0 (_tmp3_, "GstPlayBin") == 0, NULL);
	_tmp4_ = title;
	_tmp5_ = pipeline;
	_tmp6_ = rygel_playbin_player_new_wrap (_tmp5_);
	_tmp7_ = _tmp6_;
	self = (RygelPlaybinRenderer*) g_object_new (object_type, "title", _tmp4_, "player", _tmp7_, NULL);
	_g_object_unref0 (_tmp7_);
	return self;
}


RygelPlaybinRenderer* rygel_playbin_renderer_new_wrap (GstElement* pipeline, const gchar* title) {
	return rygel_playbin_renderer_construct_wrap (RYGEL_PLAYBIN_TYPE_RENDERER, pipeline, title);
}


/**
     * Get the GstPlayBin used by this Renderer.
     */
static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


GstElement* rygel_playbin_renderer_get_playbin (RygelPlaybinRenderer* self) {
	GstElement* result = NULL;
	RygelPlaybinPlayer* player = NULL;
	RygelPlaybinPlayer* _tmp0_ = NULL;
	GstElement* _tmp1_ = NULL;
	GstElement* _tmp2_ = NULL;
	GstElement* _tmp3_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = rygel_playbin_player_get_default ();
	player = _tmp0_;
	g_return_val_if_fail (player != NULL, NULL);
	_tmp1_ = rygel_playbin_player_get_playbin (player);
	_tmp2_ = _tmp1_;
	_tmp3_ = _g_object_ref0 (_tmp2_);
	result = _tmp3_;
	_g_object_unref0 (player);
	return result;
}


static void rygel_playbin_renderer_class_init (RygelPlaybinRendererClass * klass) {
	rygel_playbin_renderer_parent_class = g_type_class_peek_parent (klass);
}


static void rygel_playbin_renderer_instance_init (RygelPlaybinRenderer * self) {
}


/**
 * An in-process UPnP renderer that uses a GStreamer Playbin element.
 *
 * Using GstPlayBin as a model, it reflects any changes done externally, such as
 * changing the currently played URI, volume, pause/play etc., to UPnP.
 *
 * Likewise, the playbin can be modified externally using UPnP.
 *
 * You can retrieve the GstPlayBin by calling rygel_playbin_renderer_get_playbin().
 * You should then set the "video-sink" and "audio-sink" properties of the
 * playbin.
 *
 * Call rygel_media_device_add_interface() on the Renderer to allow it
 * to be controlled by a control point and to retrieve data streams via that
 * network interface.
 *
 * See the <link linkend="implementing-renderers-gst">Implementing GStreamer-based Renderers</link> section.
 */
GType rygel_playbin_renderer_get_type (void) {
	static volatile gsize rygel_playbin_renderer_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_playbin_renderer_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelPlaybinRendererClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_playbin_renderer_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelPlaybinRenderer), 0, (GInstanceInitFunc) rygel_playbin_renderer_instance_init, NULL };
		GType rygel_playbin_renderer_type_id;
		rygel_playbin_renderer_type_id = g_type_register_static (RYGEL_TYPE_MEDIA_RENDERER, "RygelPlaybinRenderer", &g_define_type_info, 0);
		g_once_init_leave (&rygel_playbin_renderer_type_id__volatile, rygel_playbin_renderer_type_id);
	}
	return rygel_playbin_renderer_type_id__volatile;
}



