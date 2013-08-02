/* rygel-playbin-plugin.c generated by valac 0.20.1.53-91609, the Vala compiler
 * generated from rygel-playbin-plugin.vala, do not modify */

/*
 * Copyright (C) 2008 Zeeshan Ali (Khattak) <zeeshanak@gnome.org>.
 * Copyright (C) 2008 Nokia Corporation.
 * Copyright (C) 2012 Openismus GmbH.
 * Copyright (C) 2012 Intel Corporation.
 *
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
#include <rygel-renderer.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gi18n-lib.h>
#include <rygel-core.h>
#include <rygel-renderer-gst.h>


#define RYGEL_PLAYBIN_TYPE_PLUGIN (rygel_playbin_plugin_get_type ())
#define RYGEL_PLAYBIN_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_PLAYBIN_TYPE_PLUGIN, RygelPlaybinPlugin))
#define RYGEL_PLAYBIN_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_PLAYBIN_TYPE_PLUGIN, RygelPlaybinPluginClass))
#define RYGEL_PLAYBIN_IS_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_PLAYBIN_TYPE_PLUGIN))
#define RYGEL_PLAYBIN_IS_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_PLAYBIN_TYPE_PLUGIN))
#define RYGEL_PLAYBIN_PLUGIN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_PLAYBIN_TYPE_PLUGIN, RygelPlaybinPluginClass))

typedef struct _RygelPlaybinPlugin RygelPlaybinPlugin;
typedef struct _RygelPlaybinPluginClass RygelPlaybinPluginClass;
typedef struct _RygelPlaybinPluginPrivate RygelPlaybinPluginPrivate;

struct _RygelPlaybinPlugin {
	RygelMediaRendererPlugin parent_instance;
	RygelPlaybinPluginPrivate * priv;
};

struct _RygelPlaybinPluginClass {
	RygelMediaRendererPluginClass parent_class;
};


static gpointer rygel_playbin_plugin_parent_class = NULL;

GType rygel_playbin_plugin_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_PLAYBIN_PLUGIN_DUMMY_PROPERTY
};
#define RYGEL_PLAYBIN_PLUGIN_NAME "Playbin"
RygelPlaybinPlugin* rygel_playbin_plugin_new (void);
RygelPlaybinPlugin* rygel_playbin_plugin_construct (GType object_type);
static RygelMediaPlayer* rygel_playbin_plugin_real_get_player (RygelMediaRendererPlugin* base);


RygelPlaybinPlugin* rygel_playbin_plugin_construct (GType object_type) {
	RygelPlaybinPlugin * self = NULL;
	const gchar* _tmp0_ = NULL;
#line 35 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/playbin/rygel-playbin-plugin.vala"
	_tmp0_ = _ ("GStreamer Player");
#line 35 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/playbin/rygel-playbin-plugin.vala"
	self = (RygelPlaybinPlugin*) rygel_media_renderer_plugin_construct (object_type, RYGEL_PLAYBIN_PLUGIN_NAME, _tmp0_, NULL, RYGEL_PLUGIN_CAPABILITIES_NONE);
#line 34 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/playbin/rygel-playbin-plugin.vala"
	return self;
#line 84 "rygel-playbin-plugin.c"
}


RygelPlaybinPlugin* rygel_playbin_plugin_new (void) {
#line 34 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/playbin/rygel-playbin-plugin.vala"
	return rygel_playbin_plugin_construct (RYGEL_PLAYBIN_TYPE_PLUGIN);
#line 91 "rygel-playbin-plugin.c"
}


static RygelMediaPlayer* rygel_playbin_plugin_real_get_player (RygelMediaRendererPlugin* base) {
	RygelPlaybinPlugin * self;
	RygelMediaPlayer* result = NULL;
	RygelPlaybinPlayer* _tmp0_ = NULL;
#line 38 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/playbin/rygel-playbin-plugin.vala"
	self = (RygelPlaybinPlugin*) base;
#line 39 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/playbin/rygel-playbin-plugin.vala"
	_tmp0_ = rygel_playbin_player_get_default ();
#line 39 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/playbin/rygel-playbin-plugin.vala"
	result = (RygelMediaPlayer*) _tmp0_;
#line 39 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/playbin/rygel-playbin-plugin.vala"
	return result;
#line 107 "rygel-playbin-plugin.c"
}


static void rygel_playbin_plugin_class_init (RygelPlaybinPluginClass * klass) {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/playbin/rygel-playbin-plugin.vala"
	rygel_playbin_plugin_parent_class = g_type_class_peek_parent (klass);
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/plugins/playbin/rygel-playbin-plugin.vala"
	RYGEL_MEDIA_RENDERER_PLUGIN_CLASS (klass)->get_player = rygel_playbin_plugin_real_get_player;
#line 116 "rygel-playbin-plugin.c"
}


static void rygel_playbin_plugin_instance_init (RygelPlaybinPlugin * self) {
}


GType rygel_playbin_plugin_get_type (void) {
	static volatile gsize rygel_playbin_plugin_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_playbin_plugin_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelPlaybinPluginClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_playbin_plugin_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelPlaybinPlugin), 0, (GInstanceInitFunc) rygel_playbin_plugin_instance_init, NULL };
		GType rygel_playbin_plugin_type_id;
		rygel_playbin_plugin_type_id = g_type_register_static (RYGEL_TYPE_MEDIA_RENDERER_PLUGIN, "RygelPlaybinPlugin", &g_define_type_info, 0);
		g_once_init_leave (&rygel_playbin_plugin_type_id__volatile, rygel_playbin_plugin_type_id);
	}
	return rygel_playbin_plugin_type_id__volatile;
}



