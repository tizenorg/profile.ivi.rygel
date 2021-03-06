/* rygel-module.c generated by valac 0.16.1, the Vala compiler
 * generated from rygel-module.vala, do not modify */

/*
 * Copyright (C) 2012 Openismus GmbH.
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
#include <rygel-core.h>
#include <rygel-renderer-gst.h>

#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))



void module_init (RygelPluginLoader* loader);


void module_init (RygelPluginLoader* loader) {
	RygelPluginLoader* _tmp0_;
	gboolean _tmp1_ = FALSE;
	RygelPlaybinPlugin* _tmp2_;
	RygelPlaybinPlugin* plugin;
	RygelPluginLoader* _tmp3_;
	RygelPlaybinPlugin* _tmp4_;
#line 25 "/home/mryan/src/rygel/src/plugins/playbin/rygel-module.vala"
	g_return_if_fail (loader != NULL);
#line 26 "/home/mryan/src/rygel/src/plugins/playbin/rygel-module.vala"
	_tmp0_ = loader;
#line 26 "/home/mryan/src/rygel/src/plugins/playbin/rygel-module.vala"
	_tmp1_ = rygel_plugin_loader_plugin_disabled (_tmp0_, RYGEL_PLAYBIN_PLUGIN_NAME);
#line 26 "/home/mryan/src/rygel/src/plugins/playbin/rygel-module.vala"
	if (_tmp1_) {
#line 27 "/home/mryan/src/rygel/src/plugins/playbin/rygel-module.vala"
		g_message ("rygel-module.vala:27: Plugin '%s' disabled by user, ignoring..", RYGEL_PLAYBIN_PLUGIN_NAME);
#line 30 "/home/mryan/src/rygel/src/plugins/playbin/rygel-module.vala"
		return;
#line 58 "rygel-module.c"
	}
#line 33 "/home/mryan/src/rygel/src/plugins/playbin/rygel-module.vala"
	_tmp2_ = rygel_playbin_plugin_new ();
#line 33 "/home/mryan/src/rygel/src/plugins/playbin/rygel-module.vala"
	plugin = _tmp2_;
#line 35 "/home/mryan/src/rygel/src/plugins/playbin/rygel-module.vala"
	_tmp3_ = loader;
#line 35 "/home/mryan/src/rygel/src/plugins/playbin/rygel-module.vala"
	_tmp4_ = plugin;
#line 35 "/home/mryan/src/rygel/src/plugins/playbin/rygel-module.vala"
	rygel_plugin_loader_add_plugin (_tmp3_, (RygelPlugin*) _tmp4_);
#line 25 "/home/mryan/src/rygel/src/plugins/playbin/rygel-module.vala"
	_g_object_unref0 (plugin);
#line 72 "rygel-module.c"
}



