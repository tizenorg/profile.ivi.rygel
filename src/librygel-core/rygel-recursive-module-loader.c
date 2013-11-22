/* rygel-recursive-module-loader.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-recursive-module-loader.vala, do not modify */

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
#include <gio/gio.h>
#include <stdlib.h>
#include <string.h>
#include <gmodule.h>
#include <glib/gi18n-lib.h>


#define RYGEL_TYPE_RECURSIVE_MODULE_LOADER (rygel_recursive_module_loader_get_type ())
#define RYGEL_RECURSIVE_MODULE_LOADER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_RECURSIVE_MODULE_LOADER, RygelRecursiveModuleLoader))
#define RYGEL_RECURSIVE_MODULE_LOADER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_RECURSIVE_MODULE_LOADER, RygelRecursiveModuleLoaderClass))
#define RYGEL_IS_RECURSIVE_MODULE_LOADER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_RECURSIVE_MODULE_LOADER))
#define RYGEL_IS_RECURSIVE_MODULE_LOADER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_RECURSIVE_MODULE_LOADER))
#define RYGEL_RECURSIVE_MODULE_LOADER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_RECURSIVE_MODULE_LOADER, RygelRecursiveModuleLoaderClass))

typedef struct _RygelRecursiveModuleLoader RygelRecursiveModuleLoader;
typedef struct _RygelRecursiveModuleLoaderClass RygelRecursiveModuleLoaderClass;
typedef struct _RygelRecursiveModuleLoaderPrivate RygelRecursiveModuleLoaderPrivate;

#define RYGEL_TYPE_PLUGIN_INFORMATION (rygel_plugin_information_get_type ())
#define RYGEL_PLUGIN_INFORMATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_PLUGIN_INFORMATION, RygelPluginInformation))
#define RYGEL_PLUGIN_INFORMATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_PLUGIN_INFORMATION, RygelPluginInformationClass))
#define RYGEL_IS_PLUGIN_INFORMATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_PLUGIN_INFORMATION))
#define RYGEL_IS_PLUGIN_INFORMATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_PLUGIN_INFORMATION))
#define RYGEL_PLUGIN_INFORMATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_PLUGIN_INFORMATION, RygelPluginInformationClass))

typedef struct _RygelPluginInformation RygelPluginInformation;
typedef struct _RygelPluginInformationClass RygelPluginInformationClass;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _Block2Data Block2Data;
#define __g_queue_free__g_object_unref0_0(var) ((var == NULL) ? NULL : (var = (_g_queue_free__g_object_unref0_ (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define __g_list_free__g_object_unref0_0(var) ((var == NULL) ? NULL : (var = (_g_list_free__g_object_unref0_ (var), NULL)))
typedef struct _RygelRecursiveModuleLoaderLoadModulesFromFolderData RygelRecursiveModuleLoaderLoadModulesFromFolderData;
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _RygelRecursiveModuleLoader {
	GObject parent_instance;
	RygelRecursiveModuleLoaderPrivate * priv;
};

struct _RygelRecursiveModuleLoaderClass {
	GObjectClass parent_class;
	gboolean (*load_module_from_file) (RygelRecursiveModuleLoader* self, GFile* file);
	gboolean (*load_module_from_info) (RygelRecursiveModuleLoader* self, RygelPluginInformation* info);
};

struct _RygelRecursiveModuleLoaderPrivate {
	gboolean done;
	gchar* _base_path;
};

struct _Block2Data {
	int _ref_count_;
	RygelRecursiveModuleLoader * self;
	GQueue* queue;
};

typedef void (*RygelRecursiveModuleLoaderFolderHandler) (GFile* folder, void* user_data);
struct _RygelRecursiveModuleLoaderLoadModulesFromFolderData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	RygelRecursiveModuleLoader* self;
	GFile* folder;
	GFile* _tmp0_;
	gchar* _tmp1_;
	gchar* _tmp2_;
	GList* infos;
	GFileEnumerator* enumerator;
	GFileEnumerator* _tmp3_;
	GFile* _tmp4_;
	GFileEnumerator* _tmp5_;
	GList* _tmp6_;
	GFileEnumerator* _tmp7_;
	gint _tmp8_;
	GList* _tmp9_;
	GError* _error_;
	const gchar* _tmp10_;
	GFile* _tmp11_;
	gchar* _tmp12_;
	gchar* _tmp13_;
	GError* _tmp14_;
	const gchar* _tmp15_;
	GList* _tmp16_;
	GList* info_collection;
	GList* info_it;
	GFileInfo* _tmp17_;
	GFileInfo* info;
	gboolean _tmp18_;
	GFile* _tmp19_;
	GFileInfo* _tmp20_;
	GFile* _tmp21_;
	gchar* _tmp22_;
	gchar* _tmp23_;
	GError * _inner_error_;
};


static gpointer rygel_recursive_module_loader_parent_class = NULL;

