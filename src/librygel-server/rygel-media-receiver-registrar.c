/* rygel-media-receiver-registrar.c generated by valac 0.16.1, the Vala compiler
 * generated from rygel-media-receiver-registrar.vala, do not modify */

/*
 * Copyright (C) 2008 Zeeshan Ali <zeenix@gmail.com>.
 *
 * Author: Zeeshan Ali <zeenix@gmail.com>
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
#include <libgupnp/gupnp.h>
#include <stdlib.h>
#include <string.h>
#include <glib/gi18n-lib.h>


#define RYGEL_TYPE_MEDIA_RECEIVER_REGISTRAR (rygel_media_receiver_registrar_get_type ())
#define RYGEL_MEDIA_RECEIVER_REGISTRAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_RECEIVER_REGISTRAR, RygelMediaReceiverRegistrar))
#define RYGEL_MEDIA_RECEIVER_REGISTRAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_RECEIVER_REGISTRAR, RygelMediaReceiverRegistrarClass))
#define RYGEL_IS_MEDIA_RECEIVER_REGISTRAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_RECEIVER_REGISTRAR))
#define RYGEL_IS_MEDIA_RECEIVER_REGISTRAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_RECEIVER_REGISTRAR))
#define RYGEL_MEDIA_RECEIVER_REGISTRAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_RECEIVER_REGISTRAR, RygelMediaReceiverRegistrarClass))

typedef struct _RygelMediaReceiverRegistrar RygelMediaReceiverRegistrar;
typedef struct _RygelMediaReceiverRegistrarClass RygelMediaReceiverRegistrarClass;
typedef struct _RygelMediaReceiverRegistrarPrivate RygelMediaReceiverRegistrarPrivate;

struct _RygelMediaReceiverRegistrar {
	GUPnPService parent_instance;
	RygelMediaReceiverRegistrarPrivate * priv;
};

struct _RygelMediaReceiverRegistrarClass {
	GUPnPServiceClass parent_class;
};


static gpointer rygel_media_receiver_registrar_parent_class = NULL;

GType rygel_media_receiver_registrar_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_MEDIA_RECEIVER_REGISTRAR_DUMMY_PROPERTY
};
#define RYGEL_MEDIA_RECEIVER_REGISTRAR_UPNP_ID "urn:microsoft-com:serviceId:X_MS_MediaReceiverRegistrar"
#define RYGEL_MEDIA_RECEIVER_REGISTRAR_UPNP_TYPE "urn:microsoft-com:service:X_MS_MediaReceiverRegistrar:1"
#define RYGEL_MEDIA_RECEIVER_REGISTRAR_COMPAT_TYPE "urn:microsoft.com:service:X_MS_MediaReceiverRegistrar:1"
#define RYGEL_MEDIA_RECEIVER_REGISTRAR_DESCRIPTION_PATH "xml/X_MS_MediaReceiverRegistrar1.xml"
static void rygel_media_receiver_registrar_real_constructed (GObject* base);
static void rygel_media_receiver_registrar_is_authorized_cb (RygelMediaReceiverRegistrar* self, GUPnPService* registrar, GUPnPServiceAction* action);
static void _rygel_media_receiver_registrar_is_authorized_cb_gupnp_service_action_invoked (GUPnPService* _sender, GUPnPServiceAction* action, gpointer self);
static void rygel_media_receiver_registrar_query_state (RygelMediaReceiverRegistrar* self, GUPnPService* registrar, const gchar* variable, GValue* value);
static void _rygel_media_receiver_registrar_query_state_gupnp_service_query_variable (GUPnPService* _sender, const gchar* variable, GValue* value, gpointer self);
RygelMediaReceiverRegistrar* rygel_media_receiver_registrar_new (void);
RygelMediaReceiverRegistrar* rygel_media_receiver_registrar_construct (GType object_type);


static void _rygel_media_receiver_registrar_is_authorized_cb_gupnp_service_action_invoked (GUPnPService* _sender, GUPnPServiceAction* action, gpointer self) {
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	rygel_media_receiver_registrar_is_authorized_cb (self, _sender, action);
#line 78 "rygel-media-receiver-registrar.c"
}


static void _rygel_media_receiver_registrar_query_state_gupnp_service_query_variable (GUPnPService* _sender, const gchar* variable, GValue* value, gpointer self) {
#line 45 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	rygel_media_receiver_registrar_query_state (self, _sender, variable, value);
#line 85 "rygel-media-receiver-registrar.c"
}


static void rygel_media_receiver_registrar_real_constructed (GObject* base) {
	RygelMediaReceiverRegistrar * self;
#line 41 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	self = (RygelMediaReceiverRegistrar*) base;
#line 42 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	g_signal_connect_object ((GUPnPService*) self, "action-invoked::IsAuthorized", (GCallback) _rygel_media_receiver_registrar_is_authorized_cb_gupnp_service_action_invoked, self, 0);
#line 43 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	g_signal_connect_object ((GUPnPService*) self, "action-invoked::IsValidated", (GCallback) _rygel_media_receiver_registrar_is_authorized_cb_gupnp_service_action_invoked, self, 0);
#line 45 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	g_signal_connect_object ((GUPnPService*) self, "query-variable::AuthorizationGrantedUpdateID", (GCallback) _rygel_media_receiver_registrar_query_state_gupnp_service_query_variable, self, 0);
#line 47 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	g_signal_connect_object ((GUPnPService*) self, "query-variable::AuthorizationDeniedUpdateID", (GCallback) _rygel_media_receiver_registrar_query_state_gupnp_service_query_variable, self, 0);
#line 49 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	g_signal_connect_object ((GUPnPService*) self, "query-variable::ValidationSucceededUpdateID", (GCallback) _rygel_media_receiver_registrar_query_state_gupnp_service_query_variable, self, 0);
#line 51 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	g_signal_connect_object ((GUPnPService*) self, "query-variable::ValidationRevokedUpdateID", (GCallback) _rygel_media_receiver_registrar_query_state_gupnp_service_query_variable, self, 0);
#line 105 "rygel-media-receiver-registrar.c"
}


static void rygel_media_receiver_registrar_is_authorized_cb (RygelMediaReceiverRegistrar* self, GUPnPService* registrar, GUPnPServiceAction* action) {
	GUPnPServiceAction* _tmp0_;
	guint _tmp1_ = 0U;
	GUPnPServiceAction* _tmp4_;
	GUPnPServiceAction* _tmp5_;
#line 56 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	g_return_if_fail (self != NULL);
#line 56 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	g_return_if_fail (registrar != NULL);
#line 56 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	g_return_if_fail (action != NULL);
#line 58 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	_tmp0_ = action;
#line 58 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	_tmp1_ = gupnp_service_action_get_argument_count (_tmp0_);
#line 58 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	if (_tmp1_ != ((guint) 1)) {
#line 126 "rygel-media-receiver-registrar.c"
		GUPnPServiceAction* _tmp2_;
		const gchar* _tmp3_ = NULL;
#line 59 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
		_tmp2_ = action;
#line 59 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
		_tmp3_ = _ ("Invalid argument");
#line 59 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
		gupnp_service_action_return_error (_tmp2_, (guint) 402, _tmp3_);
#line 61 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
		return;
#line 137 "rygel-media-receiver-registrar.c"
	}
#line 64 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	_tmp4_ = action;
#line 64 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	gupnp_service_action_set (_tmp4_, "Result", G_TYPE_INT, 1, NULL);
#line 66 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	_tmp5_ = action;
#line 66 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	gupnp_service_action_return (_tmp5_);
#line 147 "rygel-media-receiver-registrar.c"
}


static void rygel_media_receiver_registrar_query_state (RygelMediaReceiverRegistrar* self, GUPnPService* registrar, const gchar* variable, GValue* value) {
#line 69 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	g_return_if_fail (self != NULL);
#line 69 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	g_return_if_fail (registrar != NULL);
#line 69 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	g_return_if_fail (variable != NULL);
#line 69 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	g_return_if_fail (value != NULL);
#line 72 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	g_value_init (value, G_TYPE_INT);
#line 73 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	g_value_set_int (value, 0);
#line 164 "rygel-media-receiver-registrar.c"
}


RygelMediaReceiverRegistrar* rygel_media_receiver_registrar_construct (GType object_type) {
	RygelMediaReceiverRegistrar * self = NULL;
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	self = (RygelMediaReceiverRegistrar*) g_object_new (object_type, NULL);
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	return self;
#line 174 "rygel-media-receiver-registrar.c"
}


RygelMediaReceiverRegistrar* rygel_media_receiver_registrar_new (void) {
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	return rygel_media_receiver_registrar_construct (RYGEL_TYPE_MEDIA_RECEIVER_REGISTRAR);
#line 181 "rygel-media-receiver-registrar.c"
}


static void rygel_media_receiver_registrar_class_init (RygelMediaReceiverRegistrarClass * klass) {
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	rygel_media_receiver_registrar_parent_class = g_type_class_peek_parent (klass);
#line 28 "/home/mryan/src/rygel/src/librygel-server/rygel-media-receiver-registrar.vala"
	G_OBJECT_CLASS (klass)->constructed = rygel_media_receiver_registrar_real_constructed;
#line 190 "rygel-media-receiver-registrar.c"
}


static void rygel_media_receiver_registrar_instance_init (RygelMediaReceiverRegistrar * self) {
}


/**
 * Basic implementation of MS MediaReceiverRegistrar service version 1.
 */
GType rygel_media_receiver_registrar_get_type (void) {
	static volatile gsize rygel_media_receiver_registrar_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_media_receiver_registrar_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelMediaReceiverRegistrarClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_media_receiver_registrar_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelMediaReceiverRegistrar), 0, (GInstanceInitFunc) rygel_media_receiver_registrar_instance_init, NULL };
		GType rygel_media_receiver_registrar_type_id;
		rygel_media_receiver_registrar_type_id = g_type_register_static (gupnp_service_get_type (), "RygelMediaReceiverRegistrar", &g_define_type_info, 0);
		g_once_init_leave (&rygel_media_receiver_registrar_type_id__volatile, rygel_media_receiver_registrar_type_id);
	}
	return rygel_media_receiver_registrar_type_id__volatile;
}



