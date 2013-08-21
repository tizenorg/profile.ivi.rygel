/* rygel-connection-manager.c generated by valac 0.20.1.53-91609, the Vala compiler
 * generated from rygel-connection-manager.vala, do not modify */

/*
 * Copyright (C) 2008 OpenedHand Ltd.
 * Copyright (C) 2008 Zeeshan Ali <zeenix@gmail.com>.
 *
 * Author: Jorn Baayen <jorn@openedhand.com>
 *         Zeeshan Ali <zeenix@gmail.com>
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


#define RYGEL_TYPE_CONNECTION_MANAGER (rygel_connection_manager_get_type ())
#define RYGEL_CONNECTION_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_CONNECTION_MANAGER, RygelConnectionManager))
#define RYGEL_CONNECTION_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_CONNECTION_MANAGER, RygelConnectionManagerClass))
#define RYGEL_IS_CONNECTION_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_CONNECTION_MANAGER))
#define RYGEL_IS_CONNECTION_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_CONNECTION_MANAGER))
#define RYGEL_CONNECTION_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_CONNECTION_MANAGER, RygelConnectionManagerClass))

typedef struct _RygelConnectionManager RygelConnectionManager;
typedef struct _RygelConnectionManagerClass RygelConnectionManagerClass;
typedef struct _RygelConnectionManagerPrivate RygelConnectionManagerPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))

struct _RygelConnectionManager {
	GUPnPService parent_instance;
	RygelConnectionManagerPrivate * priv;
	gchar* sink_protocol_info;
	gchar* connection_ids;
	gchar* source_protocol_info;
	gint rcs_id;
	gint av_transport_id;
	gchar* direction;
};

struct _RygelConnectionManagerClass {
	GUPnPServiceClass parent_class;
};


static gpointer rygel_connection_manager_parent_class = NULL;

GType rygel_connection_manager_get_type (void) G_GNUC_CONST;
enum  {
	RYGEL_CONNECTION_MANAGER_DUMMY_PROPERTY
};
#define RYGEL_CONNECTION_MANAGER_UPNP_ID "urn:upnp-org:serviceId:ConnectionManager"
#define RYGEL_CONNECTION_MANAGER_UPNP_TYPE "urn:schemas-upnp-org:service:ConnectionManager:2"
#define RYGEL_CONNECTION_MANAGER_DESCRIPTION_PATH "xml/ConnectionManager.xml"
static void rygel_connection_manager_real_constructed (GObject* base);
static void rygel_connection_manager_query_source_protocol_info_cb (RygelConnectionManager* self, GUPnPService* cm, const gchar* var, GValue* val);
static void _rygel_connection_manager_query_source_protocol_info_cb_gupnp_service_query_variable (GUPnPService* _sender, const gchar* variable, GValue* value, gpointer self);
static void rygel_connection_manager_query_sink_protocol_info_cb (RygelConnectionManager* self, GUPnPService* cm, const gchar* var, GValue* val);
static void _rygel_connection_manager_query_sink_protocol_info_cb_gupnp_service_query_variable (GUPnPService* _sender, const gchar* variable, GValue* value, gpointer self);
static void rygel_connection_manager_query_current_connection_ids_cb (RygelConnectionManager* self, GUPnPService* cm, const gchar* var, GValue* val);
static void _rygel_connection_manager_query_current_connection_ids_cb_gupnp_service_query_variable (GUPnPService* _sender, const gchar* variable, GValue* value, gpointer self);
static void rygel_connection_manager_get_protocol_info_cb (RygelConnectionManager* self, GUPnPService* cm, GUPnPServiceAction* action);
static void _rygel_connection_manager_get_protocol_info_cb_gupnp_service_action_invoked (GUPnPService* _sender, GUPnPServiceAction* action, gpointer self);
static void rygel_connection_manager_get_current_connection_ids_cb (RygelConnectionManager* self, GUPnPService* cm, GUPnPServiceAction* action);
static void _rygel_connection_manager_get_current_connection_ids_cb_gupnp_service_action_invoked (GUPnPService* _sender, GUPnPServiceAction* action, gpointer self);
static void rygel_connection_manager_get_current_connection_info_cb (RygelConnectionManager* self, GUPnPService* cm, GUPnPServiceAction* action);
static void _rygel_connection_manager_get_current_connection_info_cb_gupnp_service_action_invoked (GUPnPService* _sender, GUPnPServiceAction* action, gpointer self);
RygelConnectionManager* rygel_connection_manager_new (void);
RygelConnectionManager* rygel_connection_manager_construct (GType object_type);
static void rygel_connection_manager_finalize (GObject* obj);


static void _rygel_connection_manager_query_source_protocol_info_cb_gupnp_service_query_variable (GUPnPService* _sender, const gchar* variable, GValue* value, gpointer self) {
#line 52 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	rygel_connection_manager_query_source_protocol_info_cb (self, _sender, variable, value);
#line 95 "rygel-connection-manager.c"
}


static void _rygel_connection_manager_query_sink_protocol_info_cb_gupnp_service_query_variable (GUPnPService* _sender, const gchar* variable, GValue* value, gpointer self) {
#line 54 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	rygel_connection_manager_query_sink_protocol_info_cb (self, _sender, variable, value);
#line 102 "rygel-connection-manager.c"
}


static void _rygel_connection_manager_query_current_connection_ids_cb_gupnp_service_query_variable (GUPnPService* _sender, const gchar* variable, GValue* value, gpointer self) {
#line 56 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	rygel_connection_manager_query_current_connection_ids_cb (self, _sender, variable, value);
#line 109 "rygel-connection-manager.c"
}


static void _rygel_connection_manager_get_protocol_info_cb_gupnp_service_action_invoked (GUPnPService* _sender, GUPnPServiceAction* action, gpointer self) {
#line 59 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	rygel_connection_manager_get_protocol_info_cb (self, _sender, action);
#line 116 "rygel-connection-manager.c"
}


static void _rygel_connection_manager_get_current_connection_ids_cb_gupnp_service_action_invoked (GUPnPService* _sender, GUPnPServiceAction* action, gpointer self) {
#line 61 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	rygel_connection_manager_get_current_connection_ids_cb (self, _sender, action);
#line 123 "rygel-connection-manager.c"
}


static void _rygel_connection_manager_get_current_connection_info_cb_gupnp_service_action_invoked (GUPnPService* _sender, GUPnPServiceAction* action, gpointer self) {
#line 63 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	rygel_connection_manager_get_current_connection_info_cb (self, _sender, action);
#line 130 "rygel-connection-manager.c"
}


static void rygel_connection_manager_real_constructed (GObject* base) {
	RygelConnectionManager * self;
	gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
#line 45 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	self = (RygelConnectionManager*) base;
#line 46 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	G_OBJECT_CLASS (rygel_connection_manager_parent_class)->constructed ((GObject*) G_TYPE_CHECK_INSTANCE_CAST (self, gupnp_service_get_type (), GUPnPService));
#line 48 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp0_ = g_strdup ("");
#line 48 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_g_free0 (self->sink_protocol_info);
#line 48 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	self->sink_protocol_info = _tmp0_;
#line 49 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp1_ = g_strdup ("");
#line 49 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_g_free0 (self->source_protocol_info);
#line 49 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	self->source_protocol_info = _tmp1_;
#line 50 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp2_ = g_strdup ("0");
#line 50 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_g_free0 (self->connection_ids);
#line 50 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	self->connection_ids = _tmp2_;
#line 52 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_signal_connect_object ((GUPnPService*) self, "query-variable::SourceProtocolInfo", (GCallback) _rygel_connection_manager_query_source_protocol_info_cb_gupnp_service_query_variable, self, 0);
#line 54 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_signal_connect_object ((GUPnPService*) self, "query-variable::SinkProtocolInfo", (GCallback) _rygel_connection_manager_query_sink_protocol_info_cb_gupnp_service_query_variable, self, 0);
#line 56 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_signal_connect_object ((GUPnPService*) self, "query-variable::CurrentConnectionIDs", (GCallback) _rygel_connection_manager_query_current_connection_ids_cb_gupnp_service_query_variable, self, 0);
#line 59 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_signal_connect_object ((GUPnPService*) self, "action-invoked::GetProtocolInfo", (GCallback) _rygel_connection_manager_get_protocol_info_cb_gupnp_service_action_invoked, self, 0);
#line 61 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_signal_connect_object ((GUPnPService*) self, "action-invoked::GetCurrentConnectionIDs", (GCallback) _rygel_connection_manager_get_current_connection_ids_cb_gupnp_service_action_invoked, self, 0);
#line 63 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_signal_connect_object ((GUPnPService*) self, "action-invoked::GetCurrentConnectionInfo", (GCallback) _rygel_connection_manager_get_current_connection_info_cb_gupnp_service_action_invoked, self, 0);
#line 173 "rygel-connection-manager.c"
}


static void rygel_connection_manager_query_source_protocol_info_cb (RygelConnectionManager* self, GUPnPService* cm, const gchar* var, GValue* val) {
	const gchar* _tmp0_ = NULL;
#line 67 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_return_if_fail (self != NULL);
#line 67 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_return_if_fail (cm != NULL);
#line 67 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_return_if_fail (var != NULL);
#line 67 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_return_if_fail (val != NULL);
#line 70 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_value_init (val, G_TYPE_STRING);
#line 71 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp0_ = self->source_protocol_info;
#line 71 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_value_set_string (val, _tmp0_);
#line 193 "rygel-connection-manager.c"
}


static void rygel_connection_manager_query_sink_protocol_info_cb (RygelConnectionManager* self, GUPnPService* cm, const gchar* var, GValue* val) {
	const gchar* _tmp0_ = NULL;
#line 74 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_return_if_fail (self != NULL);
#line 74 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_return_if_fail (cm != NULL);
#line 74 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_return_if_fail (var != NULL);
#line 74 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_return_if_fail (val != NULL);
#line 77 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_value_init (val, G_TYPE_STRING);
#line 78 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp0_ = self->sink_protocol_info;
#line 78 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_value_set_string (val, _tmp0_);
#line 213 "rygel-connection-manager.c"
}


static void rygel_connection_manager_query_current_connection_ids_cb (RygelConnectionManager* self, GUPnPService* cm, const gchar* var, GValue* val) {
	const gchar* _tmp0_ = NULL;
#line 81 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_return_if_fail (self != NULL);
#line 81 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_return_if_fail (cm != NULL);
#line 81 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_return_if_fail (var != NULL);
#line 81 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_return_if_fail (val != NULL);
#line 84 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_value_init (val, G_TYPE_STRING);
#line 85 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp0_ = self->connection_ids;
#line 85 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_value_set_string (val, _tmp0_);
#line 233 "rygel-connection-manager.c"
}


static void rygel_connection_manager_get_protocol_info_cb (RygelConnectionManager* self, GUPnPService* cm, GUPnPServiceAction* action) {
	GUPnPServiceAction* _tmp0_ = NULL;
	guint _tmp1_ = 0U;
	GUPnPServiceAction* _tmp4_ = NULL;
	const gchar* _tmp5_ = NULL;
	const gchar* _tmp6_ = NULL;
	GUPnPServiceAction* _tmp7_ = NULL;
#line 88 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_return_if_fail (self != NULL);
#line 88 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_return_if_fail (cm != NULL);
#line 88 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_return_if_fail (action != NULL);
#line 90 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp0_ = action;
#line 90 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp1_ = gupnp_service_action_get_argument_count (_tmp0_);
#line 90 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	if (_tmp1_ != ((guint) 0)) {
#line 256 "rygel-connection-manager.c"
		GUPnPServiceAction* _tmp2_ = NULL;
		const gchar* _tmp3_ = NULL;
#line 91 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		_tmp2_ = action;
#line 91 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		_tmp3_ = _ ("Invalid argument");
#line 91 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		gupnp_service_action_return_error (_tmp2_, (guint) 402, _tmp3_);
#line 93 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		return;
#line 267 "rygel-connection-manager.c"
	}
#line 96 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp4_ = action;
#line 96 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp5_ = self->source_protocol_info;
#line 96 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp6_ = self->sink_protocol_info;
#line 96 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	gupnp_service_action_set (_tmp4_, "Source", G_TYPE_STRING, _tmp5_, "Sink", G_TYPE_STRING, _tmp6_, NULL);
#line 99 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp7_ = action;
#line 99 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	gupnp_service_action_return (_tmp7_);
#line 281 "rygel-connection-manager.c"
}


static void rygel_connection_manager_get_current_connection_ids_cb (RygelConnectionManager* self, GUPnPService* cm, GUPnPServiceAction* action) {
	GUPnPServiceAction* _tmp0_ = NULL;
	guint _tmp1_ = 0U;
	GUPnPServiceAction* _tmp4_ = NULL;
	const gchar* _tmp5_ = NULL;
	GUPnPServiceAction* _tmp6_ = NULL;
#line 102 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_return_if_fail (self != NULL);
#line 102 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_return_if_fail (cm != NULL);
#line 102 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_return_if_fail (action != NULL);
#line 104 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp0_ = action;
#line 104 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp1_ = gupnp_service_action_get_argument_count (_tmp0_);
#line 104 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	if (_tmp1_ != ((guint) 0)) {
#line 303 "rygel-connection-manager.c"
		GUPnPServiceAction* _tmp2_ = NULL;
		const gchar* _tmp3_ = NULL;
#line 105 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		_tmp2_ = action;
#line 105 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		_tmp3_ = _ ("Invalid argument");
#line 105 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		gupnp_service_action_return_error (_tmp2_, (guint) 402, _tmp3_);
#line 107 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		return;
#line 314 "rygel-connection-manager.c"
	}
#line 110 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp4_ = action;
#line 110 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp5_ = self->connection_ids;
#line 110 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	gupnp_service_action_set (_tmp4_, "ConnectionIDs", G_TYPE_STRING, _tmp5_, NULL);
#line 112 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp6_ = action;
#line 112 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	gupnp_service_action_return (_tmp6_);
#line 326 "rygel-connection-manager.c"
}


static void rygel_connection_manager_get_current_connection_info_cb (RygelConnectionManager* self, GUPnPService* cm, GUPnPServiceAction* action) {
	gchar* connection_id = NULL;
	GUPnPServiceAction* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
	gboolean _tmp2_ = FALSE;
	const gchar* _tmp3_ = NULL;
	gboolean _tmp6_ = FALSE;
	gboolean _tmp12_ = FALSE;
	const gchar* _tmp15_ = NULL;
	GUPnPServiceAction* _tmp18_ = NULL;
	gint _tmp19_ = 0;
	gint _tmp20_ = 0;
	const gchar* _tmp21_ = NULL;
	GUPnPServiceAction* _tmp22_ = NULL;
#line 115 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_return_if_fail (self != NULL);
#line 115 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_return_if_fail (cm != NULL);
#line 115 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	g_return_if_fail (action != NULL);
#line 119 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp0_ = action;
#line 119 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	gupnp_service_action_get (_tmp0_, "ConnectionID", G_TYPE_STRING, &connection_id, NULL);
#line 120 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp3_ = connection_id;
#line 120 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	if (_tmp3_ == NULL) {
#line 120 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		_tmp2_ = TRUE;
#line 360 "rygel-connection-manager.c"
	} else {
		GUPnPServiceAction* _tmp4_ = NULL;
		guint _tmp5_ = 0U;
#line 120 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		_tmp4_ = action;
#line 120 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		_tmp5_ = gupnp_service_action_get_argument_count (_tmp4_);
#line 120 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		_tmp2_ = _tmp5_ != ((guint) 1);
#line 370 "rygel-connection-manager.c"
	}
#line 120 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp6_ = _tmp2_;
#line 120 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	if (_tmp6_) {
#line 120 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		_tmp1_ = TRUE;
#line 378 "rygel-connection-manager.c"
	} else {
		gboolean _tmp7_ = FALSE;
		const gchar* _tmp8_ = NULL;
		gboolean _tmp11_ = FALSE;
#line 121 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		_tmp8_ = connection_id;
#line 121 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		if (g_strcmp0 (_tmp8_, "0") != 0) {
#line 387 "rygel-connection-manager.c"
			const gchar* _tmp9_ = NULL;
			gint _tmp10_ = 0;
#line 121 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
			_tmp9_ = connection_id;
#line 121 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
			_tmp10_ = atoi (_tmp9_);
#line 121 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
			_tmp7_ = _tmp10_ == 0;
#line 396 "rygel-connection-manager.c"
		} else {
#line 121 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
			_tmp7_ = FALSE;
#line 400 "rygel-connection-manager.c"
		}
#line 121 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		_tmp11_ = _tmp7_;
#line 121 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		_tmp1_ = _tmp11_;
#line 406 "rygel-connection-manager.c"
	}
#line 120 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp12_ = _tmp1_;
#line 120 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	if (_tmp12_) {
#line 412 "rygel-connection-manager.c"
		GUPnPServiceAction* _tmp13_ = NULL;
		const gchar* _tmp14_ = NULL;
#line 122 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		_tmp13_ = action;
#line 122 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		_tmp14_ = _ ("Invalid argument");
#line 122 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		gupnp_service_action_return_error (_tmp13_, (guint) 402, _tmp14_);
#line 124 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		_g_free0 (connection_id);
#line 124 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		return;
#line 425 "rygel-connection-manager.c"
	}
#line 127 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp15_ = connection_id;
#line 127 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	if (g_strcmp0 (_tmp15_, "0") != 0) {
#line 431 "rygel-connection-manager.c"
		GUPnPServiceAction* _tmp16_ = NULL;
		const gchar* _tmp17_ = NULL;
#line 128 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		_tmp16_ = action;
#line 128 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		_tmp17_ = _ ("Invalid connection reference");
#line 128 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		gupnp_service_action_return_error (_tmp16_, (guint) 706, _tmp17_);
#line 130 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		_g_free0 (connection_id);
#line 130 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
		return;
#line 444 "rygel-connection-manager.c"
	}
#line 133 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp18_ = action;
#line 133 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp19_ = self->rcs_id;
#line 133 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp20_ = self->av_transport_id;
#line 133 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp21_ = self->direction;
#line 133 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	gupnp_service_action_set (_tmp18_, "RcsID", G_TYPE_INT, _tmp19_, "AVTransportID", G_TYPE_INT, _tmp20_, "ProtocolInfo", G_TYPE_STRING, "", "PeerConnectionManager", G_TYPE_STRING, "", "PeerConnectionID", G_TYPE_INT, -1, "Direction", G_TYPE_STRING, _tmp21_, "Status", G_TYPE_STRING, "OK", NULL);
#line 155 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_tmp22_ = action;
#line 155 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	gupnp_service_action_return (_tmp22_);
#line 115 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_g_free0 (connection_id);
#line 462 "rygel-connection-manager.c"
}


RygelConnectionManager* rygel_connection_manager_construct (GType object_type) {
	RygelConnectionManager * self = NULL;
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	self = (RygelConnectionManager*) g_object_new (object_type, NULL);
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	return self;
#line 472 "rygel-connection-manager.c"
}


RygelConnectionManager* rygel_connection_manager_new (void) {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	return rygel_connection_manager_construct (RYGEL_TYPE_CONNECTION_MANAGER);
#line 479 "rygel-connection-manager.c"
}


static void rygel_connection_manager_class_init (RygelConnectionManagerClass * klass) {
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	rygel_connection_manager_parent_class = g_type_class_peek_parent (klass);
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	G_OBJECT_CLASS (klass)->constructed = rygel_connection_manager_real_constructed;
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	G_OBJECT_CLASS (klass)->finalize = rygel_connection_manager_finalize;
#line 490 "rygel-connection-manager.c"
}


static void rygel_connection_manager_instance_init (RygelConnectionManager * self) {
}


static void rygel_connection_manager_finalize (GObject* obj) {
	RygelConnectionManager * self;
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_CONNECTION_MANAGER, RygelConnectionManager);
#line 37 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_g_free0 (self->sink_protocol_info);
#line 38 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_g_free0 (self->connection_ids);
#line 39 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_g_free0 (self->source_protocol_info);
#line 43 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	_g_free0 (self->direction);
#line 31 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-core/rygel-connection-manager.vala"
	G_OBJECT_CLASS (rygel_connection_manager_parent_class)->finalize (obj);
#line 512 "rygel-connection-manager.c"
}


/**
 * Basic implementation of UPnP ConnectionManager service version 2.
 */
GType rygel_connection_manager_get_type (void) {
	static volatile gsize rygel_connection_manager_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_connection_manager_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelConnectionManagerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_connection_manager_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelConnectionManager), 0, (GInstanceInitFunc) rygel_connection_manager_instance_init, NULL };
		GType rygel_connection_manager_type_id;
		rygel_connection_manager_type_id = g_type_register_static (gupnp_service_get_type (), "RygelConnectionManager", &g_define_type_info, 0);
		g_once_init_leave (&rygel_connection_manager_type_id__volatile, rygel_connection_manager_type_id);
	}
	return rygel_connection_manager_type_id__volatile;
}



