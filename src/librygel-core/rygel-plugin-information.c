/* rygel-plugin-information.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-plugin-information.vala, do not modify */

/*
 * Copyright (C) 2013 Jens Georg.
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
#include <stdlib.h>
#include <string.h>
#include <gio/gio.h>
#include <glib/gi18n-lib.h>
#include <gmodule.h>


#define RYGEL_TYPE_PLUGIN_INFORMATION (rygel_plugin_information_get_type ())
#define RYGEL_PLUGIN_INFORMATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_PLUGIN_INFORMATION, RygelPluginInformation))
#define RYGEL_PLUGIN_INFORMATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_PLUGIN_INFORMATION, RygelPluginInformationClass))
#define RYGEL_IS_PLUGIN_INFORMATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_PLUGIN_INFORMATION))
#define RYGEL_IS_PLUGIN_INFORMATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_PLUGIN_INFORMATION))
#define RYGEL_PLUGIN_INFORMATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_PLUGIN_INFORMATION, RygelPluginInformationClass))

typedef struct _RygelPluginInformation RygelPluginInformation;
typedef struct _RygelPluginInformationClass RygelPluginInformationClass;
typedef struct _RygelPluginInformationPrivate RygelPluginInformationPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_key_file_unref0(var) ((var == NULL) ? NULL : (var = (g_key_file_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _RygelPluginInformation {
	GObject parent_instance;
	RygelPluginInformationPrivate * priv;
};

struct _RygelPluginInformationClass {
	GObjectClass parent_class;
};

struct _RygelPluginInformationPrivate {
	gchar* _module_path;
	gchar* _name;
};


static gpointer rygel_plugin_information_parent_class = NULL;

GType rygel_plugin_information_get_type (void) G_GNUC_CONST;
#define RYGEL_PLUGIN_INFORMATION_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_PLUGIN_INFORMATION, RygelPluginInformationPrivate))
enum  {
	RYGEL_PLUGIN_INFORMATION_DUMMY_PROPERTY,
	RYGEL_PLUGIN_INFORMATION_MODULE_PATH,
	RYGEL_PLUGIN_INFORMATION_NAME
};
static RygelPluginInformation* rygel_plugin_information_new (const gchar* module_path, const gchar* name);
static RygelPluginInformation* rygel_plugin_information_construct (GType object_type, const gchar* module_path, const gchar* name);
RygelPluginInformation* rygel_plugin_information_new_from_file (GFile* file, GError** error);
const gchar* rygel_plugin_information_get_module_path (RygelPluginInformation* self);
static void rygel_plugin_information_set_module_path (RygelPluginInformation* self, const gchar* value);
const gchar* rygel_plugin_information_get_name (RygelPluginInformation* self);
static void rygel_plugin_information_set_name (RygelPluginInformation* self, const gchar* value);
static void rygel_plugin_information_finalize (GObject* obj);
static void _vala_rygel_plugin_information_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_rygel_plugin_information_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


static RygelPluginInformation* rygel_plugin_information_construct (GType object_type, const gchar* module_path, const gchar* name) {
	RygelPluginInformation * self = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	g_return_val_if_fail (module_path != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	_tmp0_ = module_path;
	_tmp1_ = name;
	self = (RygelPluginInformation*) g_object_new (object_type, "module-path", _tmp0_, "name", _tmp1_, NULL);
	return self;
}


static RygelPluginInformation* rygel_plugin_information_new (const gchar* module_path, const gchar* name) {
	return rygel_plugin_information_construct (RYGEL_TYPE_PLUGIN_INFORMATION, module_path, name);
}


/**
     * Factory method to create a #RygelPluginInformation from #GFile.
     *
     * @param file a #GFile pointing to the sidecar file
     * @return A new instance of #RygelPluginInformation
     */