GType rygel_recursive_module_loader_get_type (void) G_GNUC_CONST;
GType rygel_plugin_information_get_type (void) G_GNUC_CONST;
#define RYGEL_RECURSIVE_MODULE_LOADER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_RECURSIVE_MODULE_LOADER, RygelRecursiveModuleLoaderPrivate))
enum  {
	RYGEL_RECURSIVE_MODULE_LOADER_DUMMY_PROPERTY,
	RYGEL_RECURSIVE_MODULE_LOADER_BASE_PATH
};
#define RYGEL_RECURSIVE_MODULE_LOADER_LOADER_ATTRIBUTES G_FILE_ATTRIBUTE_STANDARD_NAME "," G_FILE_ATTRIBUTE_STANDARD_TYPE "," G_FILE_ATTRIBUTE_STANDARD_IS_HIDDEN "," G_FILE_ATTRIBUTE_STANDARD_CONTENT_TYPE
RygelRecursiveModuleLoader* rygel_recursive_module_loader_construct (GType object_type, const gchar* path);
static void rygel_recursive_module_loader_real_constructed (GObject* base);
void rygel_recursive_module_loader_load_modules (RygelRecursiveModuleLoader* self);
const gchar* rygel_recursive_module_loader_get_base_path (RygelRecursiveModuleLoader* self);
static gboolean rygel_recursive_module_loader_is_folder (RygelRecursiveModuleLoader* self, GFile* file);
static void rygel_recursive_module_loader_load_modules_from_folder (RygelRecursiveModuleLoader* self, GFile* folder, GAsyncReadyCallback _callback_, gpointer _user_data_);
static void rygel_recursive_module_loader_load_modules_from_folder_finish (RygelRecursiveModuleLoader* self, GAsyncResult* _res_);
void rygel_recursive_module_loader_load_modules_sync (RygelRecursiveModuleLoader* self, GCancellable* cancellable);
static Block2Data* block2_data_ref (Block2Data* _data2_);
static void _g_object_unref0_ (gpointer var);
static void _g_queue_free__g_object_unref0_ (GQueue* self);
static void block2_data_unref (void * _userdata_);
static void rygel_recursive_module_loader_handle_file_info (RygelRecursiveModuleLoader* self, GFile* folder, GFileInfo* info, RygelRecursiveModuleLoaderFolderHandler handler, void* handler_target);
static void _____lambda5_ (Block2Data* _data2_, GFile* subfolder);
static void ______lambda5__rygel_recursive_module_loader_folder_handler (GFile* folder, gpointer self);
gboolean rygel_recursive_module_loader_load_module_from_file (RygelRecursiveModuleLoader* self, GFile* file);
static gboolean rygel_recursive_module_loader_real_load_module_from_file (RygelRecursiveModuleLoader* self, GFile* file);
gboolean rygel_recursive_module_loader_load_module_from_info (RygelRecursiveModuleLoader* self, RygelPluginInformation* info);
static gboolean rygel_recursive_module_loader_real_load_module_from_info (RygelRecursiveModuleLoader* self, RygelPluginInformation* info);
static void rygel_recursive_module_loader_load_modules_from_folder_data_free (gpointer _data);
static gboolean rygel_recursive_module_loader_load_modules_from_folder_co (RygelRecursiveModuleLoaderLoadModulesFromFolderData* _data_);
static void rygel_recursive_module_loader_load_modules_from_folder_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
static void _g_list_free__g_object_unref0_ (GList* self);
static void ____lambda4_ (RygelRecursiveModuleLoader* self, GFile* subfolder);
static void _____lambda4__rygel_recursive_module_loader_folder_handler (GFile* folder, gpointer self);
static gboolean rygel_recursive_module_loader_is_folder_eligible (RygelRecursiveModuleLoader* self, GFileInfo* file_info);
RygelPluginInformation* rygel_plugin_information_new_from_file (GFile* file, GError** error);
void rygel_recursive_module_loader_set_base_path (RygelRecursiveModuleLoader* self, const gchar* value);
static void rygel_recursive_module_loader_finalize (GObject* obj);
static void _vala_rygel_recursive_module_loader_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_rygel_recursive_module_loader_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


/**
     * Create a recursive module loader for a given path.
     *
     * Either call load_modules() or load_modules_sync() to start descending
     * into the folder hierarchy and load the modules.
     *
     * @param path base path of the loader.
     */
RygelRecursiveModuleLoader* rygel_recursive_module_loader_construct (GType object_type, const gchar* path) {
	RygelRecursiveModuleLoader * self = NULL;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (path != NULL, NULL);
	_tmp0_ = path;
	self = (RygelRecursiveModuleLoader*) g_object_new (object_type, "base-path", _tmp0_, NULL);
	return self;
}


static void rygel_recursive_module_loader_real_constructed (GObject* base) {
	RygelRecursiveModuleLoader * self;
	self = (RygelRecursiveModuleLoader*) base;
	G_OBJECT_CLASS (rygel_recursive_module_loader_parent_class)->constructed (G_TYPE_CHECK_INSTANCE_CAST (self, G_TYPE_OBJECT, GObject));
	self->priv->done = FALSE;
}


