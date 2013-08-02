/* rygel-data-source.c generated by valac 0.20.1.53-91609, the Vala compiler
 * generated from rygel-data-source.vala, do not modify */

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


#define RYGEL_TYPE_DATA_SOURCE (rygel_data_source_get_type ())
#define RYGEL_DATA_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_DATA_SOURCE, RygelDataSource))
#define RYGEL_IS_DATA_SOURCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_DATA_SOURCE))
#define RYGEL_DATA_SOURCE_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), RYGEL_TYPE_DATA_SOURCE, RygelDataSourceIface))

typedef struct _RygelDataSource RygelDataSource;
typedef struct _RygelDataSourceIface RygelDataSourceIface;

#define RYGEL_TYPE_HTTP_SEEK (rygel_http_seek_get_type ())
#define RYGEL_HTTP_SEEK(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_HTTP_SEEK, RygelHTTPSeek))
#define RYGEL_HTTP_SEEK_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_HTTP_SEEK, RygelHTTPSeekClass))
#define RYGEL_IS_HTTP_SEEK(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_HTTP_SEEK))
#define RYGEL_IS_HTTP_SEEK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_HTTP_SEEK))
#define RYGEL_HTTP_SEEK_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_HTTP_SEEK, RygelHTTPSeekClass))

typedef struct _RygelHTTPSeek RygelHTTPSeek;
typedef struct _RygelHTTPSeekClass RygelHTTPSeekClass;

typedef enum  {
	RYGEL_DATA_SOURCE_ERROR_GENERAL,
	RYGEL_DATA_SOURCE_ERROR_SEEK_FAILED
} RygelDataSourceError;
#define RYGEL_DATA_SOURCE_ERROR rygel_data_source_error_quark ()
struct _RygelDataSourceIface {
	GTypeInterface parent_iface;
	void (*start) (RygelDataSource* self, RygelHTTPSeek* offsets, GError** error);
	void (*freeze) (RygelDataSource* self);
	void (*thaw) (RygelDataSource* self);
	void (*stop) (RygelDataSource* self);
};



GQuark rygel_data_source_error_quark (void);
GType rygel_http_seek_get_type (void) G_GNUC_CONST;
GType rygel_data_source_get_type (void) G_GNUC_CONST;
void rygel_data_source_start (RygelDataSource* self, RygelHTTPSeek* offsets, GError** error);
void rygel_data_source_freeze (RygelDataSource* self);
void rygel_data_source_thaw (RygelDataSource* self);
void rygel_data_source_stop (RygelDataSource* self);
static void g_cclosure_user_marshal_VOID__POINTER_INT (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data);


GQuark rygel_data_source_error_quark (void) {
	return g_quark_from_static_string ("rygel_data_source_error-quark");
}


/**
     * Start producing the data.
     *
     * @param offsets optional limits of the stream for partial streaming
     * @throws Error if anything goes wrong while starting the stream. Throws
     * DataSourceError.SEEK_FAILED if a seek method is not supported or the
     * range is not fulfillable.
     */
void rygel_data_source_start (RygelDataSource* self, RygelHTTPSeek* offsets, GError** error) {
#line 68 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-data-source.vala"
	g_return_if_fail (self != NULL);
#line 68 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-data-source.vala"
	RYGEL_DATA_SOURCE_GET_INTERFACE (self)->start (self, offsets, error);
#line 92 "rygel-data-source.c"
}


/**
     * Temporarily stop data generation.
     *
     * May be called multiple times. If the source is already frozen, the
     * following calles to freeze are ignored. After callging freeze(), so
     * data_available() signal should be emitted.
     */
void rygel_data_source_freeze (RygelDataSource* self) {
#line 77 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-data-source.vala"
	g_return_if_fail (self != NULL);
#line 77 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-data-source.vala"
	RYGEL_DATA_SOURCE_GET_INTERFACE (self)->freeze (self);
#line 108 "rygel-data-source.c"
}


/**
     * Resume data generation from a previous freeze call.
     *
     * May be called multiple times, will be ignored if the source is not
     * frozen.
     */
void rygel_data_source_thaw (RygelDataSource* self) {
#line 85 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-data-source.vala"
	g_return_if_fail (self != NULL);
#line 85 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-data-source.vala"
	RYGEL_DATA_SOURCE_GET_INTERFACE (self)->thaw (self);
#line 123 "rygel-data-source.c"
}


/**
     * Stop producing data.
     * After calling stop(), calling start() should produce data from the
     * beginning and not resume streaming.
     */
void rygel_data_source_stop (RygelDataSource* self) {
#line 92 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-data-source.vala"
	g_return_if_fail (self != NULL);
#line 92 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-data-source.vala"
	RYGEL_DATA_SOURCE_GET_INTERFACE (self)->stop (self);
#line 137 "rygel-data-source.c"
}


