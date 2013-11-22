/* rygel-external-icon-factory.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-external-icon-factory.vala, do not modify */

/*
 * Copyright (C) 2009 Zeeshan Ali (Khattak) <zeeshanak@gnome.org>.
 * Copyright (C) 2009 Nokia Corporation.
 *
 * Author: Zeeshan Ali (Khattak) <zeeshanak@gnome.org>
 *                               <zeeshan.ali@nokia.com>
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
#include <rygel-core.h>
#include <gobject/gvaluecollector.h>


#define RYGEL_EXTERNAL_TYPE_ICON_FACTORY (rygel_external_icon_factory_get_type ())
#define RYGEL_EXTERNAL_ICON_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_EXTERNAL_TYPE_ICON_FACTORY, RygelExternalIconFactory))
#define RYGEL_EXTERNAL_ICON_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_EXTERNAL_TYPE_ICON_FACTORY, RygelExternalIconFactoryClass))
#define RYGEL_EXTERNAL_IS_ICON_FACTORY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_EXTERNAL_TYPE_ICON_FACTORY))
#define RYGEL_EXTERNAL_IS_ICON_FACTORY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_EXTERNAL_TYPE_ICON_FACTORY))
#define RYGEL_EXTERNAL_ICON_FACTORY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_EXTERNAL_TYPE_ICON_FACTORY, RygelExternalIconFactoryClass))

typedef struct _RygelExternalIconFactory RygelExternalIconFactory;
typedef struct _RygelExternalIconFactoryClass RygelExternalIconFactoryClass;
typedef struct _RygelExternalIconFactoryPrivate RygelExternalIconFactoryPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_hash_table_unref0(var) ((var == NULL) ? NULL : (var = (g_hash_table_unref (var), NULL)))
#define _rygel_icon_info_unref0(var) ((var == NULL) ? NULL : (var = (rygel_icon_info_unref (var), NULL)))
#define _rygel_external_icon_factory_unref0(var) ((var == NULL) ? NULL : (var = (rygel_external_icon_factory_unref (var), NULL)))
#define _g_variant_unref0(var) ((var == NULL) ? NULL : (var = (g_variant_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _RygelExternalIconFactoryCreateData RygelExternalIconFactoryCreateData;
typedef struct _RygelExternalParamSpecIconFactory RygelExternalParamSpecIconFactory;

struct _RygelExternalIconFactory {
	GTypeInstance parent_instance;
	volatile int ref_count;
	RygelExternalIconFactoryPrivate * priv;
};

struct _RygelExternalIconFactoryClass {
	GTypeClass parent_class;
	void (*finalize) (RygelExternalIconFactory *self);
};

struct _RygelExternalIconFactoryCreateData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GSimpleAsyncResult* _async_result;
	RygelExternalIconFactory* self;
	gchar* service_name;
	GHashTable* container_props;
	RygelIconInfo* result;
	GVariant* value;
	GHashTable* _tmp0_;
	gconstpointer _tmp1_;
	GVariant* _tmp2_;
	GVariant* _tmp3_;
	gchar* icon_path;
	GVariant* _tmp4_;
	gchar* _tmp5_;
	FreeDesktopProperties* props;
	const gchar* _tmp6_;
	const gchar* _tmp7_;
	FreeDesktopProperties* _tmp8_;
	GHashTable* item_props;
	FreeDesktopProperties* _tmp9_;
	const gchar* _tmp10_;
	GHashTable* _tmp11_;
	GHashTable* _tmp12_;
	RygelIconInfo* _tmp13_;
	GError * _inner_error_;
};

struct _RygelExternalParamSpecIconFactory {
	GParamSpec parent_instance;
};


static gpointer rygel_external_icon_factory_parent_class = NULL;
static gchar* rygel_external_icon_factory_ITEM_IFACE;
static gchar* rygel_external_icon_factory_ITEM_IFACE = NULL;

gpointer rygel_external_icon_factory_ref (gpointer instance);
void rygel_external_icon_factory_unref (gpointer instance);
GParamSpec* rygel_external_param_spec_icon_factory (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void rygel_external_value_set_icon_factory (GValue* value, gpointer v_object);
void rygel_external_value_take_icon_factory (GValue* value, gpointer v_object);
gpointer rygel_external_value_get_icon_factory (const GValue* value);
GType rygel_external_icon_factory_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_EXTERNAL_ICON_FACTORY_DUMMY_PROPERTY
};
static void rygel_external_icon_factory_create_data_free (gpointer _data);
void rygel_external_icon_factory_create (RygelExternalIconFactory* self, const gchar* service_name, GHashTable* container_props, GAsyncReadyCallback _callback_, gpointer _user_data_);
RygelIconInfo* rygel_external_icon_factory_create_finish (RygelExternalIconFactory* self, GAsyncResult* _res_, GError** error);
static gboolean rygel_external_icon_factory_create_co (RygelExternalIconFactoryCreateData* _data_);
static gchar* _variant_get28 (GVariant* value);
static void rygel_external_icon_factory_create_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_);
static RygelIconInfo* rygel_external_icon_factory_create_from_props (RygelExternalIconFactory* self, GHashTable* props);
static gchar* _variant_get29 (GVariant* value);
static gchar* rygel_external_icon_factory_get_ext_for_mime (RygelExternalIconFactory* self, const gchar* mime_type);
static gchar** _variant_get30 (GVariant* value, int* result_length1);
static gint64 _variant_get31 (GVariant* value);
static gint rygel_external_icon_factory_get_int (RygelExternalIconFactory* self, GHashTable* props, const gchar* prop);
static gint _variant_get32 (GVariant* value);
RygelExternalIconFactory* rygel_external_icon_factory_new (void);
RygelExternalIconFactory* rygel_external_icon_factory_construct (GType object_type);
static void rygel_external_icon_factory_finalize (RygelExternalIconFactory* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


static void rygel_external_icon_factory_create_data_free (gpointer _data) {
	RygelExternalIconFactoryCreateData* _data_;
	_data_ = _data;
	_g_free0 (_data_->service_name);
	_g_hash_table_unref0 (_data_->container_props);
	_rygel_icon_info_unref0 (_data_->result);
	_rygel_external_icon_factory_unref0 (_data_->self);
	g_slice_free (RygelExternalIconFactoryCreateData, _data_);
}


static gpointer _rygel_external_icon_factory_ref0 (gpointer self) {
	return self ? rygel_external_icon_factory_ref (self) : NULL;
}


static gpointer _g_hash_table_ref0 (gpointer self) {
	return self ? g_hash_table_ref (self) : NULL;
}


void rygel_external_icon_factory_create (RygelExternalIconFactory* self, const gchar* service_name, GHashTable* container_props, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	RygelExternalIconFactoryCreateData* _data_;
	RygelExternalIconFactory* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	GHashTable* _tmp3_ = NULL;
	GHashTable* _tmp4_ = NULL;
	_data_ = g_slice_new0 (RygelExternalIconFactoryCreateData);
	_data_->_async_result = g_simple_async_result_new (NULL, _callback_, _user_data_, rygel_external_icon_factory_create);
	g_simple_async_result_set_op_res_gpointer (_data_->_async_result, _data_, rygel_external_icon_factory_create_data_free);
	_tmp0_ = _rygel_external_icon_factory_ref0 (self);
	_data_->self = _tmp0_;
	_tmp1_ = service_name;
	_tmp2_ = g_strdup (_tmp1_);
	_g_free0 (_data_->service_name);
	_data_->service_name = _tmp2_;
	_tmp3_ = container_props;
	_tmp4_ = _g_hash_table_ref0 (_tmp3_);
	_g_hash_table_unref0 (_data_->container_props);
	_data_->container_props = _tmp4_;
	rygel_external_icon_factory_create_co (_data_);
}


RygelIconInfo* rygel_external_icon_factory_create_finish (RygelExternalIconFactory* self, GAsyncResult* _res_, GError** error) {
	RygelIconInfo* result;
	RygelExternalIconFactoryCreateData* _data_;
	if (g_simple_async_result_propagate_error (G_SIMPLE_ASYNC_RESULT (_res_), error)) {
		return NULL;
	}
	_data_ = g_simple_async_result_get_op_res_gpointer (G_SIMPLE_ASYNC_RESULT (_res_));
	result = _data_->result;
	_data_->result = NULL;
	return result;
}


static gpointer _g_variant_ref0 (gpointer self) {
	return self ? g_variant_ref (self) : NULL;
}


static gchar* _variant_get28 (GVariant* value) {
	return g_variant_dup_string (value, NULL);
}


static void rygel_external_icon_factory_create_ready (GObject* source_object, GAsyncResult* _res_, gpointer _user_data_) {
	RygelExternalIconFactoryCreateData* _data_;
	_data_ = _user_data_;
	_data_->_source_object_ = source_object;
	_data_->_res_ = _res_;
	rygel_external_icon_factory_create_co (_data_);
}


static gboolean rygel_external_icon_factory_create_co (RygelExternalIconFactoryCreateData* _data_) {
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
	_data_->_tmp0_ = _data_->container_props;
	_data_->_tmp1_ = NULL;
	_data_->_tmp1_ = g_hash_table_lookup (_data_->_tmp0_, "Icon");
	_data_->_tmp2_ = NULL;
	_data_->_tmp2_ = _g_variant_ref0 ((GVariant*) _data_->_tmp1_);
	_data_->value = _data_->_tmp2_;
	_data_->_tmp3_ = NULL;
	_data_->_tmp3_ = _data_->value;
	if (_data_->_tmp3_ == NULL) {
		_data_->result = NULL;
		_g_variant_unref0 (_data_->value);
		if (_data_->_state_ == 0) {
			g_simple_async_result_complete_in_idle (_data_->_async_result);
		} else {
			g_simple_async_result_complete (_data_->_async_result);
		}
		g_object_unref (_data_->_async_result);
		return FALSE;
	}
	_data_->_tmp4_ = NULL;
	_data_->_tmp4_ = _data_->value;
	_data_->_tmp5_ = NULL;
	_data_->_tmp5_ = _variant_get28 (_data_->_tmp4_);
	_data_->icon_path = _data_->_tmp5_;
	_data_->_tmp6_ = NULL;
	_data_->_tmp6_ = _data_->service_name;
	_data_->_tmp7_ = NULL;
	_data_->_tmp7_ = _data_->icon_path;
	_data_->_state_ = 1;
	g_async_initable_new_async (FREE_DESKTOP_TYPE_PROPERTIES_PROXY, 0, NULL, rygel_external_icon_factory_create_ready, _data_, "g-flags", G_DBUS_PROXY_FLAGS_DO_NOT_LOAD_PROPERTIES, "g-name", _data_->_tmp6_, "g-bus-type", G_BUS_TYPE_SESSION, "g-object-path", _data_->_tmp7_, "g-interface-name", "org.freedesktop.DBus.Properties", NULL);
	return FALSE;
	_state_1:
	_data_->_tmp8_ = NULL;
	_data_->_tmp8_ = g_async_initable_new_finish (_data_->_source_object_, _data_->_res_, &_data_->_inner_error_);
	_data_->props = (FreeDesktopProperties*) _data_->_tmp8_;
	if (_data_->_inner_error_ != NULL) {
		if ((_data_->_inner_error_->domain == G_IO_ERROR) || (_data_->_inner_error_->domain == G_DBUS_ERROR)) {
			g_simple_async_result_set_from_error (_data_->_async_result, _data_->_inner_error_);
			g_error_free (_data_->_inner_error_);
			_g_free0 (_data_->icon_path);
			_g_variant_unref0 (_data_->value);
			if (_data_->_state_ == 0) {
				g_simple_async_result_complete_in_idle (_data_->_async_result);
			} else {
				g_simple_async_result_complete (_data_->_async_result);
			}
			g_object_unref (_data_->_async_result);
			return FALSE;
		} else {
			_g_free0 (_data_->icon_path);
			_g_variant_unref0 (_data_->value);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
			g_clear_error (&_data_->_inner_error_);
			return FALSE;
		}
	}
	_data_->_tmp9_ = NULL;
	_data_->_tmp9_ = _data_->props;
	_data_->_tmp10_ = NULL;
	_data_->_tmp10_ = rygel_external_icon_factory_ITEM_IFACE;
	_data_->_state_ = 2;
	free_desktop_properties_get_all (_data_->_tmp9_, _data_->_tmp10_, rygel_external_icon_factory_create_ready, _data_);
	return FALSE;
	_state_2:
	_data_->_tmp11_ = NULL;
	_data_->_tmp11_ = free_desktop_properties_get_all_finish (_data_->_tmp9_, _data_->_res_, &_data_->_inner_error_);
	_data_->item_props = _data_->_tmp11_;
	if (_data_->_inner_error_ != NULL) {
		if ((_data_->_inner_error_->domain == G_IO_ERROR) || (_data_->_inner_error_->domain == G_DBUS_ERROR)) {
			g_simple_async_result_set_from_error (_data_->_async_result, _data_->_inner_error_);
			g_error_free (_data_->_inner_error_);
			_g_object_unref0 (_data_->props);
			_g_free0 (_data_->icon_path);
			_g_variant_unref0 (_data_->value);
			if (_data_->_state_ == 0) {
				g_simple_async_result_complete_in_idle (_data_->_async_result);
			} else {
				g_simple_async_result_complete (_data_->_async_result);
			}
			g_object_unref (_data_->_async_result);
			return FALSE;
		} else {
			_g_object_unref0 (_data_->props);
			_g_free0 (_data_->icon_path);
			_g_variant_unref0 (_data_->value);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error_->message, g_quark_to_string (_data_->_inner_error_->domain), _data_->_inner_error_->code);
			g_clear_error (&_data_->_inner_error_);
			return FALSE;
		}
	}
	_data_->_tmp12_ = NULL;
	_data_->_tmp12_ = _data_->item_props;
	_data_->_tmp13_ = NULL;
	_data_->_tmp13_ = rygel_external_icon_factory_create_from_props (_data_->self, _data_->_tmp12_);
	_data_->result = _data_->_tmp13_;
	_g_hash_table_unref0 (_data_->item_props);
	_g_object_unref0 (_data_->props);
	_g_free0 (_data_->icon_path);
	_g_variant_unref0 (_data_->value);
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
	_g_hash_table_unref0 (_data_->item_props);
	_g_object_unref0 (_data_->props);
	_g_free0 (_data_->icon_path);
	_g_variant_unref0 (_data_->value);
	if (_data_->_state_ == 0) {
		g_simple_async_result_complete_in_idle (_data_->_async_result);
	} else {
		g_simple_async_result_complete (_data_->_async_result);
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}


static gchar* _variant_get29 (GVariant* value) {
	return g_variant_dup_string (value, NULL);
}


static gchar** _variant_get30 (GVariant* value, int* result_length1) {
	gchar** _tmp12_;
	int _tmp12__length;
	int _tmp12__size;
	int _tmp12__length1;
	GVariantIter _tmp13_;
	GVariant* _tmp14_;
	_tmp12_ = g_new (gchar*, 5);
	_tmp12__length = 0;
	_tmp12__size = 4;
	_tmp12__length1 = 0;
	g_variant_iter_init (&_tmp13_, value);
	for (; (_tmp14_ = g_variant_iter_next_value (&_tmp13_)) != NULL; _tmp12__length1++) {
		if (_tmp12__size == _tmp12__length) {
			_tmp12__size = 2 * _tmp12__size;
			_tmp12_ = g_renew (gchar*, _tmp12_, _tmp12__size + 1);
		}
		_tmp12_[_tmp12__length++] = g_variant_dup_string (_tmp14_, NULL);
		g_variant_unref (_tmp14_);
	}
	*result_length1 = _tmp12__length1;
	_tmp12_[_tmp12__length] = NULL;
	return _tmp12_;
}


static gint64 _variant_get31 (GVariant* value) {
	return g_variant_get_int64 (value);
}


static RygelIconInfo* rygel_external_icon_factory_create_from_props (RygelExternalIconFactory* self, GHashTable* props) {
	RygelIconInfo* result = NULL;
	gchar* mime_type = NULL;
	GHashTable* _tmp0_ = NULL;
	gconstpointer _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	RygelIconInfo* icon = NULL;
	const gchar* _tmp3_ = NULL;
	const gchar* _tmp4_ = NULL;
	gchar* _tmp5_ = NULL;
	gchar* _tmp6_ = NULL;
	RygelIconInfo* _tmp7_ = NULL;
	RygelIconInfo* _tmp8_ = NULL;
	gchar** uris = NULL;
	GHashTable* _tmp9_ = NULL;
	gconstpointer _tmp10_ = NULL;
	gchar** _tmp11_ = NULL;
	gint _tmp11__length1 = 0;
	gint uris_length1 = 0;
	gint _uris_size_ = 0;
	gboolean _tmp15_ = FALSE;
	gchar** _tmp16_ = NULL;
	gint _tmp16__length1 = 0;
	gboolean _tmp19_ = FALSE;
	GVariant* value = NULL;
	GHashTable* _tmp24_ = NULL;
	gconstpointer _tmp25_ = NULL;
	GVariant* _tmp26_ = NULL;
	GVariant* _tmp27_ = NULL;
	RygelIconInfo* _tmp31_ = NULL;
	GHashTable* _tmp32_ = NULL;
	gint _tmp33_ = 0;
	RygelIconInfo* _tmp34_ = NULL;
	GHashTable* _tmp35_ = NULL;
	gint _tmp36_ = 0;
	RygelIconInfo* _tmp37_ = NULL;
	GHashTable* _tmp38_ = NULL;
	gint _tmp39_ = 0;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (props != NULL, NULL);
	_tmp0_ = props;
	_tmp1_ = g_hash_table_lookup (_tmp0_, "MIMEType");
	_tmp2_ = _variant_get29 ((GVariant*) _tmp1_);
	mime_type = _tmp2_;
	_tmp3_ = mime_type;
	_tmp4_ = mime_type;
	_tmp5_ = rygel_external_icon_factory_get_ext_for_mime (self, _tmp4_);
	_tmp6_ = _tmp5_;
	_tmp7_ = rygel_icon_info_new (_tmp3_, _tmp6_);
	_tmp8_ = _tmp7_;
	_g_free0 (_tmp6_);
	icon = _tmp8_;
	_tmp9_ = props;
	_tmp10_ = g_hash_table_lookup (_tmp9_, "URLs");
	_tmp11_ = _variant_get30 ((GVariant*) _tmp10_, &_tmp11__length1);
	uris = _tmp11_;
	uris_length1 = _tmp11__length1;
	_uris_size_ = uris_length1;
	_tmp16_ = uris;
	_tmp16__length1 = uris_length1;
	if (_tmp16_ != NULL) {
		gchar** _tmp17_ = NULL;
		gint _tmp17__length1 = 0;
		const gchar* _tmp18_ = NULL;
		_tmp17_ = uris;
		_tmp17__length1 = uris_length1;
		_tmp18_ = _tmp17_[0];
		_tmp15_ = _tmp18_ != NULL;
	} else {
		_tmp15_ = FALSE;
	}
	_tmp19_ = _tmp15_;
	if (_tmp19_) {
		RygelIconInfo* _tmp20_ = NULL;
		gchar** _tmp21_ = NULL;
		gint _tmp21__length1 = 0;
		const gchar* _tmp22_ = NULL;
		gchar* _tmp23_ = NULL;
		_tmp20_ = icon;
		_tmp21_ = uris;
		_tmp21__length1 = uris_length1;
		_tmp22_ = _tmp21_[0];
		_tmp23_ = g_strdup (_tmp22_);
		_g_free0 (_tmp20_->uri);
		_tmp20_->uri = _tmp23_;
	}
	_tmp24_ = props;
	_tmp25_ = g_hash_table_lookup (_tmp24_, "Size");
	_tmp26_ = _g_variant_ref0 ((GVariant*) _tmp25_);
	value = _tmp26_;
	_tmp27_ = value;
	if (_tmp27_ != NULL) {
		RygelIconInfo* _tmp28_ = NULL;
		GVariant* _tmp29_ = NULL;
		gint64 _tmp30_ = 0LL;
		_tmp28_ = icon;
		_tmp29_ = value;
		_tmp30_ = _variant_get31 (_tmp29_);
		_tmp28_->size = _tmp30_;
	}
	_tmp31_ = icon;
	_tmp32_ = props;
	_tmp33_ = rygel_external_icon_factory_get_int (self, _tmp32_, "Width");
	_tmp31_->width = _tmp33_;
	_tmp34_ = icon;
	_tmp35_ = props;
	_tmp36_ = rygel_external_icon_factory_get_int (self, _tmp35_, "Height");
	_tmp34_->height = _tmp36_;
	_tmp37_ = icon;
	_tmp38_ = props;
	_tmp39_ = rygel_external_icon_factory_get_int (self, _tmp38_, "ColorDepth");
	_tmp37_->depth = _tmp39_;
	result = icon;
	_g_variant_unref0 (value);
	uris = (_vala_array_free (uris, uris_length1, (GDestroyNotify) g_free), NULL);
	_g_free0 (mime_type);
	return result;
}


static gchar* rygel_external_icon_factory_get_ext_for_mime (RygelExternalIconFactory* self, const gchar* mime_type) {
	gchar* result = NULL;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (mime_type != NULL, NULL);
	_tmp0_ = mime_type;
	if (g_strcmp0 (_tmp0_, "image/jpeg") == 0) {
		gchar* _tmp1_ = NULL;
		_tmp1_ = g_strdup ("jpg");
		result = _tmp1_;
		return result;
	} else {
		const gchar* _tmp2_ = NULL;
		_tmp2_ = mime_type;
		if (g_strcmp0 (_tmp2_, "image/gif") == 0) {
			gchar* _tmp3_ = NULL;
			_tmp3_ = g_strdup ("gif");
			result = _tmp3_;
			return result;
		} else {
			gchar* _tmp4_ = NULL;
			_tmp4_ = g_strdup ("png");
			result = _tmp4_;
			return result;
		}
	}
}


static gint _variant_get32 (GVariant* value) {
	return g_variant_get_int32 (value);
}


static gint rygel_external_icon_factory_get_int (RygelExternalIconFactory* self, GHashTable* props, const gchar* prop) {
	gint result = 0;
	GVariant* value = NULL;
	GHashTable* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gconstpointer _tmp2_ = NULL;
	GVariant* _tmp3_ = NULL;
	GVariant* _tmp4_ = NULL;
	g_return_val_if_fail (self != NULL, 0);
	g_return_val_if_fail (props != NULL, 0);
	g_return_val_if_fail (prop != NULL, 0);
	_tmp0_ = props;
	_tmp1_ = prop;
	_tmp2_ = g_hash_table_lookup (_tmp0_, _tmp1_);
	_tmp3_ = _g_variant_ref0 ((GVariant*) _tmp2_);
	value = _tmp3_;
	_tmp4_ = value;
	if (_tmp4_ != NULL) {
		GVariant* _tmp5_ = NULL;
		gint _tmp6_ = 0;
		_tmp5_ = value;
		_tmp6_ = _variant_get32 (_tmp5_);
		result = _tmp6_;
		_g_variant_unref0 (value);
		return result;
	} else {
		result = -1;
		_g_variant_unref0 (value);
		return result;
	}
	_g_variant_unref0 (value);
}


RygelExternalIconFactory* rygel_external_icon_factory_construct (GType object_type) {
	RygelExternalIconFactory* self = NULL;
	self = (RygelExternalIconFactory*) g_type_create_instance (object_type);
	return self;
}


RygelExternalIconFactory* rygel_external_icon_factory_new (void) {
	return rygel_external_icon_factory_construct (RYGEL_EXTERNAL_TYPE_ICON_FACTORY);
}


static void rygel_external_value_icon_factory_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void rygel_external_value_icon_factory_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		rygel_external_icon_factory_unref (value->data[0].v_pointer);
	}
}


static void rygel_external_value_icon_factory_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = rygel_external_icon_factory_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer rygel_external_value_icon_factory_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* rygel_external_value_icon_factory_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		RygelExternalIconFactory* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = rygel_external_icon_factory_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* rygel_external_value_icon_factory_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	RygelExternalIconFactory** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = rygel_external_icon_factory_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* rygel_external_param_spec_icon_factory (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	RygelExternalParamSpecIconFactory* spec;
	g_return_val_if_fail (g_type_is_a (object_type, RYGEL_EXTERNAL_TYPE_ICON_FACTORY), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer rygel_external_value_get_icon_factory (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_EXTERNAL_TYPE_ICON_FACTORY), NULL);
	return value->data[0].v_pointer;
}


void rygel_external_value_set_icon_factory (GValue* value, gpointer v_object) {
	RygelExternalIconFactory* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_EXTERNAL_TYPE_ICON_FACTORY));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, RYGEL_EXTERNAL_TYPE_ICON_FACTORY));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		rygel_external_icon_factory_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		rygel_external_icon_factory_unref (old);
	}
}


void rygel_external_value_take_icon_factory (GValue* value, gpointer v_object) {
	RygelExternalIconFactory* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, RYGEL_EXTERNAL_TYPE_ICON_FACTORY));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, RYGEL_EXTERNAL_TYPE_ICON_FACTORY));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		rygel_external_icon_factory_unref (old);
	}
}


static void rygel_external_icon_factory_class_init (RygelExternalIconFactoryClass * klass) {
	gchar* _tmp0_ = NULL;
	rygel_external_icon_factory_parent_class = g_type_class_peek_parent (klass);
	RYGEL_EXTERNAL_ICON_FACTORY_CLASS (klass)->finalize = rygel_external_icon_factory_finalize;
	_tmp0_ = g_strdup ("org.gnome.UPnP.MediaItem2");
	rygel_external_icon_factory_ITEM_IFACE = _tmp0_;
}


static void rygel_external_icon_factory_instance_init (RygelExternalIconFactory * self) {
	self->ref_count = 1;
}


static void rygel_external_icon_factory_finalize (RygelExternalIconFactory* obj) {
	RygelExternalIconFactory * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_EXTERNAL_TYPE_ICON_FACTORY, RygelExternalIconFactory);
}


GType rygel_external_icon_factory_get_type (void) {
	static volatile gsize rygel_external_icon_factory_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_external_icon_factory_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { rygel_external_value_icon_factory_init, rygel_external_value_icon_factory_free_value, rygel_external_value_icon_factory_copy_value, rygel_external_value_icon_factory_peek_pointer, "p", rygel_external_value_icon_factory_collect_value, "p", rygel_external_value_icon_factory_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (RygelExternalIconFactoryClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_external_icon_factory_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelExternalIconFactory), 0, (GInstanceInitFunc) rygel_external_icon_factory_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType rygel_external_icon_factory_type_id;
		rygel_external_icon_factory_type_id = g_type_register_fundamental (g_type_fundamental_next (), "RygelExternalIconFactory", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&rygel_external_icon_factory_type_id__volatile, rygel_external_icon_factory_type_id);
	}
	return rygel_external_icon_factory_type_id__volatile;
}


gpointer rygel_external_icon_factory_ref (gpointer instance) {
	RygelExternalIconFactory* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void rygel_external_icon_factory_unref (gpointer instance) {
	RygelExternalIconFactory* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		RYGEL_EXTERNAL_ICON_FACTORY_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}


static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func) {
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}