/**
     * Walk asynchronously through the tree and load modules.
     */
void rygel_recursive_module_loader_load_modules (RygelRecursiveModuleLoader* self) {
	gboolean _tmp0_ = FALSE;
	GFile* folder = NULL;
	const gchar* _tmp1_ = NULL;
	GFile* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	GFile* _tmp4_ = NULL;
	gboolean _tmp7_ = FALSE;
	GFile* _tmp8_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_module_supported ();
	_vala_assert (_tmp0_, "Module.supported()");
	_tmp1_ = self->priv->_base_path;
	_tmp2_ = g_file_new_for_path (_tmp1_);
	folder = _tmp2_;
	_tmp4_ = folder;
	if (_tmp4_ != NULL) {
		GFile* _tmp5_ = NULL;
		gboolean _tmp6_ = FALSE;
		_tmp5_ = folder;
		_tmp6_ = rygel_recursive_module_loader_is_folder (self, _tmp5_);
		_tmp3_ = _tmp6_;
	} else {
		_tmp3_ = FALSE;
	}
	_tmp7_ = _tmp3_;
	_vala_assert (_tmp7_, "folder != null && this.is_folder (folder)");
	_tmp8_ = folder;
	rygel_recursive_module_loader_load_modules_from_folder (self, _tmp8_, NULL, NULL);
	_g_object_unref0 (folder);
}


/**
     * Walk synchronously through the tree and load modules.
     */
static Block2Data* block2_data_ref (Block2Data* _data2_) {
	g_atomic_int_inc (&_data2_->_ref_count_);
	return _data2_;
}


static void _g_object_unref0_ (gpointer var) {
	(var == NULL) ? NULL : (var = (g_object_unref (var), NULL));
}


static void _g_queue_free__g_object_unref0_ (GQueue* self) {
	g_queue_foreach (self, (GFunc) _g_object_unref0_, NULL);
	g_queue_free (self);
}


static void block2_data_unref (void * _userdata_) {
	Block2Data* _data2_;
	_data2_ = (Block2Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data2_->_ref_count_)) {
		RygelRecursiveModuleLoader * self;
		self = _data2_->self;
		__g_queue_free__g_object_unref0_0 (_data2_->queue);
		_g_object_unref0 (self);
		g_slice_free (Block2Data, _data2_);
	}
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void _____lambda5_ (Block2Data* _data2_, GFile* subfolder) {
	RygelRecursiveModuleLoader * self;
	GQueue* _tmp0_ = NULL;
	GFile* _tmp1_ = NULL;
	GFile* _tmp2_ = NULL;
	self = _data2_->self;
	g_return_if_fail (subfolder != NULL);
	_tmp0_ = _data2_->queue;
	_tmp1_ = subfolder;
	_tmp2_ = _g_object_ref0 (_tmp1_);
	g_queue_push_head (_tmp0_, _tmp2_);
}


static void ______lambda5__rygel_recursive_module_loader_folder_handler (GFile* folder, gpointer self) {
	_____lambda5_ (self, folder);
}


