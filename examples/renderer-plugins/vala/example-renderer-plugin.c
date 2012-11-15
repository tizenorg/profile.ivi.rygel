/* example-renderer-plugin.c generated by valac 0.16.1, the Vala compiler
 * generated from example-renderer-plugin.vala, do not modify */

/*
 * Copyright (C) 2012 Intel Corporation
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
#include <rygel-core.h>
#include <stdlib.h>
#include <string.h>
#include <rygel-renderer.h>


#define RYGEL_EXAMPLE_TYPE_RENDERER_PLUGIN (rygel_example_renderer_plugin_get_type ())
#define RYGEL_EXAMPLE_RENDERER_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_EXAMPLE_TYPE_RENDERER_PLUGIN, RygelExampleRendererPlugin))
#define RYGEL_EXAMPLE_RENDERER_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_EXAMPLE_TYPE_RENDERER_PLUGIN, RygelExampleRendererPluginClass))
#define RYGEL_EXAMPLE_IS_RENDERER_PLUGIN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_EXAMPLE_TYPE_RENDERER_PLUGIN))
#define RYGEL_EXAMPLE_IS_RENDERER_PLUGIN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_EXAMPLE_TYPE_RENDERER_PLUGIN))
#define RYGEL_EXAMPLE_RENDERER_PLUGIN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_EXAMPLE_TYPE_RENDERER_PLUGIN, RygelExampleRendererPluginClass))

typedef struct _RygelExampleRendererPlugin RygelExampleRendererPlugin;
typedef struct _RygelExampleRendererPluginClass RygelExampleRendererPluginClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _RygelExampleRendererPluginPrivate RygelExampleRendererPluginPrivate;

#define RYGEL_EXAMPLE_TYPE_PLAYER (rygel_example_player_get_type ())
#define RYGEL_EXAMPLE_PLAYER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_EXAMPLE_TYPE_PLAYER, RygelExamplePlayer))
#define RYGEL_EXAMPLE_PLAYER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_EXAMPLE_TYPE_PLAYER, RygelExamplePlayerClass))
#define RYGEL_EXAMPLE_IS_PLAYER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_EXAMPLE_TYPE_PLAYER))
#define RYGEL_EXAMPLE_IS_PLAYER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_EXAMPLE_TYPE_PLAYER))
#define RYGEL_EXAMPLE_PLAYER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_EXAMPLE_TYPE_PLAYER, RygelExamplePlayerClass))

typedef struct _RygelExamplePlayer RygelExamplePlayer;
typedef struct _RygelExamplePlayerClass RygelExamplePlayerClass;

struct _RygelExampleRendererPlugin {
	RygelMediaRendererPlugin parent_instance;
	RygelExampleRendererPluginPrivate * priv;
};

struct _RygelExampleRendererPluginClass {
	RygelMediaRendererPluginClass parent_class;
};


static gpointer rygel_example_renderer_plugin_parent_class = NULL;

void module_init (RygelPluginLoader* loader);
#define RYGEL_EXAMPLE_RENDERER_PLUGIN_NAME "ExampleRendererPluginVala"
RygelExampleRendererPlugin* rygel_example_renderer_plugin_new (void);
RygelExampleRendererPlugin* rygel_example_renderer_plugin_construct (GType object_type);
GType rygel_example_renderer_plugin_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_EXAMPLE_RENDERER_PLUGIN_DUMMY_PROPERTY
};
#define RYGEL_EXAMPLE_RENDERER_PLUGIN_TITLE "Example Renderer Plugin Vala"
#define RYGEL_EXAMPLE_RENDERER_PLUGIN_DESCRIPTION "An example Rygel renderer plugin implemented in vala."
static RygelMediaPlayer* rygel_example_renderer_plugin_real_get_player (RygelMediaRendererPlugin* base);
GType rygel_example_player_get_type (void) G_GNUC_CONST;
RygelExamplePlayer* rygel_example_player_get_default (void);


void module_init (RygelPluginLoader* loader) {
	RygelPluginLoader* _tmp0_;
	gboolean _tmp1_ = FALSE;
	RygelExampleRendererPlugin* _tmp2_;
	RygelExampleRendererPlugin* plugin;
	RygelPluginLoader* _tmp3_;
	RygelExampleRendererPlugin* _tmp4_;
#line 24 "/home/mryan/src/rygel/examples/renderer-plugins/vala/example-renderer-plugin.vala"
	g_return_if_fail (loader != NULL);
#line 25 "/home/mryan/src/rygel/examples/renderer-plugins/vala/example-renderer-plugin.vala"
	_tmp0_ = loader;
#line 25 "/home/mryan/src/rygel/examples/renderer-plugins/vala/example-renderer-plugin.vala"
	_tmp1_ = rygel_plugin_loader_plugin_disabled (_tmp0_, RYGEL_EXAMPLE_RENDERER_PLUGIN_NAME);
#line 25 "/home/mryan/src/rygel/examples/renderer-plugins/vala/example-renderer-plugin.vala"
	if (_tmp1_) {
#line 26 "/home/mryan/src/rygel/examples/renderer-plugins/vala/example-renderer-plugin.vala"
		g_message ("example-renderer-plugin.vala:26: Plugin '%s' disabled by user, ignorin" \
"g..", RYGEL_EXAMPLE_RENDERER_PLUGIN_NAME);
#line 29 "/home/mryan/src/rygel/examples/renderer-plugins/vala/example-renderer-plugin.vala"
		return;
#line 101 "example-renderer-plugin.c"
	}
#line 32 "/home/mryan/src/rygel/examples/renderer-plugins/vala/example-renderer-plugin.vala"
	_tmp2_ = rygel_example_renderer_plugin_new ();
#line 32 "/home/mryan/src/rygel/examples/renderer-plugins/vala/example-renderer-plugin.vala"
	plugin = _tmp2_;
#line 33 "/home/mryan/src/rygel/examples/renderer-plugins/vala/example-renderer-plugin.vala"
	_tmp3_ = loader;
#line 33 "/home/mryan/src/rygel/examples/renderer-plugins/vala/example-renderer-plugin.vala"
	_tmp4_ = plugin;
#line 33 "/home/mryan/src/rygel/examples/renderer-plugins/vala/example-renderer-plugin.vala"
	rygel_plugin_loader_add_plugin (_tmp3_, (RygelPlugin*) _tmp4_);
#line 24 "/home/mryan/src/rygel/examples/renderer-plugins/vala/example-renderer-plugin.vala"
	_g_object_unref0 (plugin);
#line 115 "example-renderer-plugin.c"
}


RygelExampleRendererPlugin* rygel_example_renderer_plugin_construct (GType object_type) {
	RygelExampleRendererPlugin * self = NULL;
#line 59 "/home/mryan/src/rygel/examples/renderer-plugins/vala/example-renderer-plugin.vala"
	self = (RygelExampleRendererPlugin*) rygel_media_renderer_plugin_construct (object_type, RYGEL_EXAMPLE_RENDERER_PLUGIN_NAME, RYGEL_EXAMPLE_RENDERER_PLUGIN_TITLE, RYGEL_EXAMPLE_RENDERER_PLUGIN_DESCRIPTION, RYGEL_PLUGIN_CAPABILITIES_NONE);
#line 58 "/home/mryan/src/rygel/examples/renderer-plugins/vala/example-renderer-plugin.vala"
	return self;
#line 125 "example-renderer-plugin.c"
}


RygelExampleRendererPlugin* rygel_example_renderer_plugin_new (void) {
#line 58 "/home/mryan/src/rygel/examples/renderer-plugins/vala/example-renderer-plugin.vala"
	return rygel_example_renderer_plugin_construct (RYGEL_EXAMPLE_TYPE_RENDERER_PLUGIN);
#line 132 "example-renderer-plugin.c"
}


static RygelMediaPlayer* rygel_example_renderer_plugin_real_get_player (RygelMediaRendererPlugin* base) {
	RygelExampleRendererPlugin * self;
	RygelMediaPlayer* result = NULL;
	RygelExamplePlayer* _tmp0_ = NULL;
#line 62 "/home/mryan/src/rygel/examples/renderer-plugins/vala/example-renderer-plugin.vala"
	self = (RygelExampleRendererPlugin*) base;
#line 63 "/home/mryan/src/rygel/examples/renderer-plugins/vala/example-renderer-plugin.vala"
	_tmp0_ = rygel_example_player_get_default ();
#line 63 "/home/mryan/src/rygel/examples/renderer-plugins/vala/example-renderer-plugin.vala"
	result = (RygelMediaPlayer*) _tmp0_;
#line 63 "/home/mryan/src/rygel/examples/renderer-plugins/vala/example-renderer-plugin.vala"
	return result;
#line 148 "example-renderer-plugin.c"
}


static void rygel_example_renderer_plugin_class_init (RygelExampleRendererPluginClass * klass) {
#line 44 "/home/mryan/src/rygel/examples/renderer-plugins/vala/example-renderer-plugin.vala"
	rygel_example_renderer_plugin_parent_class = g_type_class_peek_parent (klass);
#line 44 "/home/mryan/src/rygel/examples/renderer-plugins/vala/example-renderer-plugin.vala"
	RYGEL_MEDIA_RENDERER_PLUGIN_CLASS (klass)->get_player = rygel_example_renderer_plugin_real_get_player;
#line 157 "example-renderer-plugin.c"
}


static void rygel_example_renderer_plugin_instance_init (RygelExampleRendererPlugin * self) {
}


GType rygel_example_renderer_plugin_get_type (void) {
	static volatile gsize rygel_example_renderer_plugin_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_example_renderer_plugin_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelExampleRendererPluginClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_example_renderer_plugin_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelExampleRendererPlugin), 0, (GInstanceInitFunc) rygel_example_renderer_plugin_instance_init, NULL };
		GType rygel_example_renderer_plugin_type_id;
		rygel_example_renderer_plugin_type_id = g_type_register_static (RYGEL_TYPE_MEDIA_RENDERER_PLUGIN, "RygelExampleRendererPlugin", &g_define_type_info, 0);
		g_once_init_leave (&rygel_example_renderer_plugin_type_id__volatile, rygel_example_renderer_plugin_type_id);
	}
	return rygel_example_renderer_plugin_type_id__volatile;
}



