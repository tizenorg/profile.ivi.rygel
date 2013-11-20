/* rygel-dbus-thumbnailer.c generated by valac 0.22.0.18-aa6c, the Vala compiler
 * generated from rygel-dbus-thumbnailer.vala, do not modify */

/*
 * Copyright (C) 2011 Nokia Corporation.
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
#include <gee.h>
#include <rygel-core.h>
#include <glib/gi18n-lib.h>


#define TYPE_TUMBLER (tumbler_get_type ())
#define TUMBLER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TUMBLER, Tumbler))
#define IS_TUMBLER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TUMBLER))
#define TUMBLER_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), TYPE_TUMBLER, TumblerIface))

typedef struct _Tumbler Tumbler;
typedef struct _TumblerIface TumblerIface;

#define TYPE_TUMBLER_PROXY (tumbler_proxy_get_type ())
typedef GDBusProxy TumblerProxy;
typedef GDBusProxyClass TumblerProxyClass;
#define _g_free0(var) (var = (g_free (var), NULL))

#define RYGEL_TYPE_DBUS_THUMBNAILER (rygel_dbus_thumbnailer_get_type ())
#define RYGEL_DBUS_THUMBNAILER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_DBUS_THUMBNAILER, RygelDbusThumbnailer))
#define RYGEL_DBUS_THUMBNAILER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_DBUS_THUMBNAILER, RygelDbusThumbnailerClass))
#define RYGEL_IS_DBUS_THUMBNAILER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_DBUS_THUMBNAILER))
#define RYGEL_IS_DBUS_THUMBNAILER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_DBUS_THUMBNAILER))
#define RYGEL_DBUS_THUMBNAILER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_DBUS_THUMBNAILER, RygelDbusThumbnailerClass))

typedef struct _RygelDbusThumbnailer RygelDbusThumbnailer;
typedef struct _RygelDbusThumbnailerClass RygelDbusThumbnailerClass;
typedef struct _RygelDbusThumbnailerPrivate RygelDbusThumbnailerPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

struct _TumblerIface {
	GTypeInterface parent_iface;
	void (*Queue) (Tumbler* self, gchar** uris, int uris_length1, gchar** mime_types, int mime_types_length1, const gchar* flavor, const gchar* sheduler, guint handle, GAsyncReadyCallback _callback_, gpointer _user_data_);
	guint (*Queue_finish) (Tumbler* self, GAsyncResult* _res_, GError** error);
};

struct _RygelDbusThumbnailer {
	GObject parent_instance;
	RygelDbusThumbnailerPrivate * priv;
};

struct _RygelDbusThumbnailerClass {
	GObjectClass parent_class;
};

struct _RygelDbusThumbnailerPrivate {
	Tumbler* tumbler;
	GeeArrayList* uris;
	GeeArrayList* mimes;
	guint timeout_id;
	gchar* flavor;
	FreeDesktopDBusObject* fdo;
};


static gpointer rygel_dbus_thumbnailer_parent_class = NULL;

GType tumbler_proxy_get_type (void) G_GNUC_CONST;
guint tumbler_register_object (void* object, GDBusConnection* connection, const gchar* path, GError** error);
GType tumbler_get_type (void) G_GNUC_CONST;
void tumbler_Queue (Tumbler* self, gchar** uris, int uris_length1, gchar** mime_types, int mime_types_length1, const gchar* flavor, const gchar* sheduler, guint handle, GAsyncReadyCallback _callback_, gpointer _user_data_);
guint tumbler_Queue_finish (Tumbler* self, GAsyncResult* _res_, GError** error);
static void tumbler_proxy_g_signal (GDBusProxy* proxy, const gchar* sender_name, const gchar* signal_name, GVariant* parameters);
static void _vala_g_async_ready_callback (GObject *source_object, GAsyncResult *res, void *user_data);
static void tumbler_proxy_Queue_async (Tumbler* self, gchar** uris, int uris_length1, gchar** mime_types, int mime_types_length1, const gchar* flavor, const gchar* sheduler, guint handle, GAsyncReadyCallback _callback_, gpointer _user_data_);
static guint tumbler_proxy_Queue_finish (Tumbler* self, GAsyncResult* _res_, GError** error);
static void tumbler_proxy_tumbler_interface_init (TumblerIface* iface);
static void _dbus_tumbler_Queue (Tumbler* self, GVariant* parameters, GDBusMethodInvocation* invocation);
static void _dbus_tumbler_Queue_ready (GObject * source_object, GAsyncResult * _res_, gpointer _user_data_);
static void tumbler_dbus_interface_method_call (GDBusConnection* connection, const gchar* sender, const gchar* object_path, const gchar* interface_name, const gchar* method_name, GVariant* parameters, GDBusMethodInvocation* invocation, gpointer user_data);
static GVariant* tumbler_dbus_interface_get_property (GDBusConnection* connection, const gchar* sender, const gchar* object_path, const gchar* interface_name, const gchar* property_name, GError** error, gpointer user_data);
static gboolean tumbler_dbus_interface_set_property (GDBusConnection* connection, const gchar* sender, const gchar* object_path, const gchar* interface_name, const gchar* property_name, GVariant* value, GError** error, gpointer user_data);
static void _tumbler_unregister_object (gpointer user_data);
GType rygel_dbus_thumbnailer_get_type (void) G_GNUC_CONST;
#define RYGEL_DBUS_THUMBNAILER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_DBUS_THUMBNAILER, RygelDbusThumbnailerPrivate))
enum  {
	RYGEL_DBUS_THUMBNAILER_DUMMY_PROPERTY
};
#define RYGEL_DBUS_THUMBNAILER_THUMBNAILER_IFACE "org.freedesktop.thumbnails.Thumbnailer1"
#define RYGEL_DBUS_THUMBNAILER_THUMBNAILER_SERVICE "/org/freedesktop/thumbnails/Thumbnailer1"
#define RYGEL_DBUS_THUMBNAILER_THUMBNAIL_MAX_QUEUE_SIZE ((guint) 50)
RygelDbusThumbnailer* rygel_dbus_thumbnailer_new (const gchar* flavor, GError** error);
RygelDbusThumbnailer* rygel_dbus_thumbnailer_construct (GType object_type, const gchar* flavor, GError** error);
static void rygel_dbus_thumbnailer_on_activatable_names (RygelDbusThumbnailer* self, GObject* source, GAsyncResult* res);
static void _rygel_dbus_thumbnailer_on_activatable_names_gasync_ready_callback (GObject* source_object, GAsyncResult* res, gpointer self);
void rygel_dbus_thumbnailer_queue_thumbnail_task (RygelDbusThumbnailer* self, const gchar* uri, const gchar* mime);
static gboolean rygel_dbus_thumbnailer_on_timeout (RygelDbusThumbnailer* self);
static gboolean _rygel_dbus_thumbnailer_on_timeout_gsource_func (gpointer self);
static gboolean _vala_string_array_contains (gchar** stack, int stack_length, gchar* needle);
static void rygel_dbus_thumbnailer_finalize (GObject* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);

static const GDBusArgInfo _tumbler_dbus_arg_info_Queue_uris = {-1, "uris", "as"};
static const GDBusArgInfo _tumbler_dbus_arg_info_Queue_mime_types = {-1, "mime_types", "as"};
static const GDBusArgInfo _tumbler_dbus_arg_info_Queue_flavor = {-1, "flavor", "s"};
static const GDBusArgInfo _tumbler_dbus_arg_info_Queue_sheduler = {-1, "sheduler", "s"};
static const GDBusArgInfo _tumbler_dbus_arg_info_Queue_handle = {-1, "handle", "u"};
static const GDBusArgInfo _tumbler_dbus_arg_info_Queue_result = {-1, "result", "u"};
static const GDBusArgInfo * const _tumbler_dbus_arg_info_Queue_in[] = {&_tumbler_dbus_arg_info_Queue_uris, &_tumbler_dbus_arg_info_Queue_mime_types, &_tumbler_dbus_arg_info_Queue_flavor, &_tumbler_dbus_arg_info_Queue_sheduler, &_tumbler_dbus_arg_info_Queue_handle, NULL};
static const GDBusArgInfo * const _tumbler_dbus_arg_info_Queue_out[] = {&_tumbler_dbus_arg_info_Queue_result, NULL};
static const GDBusMethodInfo _tumbler_dbus_method_info_Queue = {-1, "Queue", (GDBusArgInfo **) (&_tumbler_dbus_arg_info_Queue_in), (GDBusArgInfo **) (&_tumbler_dbus_arg_info_Queue_out)};
static const GDBusMethodInfo * const _tumbler_dbus_method_info[] = {&_tumbler_dbus_method_info_Queue, NULL};
static const GDBusSignalInfo * const _tumbler_dbus_signal_info[] = {NULL};
static const GDBusPropertyInfo * const _tumbler_dbus_property_info[] = {NULL};
static const GDBusInterfaceInfo _tumbler_dbus_interface_info = {-1, "org.freedesktop.thumbnails.Thumbnailer1", (GDBusMethodInfo **) (&_tumbler_dbus_method_info), (GDBusSignalInfo **) (&_tumbler_dbus_signal_info), (GDBusPropertyInfo **) (&_tumbler_dbus_property_info)};
static const GDBusInterfaceVTable _tumbler_dbus_interface_vtable = {tumbler_dbus_interface_method_call, tumbler_dbus_interface_get_property, tumbler_dbus_interface_set_property};

void tumbler_Queue (Tumbler* self, gchar** uris, int uris_length1, gchar** mime_types, int mime_types_length1, const gchar* flavor, const gchar* sheduler, guint handle, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	TUMBLER_GET_INTERFACE (self)->Queue (self, uris, uris_length1, mime_types, mime_types_length1, flavor, sheduler, handle, _callback_, _user_data_);
}


guint tumbler_Queue_finish (Tumbler* self, GAsyncResult* _res_, GError** error) {
	return TUMBLER_GET_INTERFACE (self)->Queue_finish (self, _res_, error);
}


static void tumbler_base_init (TumblerIface * iface) {
	static gboolean initialized = FALSE;
	if (!initialized) {
		initialized = TRUE;
	}
}


GType tumbler_get_type (void) {
	static volatile gsize tumbler_type_id__volatile = 0;
	if (g_once_init_enter (&tumbler_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (TumblerIface), (GBaseInitFunc) tumbler_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType tumbler_type_id;
		tumbler_type_id = g_type_register_static (G_TYPE_INTERFACE, "Tumbler", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (tumbler_type_id, G_TYPE_OBJECT);
		g_type_set_qdata (tumbler_type_id, g_quark_from_static_string ("vala-dbus-proxy-type"), (void*) tumbler_proxy_get_type);
		g_type_set_qdata (tumbler_type_id, g_quark_from_static_string ("vala-dbus-interface-name"), "org.freedesktop.thumbnails.Thumbnailer1");
		g_type_set_qdata (tumbler_type_id, g_quark_from_static_string ("vala-dbus-register-object"), (void*) tumbler_register_object);
		g_once_init_leave (&tumbler_type_id__volatile, tumbler_type_id);
	}
	return tumbler_type_id__volatile;
}


G_DEFINE_TYPE_EXTENDED (TumblerProxy, tumbler_proxy, G_TYPE_DBUS_PROXY, 0, G_IMPLEMENT_INTERFACE (TYPE_TUMBLER, tumbler_proxy_tumbler_interface_init) )
static void tumbler_proxy_class_init (TumblerProxyClass* klass) {
	G_DBUS_PROXY_CLASS (klass)->g_signal = tumbler_proxy_g_signal;
}


static void tumbler_proxy_g_signal (GDBusProxy* proxy, const gchar* sender_name, const gchar* signal_name, GVariant* parameters) {
}


static void tumbler_proxy_init (TumblerProxy* self) {
}


static void _vala_g_async_ready_callback (GObject *source_object, GAsyncResult *res, void *user_data) {
	g_simple_async_result_set_op_res_gpointer (user_data, g_object_ref (res), g_object_unref);
	g_simple_async_result_complete (user_data);
	g_object_unref (user_data);
}


static void tumbler_proxy_Queue_async (Tumbler* self, gchar** uris, int uris_length1, gchar** mime_types, int mime_types_length1, const gchar* flavor, const gchar* sheduler, guint handle, GAsyncReadyCallback _callback_, gpointer _user_data_) {
	GDBusMessage *_message;
	GVariant *_arguments;
	GVariantBuilder _arguments_builder;
	gchar** _tmp0_;
	GVariantBuilder _tmp1_;
	int _tmp2_;
	gchar** _tmp3_;
	GVariantBuilder _tmp4_;
	int _tmp5_;
	G_IO_ERROR;
	G_DBUS_ERROR;
	_message = g_dbus_message_new_method_call (g_dbus_proxy_get_name ((GDBusProxy *) self), g_dbus_proxy_get_object_path ((GDBusProxy *) self), "org.freedesktop.thumbnails.Thumbnailer1", "Queue");
	g_variant_builder_init (&_arguments_builder, G_VARIANT_TYPE_TUPLE);
	_tmp0_ = uris;
	g_variant_builder_init (&_tmp1_, G_VARIANT_TYPE ("as"));
	for (_tmp2_ = 0; _tmp2_ < uris_length1; _tmp2_++) {
		g_variant_builder_add_value (&_tmp1_, g_variant_new_string (*_tmp0_));
		_tmp0_++;
	}
	g_variant_builder_add_value (&_arguments_builder, g_variant_builder_end (&_tmp1_));
	_tmp3_ = mime_types;
	g_variant_builder_init (&_tmp4_, G_VARIANT_TYPE ("as"));
	for (_tmp5_ = 0; _tmp5_ < mime_types_length1; _tmp5_++) {
		g_variant_builder_add_value (&_tmp4_, g_variant_new_string (*_tmp3_));
		_tmp3_++;
	}
	g_variant_builder_add_value (&_arguments_builder, g_variant_builder_end (&_tmp4_));
	g_variant_builder_add_value (&_arguments_builder, g_variant_new_string (flavor));
	g_variant_builder_add_value (&_arguments_builder, g_variant_new_string (sheduler));
	g_variant_builder_add_value (&_arguments_builder, g_variant_new_uint32 (handle));
	_arguments = g_variant_builder_end (&_arguments_builder);
	g_dbus_message_set_body (_message, _arguments);
	g_dbus_connection_send_message_with_reply (g_dbus_proxy_get_connection ((GDBusProxy *) self), _message, G_DBUS_SEND_MESSAGE_FLAGS_NONE, g_dbus_proxy_get_default_timeout ((GDBusProxy *) self), NULL, NULL, _vala_g_async_ready_callback, g_simple_async_result_new ((GObject *) self, _callback_, _user_data_, NULL));
	g_object_unref (_message);
}


static guint tumbler_proxy_Queue_finish (Tumbler* self, GAsyncResult* _res_, GError** error) {
	GDBusMessage *_reply_message;
	GVariant *_reply;
	GVariantIter _reply_iter;
	guint _result;
	GVariant* _tmp6_;
	_reply_message = g_dbus_connection_send_message_with_reply_finish (g_dbus_proxy_get_connection ((GDBusProxy *) self), g_simple_async_result_get_op_res_gpointer ((GSimpleAsyncResult *) _res_), error);
	if (!_reply_message) {
		return 0U;
	}
	if (g_dbus_message_to_gerror (_reply_message, error)) {
		g_object_unref (_reply_message);
		return 0U;
	}
	_reply = g_dbus_message_get_body (_reply_message);
	g_variant_iter_init (&_reply_iter, _reply);
	_tmp6_ = g_variant_iter_next_value (&_reply_iter);
	_result = g_variant_get_uint32 (_tmp6_);
	g_variant_unref (_tmp6_);
	g_object_unref (_reply_message);
	return _result;
}


static void tumbler_proxy_tumbler_interface_init (TumblerIface* iface) {
	iface->Queue = tumbler_proxy_Queue_async;
	iface->Queue_finish = tumbler_proxy_Queue_finish;
}


static void _dbus_tumbler_Queue (Tumbler* self, GVariant* parameters, GDBusMethodInvocation* invocation) {
	GVariantIter _arguments_iter;
	gchar** uris = NULL;
	int uris_length1 = 0;
	GVariant* _tmp7_;
	gchar** _tmp8_;
	int _tmp8__length;
	int _tmp8__size;
	int _tmp8__length1;
	GVariantIter _tmp9_;
	GVariant* _tmp10_;
	gchar** mime_types = NULL;
	int mime_types_length1 = 0;
	GVariant* _tmp11_;
	gchar** _tmp12_;
	int _tmp12__length;
	int _tmp12__size;
	int _tmp12__length1;
	GVariantIter _tmp13_;
	GVariant* _tmp14_;
	gchar* flavor = NULL;
	GVariant* _tmp15_;
	gchar* sheduler = NULL;
	GVariant* _tmp16_;
	guint handle = 0U;
	GVariant* _tmp17_;
	g_variant_iter_init (&_arguments_iter, parameters);
	_tmp7_ = g_variant_iter_next_value (&_arguments_iter);
	_tmp8_ = g_new (gchar*, 5);
	_tmp8__length = 0;
	_tmp8__size = 4;
	_tmp8__length1 = 0;
	g_variant_iter_init (&_tmp9_, _tmp7_);
	for (; (_tmp10_ = g_variant_iter_next_value (&_tmp9_)) != NULL; _tmp8__length1++) {
		if (_tmp8__size == _tmp8__length) {
			_tmp8__size = 2 * _tmp8__size;
			_tmp8_ = g_renew (gchar*, _tmp8_, _tmp8__size + 1);
		}
		_tmp8_[_tmp8__length++] = g_variant_dup_string (_tmp10_, NULL);
		g_variant_unref (_tmp10_);
	}
	uris_length1 = _tmp8__length1;
	_tmp8_[_tmp8__length] = NULL;
	uris = _tmp8_;
	g_variant_unref (_tmp7_);
	_tmp11_ = g_variant_iter_next_value (&_arguments_iter);
	_tmp12_ = g_new (gchar*, 5);
	_tmp12__length = 0;
	_tmp12__size = 4;
	_tmp12__length1 = 0;
	g_variant_iter_init (&_tmp13_, _tmp11_);
	for (; (_tmp14_ = g_variant_iter_next_value (&_tmp13_)) != NULL; _tmp12__length1++) {
		if (_tmp12__size == _tmp12__length) {
			_tmp12__size = 2 * _tmp12__size;
			_tmp12_ = g_renew (gchar*, _tmp12_, _tmp12__size + 1);
		}
		_tmp12_[_tmp12__length++] = g_variant_dup_string (_tmp14_, NULL);
		g_variant_unref (_tmp14_);
	}
	mime_types_length1 = _tmp12__length1;
	_tmp12_[_tmp12__length] = NULL;
	mime_types = _tmp12_;
	g_variant_unref (_tmp11_);
	_tmp15_ = g_variant_iter_next_value (&_arguments_iter);
	flavor = g_variant_dup_string (_tmp15_, NULL);
	g_variant_unref (_tmp15_);
	_tmp16_ = g_variant_iter_next_value (&_arguments_iter);
	sheduler = g_variant_dup_string (_tmp16_, NULL);
	g_variant_unref (_tmp16_);
	_tmp17_ = g_variant_iter_next_value (&_arguments_iter);
	handle = g_variant_get_uint32 (_tmp17_);
	g_variant_unref (_tmp17_);
	tumbler_Queue (self, uris, uris_length1, mime_types, mime_types_length1, flavor, sheduler, handle, (GAsyncReadyCallback) _dbus_tumbler_Queue_ready, invocation);
	uris = (_vala_array_free (uris, uris_length1, (GDestroyNotify) g_free), NULL);
	mime_types = (_vala_array_free (mime_types, mime_types_length1, (GDestroyNotify) g_free), NULL);
	_g_free0 (flavor);
	_g_free0 (sheduler);
}


static void _dbus_tumbler_Queue_ready (GObject * source_object, GAsyncResult * _res_, gpointer _user_data_) {
	GDBusMethodInvocation * invocation;
	GError* error = NULL;
	GDBusMessage* _reply_message;
	GVariant* _reply;
	GVariantBuilder _reply_builder;
	guint result;
	invocation = _user_data_;
	result = tumbler_Queue_finish ((Tumbler*) source_object, _res_, &error);
	if (error) {
		g_dbus_method_invocation_return_gerror (invocation, error);
		return;
	}
	_reply_message = g_dbus_message_new_method_reply (g_dbus_method_invocation_get_message (invocation));
	g_variant_builder_init (&_reply_builder, G_VARIANT_TYPE_TUPLE);
	g_variant_builder_add_value (&_reply_builder, g_variant_new_uint32 (result));
	_reply = g_variant_builder_end (&_reply_builder);
	g_dbus_message_set_body (_reply_message, _reply);
	g_dbus_connection_send_message (g_dbus_method_invocation_get_connection (invocation), _reply_message, G_DBUS_SEND_MESSAGE_FLAGS_NONE, NULL, NULL);
	g_object_unref (invocation);
	g_object_unref (_reply_message);
}


static void tumbler_dbus_interface_method_call (GDBusConnection* connection, const gchar* sender, const gchar* object_path, const gchar* interface_name, const gchar* method_name, GVariant* parameters, GDBusMethodInvocation* invocation, gpointer user_data) {
	gpointer* data;
	gpointer object;
	data = user_data;
	object = data[0];
	if (strcmp (method_name, "Queue") == 0) {
		_dbus_tumbler_Queue (object, parameters, invocation);
	} else {
		g_object_unref (invocation);
	}
}


static GVariant* tumbler_dbus_interface_get_property (GDBusConnection* connection, const gchar* sender, const gchar* object_path, const gchar* interface_name, const gchar* property_name, GError** error, gpointer user_data) {
	gpointer* data;
	gpointer object;
	data = user_data;
	object = data[0];
	return NULL;
}


static gboolean tumbler_dbus_interface_set_property (GDBusConnection* connection, const gchar* sender, const gchar* object_path, const gchar* interface_name, const gchar* property_name, GVariant* value, GError** error, gpointer user_data) {
	gpointer* data;
	gpointer object;
	data = user_data;
	object = data[0];
	return FALSE;
}


guint tumbler_register_object (gpointer object, GDBusConnection* connection, const gchar* path, GError** error) {
	guint result;
	gpointer *data;
	data = g_new (gpointer, 3);
	data[0] = g_object_ref (object);
	data[1] = g_object_ref (connection);
	data[2] = g_strdup (path);
	result = g_dbus_connection_register_object (connection, path, (GDBusInterfaceInfo *) (&_tumbler_dbus_interface_info), &_tumbler_dbus_interface_vtable, data, _tumbler_unregister_object, error);
	if (!result) {
		return 0;
	}
	return result;
}


static void _tumbler_unregister_object (gpointer user_data) {
	gpointer* data;
	data = user_data;
	g_object_unref (data[0]);
	g_object_unref (data[1]);
	g_free (data[2]);
	g_free (data);
}


static void _rygel_dbus_thumbnailer_on_activatable_names_gasync_ready_callback (GObject* source_object, GAsyncResult* res, gpointer self) {
	rygel_dbus_thumbnailer_on_activatable_names (self, source_object, res);
	g_object_unref (self);
}


RygelDbusThumbnailer* rygel_dbus_thumbnailer_construct (GType object_type, const gchar* flavor, GError** error) {
	RygelDbusThumbnailer * self = NULL;
	GeeArrayList* _tmp0_ = NULL;
	GeeArrayList* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	FreeDesktopDBusObject* _tmp4_ = NULL;
	FreeDesktopDBusObject* _tmp5_ = NULL;
	FreeDesktopDBusObject* _tmp6_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (flavor != NULL, NULL);
	self = (RygelDbusThumbnailer*) g_object_new (object_type, NULL);
	_tmp0_ = gee_array_list_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL, NULL);
	_g_object_unref0 (self->priv->uris);
	self->priv->uris = _tmp0_;
	_tmp1_ = gee_array_list_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL, NULL);
	_g_object_unref0 (self->priv->mimes);
	self->priv->mimes = _tmp1_;
	self->priv->timeout_id = (guint) 0;
	_tmp2_ = flavor;
	_tmp3_ = g_strdup (_tmp2_);
	_g_free0 (self->priv->flavor);
	self->priv->flavor = _tmp3_;
	_tmp5_ = g_initable_new (FREE_DESKTOP_TYPE_DBUS_OBJECT_PROXY, NULL, &_inner_error_, "g-flags", 0, "g-name", FREE_DESKTOP_DBUS_SERVICE, "g-bus-type", G_BUS_TYPE_SESSION, "g-object-path", FREE_DESKTOP_DBUS_OBJECT_PATH, "g-interface-name", "org.freedesktop.DBus", NULL);
	_tmp4_ = (FreeDesktopDBusObject*) _tmp5_;
	if (_inner_error_ != NULL) {
		g_propagate_error (error, _inner_error_);
		_g_object_unref0 (self);
		return NULL;
	}
	_g_object_unref0 (self->priv->fdo);
	self->priv->fdo = _tmp4_;
	_tmp6_ = self->priv->fdo;
	free_desktop_dbus_object_list_activatable_names (_tmp6_, _rygel_dbus_thumbnailer_on_activatable_names_gasync_ready_callback, g_object_ref (self));
	return self;
}


RygelDbusThumbnailer* rygel_dbus_thumbnailer_new (const gchar* flavor, GError** error) {
	return rygel_dbus_thumbnailer_construct (RYGEL_TYPE_DBUS_THUMBNAILER, flavor, error);
}


static gboolean _rygel_dbus_thumbnailer_on_timeout_gsource_func (gpointer self) {
	gboolean result;
	result = rygel_dbus_thumbnailer_on_timeout (self);
	return result;
}


void rygel_dbus_thumbnailer_queue_thumbnail_task (RygelDbusThumbnailer* self, const gchar* uri, const gchar* mime) {
	GFile* file = NULL;
	const gchar* _tmp0_ = NULL;
	GFile* _tmp1_ = NULL;
	GFile* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	GeeArrayList* _tmp4_ = NULL;
	const gchar* _tmp5_ = NULL;
	GeeArrayList* _tmp6_ = NULL;
	const gchar* _tmp7_ = NULL;
	guint _tmp8_ = 0U;
	GeeArrayList* _tmp10_ = NULL;
	gint _tmp11_ = 0;
	gint _tmp12_ = 0;
	g_return_if_fail (self != NULL);
	g_return_if_fail (uri != NULL);
	g_return_if_fail (mime != NULL);
	_tmp0_ = uri;
	_tmp1_ = g_file_new_for_uri (_tmp0_);
	file = _tmp1_;
	_tmp2_ = file;
	_tmp3_ = g_file_is_native (_tmp2_);
	if (!_tmp3_) {
		_g_object_unref0 (file);
		return;
	}
	_tmp4_ = self->priv->uris;
	_tmp5_ = uri;
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp4_, _tmp5_);
	_tmp6_ = self->priv->mimes;
	_tmp7_ = mime;
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp6_, _tmp7_);
	_tmp8_ = self->priv->timeout_id;
	if (_tmp8_ != ((guint) 0)) {
		guint _tmp9_ = 0U;
		_tmp9_ = self->priv->timeout_id;
		g_source_remove (_tmp9_);
	}
	_tmp10_ = self->priv->uris;
	_tmp11_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp10_);
	_tmp12_ = _tmp11_;
	if (((guint) _tmp12_) < RYGEL_DBUS_THUMBNAILER_THUMBNAIL_MAX_QUEUE_SIZE) {
		guint _tmp13_ = 0U;
		_tmp13_ = g_timeout_add_full (G_PRIORITY_DEFAULT, (guint) 100, _rygel_dbus_thumbnailer_on_timeout_gsource_func, g_object_ref (self), g_object_unref);
		self->priv->timeout_id = _tmp13_;
	} else {
		rygel_dbus_thumbnailer_on_timeout (self);
	}
	_g_object_unref0 (file);
}


static gboolean rygel_dbus_thumbnailer_on_timeout (RygelDbusThumbnailer* self) {
	gboolean result = FALSE;
	Tumbler* _tmp0_ = NULL;
	GeeArrayList* _tmp1_ = NULL;
	gint _tmp2_ = 0;
	gint _tmp3_ = 0;
	Tumbler* _tmp4_ = NULL;
	GeeArrayList* _tmp5_ = NULL;
	gint _tmp6_ = 0;
	gpointer* _tmp7_ = NULL;
	gchar** _tmp8_ = NULL;
	gint _tmp8__length1 = 0;
	GeeArrayList* _tmp9_ = NULL;
	gint _tmp10_ = 0;
	gpointer* _tmp11_ = NULL;
	gchar** _tmp12_ = NULL;
	gint _tmp12__length1 = 0;
	const gchar* _tmp13_ = NULL;
	GeeArrayList* _tmp14_ = NULL;
	GeeArrayList* _tmp15_ = NULL;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->tumbler;
	if (_tmp0_ == NULL) {
		result = TRUE;
		return result;
	}
	_tmp1_ = self->priv->uris;
	_tmp2_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp1_);
	_tmp3_ = _tmp2_;
	g_debug ("rygel-dbus-thumbnailer.vala:91: Queueing thumbnail creation for %d fil" \
"es", _tmp3_);
	_tmp4_ = self->priv->tumbler;
	_tmp5_ = self->priv->uris;
	_tmp7_ = gee_collection_to_array ((GeeCollection*) _tmp5_, &_tmp6_);
	_tmp8_ = _tmp7_;
	_tmp8__length1 = _tmp6_;
	_tmp9_ = self->priv->mimes;
	_tmp11_ = gee_collection_to_array ((GeeCollection*) _tmp9_, &_tmp10_);
	_tmp12_ = _tmp11_;
	_tmp12__length1 = _tmp10_;
	_tmp13_ = self->priv->flavor;
	tumbler_Queue (_tmp4_, _tmp8_, _tmp6_, _tmp12_, _tmp10_, _tmp13_, "default", (guint) 0, NULL, NULL);
	_tmp12_ = (_vala_array_free (_tmp12_, _tmp12__length1, (GDestroyNotify) g_free), NULL);
	_tmp8_ = (_vala_array_free (_tmp8_, _tmp8__length1, (GDestroyNotify) g_free), NULL);
	_tmp14_ = self->priv->uris;
	gee_abstract_collection_clear ((GeeAbstractCollection*) _tmp14_);
	_tmp15_ = self->priv->mimes;
	gee_abstract_collection_clear ((GeeAbstractCollection*) _tmp15_);
	self->priv->timeout_id = (guint) 0;
	result = FALSE;
	return result;
}


static gboolean _vala_string_array_contains (gchar** stack, int stack_length, gchar* needle) {
	int i;
	for (i = 0; i < stack_length; i++) {
		if (g_strcmp0 (stack[i], needle) == 0) {
			return TRUE;
		}
	}
	return FALSE;
}


static void rygel_dbus_thumbnailer_on_activatable_names (RygelDbusThumbnailer* self, GObject* source, GAsyncResult* res) {
	Tumbler* _tmp8_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (res != NULL);
	{
		gchar** names = NULL;
		FreeDesktopDBusObject* _tmp0_ = NULL;
		GAsyncResult* _tmp1_ = NULL;
		gint _tmp2_ = 0;
		gchar** _tmp3_ = NULL;
		gint names_length1 = 0;
		gint _names_size_ = 0;
		gchar** _tmp4_ = NULL;
		gint _tmp4__length1 = 0;
		_tmp0_ = self->priv->fdo;
		_tmp1_ = res;
		_tmp3_ = free_desktop_dbus_object_list_activatable_names_finish (_tmp0_, _tmp1_, &_tmp2_, &_inner_error_);
		names = _tmp3_;
		names_length1 = _tmp2_;
		_names_size_ = names_length1;
		if (_inner_error_ != NULL) {
			if (_inner_error_->domain == G_DBUS_ERROR) {
				goto __catch25_g_dbus_error;
			}
			if (_inner_error_->domain == G_IO_ERROR) {
				goto __catch25_g_io_error;
			}
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
		_tmp4_ = names;
		_tmp4__length1 = names_length1;
		if (_vala_string_array_contains (_tmp4_, _tmp4__length1, RYGEL_DBUS_THUMBNAILER_THUMBNAILER_IFACE)) {
			Tumbler* _tmp5_ = NULL;
			Tumbler* _tmp6_ = NULL;
			_tmp6_ = g_initable_new (TYPE_TUMBLER_PROXY, NULL, &_inner_error_, "g-flags", 0, "g-name", RYGEL_DBUS_THUMBNAILER_THUMBNAILER_IFACE, "g-bus-type", G_BUS_TYPE_SESSION, "g-object-path", RYGEL_DBUS_THUMBNAILER_THUMBNAILER_SERVICE, "g-interface-name", "org.freedesktop.thumbnails.Thumbnailer1", NULL);
			_tmp5_ = (Tumbler*) _tmp6_;
			if (_inner_error_ != NULL) {
				names = (_vala_array_free (names, names_length1, (GDestroyNotify) g_free), NULL);
				if (_inner_error_->domain == G_DBUS_ERROR) {
					goto __catch25_g_dbus_error;
				}
				if (_inner_error_->domain == G_IO_ERROR) {
					goto __catch25_g_io_error;
				}
				names = (_vala_array_free (names, names_length1, (GDestroyNotify) g_free), NULL);
				g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
				g_clear_error (&_inner_error_);
				return;
			}
			_g_object_unref0 (self->priv->tumbler);
			self->priv->tumbler = _tmp5_;
		} else {
			const gchar* _tmp7_ = NULL;
			_tmp7_ = _ ("No D-Bus thumbnailer service available");
			g_debug ("rygel-dbus-thumbnailer.vala:115: %s", _tmp7_);
		}
		names = (_vala_array_free (names, names_length1, (GDestroyNotify) g_free), NULL);
	}
	goto __finally25;
	__catch25_g_dbus_error:
	{
		GError* _error_ = NULL;
		_error_ = _inner_error_;
		_inner_error_ = NULL;
		_g_error_free0 (_error_);
	}
	goto __finally25;
	__catch25_g_io_error:
	{
		GError* io_error = NULL;
		io_error = _inner_error_;
		_inner_error_ = NULL;
		_g_error_free0 (io_error);
	}
	__finally25:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
	_tmp8_ = self->priv->tumbler;
	g_signal_emit_by_name (self, "ready", _tmp8_ != NULL);
}


static void rygel_dbus_thumbnailer_class_init (RygelDbusThumbnailerClass * klass) {
	rygel_dbus_thumbnailer_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (RygelDbusThumbnailerPrivate));
	G_OBJECT_CLASS (klass)->finalize = rygel_dbus_thumbnailer_finalize;
	g_signal_new ("ready", RYGEL_TYPE_DBUS_THUMBNAILER, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__BOOLEAN, G_TYPE_NONE, 1, G_TYPE_BOOLEAN);
}


static void rygel_dbus_thumbnailer_instance_init (RygelDbusThumbnailer * self) {
	self->priv = RYGEL_DBUS_THUMBNAILER_GET_PRIVATE (self);
}


static void rygel_dbus_thumbnailer_finalize (GObject* obj) {
	RygelDbusThumbnailer * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_DBUS_THUMBNAILER, RygelDbusThumbnailer);
	_g_object_unref0 (self->priv->tumbler);
	_g_object_unref0 (self->priv->uris);
	_g_object_unref0 (self->priv->mimes);
	_g_free0 (self->priv->flavor);
	_g_object_unref0 (self->priv->fdo);
	G_OBJECT_CLASS (rygel_dbus_thumbnailer_parent_class)->finalize (obj);
}


GType rygel_dbus_thumbnailer_get_type (void) {
	static volatile gsize rygel_dbus_thumbnailer_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_dbus_thumbnailer_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelDbusThumbnailerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_dbus_thumbnailer_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelDbusThumbnailer), 0, (GInstanceInitFunc) rygel_dbus_thumbnailer_instance_init, NULL };
		GType rygel_dbus_thumbnailer_type_id;
		rygel_dbus_thumbnailer_type_id = g_type_register_static (G_TYPE_OBJECT, "RygelDbusThumbnailer", &g_define_type_info, 0);
		g_once_init_leave (&rygel_dbus_thumbnailer_type_id__volatile, rygel_dbus_thumbnailer_type_id);
	}
	return rygel_dbus_thumbnailer_type_id__volatile;
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