static void g_cclosure_user_marshal_VOID__POINTER_INT (GClosure * closure, GValue * return_value, guint n_param_values, const GValue * param_values, gpointer invocation_hint, gpointer marshal_data) {
	typedef void (*GMarshalFunc_VOID__POINTER_INT) (gpointer data1, gpointer arg_1, gint arg_2, gpointer data2);
	register GMarshalFunc_VOID__POINTER_INT callback;
	register GCClosure * cc;
	register gpointer data1;
	register gpointer data2;
	cc = (GCClosure *) closure;
#line 59 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-data-source.vala"
	g_return_if_fail (n_param_values == 3);
#line 59 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-data-source.vala"
	if (G_CCLOSURE_SWAP_DATA (closure)) {
#line 59 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-data-source.vala"
		data1 = closure->data;
#line 59 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-data-source.vala"
		data2 = param_values->data[0].v_pointer;
#line 156 "rygel-data-source.c"
	} else {
#line 59 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-data-source.vala"
		data1 = param_values->data[0].v_pointer;
#line 59 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-data-source.vala"
		data2 = closure->data;
#line 162 "rygel-data-source.c"
	}
#line 59 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-data-source.vala"
	callback = (GMarshalFunc_VOID__POINTER_INT) (marshal_data ? marshal_data : cc->callback);
#line 59 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-data-source.vala"
	callback (data1, g_value_get_pointer (param_values + 1), g_value_get_int (param_values + 2), data2);
#line 168 "rygel-data-source.c"
}


static void rygel_data_source_base_init (RygelDataSourceIface * iface) {
#line 59 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-data-source.vala"
	static gboolean initialized = FALSE;
#line 59 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-data-source.vala"
	if (!initialized) {
#line 59 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-data-source.vala"
		initialized = TRUE;
#line 179 "rygel-data-source.c"
		/**
		     * Emitted when the source has produced some data.
		     *
		     * This signal has to be emitted in the main thread.
		     */
#line 59 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-data-source.vala"
		g_signal_new ("data_available", RYGEL_TYPE_DATA_SOURCE, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_user_marshal_VOID__POINTER_INT, G_TYPE_NONE, 2, G_TYPE_POINTER, G_TYPE_INT);
#line 187 "rygel-data-source.c"
		/**
		     * Emitted when the source does not have data anymore.
		     *
		     * This signal has to be emitted in the main thread.
		     */
#line 59 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-data-source.vala"
		g_signal_new ("done", RYGEL_TYPE_DATA_SOURCE, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
#line 195 "rygel-data-source.c"
		/**
		     * Emitted when the source encounters a problem during data generation.
		     *
		     * This signal has to be emitted in the main thread.
		     */
#line 59 "/home/rmerlino/workspace/tizen/dlna/ivi/3.0/orig/rygel/src/librygel-server/rygel-data-source.vala"
		g_signal_new ("error", RYGEL_TYPE_DATA_SOURCE, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__POINTER, G_TYPE_NONE, 1, G_TYPE_POINTER);
#line 203 "rygel-data-source.c"
	}
}


/**
 * Interface for all data streams provided by a #RygelMediaEngine.
 *
 * When Rygel receives a HTTP request to stream a given file, it creates a
 * RygelDataSource object for this new file and instructs the RygelDataSource
 * to begin streaming. The RygelDataSource object will duly pass this request
 * on to the underlying media framework, which will in turn pass streamed bytes
 * back to the RygelDataSource object. The RygelDataSource passes these bytes
 * to Rygel which adds them to the response it sends to the original HTTP
 * request received from the client.
 *
 * The data source is responsible for providing the streamable byte-stream
 * via its data_available signal. End-of-stream is signalled by the 
 * done signal, while errors are signalled by the error signal.
 *
 * Implementations should fulfil at least these requirements:
 *
 *  # It should support at least the file:/''''/ URI scheme.
 *  # It should be able to stream any kind of binary data, regardless of the format.
 *
 * RygelDataSource instances are provided by
 * rygel_media_engine_create_data_source() which will return a derived #RygelDataSource
 * that uses a specific IO backend and/or multimedia backend to stream the
 * multimedia data at the URI.
 *
 * The derived RygelDataSource may provide additional API for use by
 * the derived media engine. For instance, rygel_media_engine_get_transcoders()
 * may return derived #RygelTranscoder instances, and these may use that
 * additional API in their create_source() implementations, for instance
 * to access resources or data structures of the specific multimedia backend.
 */
GType rygel_data_source_get_type (void) {
	static volatile gsize rygel_data_source_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_data_source_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelDataSourceIface), (GBaseInitFunc) rygel_data_source_base_init, (GBaseFinalizeFunc) NULL, (GClassInitFunc) NULL, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType rygel_data_source_type_id;
		rygel_data_source_type_id = g_type_register_static (G_TYPE_INTERFACE, "RygelDataSource", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (rygel_data_source_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&rygel_data_source_type_id__volatile, rygel_data_source_type_id);
	}
	return rygel_data_source_type_id__volatile;
}