void rygel_recursive_module_loader_load_modules_sync (RygelRecursiveModuleLoader* self, GCancellable* cancellable) {
	Block2Data* _data2_;
	const gchar* _tmp0_ = NULL;
	GQueue* _tmp1_ = NULL;
	GQueue* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	GFile* _tmp4_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	_data2_ = g_slice_new0 (Block2Data);
	_data2_->_ref_count_ = 1;
	_data2_->self = g_object_ref (self);
	_tmp0_ = self->priv->_base_path;
	g_debug ("rygel-recursive-module-loader.vala:78: Searching for modules in folder" \
" '%s'", _tmp0_);
	_tmp1_ = g_queue_new ();
	_data2_->queue = _tmp1_;
	_tmp2_ = _data2_->queue;
	_tmp3_ = self->priv->_base_path;
	_tmp4_ = g_file_new_for_path (_tmp3_);
	g_queue_push_head (_tmp2_, _tmp4_);
	while (TRUE) {
		GQueue* _tmp5_ = NULL;
		gboolean _tmp6_ = FALSE;
		gboolean _tmp7_ = FALSE;
		GCancellable* _tmp8_ = NULL;
		gboolean _tmp11_ = FALSE;
		GFile* folder = NULL;
		GQueue* _tmp12_ = NULL;
		gpointer _tmp13_ = NULL;
		_tmp5_ = _data2_->queue;
		_tmp6_ = g_queue_is_empty (_tmp5_);
		if (!(!_tmp6_)) {
			break;
		}
		_tmp8_ = cancellable;
		if (_tmp8_ != NULL) {
			GCancellable* _tmp9_ = NULL;
			gboolean _tmp10_ = FALSE;
			_tmp9_ = cancellable;
			_tmp10_ = g_cancellable_is_cancelled (_tmp9_);
			_tmp7_ = _tmp10_;
		} else {
			_tmp7_ = FALSE;
		}
		_tmp11_ = _tmp7_;
		if (_tmp11_) {
			break;
		}
		_tmp12_ = _data2_->queue;
		_tmp13_ = g_queue_pop_head (_tmp12_);
		folder = (GFile*) _tmp13_;
		{
			GFileEnumerator* enumerator = NULL;
			GFile* _tmp14_ = NULL;
			GCancellable* _tmp15_ = NULL;
			GFileEnumerator* _tmp16_ = NULL;
			GFileInfo* info = NULL;
			GFileEnumerator* _tmp17_ = NULL;
			GCancellable* _tmp18_ = NULL;
			GFileInfo* _tmp19_ = NULL;
			_tmp14_ = folder;
			_tmp15_ = cancellable;
			_tmp16_ = g_file_enumerate_children (_tmp14_, RYGEL_RECURSIVE_MODULE_LOADER_LOADER_ATTRIBUTES, G_FILE_QUERY_INFO_NONE, _tmp15_, &_inner_error_);
			enumerator = _tmp16_;
			if (_inner_error_ != NULL) {
				goto __catch37_g_error;
			}
			_tmp17_ = enumerator;
			_tmp18_ = cancellable;
			_tmp19_ = g_file_enumerator_next_file (_tmp17_, _tmp18_, &_inner_error_);
			info = _tmp19_;
			if (_inner_error_ != NULL) {
				_g_object_unref0 (enumerator);
				goto __catch37_g_error;
			}
			while (TRUE) {
				GFileInfo* _tmp20_ = NULL;
				GFile* _tmp21_ = NULL;
				GFileInfo* _tmp22_ = NULL;
				GFileInfo* _tmp23_ = NULL;
				GFileEnumerator* _tmp24_ = NULL;
				GCancellable* _tmp25_ = NULL;
				GFileInfo* _tmp26_ = NULL;
				_tmp20_ = info;
				if (!(_tmp20_ != NULL)) {
					break;
				}
				_tmp21_ = folder;
				_tmp22_ = info;
				rygel_recursive_module_loader_handle_file_info (self, _tmp21_, _tmp22_, ______lambda5__rygel_recursive_module_loader_folder_handler, _data2_);
				_tmp24_ = enumerator;
				_tmp25_ = cancellable;
				_tmp26_ = g_file_enumerator_next_file (_tmp24_, _tmp25_, &_inner_error_);
				_tmp23_ = _tmp26_;
				if (_inner_error_ != NULL) {
					_g_object_unref0 (info);
					_g_object_unref0 (enumerator);
					goto __catch37_g_error;
				}
				_g_object_unref0 (info);
				info = _tmp23_;
			}
			_g_object_unref0 (info);
			_g_object_unref0 (enumerator);
		}
		goto __finally37;
		__catch37_g_error:
		{
			GError* _error_ = NULL;
			GFile* _tmp27_ = NULL;
			gchar* _tmp28_ = NULL;
			gchar* _tmp29_ = NULL;
			GError* _tmp30_ = NULL;
			const gchar* _tmp31_ = NULL;
			_error_ = _inner_error_;
			_inner_error_ = NULL;
			_tmp27_ = folder;
			_tmp28_ = g_file_get_path (_tmp27_);
			_tmp29_ = _tmp28_;
			_tmp30_ = _error_;
			_tmp31_ = _tmp30_->message;
			g_debug ("rygel-recursive-module-loader.vala:102: Failed to enumerate folder %s:" \
" %s", _tmp29_, _tmp31_);
			_g_free0 (_tmp29_);
			_g_error_free0 (_error_);
		}
		__finally37:
		if (_inner_error_ != NULL) {
			_g_object_unref0 (folder);
			block2_data_unref (_data2_);
			_data2_ = NULL;
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
		_g_object_unref0 (folder);
	}
	block2_data_unref (_data2_);
	_data2_ = NULL;
}


/**
     * Load module from file.
     * @param file File to load the module from
     * @return The implementation should return true if the class should
     * continue to search for modules, false otherwise.
     */
static gboolean rygel_recursive_module_loader_real_load_module_from_file (RygelRecursiveModuleLoader* self, GFile* file) {
	g_critical ("Type `%s' does not implement abstract method `rygel_recursive_module_loader_load_module_from_file'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return FALSE;
}


gboolean rygel_recursive_module_loader_load_module_from_file (RygelRecursiveModuleLoader* self, GFile* file) {
	g_return_val_if_fail (self != NULL, FALSE);
	return RYGEL_RECURSIVE_MODULE_LOADER_GET_CLASS (self)->load_module_from_file (self, file);
}


static gboolean rygel_recursive_module_loader_real_load_module_from_info (RygelRecursiveModuleLoader* self, RygelPluginInformation* info) {
	g_critical ("Type `%s' does not implement abstract method `rygel_recursive_module_loader_load_module_from_info'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return FALSE;
}


gboolean rygel_recursive_module_loader_load_module_from_info (RygelRecursiveModuleLoader* self, RygelPluginInformation* info) {
	g_return_val_if_fail (self != NULL, FALSE);
	return RYGEL_RECURSIVE_MODULE_LOADER_GET_CLASS (self)->load_module_from_info (self, info);
}


static void rygel_recursive_module_loader_load_modules_from_folder_data_free (gpointer _data) {
	RygelRecursiveModuleLoaderLoadModulesFromFolderData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->folder);
	_g_object_unref0 (_data_->self);
	g_slice_free (RygelRecursiveModuleLoaderLoadModulesFromFolderData, _data_);
}


static void rygel_recursive_module_loader_load_modules_from_folder (RygelRecursiveModuleLoader* self, GFile* folder, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RygelRecursiveModuleLoaderLoadModulesFromFolderData* _data_;
	RygelRecursiveModuleLoader* _tmp0_ = NULL;
	GFile* _tmp1_ = NULL;
	GFile* _tmp2_ = NULL;
	_data_ = g_slice_new0 (RygelRecursiveModuleLoaderLoadModulesFromFolderData);
	_data_->_async_result = g_simple_async_result_new (G_OBJECT (self), _callback_, _user_data_, rygel_recursive_module_loader_load_modules_from_folder);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, rygel_recursive_module_loader_load_modules_from_folder_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = folder;
	_tmp2_ = _g_object_ref0 (_tmp1_);
	_g_object_unref0 (_data_->folder);
	_data_->folder = _tmp2_;
	rygel_recursive_module_loader_load_modules_from_folder_co (_data_);
}


static void rygel_recursive_module_loader_load_modules_from_folder_finish (RygelRecursiveModuleLoader* self, GAsyncResult* _res_) {
	RygelRecursiveModuleLoaderLoadModulesFromFolderData* _data_;
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
}


/**
     * Process children of a folder.
     *
     * Recurse into folders or call load_module_from_file() if it looks
     * like a shared library.
     *
     * @param folder the folder
     */
static void rygel_recursive_module_loader_load_modules_from_folder_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	RygelRecursiveModuleLoaderLoadModulesFromFolderData* _data_;
	_data_ = _user_data_;
	_data_->_source_object_ = source_object;
	_data_->_res_ = _res_;
	rygel_recursive_module_loader_load_modules_from_folder_co (_data_);
}


static void _g_list_free__g_object_unref0_ (GList* self) {
	g_list_foreach (self, (GFunc) _g_object_unref0_, NULL);
	g_list_free (self);
}


static void ____lambda4_ (RygelRecursiveModuleLoader* self, GFile* subfolder) {
	GFile* _tmp0_ = NULL;
	g_return_if_fail (subfolder != NULL);
	_tmp0_ = subfolder;
	rygel_recursive_module_loader_load_modules_from_folder (self, _tmp0_, NULL, NULL);
}


static void _____lambda4__rygel_recursive_module_loader_folder_handler (GFile* folder, gpointer self) {
	____lambda4_ (self, folder);
}


static gboolean rygel_recursive_module_loader_load_modules_from_folder_co (RygelRecursiveModuleLoaderLoadModulesFromFolderData* _data_) {
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		case 1:
		goto _state_1;
		case 2:
		goto _state_2;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = NULL;
	_data_->_tmp0_ = _data_->folder;
	_data_->_tmp1_ = NULL;
	_data_->_tmp1_ = g_file_get_path (_data_->_tmp0_);
	_data_->_tmp2_ = NULL;
	_data_->_tmp2_ = _data_->_tmp1_;
	g_debug ("rygel-recursive-module-loader.vala:128: Searching for modules in folde" \
"r '%s'.", _data_->_tmp2_);
	_g_free0 (_data_->_tmp2_);
	{
		_data_->_tmp4_ = NULL;
		_data_->_tmp4_ = _data_->folder;
		_data_->_state_ = 1;
		g_file_enumerate_children_async (_data_->_tmp4_, RYGEL_RECURSIVE_MODULE_LOADER_LOADER_ATTRIBUTES, G_FILE_QUERY_INFO_NONE, G_PRIORITY_DEFAULT, NULL, rygel_recursive_module_loader_load_modules_from_folder_ready, _data_);
		return FALSE;
		_state_1:
		_data_->_tmp5_ = NULL;
		_data_->_tmp5_ = g_file_enumerate_children_finish (_data_->_tmp4_, _data_->_res_, &_data_->_inner_error_);
		_data_->_tmp3_ = _data_->_tmp5_;
		if (_data_->_inner_error_ != NULL) {
			goto __catch38_g_error;
		}
		_g_object_unref0 (_data_->enumerator);
		_data_->enumerator = _data_->_tmp3_;
		_data_->_tmp7_ = NULL;
		_data_->_tmp7_ = _data_->enumerator;
		_data_->_tmp8_ = 0;
		_data_->_tmp8_ = G_MAXINT;
		_data_->_state_ = 2;
		g_file_enumerator_next_files_async (_data_->_tmp7_, _data_->_tmp8_, G_PRIORITY_DEFAULT, NULL, rygel_recursive_module_loader_load_modules_from_folder_ready, _data_);
		return FALSE;
		_state_2:
		_data_->_tmp9_ = NULL;
		_data_->_tmp9_ = g_file_enumerator_next_files_finish (_data_->_tmp7_, _data_->_res_, &_data_->_inner_error_);
		_data_->_tmp6_ = _data_->_tmp9_;
		if (_data_->_inner_error_ != NULL) {
			goto __catch38_g_error;
		}
		__g_list_free__g_object_unref0_0 (_data_->infos);
		_data_->infos = _data_->_tmp6_;
	}
	goto __finally38;
	__catch38_g_error:
	{
		_data_->_error_ = _data_->_inner_error_;
		_data_->_inner_error_ = NULL;
		_data_->_tmp10_ = NULL;
		_data_->_tmp10_ = _ ("Error listing contents of folder '%s': %s");
		_data_->_tmp11_ = NULL;
		_data_->_tmp11_ = _data_->folder;
		_data_->_tmp12_ = NULL;
		_data_->_tmp12_ = g_file_get_path (_data_->_tmp11_);
		_data_->_tmp13_ = NULL;
		_data_->_tmp13_ = _data_->_tmp12_;
		_data_->_tmp14_ = NULL;
		_data_->_tmp14_ = _data_->_error_;
		_data_->_tmp15_ = NULL;
		_data_->_tmp15_ = _data_->_tmp14_->message;
		g_critical (_data_->_tmp10_, _data_->_tmp13_, _data_->_tmp15_);
		_g_free0 (_data_->_tmp13_);
		_g_error_free0 (_data_->_error_);
		_g_object_unref0 (_data_->enumerator);
		__g_list_free__g_object_unref0_0 (_data_->infos);
		if (_data_->_state_ == 0) {
			g_simple_async_result_complete_in_idle (_data_->_async_result);
		} else {
			g_simple_async_result_complete (_data_->_async_result);
		}
		g_object_unref (_data_->_async_result);
		return FALSE;
	}
	__finally38:
	if (_data_->_inner_error_ != NULL) {
		_g_object_unref0 (_data_->enumerator);
		__g_list_free__g_object_unref0_0 (_data_->infos);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
		g_clear_error (&_data_->_inner_error_);
		return FALSE;
	}
	_data_->_tmp16_ = NULL;
	_data_->_tmp16_ = _data_->infos;
	{
		_data_->info_collection = _data_->_tmp16_;
		for (_data_->info_it = _data_->info_collection; _data_->info_it != NULL; _data_->info_it = _data_->info_it->next) {
			_data_->_tmp17_ = NULL;
			_data_->_tmp17_ = _g_object_ref0 ((GFileInfo*) _data_->info_it->data);
			_data_->info = _data_->_tmp17_;
			{
				_data_->_tmp18_ = FALSE;
				_data_->_tmp18_ = _data_->self->priv->done;
				if (_data_->_tmp18_) {
					_g_object_unref0 (_data_->info);
					break;
				}
				_data_->_tmp19_ = NULL;
				_data_->_tmp19_ = _data_->folder;
				_data_->_tmp20_ = NULL;
				_data_->_tmp20_ = _data_->info;
				rygel_recursive_module_loader_handle_file_info (_data_->self, _data_->_tmp19_, _data_->_tmp20_, _____lambda4__rygel_recursive_module_loader_folder_handler, _data_->self);
				_g_object_unref0 (_data_->info);
			}
		}
	}
	_data_->_tmp21_ = NULL;
	_data_->_tmp21_ = _data_->folder;
	_data_->_tmp22_ = NULL;
	_data_->_tmp22_ = g_file_get_path (_data_->_tmp21_);
	_data_->_tmp23_ = NULL;
	_data_->_tmp23_ = _data_->_tmp22_;
	g_debug ("rygel-recursive-module-loader.vala:161: Finished searching for modules" \
" in folder '%s'", _data_->_tmp23_);
	_g_free0 (_data_->_tmp23_);
	_g_object_unref0 (_data_->enumerator);
	__g_list_free__g_object_unref0_0 (_data_->infos);
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


/**
     * Process a file info.
     *
     * Utility method used by sync and async tree walk.
     * @param folder parent folder
     * @param info the FileInfo of the file to process
     * @param handler a call-back if the FileInfo represents a folder.
     */
static void rygel_recursive_module_loader_handle_file_info (RygelRecursiveModuleLoader* self, GFile* folder, GFileInfo* info, RygelRecursiveModuleLoaderFolderHandler handler, void* handler_target) {
	GFile* file = NULL;
	GFile* _tmp0_ = NULL;
	GFileInfo* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	GFile* _tmp3_ = NULL;
	GFileInfo* _tmp4_ = NULL;
	gboolean _tmp5_ = FALSE;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (folder != NULL);
	g_return_if_fail (info != NULL);
	_tmp0_ = folder;
	_tmp1_ = info;
	_tmp2_ = g_file_info_get_name (_tmp1_);
	_tmp3_ = g_file_get_child (_tmp0_, _tmp2_);
	file = _tmp3_;
	_tmp4_ = info;
	_tmp5_ = rygel_recursive_module_loader_is_folder_eligible (self, _tmp4_);
	if (_tmp5_) {
		RygelRecursiveModuleLoaderFolderHandler _tmp6_ = NULL;
		void* _tmp6__target = NULL;
		GFile* _tmp7_ = NULL;
		_tmp6_ = handler;
		_tmp6__target = handler_target;
		_tmp7_ = file;
		_tmp6_ (_tmp7_, _tmp6__target);
	} else {
		GFileInfo* _tmp8_ = NULL;
		const gchar* _tmp9_ = NULL;
		gboolean _tmp10_ = FALSE;
		_tmp8_ = info;
		_tmp9_ = g_file_info_get_name (_tmp8_);
		_tmp10_ = g_str_has_suffix (_tmp9_, ".plugin");
		if (_tmp10_) {
			{
				RygelPluginInformation* plugin_info = NULL;
				GFile* _tmp11_ = NULL;
				RygelPluginInformation* _tmp12_ = NULL;
				RygelPluginInformation* _tmp13_ = NULL;
				gboolean _tmp14_ = FALSE;
				_tmp11_ = file;
				_tmp12_ = rygel_plugin_information_new_from_file (_tmp11_, &_inner_error_);
				plugin_info = _tmp12_;
				if (_inner_error_ != NULL) {
					goto __catch39_g_error;
				}
				_tmp13_ = plugin_info;
				_tmp14_ = rygel_recursive_module_loader_load_module_from_info (self, _tmp13_);
				if (!_tmp14_) {
					self->priv->done = TRUE;
				}
				_g_object_unref0 (plugin_info);
			}
			goto __finally39;
			__catch39_g_error:
			{
				GError* _error_ = NULL;
				const gchar* _tmp15_ = NULL;
				GError* _tmp16_ = NULL;
				const gchar* _tmp17_ = NULL;
				_error_ = _inner_error_;
				_inner_error_ = NULL;
				_tmp15_ = _ ("Could not load plugin: %s");
				_tmp16_ = _error_;
				_tmp17_ = _tmp16_->message;
				g_warning (_tmp15_, _tmp17_);
				_g_error_free0 (_error_);
			}
			__finally39:
			if (_inner_error_ != NULL) {
				_g_object_unref0 (file);
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
				g_clear_error (&_inner_error_);
				return;
			}
		}
	}
	_g_object_unref0 (file);
}


static gboolean rygel_recursive_module_loader_is_folder_eligible (RygelRecursiveModuleLoader* self, GFileInfo* file_info) {
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	GFileInfo* _tmp1_ = NULL;
	GFileType _tmp2_ = 0;
	gboolean _tmp9_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (file_info != NULL, FALSE);
	_tmp1_ = file_info;
	_tmp2_ = g_file_info_get_file_type (_tmp1_);
	if (_tmp2_ == G_FILE_TYPE_DIRECTORY) {
		gboolean _tmp3_ = FALSE;
		GFileInfo* _tmp4_ = NULL;
		const gchar* _tmp5_ = NULL;
		gboolean _tmp8_ = FALSE;
		_tmp4_ = file_info;
		_tmp5_ = g_file_info_get_name (_tmp4_);
		if (g_strcmp0 (_tmp5_, ".libs") == 0) {
			_tmp3_ = TRUE;
		} else {
			GFileInfo* _tmp6_ = NULL;
			gboolean _tmp7_ = FALSE;
			_tmp6_ = file_info;
			_tmp7_ = g_file_info_get_is_hidden (_tmp6_);
			_tmp3_ = !_tmp7_;
		}
		_tmp8_ = _tmp3_;
		_tmp0_ = _tmp8_;
	} else {
		_tmp0_ = FALSE;
	}
	_tmp9_ = _tmp0_;
	result = _tmp9_;
	return result;
}


/**
     * Check if a File is a folder.
     *
     * @param file the File to check
     * @return true, if file is folder, false otherwise.
     */
static gboolean rygel_recursive_module_loader_is_folder (RygelRecursiveModuleLoader* self, GFile* file) {
	gboolean result = FALSE;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (file != NULL, FALSE);
	{
		GFileInfo* file_info = NULL;
		GFile* _tmp0_ = NULL;
		GFileInfo* _tmp1_ = NULL;
		gboolean _tmp2_ = FALSE;
		_tmp0_ = file;
		_tmp1_ = g_file_query_info (_tmp0_, G_FILE_ATTRIBUTE_STANDARD_TYPE "," G_FILE_ATTRIBUTE_STANDARD_IS_HIDDEN, G_FILE_QUERY_INFO_NONE, NULL, &_inner_error_);
		file_info = _tmp1_;
		if (_inner_error_ != NULL) {
			goto __catch40_g_error;
		}
		_tmp2_ = rygel_recursive_module_loader_is_folder_eligible (self, file_info);
		result = _tmp2_;
		_g_object_unref0 (file_info);
		return result;
	}
	goto __finally40;
	__catch40_g_error:
	{
		GError* _error_ = NULL;
		const gchar* _tmp3_ = NULL;
		GFile* _tmp4_ = NULL;
		gchar* _tmp5_ = NULL;
		gchar* _tmp6_ = NULL;
		_error_ = _inner_error_;
		_inner_error_ = NULL;
		_tmp3_ = _ ("Failed to query content type for '%s'");
		_tmp4_ = file;
		_tmp5_ = g_file_get_path (_tmp4_);
		_tmp6_ = _tmp5_;
		g_critical (_tmp3_, _tmp6_);
		_g_free0 (_tmp6_);
		result = FALSE;
		_g_error_free0 (_error_);
		return result;
	}
	__finally40:
	g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
	g_clear_error (&_inner_error_);
	return FALSE;
}


const gchar* rygel_recursive_module_loader_get_base_path (RygelRecursiveModuleLoader* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_base_path;
	result = _tmp0_;
	return result;
}


void rygel_recursive_module_loader_set_base_path (RygelRecursiveModuleLoader* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_base_path);
	self->priv->_base_path = _tmp1_;
	g_object_notify ((GObject *) self, "base-path");
}


static void rygel_recursive_module_loader_class_init (RygelRecursiveModuleLoaderClass * klass) {
	rygel_recursive_module_loader_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (RygelRecursiveModuleLoaderPrivate));
	G_OBJECT_CLASS (klass)->constructed = rygel_recursive_module_loader_real_constructed;
	RYGEL_RECURSIVE_MODULE_LOADER_CLASS (klass)->load_module_from_file = rygel_recursive_module_loader_real_load_module_from_file;
	RYGEL_RECURSIVE_MODULE_LOADER_CLASS (klass)->load_module_from_info = rygel_recursive_module_loader_real_load_module_from_info;
	G_OBJECT_CLASS (klass)->get_property = _vala_rygel_recursive_module_loader_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_rygel_recursive_module_loader_set_property;
	G_OBJECT_CLASS (klass)->finalize = rygel_recursive_module_loader_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), RYGEL_RECURSIVE_MODULE_LOADER_BASE_PATH, g_param_spec_string ("base-path", "base-path", "base-path", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
}


