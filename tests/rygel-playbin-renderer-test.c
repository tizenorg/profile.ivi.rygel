/* rygel-playbin-renderer-test.c generated by valac 0.16.1, the Vala compiler
 * generated from rygel-playbin-renderer-test.vala, do not modify */

/*
 * Copyright (C) 2012 Openismus GmbH
 *
 * Author: Murray Cumming <murrayc@openismus.com>
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
#include <gst/gst.h>
#include <rygel-renderer-gst.h>


#define RYGEL_TYPE_PLAYBIN_RENDERER_TEST (rygel_playbin_renderer_test_get_type ())
#define RYGEL_PLAYBIN_RENDERER_TEST(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_PLAYBIN_RENDERER_TEST, RygelPlaybinRendererTest))
#define RYGEL_PLAYBIN_RENDERER_TEST_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_PLAYBIN_RENDERER_TEST, RygelPlaybinRendererTestClass))
#define RYGEL_IS_PLAYBIN_RENDERER_TEST(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_PLAYBIN_RENDERER_TEST))
#define RYGEL_IS_PLAYBIN_RENDERER_TEST_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_PLAYBIN_RENDERER_TEST))
#define RYGEL_PLAYBIN_RENDERER_TEST_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_PLAYBIN_RENDERER_TEST, RygelPlaybinRendererTestClass))

typedef struct _RygelPlaybinRendererTest RygelPlaybinRendererTest;
typedef struct _RygelPlaybinRendererTestClass RygelPlaybinRendererTestClass;
typedef struct _RygelPlaybinRendererTestPrivate RygelPlaybinRendererTestPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _gst_object_unref0(var) ((var == NULL) ? NULL : (var = (gst_object_unref (var), NULL)))

struct _RygelPlaybinRendererTest {
	GObject parent_instance;
	RygelPlaybinRendererTestPrivate * priv;
};

struct _RygelPlaybinRendererTestClass {
	GObjectClass parent_class;
};


static gpointer rygel_playbin_renderer_test_parent_class = NULL;

GType rygel_playbin_renderer_test_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_PLAYBIN_RENDERER_TEST_DUMMY_PROPERTY
};
gint rygel_playbin_renderer_test_main (gchar** args, int args_length1);
RygelPlaybinRendererTest* rygel_playbin_renderer_test_new (void);
RygelPlaybinRendererTest* rygel_playbin_renderer_test_construct (GType object_type);
void rygel_playbin_renderer_test_test_with_default_gstplaybin2 (RygelPlaybinRendererTest* self);
void rygel_playbin_renderer_test_test_with_existing_gstplaybin2 (RygelPlaybinRendererTest* self);


gint rygel_playbin_renderer_test_main (gchar** args, int args_length1) {
	gint result = 0;
	RygelPlaybinRendererTest* _tmp0_;
	RygelPlaybinRendererTest* test;
#line 29 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	gst_init (&args_length1, &args);
#line 31 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	_tmp0_ = rygel_playbin_renderer_test_new ();
#line 31 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	test = _tmp0_;
#line 32 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	rygel_playbin_renderer_test_test_with_default_gstplaybin2 (test);
#line 33 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	rygel_playbin_renderer_test_test_with_existing_gstplaybin2 (test);
#line 35 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	result = 0;
#line 35 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	_g_object_unref0 (test);
#line 35 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	return result;
#line 91 "rygel-playbin-renderer-test.c"
}


int main (int argc, char ** argv) {
#line 28 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	g_type_init ();
#line 28 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	return rygel_playbin_renderer_test_main (argv, argc);
#line 100 "rygel-playbin-renderer-test.c"
}


void rygel_playbin_renderer_test_test_with_default_gstplaybin2 (RygelPlaybinRendererTest* self) {
	RygelPlaybinRenderer* _tmp0_;
	RygelPlaybinRenderer* renderer;
	RygelPlaybinPlayer* _tmp1_ = NULL;
	RygelPlaybinPlayer* player;
	GstElement* _tmp2_;
	GstElement* _tmp3_;
#line 38 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	g_return_if_fail (self != NULL);
#line 39 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	_tmp0_ = rygel_playbin_renderer_new ("test playbin renderer");
#line 39 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	renderer = _tmp0_;
#line 40 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	g_assert (renderer != NULL);
#line 41 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	_tmp1_ = rygel_playbin_player_get_default ();
#line 41 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	player = _tmp1_;
#line 42 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	_tmp2_ = rygel_playbin_player_get_playbin (player);
#line 42 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	_tmp3_ = _tmp2_;
#line 42 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	g_assert (_tmp3_ != NULL);
#line 38 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	_g_object_unref0 (player);
#line 38 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	_g_object_unref0 (renderer);
#line 133 "rygel-playbin-renderer-test.c"
}


void rygel_playbin_renderer_test_test_with_existing_gstplaybin2 (RygelPlaybinRendererTest* self) {
	GstElement* _tmp0_ = NULL;
	GstElement* element;
	RygelPlaybinRenderer* _tmp1_;
	RygelPlaybinRenderer* renderer;
	RygelPlaybinPlayer* _tmp2_ = NULL;
	RygelPlaybinPlayer* player;
	GstElement* _tmp3_;
	GstElement* _tmp4_;
#line 45 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	g_return_if_fail (self != NULL);
#line 46 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	_tmp0_ = gst_element_factory_make ("playbin2", NULL);
#line 46 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	gst_object_ref_sink (_tmp0_);
#line 46 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	element = _tmp0_;
#line 47 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	_tmp1_ = rygel_playbin_renderer_new_wrap (element, "test playbin renderer");
#line 47 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	renderer = _tmp1_;
#line 48 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	g_assert (renderer != NULL);
#line 49 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	_tmp2_ = rygel_playbin_player_get_default ();
#line 49 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	player = _tmp2_;
#line 50 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	_tmp3_ = rygel_playbin_player_get_playbin (player);
#line 50 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	_tmp4_ = _tmp3_;
#line 50 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	g_assert (_tmp4_ != NULL);
#line 45 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	_g_object_unref0 (player);
#line 45 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	_g_object_unref0 (renderer);
#line 45 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	_gst_object_unref0 (element);
#line 176 "rygel-playbin-renderer-test.c"
}


RygelPlaybinRendererTest* rygel_playbin_renderer_test_construct (GType object_type) {
	RygelPlaybinRendererTest * self = NULL;
#line 27 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	self = (RygelPlaybinRendererTest*) g_object_new (object_type, NULL);
#line 27 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	return self;
#line 186 "rygel-playbin-renderer-test.c"
}


RygelPlaybinRendererTest* rygel_playbin_renderer_test_new (void) {
#line 27 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	return rygel_playbin_renderer_test_construct (RYGEL_TYPE_PLAYBIN_RENDERER_TEST);
#line 193 "rygel-playbin-renderer-test.c"
}


static void rygel_playbin_renderer_test_class_init (RygelPlaybinRendererTestClass * klass) {
#line 27 "/home/mryan/src/rygel/tests/rygel-playbin-renderer-test.vala"
	rygel_playbin_renderer_test_parent_class = g_type_class_peek_parent (klass);
#line 200 "rygel-playbin-renderer-test.c"
}


static void rygel_playbin_renderer_test_instance_init (RygelPlaybinRendererTest * self) {
}


/**
 * TODO: This currently just tests instantiation.
 * We should also test how it works somehow.
 */
GType rygel_playbin_renderer_test_get_type (void) {
	static volatile gsize rygel_playbin_renderer_test_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_playbin_renderer_test_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelPlaybinRendererTestClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_playbin_renderer_test_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelPlaybinRendererTest), 0, (GInstanceInitFunc) rygel_playbin_renderer_test_instance_init, NULL };
		GType rygel_playbin_renderer_test_type_id;
		rygel_playbin_renderer_test_type_id = g_type_register_static (G_TYPE_OBJECT, "RygelPlaybinRendererTest", &g_define_type_info, 0);
		g_once_init_leave (&rygel_playbin_renderer_test_type_id__volatile, rygel_playbin_renderer_test_type_id);
	}
	return rygel_playbin_renderer_test_type_id__volatile;
}