RygelPluginInformation* rygel_plugin_information_new_from_file (GFile* file, GError** error) {
	RygelPluginInformation* result = NULL;
	GKeyFile* keyfile = NULL;
	GKeyFile* _tmp0_ = NULL;
	GKeyFile* _tmp1_ = NULL;
	GFile* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	GKeyFile* _tmp5_ = NULL;
	gboolean _tmp6_ = FALSE;
	gchar* name = NULL;
	GKeyFile* _tmp9_ = NULL;
	gchar* _tmp10_ = NULL;
	gchar* module = NULL;
	GKeyFile* _tmp11_ = NULL;
	gchar* _tmp12_ = NULL;
	GFile* module_dir = NULL;
	GFile* _tmp13_ = NULL;
	GFile* _tmp14_ = NULL;
	GFile* module_file = NULL;
	GFile* _tmp15_ = NULL;
	const gchar* _tmp16_ = NULL;
	gchar* _tmp17_ = NULL;
	gchar* _tmp18_ = NULL;
	GFile* _tmp19_ = NULL;
	GFile* _tmp20_ = NULL;
	GFile* _tmp21_ = NULL;
	gboolean _tmp22_ = FALSE;
	GFile* _tmp36_ = NULL;
	gchar* _tmp37_ = NULL;
	gchar* _tmp38_ = NULL;
	const gchar* _tmp39_ = NULL;
	RygelPluginInformation* _tmp40_ = NULL;
	RygelPluginInformation* _tmp41_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (file != NULL, NULL);
	_tmp0_ = g_key_file_new ();
	keyfile = _tmp0_;
	_tmp1_ = keyfile;
	_tmp2_ = file;
	_tmp3_ = g_file_get_path (_tmp2_);
	_tmp4_ = _tmp3_;
	g_key_file_load_from_file (_tmp1_, _tmp4_, G_KEY_FILE_NONE, &_inner_error_);
	_g_free0 (_tmp4_);
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		_g_key_file_unref0 (keyfile);
		return NULL;
	}
	_tmp5_ = keyfile;
	_tmp6_ = g_key_file_has_group (_tmp5_, "Plugin");
	if (!_tmp6_) {
		const gchar* _tmp7_ = NULL;
		GError* _tmp8_ = NULL;
		_tmp7_ = _ ("[Plugin] group not found");
		_tmp8_ = g_error_new_literal (G_KEY_FILE_ERROR, G_KEY_FILE_ERROR_GROUP_NOT_FOUND, _tmp7_);
		_inner_error_ = _tmp8_;
		g_propagate_error (error, _inner_error_);
		_g_key_file_unref0 (keyfile);
		return NULL;
	}
	_tmp9_ = keyfile;
	_tmp10_ = g_key_file_get_string (_tmp9_, "Plugin", "Name", &_inner_error_);
	name = _tmp10_;
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		_g_key_file_unref0 (keyfile);
		return NULL;
	}
	_tmp11_ = keyfile;
	_tmp12_ = g_key_file_get_string (_tmp11_, "Plugin", "Module", &_inner_error_);
	module = _tmp12_;
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		_g_free0 (name);
		_g_key_file_unref0 (keyfile);
		return NULL;
	}
	_tmp13_ = file;
	_tmp14_ = g_file_get_parent (_tmp13_);
	module_dir = _tmp14_;
	_tmp15_ = module_dir;
	_tmp16_ = module;
	_tmp17_ = g_strdup_printf ("librygel-%s.%s", _tmp16_, G_MODULE_SUFFIX);
	_tmp18_ = _tmp17_;
	_tmp19_ = g_file_get_child (_tmp15_, _tmp18_);
	_tmp20_ = _tmp19_;
	_g_free0 (_tmp18_);
	module_file = _tmp20_;
	_tmp21_ = module_file;
	_tmp22_ = g_file_query_exists (_tmp21_, NULL);
	if (!_tmp22_) {
		GFile* _tmp23_ = NULL;
		const gchar* _tmp24_ = NULL;
		gchar* _tmp25_ = NULL;
		gchar* _tmp26_ = NULL;
		GFile* _tmp27_ = NULL;
		GFile* _tmp28_ = NULL;
		gboolean _tmp29_ = FALSE;
		_tmp23_ = module_dir;
		_tmp24_ = module;
		_tmp25_ = g_strdup_printf (".libs%clibrygel-%s.%s", (gint) G_DIR_SEPARATOR, _tmp24_, G_MODULE_SUFFIX);
		_tmp26_ = _tmp25_;
		_tmp27_ = g_file_get_child (_tmp23_, _tmp26_);
		_g_object_unref0 (module_file);
		module_file = _tmp27_;
		_g_free0 (_tmp26_);
		_tmp28_ = module_file;
		_tmp29_ = g_file_query_exists (_tmp28_, NULL);
		if (!_tmp29_) {
			const gchar* _tmp30_ = NULL;
			GFile* _tmp31_ = NULL;
			gchar* _tmp32_ = NULL;
			gchar* _tmp33_ = NULL;
			GError* _tmp34_ = NULL;
			GError* _tmp35_ = NULL;
			_tmp30_ = _ ("Plugin module %s does not exist");
			_tmp31_ = module_file;
			_tmp32_ = g_file_get_path (_tmp31_);
			_tmp33_ = _tmp32_;
			_tmp34_ = g_error_new (G_FILE_ERROR, G_FILE_ERROR_EXIST, _tmp30_, _tmp33_);
			_tmp35_ = _tmp34_;
			_g_free0 (_tmp33_);
			_inner_error_ = _tmp35_;
			g_propagate_error (error, _inner_error_);
			_g_object_unref0 (module_file);
			_g_object_unref0 (module_dir);
			_g_free0 (module);
			_g_free0 (name);
			_g_key_file_unref0 (keyfile);
			return NULL;
		}
	}
	_tmp36_ = module_file;
	_tmp37_ = g_file_get_path (_tmp36_);
	_tmp38_ = _tmp37_;
	_tmp39_ = name;
	_tmp40_ = rygel_plugin_information_new (_tmp38_, _tmp39_);
	_tmp41_ = _tmp40_;
	_g_free0 (_tmp38_);
	result = _tmp41_;
	_g_object_unref0 (module_file);
	_g_object_unref0 (module_dir);
	_g_free0 (module);
	_g_free0 (name);
	_g_key_file_unref0 (keyfile);
	return result;
}