static void rygel_recursive_module_loader_instance_init (RygelRecursiveModuleLoader * self) {
	self->priv = RYGEL_RECURSIVE_MODULE_LOADER_GET_PRIVATE (self);
}


static void rygel_recursive_module_loader_finalize (GObject* obj) {
	RygelRecursiveModuleLoader * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_RECURSIVE_MODULE_LOADER, RygelRecursiveModuleLoader);
	_g_free0 (self->priv->_base_path);
	G_OBJECT_CLASS (rygel_recursive_module_loader_parent_class)->finalize (obj);
}


/**
 * Recursively walk a folder looking for shared libraries.
 *
 * The folder can either be walked synchronously or asynchronously.
 * Implementing classes need to implement the abstract method
 * load_module_from_file() which is called when the walker encounters a
 * dynamic module file.
 */
GType rygel_recursive_module_loader_get_type (void) {
	static volatile gsize rygel_recursive_module_loader_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_recursive_module_loader_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelRecursiveModuleLoaderClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_recursive_module_loader_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelRecursiveModuleLoader), 0, (GInstanceInitFunc) rygel_recursive_module_loader_instance_init, NULL };
		GType rygel_recursive_module_loader_type_id;
		rygel_recursive_module_loader_type_id = g_type_register_static (G_TYPE_OBJECT, "RygelRecursiveModuleLoader", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&rygel_recursive_module_loader_type_id__volatile, rygel_recursive_module_loader_type_id);
	}
	return rygel_recursive_module_loader_type_id__volatile;
}


static void _vala_rygel_recursive_module_loader_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	RygelRecursiveModuleLoader * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, RYGEL_TYPE_RECURSIVE_MODULE_LOADER, RygelRecursiveModuleLoader);
	switch (property_id) {
		case RYGEL_RECURSIVE_MODULE_LOADER_BASE_PATH:
		g_value_set_string (value, rygel_recursive_module_loader_get_base_path (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_rygel_recursive_module_loader_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	RygelRecursiveModuleLoader * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, RYGEL_TYPE_RECURSIVE_MODULE_LOADER, RygelRecursiveModuleLoader);
	switch (property_id) {
		case RYGEL_RECURSIVE_MODULE_LOADER_BASE_PATH:
		rygel_recursive_module_loader_set_base_path (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