const gchar* rygel_plugin_information_get_module_path (RygelPluginInformation* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_module_path;
	result = _tmp0_;
	return result;
}


static void rygel_plugin_information_set_module_path (RygelPluginInformation* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_module_path);
	self->priv->_module_path = _tmp1_;
	g_object_notify ((GObject *) self, "module-path");
}


const gchar* rygel_plugin_information_get_name (RygelPluginInformation* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_name;
	result = _tmp0_;
	return result;
}


static void rygel_plugin_information_set_name (RygelPluginInformation* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp1_;
	g_object_notify ((GObject *) self, "name");
}


static void rygel_plugin_information_class_init (RygelPluginInformationClass * klass) {
	rygel_plugin_information_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (RygelPluginInformationPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_rygel_plugin_information_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_rygel_plugin_information_set_property;
	G_OBJECT_CLASS (klass)->finalize = rygel_plugin_information_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_PLUGIN_INFORMATION_MODULE_PATH, g_param_spec_string ("module-path", "module-path", "module-path", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_PLUGIN_INFORMATION_NAME, g_param_spec_string ("name", "name", "name", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
}


static void rygel_plugin_information_instance_init (RygelPluginInformation * self) {
	self->priv = RYGEL_PLUGIN_INFORMATION_GET_PRIVATE (self);
}


static void rygel_plugin_information_finalize (GObject* obj) {
	RygelPluginInformation * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_PLUGIN_INFORMATION, RygelPluginInformation);
	_g_free0 (self->priv->_module_path);
	_g_free0 (self->priv->_name);
	G_OBJECT_CLASS (rygel_plugin_information_parent_class)->finalize (obj);
}


/**
 * Parse plugin sidecar file and provide path to the module.
 *
 * Sidecar files are keyfiles, loosely compatible with the files used by
 * libpeas.
 *
 * A minimal file for the plugin librygel-sompelugin.so looks like this:
 *
 * {{{
 * [Plugin]
 * Name = SomeNameForThePlugin
 * Module = someplugin
 * }}}
 *
 * Name must not contain any whitespaces.
 */
GType rygel_plugin_information_get_type (void) {
	static volatile gsize rygel_plugin_information_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_plugin_information_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelPluginInformationClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_plugin_information_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelPluginInformation), 0, (GInstanceInitFunc) rygel_plugin_information_instance_init, NULL };
		GType rygel_plugin_information_type_id;
		rygel_plugin_information_type_id = g_type_register_static (G_TYPE_OBJECT, "RygelPluginInformation", &g_define_type_info, 0);
		g_once_init_leave (&rygel_plugin_information_type_id__volatile, rygel_plugin_information_type_id);
	}
	return rygel_plugin_information_type_id__volatile;
}


static void _vala_rygel_plugin_information_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	RygelPluginInformation * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, RYGEL_TYPE_PLUGIN_INFORMATION, RygelPluginInformation);
	switch (property_id) {
		case RYGEL_PLUGIN_INFORMATION_MODULE_PATH:
		g_value_set_string (value, rygel_plugin_information_get_module_path (self));
		break;
		case RYGEL_PLUGIN_INFORMATION_NAME:
		g_value_set_string (value, rygel_plugin_information_get_name (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_rygel_plugin_information_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	RygelPluginInformation * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, RYGEL_TYPE_PLUGIN_INFORMATION, RygelPluginInformation);
	switch (property_id) {
		case RYGEL_PLUGIN_INFORMATION_MODULE_PATH:
		rygel_plugin_information_set_module_path (self, g_value_get_string (value));
		break;
		case RYGEL_PLUGIN_INFORMATION_NAME:
		rygel_plugin_information_set_name (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



