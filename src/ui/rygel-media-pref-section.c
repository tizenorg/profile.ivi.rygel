/* rygel-media-pref-section.c generated by valac 0.18.0, the Vala compiler
 * generated from rygel-media-pref-section.vala, do not modify */

/*
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
#include <gee.h>
#include <gtk/gtk.h>
#include <rygel-core.h>
#include <gio/gio.h>


#define RYGEL_TYPE_PREFERENCES_SECTION (rygel_preferences_section_get_type ())
#define RYGEL_PREFERENCES_SECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_PREFERENCES_SECTION, RygelPreferencesSection))
#define RYGEL_PREFERENCES_SECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_PREFERENCES_SECTION, RygelPreferencesSectionClass))
#define RYGEL_IS_PREFERENCES_SECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_PREFERENCES_SECTION))
#define RYGEL_IS_PREFERENCES_SECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_PREFERENCES_SECTION))
#define RYGEL_PREFERENCES_SECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_PREFERENCES_SECTION, RygelPreferencesSectionClass))

typedef struct _RygelPreferencesSection RygelPreferencesSection;
typedef struct _RygelPreferencesSectionClass RygelPreferencesSectionClass;
typedef struct _RygelPreferencesSectionPrivate RygelPreferencesSectionPrivate;

#define RYGEL_TYPE_USER_CONFIG (rygel_user_config_get_type ())
#define RYGEL_USER_CONFIG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_USER_CONFIG, RygelUserConfig))
#define RYGEL_USER_CONFIG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_USER_CONFIG, RygelUserConfigClass))
#define RYGEL_IS_USER_CONFIG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_USER_CONFIG))
#define RYGEL_IS_USER_CONFIG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_USER_CONFIG))
#define RYGEL_USER_CONFIG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_USER_CONFIG, RygelUserConfigClass))

typedef struct _RygelUserConfig RygelUserConfig;
typedef struct _RygelUserConfigClass RygelUserConfigClass;

#define RYGEL_TYPE_WRITABLE_USER_CONFIG (rygel_writable_user_config_get_type ())
#define RYGEL_WRITABLE_USER_CONFIG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_WRITABLE_USER_CONFIG, RygelWritableUserConfig))
#define RYGEL_WRITABLE_USER_CONFIG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_WRITABLE_USER_CONFIG, RygelWritableUserConfigClass))
#define RYGEL_IS_WRITABLE_USER_CONFIG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_WRITABLE_USER_CONFIG))
#define RYGEL_IS_WRITABLE_USER_CONFIG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_WRITABLE_USER_CONFIG))
#define RYGEL_WRITABLE_USER_CONFIG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_WRITABLE_USER_CONFIG, RygelWritableUserConfigClass))

typedef struct _RygelWritableUserConfig RygelWritableUserConfig;
typedef struct _RygelWritableUserConfigClass RygelWritableUserConfigClass;

#define RYGEL_TYPE_MEDIA_PREF_SECTION (rygel_media_pref_section_get_type ())
#define RYGEL_MEDIA_PREF_SECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), RYGEL_TYPE_MEDIA_PREF_SECTION, RygelMediaPrefSection))
#define RYGEL_MEDIA_PREF_SECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), RYGEL_TYPE_MEDIA_PREF_SECTION, RygelMediaPrefSectionClass))
#define RYGEL_IS_MEDIA_PREF_SECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), RYGEL_TYPE_MEDIA_PREF_SECTION))
#define RYGEL_IS_MEDIA_PREF_SECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), RYGEL_TYPE_MEDIA_PREF_SECTION))
#define RYGEL_MEDIA_PREF_SECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), RYGEL_TYPE_MEDIA_PREF_SECTION, RygelMediaPrefSectionClass))

typedef struct _RygelMediaPrefSection RygelMediaPrefSection;
typedef struct _RygelMediaPrefSectionClass RygelMediaPrefSectionClass;
typedef struct _RygelMediaPrefSectionPrivate RygelMediaPrefSectionPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define __g_slist_free__g_object_unref0_0(var) ((var == NULL) ? NULL : (var = (_g_slist_free__g_object_unref0_ (var), NULL)))
#define _gtk_tree_row_reference_free0(var) ((var == NULL) ? NULL : (var = (gtk_tree_row_reference_free (var), NULL)))
#define _gtk_tree_path_free0(var) ((var == NULL) ? NULL : (var = (gtk_tree_path_free (var), NULL)))
#define __g_list_free__gtk_tree_path_free0_0(var) ((var == NULL) ? NULL : (var = (_g_list_free__gtk_tree_path_free0_ (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _RygelPreferencesSection {
	GObject parent_instance;
	RygelPreferencesSectionPrivate * priv;
	RygelWritableUserConfig* config;
	gchar* name;
};

struct _RygelPreferencesSectionClass {
	GObjectClass parent_class;
	void (*save) (RygelPreferencesSection* self);
	void (*set_sensitivity) (RygelPreferencesSection* self, gboolean sensitivity);
};

struct _RygelMediaPrefSection {
	RygelPreferencesSection parent_instance;
	RygelMediaPrefSectionPrivate * priv;
};

struct _RygelMediaPrefSectionClass {
	RygelPreferencesSectionClass parent_class;
};

struct _RygelMediaPrefSectionPrivate {
	GeeArrayList* widgets;
	GtkTreeView* treeview;
	GtkListStore* liststore;
	GtkTreeSelection* tree_selection;
	GtkFileChooserDialog* dialog;
	GtkToolButton* remove_button;
};


static gpointer rygel_media_pref_section_parent_class = NULL;

GType rygel_preferences_section_get_type (void) G_GNUC_CONST;
GType rygel_user_config_get_type (void) G_GNUC_CONST;
GType rygel_writable_user_config_get_type (void) G_GNUC_CONST;
GType rygel_media_pref_section_get_type (void) G_GNUC_CONST;
#define RYGEL_MEDIA_PREF_SECTION_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), RYGEL_TYPE_MEDIA_PREF_SECTION, RygelMediaPrefSectionPrivate))
enum  {
	RYGEL_MEDIA_PREF_SECTION_DUMMY_PROPERTY
};
#define RYGEL_MEDIA_PREF_SECTION_NAME "MediaExport"
#define RYGEL_MEDIA_PREF_SECTION_URIS_KEY "uris"
#define RYGEL_MEDIA_PREF_SECTION_URIS_TEXTVIEW RYGEL_MEDIA_PREF_SECTION_URIS_KEY "-treeview"
#define RYGEL_MEDIA_PREF_SECTION_URIS_LISTSTORE RYGEL_MEDIA_PREF_SECTION_URIS_KEY "-liststore"
#define RYGEL_MEDIA_PREF_SECTION_URIS_DIALOG RYGEL_MEDIA_PREF_SECTION_URIS_KEY "-dialog"
#define RYGEL_MEDIA_PREF_SECTION_ADD_BUTTON "add-button"
#define RYGEL_MEDIA_PREF_SECTION_REMOVE_BUTTON "remove-button"
#define RYGEL_MEDIA_PREF_SECTION_TREE_SELECTION "treeview-selection"
RygelMediaPrefSection* rygel_media_pref_section_new (GtkBuilder* builder, RygelWritableUserConfig* config);
RygelMediaPrefSection* rygel_media_pref_section_construct (GType object_type, GtkBuilder* builder, RygelWritableUserConfig* config);
RygelPreferencesSection* rygel_preferences_section_construct (GType object_type, RygelWritableUserConfig* config, const gchar* name);
static gchar* rygel_media_pref_section_get_real_uri (RygelMediaPrefSection* self, const gchar* uri);
static void rygel_media_pref_section_on_add_button_clicked (RygelMediaPrefSection* self, GtkToolButton* button);
static void _rygel_media_pref_section_on_add_button_clicked_gtk_tool_button_clicked (GtkToolButton* _sender, gpointer self);
static void rygel_media_pref_section_on_remove_button_clicked (RygelMediaPrefSection* self, GtkToolButton* button);
static void _rygel_media_pref_section_on_remove_button_clicked_gtk_tool_button_clicked (GtkToolButton* _sender, gpointer self);
static void rygel_media_pref_section_on_tree_selection_changed (RygelMediaPrefSection* self);
static void _rygel_media_pref_section_on_tree_selection_changed_gtk_tree_selection_changed (GtkTreeSelection* _sender, gpointer self);
static void rygel_media_pref_section_real_save (RygelPreferencesSection* base);
static gchar* rygel_media_pref_section_uri_to_magic_variable (RygelMediaPrefSection* self, const gchar* uri);
void rygel_writable_user_config_set_string_list (RygelWritableUserConfig* self, const gchar* section, const gchar* key, GeeArrayList* str_list);
static void rygel_media_pref_section_real_set_sensitivity (RygelPreferencesSection* base, gboolean sensitivity);
static void _g_object_unref0_ (gpointer var);
static void _g_slist_free__g_object_unref0_ (GSList* self);
static void _gtk_tree_path_free0_ (gpointer var);
static void _g_list_free__gtk_tree_path_free0_ (GList* self);
static void rygel_media_pref_section_finalize (GObject* obj);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void _rygel_media_pref_section_on_add_button_clicked_gtk_tool_button_clicked (GtkToolButton* _sender, gpointer self) {
	rygel_media_pref_section_on_add_button_clicked (self, _sender);
}


static void _rygel_media_pref_section_on_remove_button_clicked_gtk_tool_button_clicked (GtkToolButton* _sender, gpointer self) {
	rygel_media_pref_section_on_remove_button_clicked (self, _sender);
}


static void _rygel_media_pref_section_on_tree_selection_changed_gtk_tree_selection_changed (GtkTreeSelection* _sender, gpointer self) {
	rygel_media_pref_section_on_tree_selection_changed (self);
}


RygelMediaPrefSection* rygel_media_pref_section_construct (GType object_type, GtkBuilder* builder, RygelWritableUserConfig* config) {
	RygelMediaPrefSection * self = NULL;
	RygelWritableUserConfig* _tmp0_;
	GeeArrayList* _tmp1_;
	GtkBuilder* _tmp2_;
	GObject* _tmp3_ = NULL;
	GtkTreeView* _tmp4_;
	GtkTreeView* _tmp5_;
	GtkBuilder* _tmp6_;
	GObject* _tmp7_ = NULL;
	GtkListStore* _tmp8_;
	GtkListStore* _tmp9_;
	GtkBuilder* _tmp10_;
	GObject* _tmp11_ = NULL;
	GtkTreeSelection* _tmp12_;
	GtkTreeSelection* _tmp13_;
	GtkBuilder* _tmp14_;
	GObject* _tmp15_ = NULL;
	GtkFileChooserDialog* _tmp16_;
	GtkFileChooserDialog* _tmp17_;
	GtkTreeView* _tmp18_;
	GtkCellRendererText* _tmp19_;
	GtkCellRendererText* _tmp20_;
	GeeArrayList* _tmp21_;
	GtkTreeView* _tmp22_;
	GtkFileChooserDialog* _tmp44_;
	const gchar* _tmp45_ = NULL;
	GtkFileChooserDialog* _tmp46_;
	GtkBuilder* _tmp47_;
	GObject* _tmp48_ = NULL;
	GtkToolButton* _tmp49_;
	GtkToolButton* add_button;
	GeeArrayList* _tmp50_;
	GtkBuilder* _tmp51_;
	GObject* _tmp52_ = NULL;
	GtkToolButton* _tmp53_;
	GtkToolButton* _tmp54_;
	GeeArrayList* _tmp55_;
	GtkToolButton* _tmp56_;
	GtkTreeSelection* _tmp57_;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (builder != NULL, NULL);
	g_return_val_if_fail (config != NULL, NULL);
	_tmp0_ = config;
	self = (RygelMediaPrefSection*) rygel_preferences_section_construct (object_type, _tmp0_, RYGEL_MEDIA_PREF_SECTION_NAME);
	_tmp1_ = gee_array_list_new (GTK_TYPE_WIDGET, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL, NULL, NULL);
	_g_object_unref0 (self->priv->widgets);
	self->priv->widgets = _tmp1_;
	_tmp2_ = builder;
	_tmp3_ = gtk_builder_get_object (_tmp2_, RYGEL_MEDIA_PREF_SECTION_URIS_TEXTVIEW);
	_tmp4_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp3_, GTK_TYPE_TREE_VIEW, GtkTreeView));
	_g_object_unref0 (self->priv->treeview);
	self->priv->treeview = _tmp4_;
	_tmp5_ = self->priv->treeview;
	_vala_assert (_tmp5_ != NULL, "this.treeview != null");
	_tmp6_ = builder;
	_tmp7_ = gtk_builder_get_object (_tmp6_, RYGEL_MEDIA_PREF_SECTION_URIS_LISTSTORE);
	_tmp8_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp7_, GTK_TYPE_LIST_STORE, GtkListStore));
	_g_object_unref0 (self->priv->liststore);
	self->priv->liststore = _tmp8_;
	_tmp9_ = self->priv->liststore;
	_vala_assert (_tmp9_ != NULL, "this.liststore != null");
	_tmp10_ = builder;
	_tmp11_ = gtk_builder_get_object (_tmp10_, RYGEL_MEDIA_PREF_SECTION_TREE_SELECTION);
	_tmp12_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp11_, GTK_TYPE_TREE_SELECTION) ? ((GtkTreeSelection*) _tmp11_) : NULL);
	_g_object_unref0 (self->priv->tree_selection);
	self->priv->tree_selection = _tmp12_;
	_tmp13_ = self->priv->tree_selection;
	_vala_assert (_tmp13_ != NULL, "this.tree_selection != null");
	_tmp14_ = builder;
	_tmp15_ = gtk_builder_get_object (_tmp14_, RYGEL_MEDIA_PREF_SECTION_URIS_DIALOG);
	_tmp16_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp15_, GTK_TYPE_FILE_CHOOSER_DIALOG, GtkFileChooserDialog));
	_g_object_unref0 (self->priv->dialog);
	self->priv->dialog = _tmp16_;
	_tmp17_ = self->priv->dialog;
	_vala_assert (_tmp17_ != NULL, "this.dialog != null");
	_tmp18_ = self->priv->treeview;
	_tmp19_ = (GtkCellRendererText*) gtk_cell_renderer_text_new ();
	g_object_ref_sink (_tmp19_);
	_tmp20_ = _tmp19_;
	gtk_tree_view_insert_column_with_attributes (_tmp18_, -1, "paths", (GtkCellRenderer*) _tmp20_, "text", 0, NULL, NULL);
	_g_object_unref0 (_tmp20_);
	_tmp21_ = self->priv->widgets;
	_tmp22_ = self->priv->treeview;
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp21_, (GtkWidget*) _tmp22_);
	{
		RygelWritableUserConfig* _tmp23_;
		const gchar* _tmp24_;
		GeeArrayList* _tmp25_ = NULL;
		GeeArrayList* uris;
		_tmp23_ = config;
		_tmp24_ = ((RygelPreferencesSection*) self)->name;
		_tmp25_ = rygel_configuration_get_string_list ((RygelConfiguration*) _tmp23_, _tmp24_, RYGEL_MEDIA_PREF_SECTION_URIS_KEY, &_inner_error_);
		uris = _tmp25_;
		if (_inner_error_ != NULL) {
			goto __catch1_g_error;
		}
		{
			GeeArrayList* _tmp26_;
			GeeArrayList* _tmp27_;
			GeeArrayList* _uri_list;
			GeeArrayList* _tmp28_;
			gint _tmp29_;
			gint _tmp30_;
			gint _uri_size;
			gint _uri_index;
			_tmp26_ = uris;
			_tmp27_ = _g_object_ref0 (_tmp26_);
			_uri_list = _tmp27_;
			_tmp28_ = _uri_list;
			_tmp29_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp28_);
			_tmp30_ = _tmp29_;
			_uri_size = _tmp30_;
			_uri_index = -1;
			while (TRUE) {
				gint _tmp31_;
				gint _tmp32_;
				gint _tmp33_;
				GeeArrayList* _tmp34_;
				gint _tmp35_;
				gpointer _tmp36_ = NULL;
				gchar* uri;
				const gchar* _tmp37_;
				gchar* _tmp38_ = NULL;
				gchar* real_uri;
				GtkTreeIter iter = {0};
				GtkListStore* _tmp39_;
				GtkTreeIter _tmp40_ = {0};
				GtkListStore* _tmp41_;
				GtkTreeIter _tmp42_;
				const gchar* _tmp43_;
				_tmp31_ = _uri_index;
				_uri_index = _tmp31_ + 1;
				_tmp32_ = _uri_index;
				_tmp33_ = _uri_size;
				if (!(_tmp32_ < _tmp33_)) {
					break;
				}
				_tmp34_ = _uri_list;
				_tmp35_ = _uri_index;
				_tmp36_ = gee_abstract_list_get ((GeeAbstractList*) _tmp34_, _tmp35_);
				uri = (gchar*) _tmp36_;
				_tmp37_ = uri;
				_tmp38_ = rygel_media_pref_section_get_real_uri (self, _tmp37_);
				real_uri = _tmp38_;
				_tmp39_ = self->priv->liststore;
				gtk_list_store_append (_tmp39_, &_tmp40_);
				iter = _tmp40_;
				_tmp41_ = self->priv->liststore;
				_tmp42_ = iter;
				_tmp43_ = real_uri;
				gtk_list_store_set (_tmp41_, &_tmp42_, 0, _tmp43_, -1, -1);
				_g_free0 (real_uri);
				_g_free0 (uri);
			}
			_g_object_unref0 (_uri_list);
		}
		_g_object_unref0 (uris);
	}
	goto __finally1;
	__catch1_g_error:
	{
		GError* err = NULL;
		err = _inner_error_;
		_inner_error_ = NULL;
		_g_error_free0 (err);
	}
	__finally1:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
	_tmp44_ = self->priv->dialog;
	_tmp45_ = g_get_home_dir ();
	gtk_file_chooser_set_current_folder ((GtkFileChooser*) _tmp44_, _tmp45_);
	_tmp46_ = self->priv->dialog;
	gtk_file_chooser_set_show_hidden ((GtkFileChooser*) _tmp46_, FALSE);
	_tmp47_ = builder;
	_tmp48_ = gtk_builder_get_object (_tmp47_, RYGEL_MEDIA_PREF_SECTION_ADD_BUTTON);
	_tmp49_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp48_, GTK_TYPE_TOOL_BUTTON) ? ((GtkToolButton*) _tmp48_) : NULL);
	add_button = _tmp49_;
	g_signal_connect_object (add_button, "clicked", (GCallback) _rygel_media_pref_section_on_add_button_clicked_gtk_tool_button_clicked, self, 0);
	_tmp50_ = self->priv->widgets;
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp50_, (GtkWidget*) add_button);
	_tmp51_ = builder;
	_tmp52_ = gtk_builder_get_object (_tmp51_, RYGEL_MEDIA_PREF_SECTION_REMOVE_BUTTON);
	_tmp53_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp52_, GTK_TYPE_TOOL_BUTTON) ? ((GtkToolButton*) _tmp52_) : NULL);
	_g_object_unref0 (self->priv->remove_button);
	self->priv->remove_button = _tmp53_;
	_tmp54_ = self->priv->remove_button;
	g_signal_connect_object (_tmp54_, "clicked", (GCallback) _rygel_media_pref_section_on_remove_button_clicked_gtk_tool_button_clicked, self, 0);
	_tmp55_ = self->priv->widgets;
	_tmp56_ = self->priv->remove_button;
	gee_abstract_collection_add ((GeeAbstractCollection*) _tmp55_, (GtkWidget*) _tmp56_);
	rygel_media_pref_section_on_tree_selection_changed (self);
	_tmp57_ = self->priv->tree_selection;
	g_signal_connect_object (_tmp57_, "changed", (GCallback) _rygel_media_pref_section_on_tree_selection_changed_gtk_tree_selection_changed, self, 0);
	_g_object_unref0 (add_button);
	return self;
}


RygelMediaPrefSection* rygel_media_pref_section_new (GtkBuilder* builder, RygelWritableUserConfig* config) {
	return rygel_media_pref_section_construct (RYGEL_TYPE_MEDIA_PREF_SECTION, builder, config);
}


static void rygel_media_pref_section_real_save (RygelPreferencesSection* base) {
	RygelMediaPrefSection * self;
	GtkTreeIter iter = {0};
	GeeArrayList* _tmp0_;
	GeeArrayList* uri_list;
	GtkListStore* _tmp1_;
	GtkTreeIter _tmp2_ = {0};
	gboolean _tmp3_ = FALSE;
	RygelWritableUserConfig* _tmp14_;
	const gchar* _tmp15_;
	GeeArrayList* _tmp16_;
	self = (RygelMediaPrefSection*) base;
	_tmp0_ = gee_array_list_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, NULL, NULL, NULL);
	uri_list = _tmp0_;
	_tmp1_ = self->priv->liststore;
	_tmp3_ = gtk_tree_model_get_iter_first ((GtkTreeModel*) _tmp1_, &_tmp2_);
	iter = _tmp2_;
	if (_tmp3_) {
		{
			gboolean _tmp4_;
			_tmp4_ = TRUE;
			while (TRUE) {
				gboolean _tmp5_;
				gchar* uri = NULL;
				GtkListStore* _tmp8_;
				GtkTreeIter _tmp9_;
				const gchar* _tmp10_;
				gchar* _tmp11_ = NULL;
				GeeArrayList* _tmp12_;
				const gchar* _tmp13_;
				_tmp5_ = _tmp4_;
				if (!_tmp5_) {
					GtkListStore* _tmp6_;
					gboolean _tmp7_ = FALSE;
					_tmp6_ = self->priv->liststore;
					_tmp7_ = gtk_tree_model_iter_next ((GtkTreeModel*) _tmp6_, &iter);
					if (!_tmp7_) {
						break;
					}
				}
				_tmp4_ = FALSE;
				_tmp8_ = self->priv->liststore;
				_tmp9_ = iter;
				gtk_tree_model_get ((GtkTreeModel*) _tmp8_, &_tmp9_, 0, &uri, -1, -1);
				_tmp10_ = uri;
				_tmp11_ = rygel_media_pref_section_uri_to_magic_variable (self, _tmp10_);
				_g_free0 (uri);
				uri = _tmp11_;
				_tmp12_ = uri_list;
				_tmp13_ = uri;
				gee_abstract_collection_add ((GeeAbstractCollection*) _tmp12_, _tmp13_);
				_g_free0 (uri);
			}
		}
	}
	_tmp14_ = ((RygelPreferencesSection*) self)->config;
	_tmp15_ = ((RygelPreferencesSection*) self)->name;
	_tmp16_ = uri_list;
	rygel_writable_user_config_set_string_list (_tmp14_, _tmp15_, RYGEL_MEDIA_PREF_SECTION_URIS_KEY, _tmp16_);
	_g_object_unref0 (uri_list);
}


static void rygel_media_pref_section_real_set_sensitivity (RygelPreferencesSection* base, gboolean sensitivity) {
	RygelMediaPrefSection * self;
	gboolean _tmp13_;
	self = (RygelMediaPrefSection*) base;
	{
		GeeArrayList* _tmp0_;
		GeeArrayList* _tmp1_;
		GeeArrayList* _widget_list;
		GeeArrayList* _tmp2_;
		gint _tmp3_;
		gint _tmp4_;
		gint _widget_size;
		gint _widget_index;
		_tmp0_ = self->priv->widgets;
		_tmp1_ = _g_object_ref0 (_tmp0_);
		_widget_list = _tmp1_;
		_tmp2_ = _widget_list;
		_tmp3_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp2_);
		_tmp4_ = _tmp3_;
		_widget_size = _tmp4_;
		_widget_index = -1;
		while (TRUE) {
			gint _tmp5_;
			gint _tmp6_;
			gint _tmp7_;
			GeeArrayList* _tmp8_;
			gint _tmp9_;
			gpointer _tmp10_ = NULL;
			GtkWidget* widget;
			GtkWidget* _tmp11_;
			gboolean _tmp12_;
			_tmp5_ = _widget_index;
			_widget_index = _tmp5_ + 1;
			_tmp6_ = _widget_index;
			_tmp7_ = _widget_size;
			if (!(_tmp6_ < _tmp7_)) {
				break;
			}
			_tmp8_ = _widget_list;
			_tmp9_ = _widget_index;
			_tmp10_ = gee_abstract_list_get ((GeeAbstractList*) _tmp8_, _tmp9_);
			widget = (GtkWidget*) _tmp10_;
			_tmp11_ = widget;
			_tmp12_ = sensitivity;
			gtk_widget_set_sensitive (_tmp11_, _tmp12_);
			_g_object_unref0 (widget);
		}
		_g_object_unref0 (_widget_list);
	}
	_tmp13_ = sensitivity;
	if (_tmp13_) {
		rygel_media_pref_section_on_tree_selection_changed (self);
	}
}


static void _g_object_unref0_ (gpointer var) {
	(var == NULL) ? NULL : (var = (g_object_unref (var), NULL));
}


static void _g_slist_free__g_object_unref0_ (GSList* self) {
	g_slist_foreach (self, (GFunc) _g_object_unref0_, NULL);
	g_slist_free (self);
}


static void rygel_media_pref_section_on_add_button_clicked (RygelMediaPrefSection* self, GtkToolButton* button) {
	GtkFileChooserDialog* _tmp0_;
	gint _tmp1_ = 0;
	GtkFileChooserDialog* _tmp16_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (button != NULL);
	_tmp0_ = self->priv->dialog;
	_tmp1_ = gtk_dialog_run ((GtkDialog*) _tmp0_);
	if (_tmp1_ == ((gint) GTK_RESPONSE_OK)) {
		GtkTreeIter iter = {0};
		GtkFileChooserDialog* _tmp2_;
		GSList* _tmp3_ = NULL;
		GSList* dirs;
		GSList* _tmp4_;
		_tmp2_ = self->priv->dialog;
		_tmp3_ = gtk_file_chooser_get_files ((GtkFileChooser*) _tmp2_);
		dirs = _tmp3_;
		_tmp4_ = dirs;
		{
			GSList* dir_collection = NULL;
			GSList* dir_it = NULL;
			dir_collection = _tmp4_;
			for (dir_it = dir_collection; dir_it != NULL; dir_it = dir_it->next) {
				GFile* _tmp5_;
				GFile* dir = NULL;
				_tmp5_ = _g_object_ref0 ((GFile*) dir_it->data);
				dir = _tmp5_;
				{
					GFile* _tmp6_;
					gchar* _tmp7_ = NULL;
					gchar* path;
					const gchar* _tmp8_;
					GtkListStore* _tmp11_;
					GtkTreeIter _tmp12_ = {0};
					GtkListStore* _tmp13_;
					GtkTreeIter _tmp14_;
					const gchar* _tmp15_;
					_tmp6_ = dir;
					_tmp7_ = g_file_get_path (_tmp6_);
					path = _tmp7_;
					_tmp8_ = path;
					if (_tmp8_ == NULL) {
						GFile* _tmp9_;
						gchar* _tmp10_ = NULL;
						_tmp9_ = dir;
						_tmp10_ = g_file_get_uri (_tmp9_);
						_g_free0 (path);
						path = _tmp10_;
					}
					_tmp11_ = self->priv->liststore;
					gtk_list_store_append (_tmp11_, &_tmp12_);
					iter = _tmp12_;
					_tmp13_ = self->priv->liststore;
					_tmp14_ = iter;
					_tmp15_ = path;
					gtk_list_store_set (_tmp13_, &_tmp14_, 0, _tmp15_, -1, -1);
					_g_free0 (path);
					_g_object_unref0 (dir);
				}
			}
		}
		__g_slist_free__g_object_unref0_0 (dirs);
	}
	_tmp16_ = self->priv->dialog;
	gtk_widget_hide ((GtkWidget*) _tmp16_);
}


static gpointer _gtk_tree_path_copy0 (gpointer self) {
	return self ? gtk_tree_path_copy (self) : NULL;
}


static void _gtk_tree_path_free0_ (gpointer var) {
	(var == NULL) ? NULL : (var = (gtk_tree_path_free (var), NULL));
}


static void _g_list_free__gtk_tree_path_free0_ (GList* self) {
	g_list_foreach (self, (GFunc) _gtk_tree_path_free0_, NULL);
	g_list_free (self);
}


static void rygel_media_pref_section_on_remove_button_clicked (RygelMediaPrefSection* self, GtkToolButton* button) {
	GtkTreeView* _tmp0_;
	GtkTreeSelection* _tmp1_ = NULL;
	GtkTreeSelection* _tmp2_;
	GtkTreeSelection* selection;
	GtkTreeSelection* _tmp3_;
	GList* _tmp4_ = NULL;
	GList* rows;
	GeeArrayList* _tmp5_;
	GeeArrayList* row_refs;
	GList* _tmp6_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (button != NULL);
	_tmp0_ = self->priv->treeview;
	_tmp1_ = gtk_tree_view_get_selection (_tmp0_);
	_tmp2_ = _g_object_ref0 (_tmp1_);
	selection = _tmp2_;
	_tmp3_ = selection;
	_tmp4_ = gtk_tree_selection_get_selected_rows (_tmp3_, NULL);
	rows = _tmp4_;
	_tmp5_ = gee_array_list_new (gtk_tree_row_reference_get_type (), (GBoxedCopyFunc) gtk_tree_row_reference_copy, gtk_tree_row_reference_free, NULL, NULL, NULL);
	row_refs = _tmp5_;
	_tmp6_ = rows;
	{
		GList* row_collection = NULL;
		GList* row_it = NULL;
		row_collection = _tmp6_;
		for (row_it = row_collection; row_it != NULL; row_it = row_it->next) {
			GtkTreePath* _tmp7_;
			GtkTreePath* row = NULL;
			_tmp7_ = _gtk_tree_path_copy0 ((GtkTreePath*) row_it->data);
			row = _tmp7_;
			{
				GeeArrayList* _tmp8_;
				GtkListStore* _tmp9_;
				GtkTreePath* _tmp10_;
				GtkTreeRowReference* _tmp11_;
				GtkTreeRowReference* _tmp12_;
				_tmp8_ = row_refs;
				_tmp9_ = self->priv->liststore;
				_tmp10_ = row;
				_tmp11_ = gtk_tree_row_reference_new ((GtkTreeModel*) _tmp9_, _tmp10_);
				_tmp12_ = _tmp11_;
				gee_abstract_collection_add ((GeeAbstractCollection*) _tmp8_, _tmp12_);
				_gtk_tree_row_reference_free0 (_tmp12_);
				_gtk_tree_path_free0 (row);
			}
		}
	}
	{
		GeeArrayList* _tmp13_;
		GeeArrayList* _tmp14_;
		GeeArrayList* _row_ref_list;
		GeeArrayList* _tmp15_;
		gint _tmp16_;
		gint _tmp17_;
		gint _row_ref_size;
		gint _row_ref_index;
		_tmp13_ = row_refs;
		_tmp14_ = _g_object_ref0 (_tmp13_);
		_row_ref_list = _tmp14_;
		_tmp15_ = _row_ref_list;
		_tmp16_ = gee_abstract_collection_get_size ((GeeCollection*) _tmp15_);
		_tmp17_ = _tmp16_;
		_row_ref_size = _tmp17_;
		_row_ref_index = -1;
		while (TRUE) {
			gint _tmp18_;
			gint _tmp19_;
			gint _tmp20_;
			GeeArrayList* _tmp21_;
			gint _tmp22_;
			gpointer _tmp23_ = NULL;
			GtkTreeRowReference* row_ref;
			GtkTreeIter iter = {0};
			const GtkTreeRowReference* _tmp24_;
			GtkTreePath* _tmp25_ = NULL;
			GtkTreePath* path;
			GtkListStore* _tmp26_;
			GtkTreePath* _tmp27_;
			GtkTreeIter _tmp28_ = {0};
			GtkListStore* _tmp29_;
			GtkTreeIter _tmp30_;
			_tmp18_ = _row_ref_index;
			_row_ref_index = _tmp18_ + 1;
			_tmp19_ = _row_ref_index;
			_tmp20_ = _row_ref_size;
			if (!(_tmp19_ < _tmp20_)) {
				break;
			}
			_tmp21_ = _row_ref_list;
			_tmp22_ = _row_ref_index;
			_tmp23_ = gee_abstract_list_get ((GeeAbstractList*) _tmp21_, _tmp22_);
			row_ref = (GtkTreeRowReference*) _tmp23_;
			_tmp24_ = row_ref;
			_tmp25_ = gtk_tree_row_reference_get_path (_tmp24_);
			path = _tmp25_;
			_tmp26_ = self->priv->liststore;
			_tmp27_ = path;
			gtk_tree_model_get_iter ((GtkTreeModel*) _tmp26_, &_tmp28_, _tmp27_);
			iter = _tmp28_;
			_tmp29_ = self->priv->liststore;
			_tmp30_ = iter;
			gtk_list_store_remove (_tmp29_, &_tmp30_);
			_gtk_tree_path_free0 (path);
			_gtk_tree_row_reference_free0 (row_ref);
		}
		_g_object_unref0 (_row_ref_list);
	}
	_g_object_unref0 (row_refs);
	__g_list_free__gtk_tree_path_free0_0 (rows);
	_g_object_unref0 (selection);
}


static gchar* rygel_media_pref_section_get_real_uri (RygelMediaPrefSection* self, const gchar* uri) {
	gchar* result = NULL;
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	GQuark _tmp3_ = 0U;
	static GQuark _tmp2_label0 = 0;
	static GQuark _tmp2_label1 = 0;
	static GQuark _tmp2_label2 = 0;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (uri != NULL, NULL);
	_tmp0_ = uri;
	_tmp1_ = _tmp0_;
	_tmp3_ = (NULL == _tmp1_) ? 0 : g_quark_from_string (_tmp1_);
	if (_tmp3_ == ((0 != _tmp2_label0) ? _tmp2_label0 : (_tmp2_label0 = g_quark_from_static_string ("@MUSIC@")))) {
		switch (0) {
			default:
			{
				const gchar* _tmp4_ = NULL;
				gchar* _tmp5_;
				_tmp4_ = g_get_user_special_dir (G_USER_DIRECTORY_MUSIC);
				_tmp5_ = g_strdup (_tmp4_);
				result = _tmp5_;
				return result;
			}
		}
	} else if (_tmp3_ == ((0 != _tmp2_label1) ? _tmp2_label1 : (_tmp2_label1 = g_quark_from_static_string ("@VIDEOS@")))) {
		switch (0) {
			default:
			{
				const gchar* _tmp6_ = NULL;
				gchar* _tmp7_;
				_tmp6_ = g_get_user_special_dir (G_USER_DIRECTORY_VIDEOS);
				_tmp7_ = g_strdup (_tmp6_);
				result = _tmp7_;
				return result;
			}
		}
	} else if (_tmp3_ == ((0 != _tmp2_label2) ? _tmp2_label2 : (_tmp2_label2 = g_quark_from_static_string ("@PICTURES@")))) {
		switch (0) {
			default:
			{
				const gchar* _tmp8_ = NULL;
				gchar* _tmp9_;
				_tmp8_ = g_get_user_special_dir (G_USER_DIRECTORY_PICTURES);
				_tmp9_ = g_strdup (_tmp8_);
				result = _tmp9_;
				return result;
			}
		}
	} else {
		switch (0) {
			default:
			{
				const gchar* _tmp10_;
				gchar* _tmp11_;
				_tmp10_ = uri;
				_tmp11_ = g_strdup (_tmp10_);
				result = _tmp11_;
				return result;
			}
		}
	}
}


static gchar* rygel_media_pref_section_uri_to_magic_variable (RygelMediaPrefSection* self, const gchar* uri) {
	gchar* result = NULL;
	const gchar* _tmp0_;
	const gchar* _tmp1_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (uri != NULL, NULL);
	_tmp0_ = uri;
	_tmp1_ = g_get_user_special_dir (G_USER_DIRECTORY_MUSIC);
	if (g_strcmp0 (_tmp0_, _tmp1_) == 0) {
		gchar* _tmp2_;
		_tmp2_ = g_strdup ("@MUSIC@");
		result = _tmp2_;
		return result;
	} else {
		const gchar* _tmp3_;
		const gchar* _tmp4_ = NULL;
		_tmp3_ = uri;
		_tmp4_ = g_get_user_special_dir (G_USER_DIRECTORY_VIDEOS);
		if (g_strcmp0 (_tmp3_, _tmp4_) == 0) {
			gchar* _tmp5_;
			_tmp5_ = g_strdup ("@VIDEOS@");
			result = _tmp5_;
			return result;
		} else {
			const gchar* _tmp6_;
			const gchar* _tmp7_ = NULL;
			_tmp6_ = uri;
			_tmp7_ = g_get_user_special_dir (G_USER_DIRECTORY_PICTURES);
			if (g_strcmp0 (_tmp6_, _tmp7_) == 0) {
				gchar* _tmp8_;
				_tmp8_ = g_strdup ("@PICTURES@");
				result = _tmp8_;
				return result;
			} else {
				const gchar* _tmp9_;
				gchar* _tmp10_;
				_tmp9_ = uri;
				_tmp10_ = g_strdup (_tmp9_);
				result = _tmp10_;
				return result;
			}
		}
	}
}


static void rygel_media_pref_section_on_tree_selection_changed (RygelMediaPrefSection* self) {
	GtkTreeSelection* _tmp0_;
	gboolean _tmp1_ = FALSE;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->tree_selection;
	_tmp1_ = gtk_tree_selection_get_selected (_tmp0_, NULL, NULL);
	if (_tmp1_) {
		GtkToolButton* _tmp2_;
		_tmp2_ = self->priv->remove_button;
		gtk_widget_set_sensitive ((GtkWidget*) _tmp2_, TRUE);
	} else {
		GtkToolButton* _tmp3_;
		_tmp3_ = self->priv->remove_button;
		gtk_widget_set_sensitive ((GtkWidget*) _tmp3_, FALSE);
	}
}


static void rygel_media_pref_section_class_init (RygelMediaPrefSectionClass * klass) {
	rygel_media_pref_section_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (RygelMediaPrefSectionPrivate));
	RYGEL_PREFERENCES_SECTION_CLASS (klass)->save = rygel_media_pref_section_real_save;
	RYGEL_PREFERENCES_SECTION_CLASS (klass)->set_sensitivity = rygel_media_pref_section_real_set_sensitivity;
	G_OBJECT_CLASS (klass)->finalize = rygel_media_pref_section_finalize;
}


static void rygel_media_pref_section_instance_init (RygelMediaPrefSection * self) {
	self->priv = RYGEL_MEDIA_PREF_SECTION_GET_PRIVATE (self);
}


static void rygel_media_pref_section_finalize (GObject* obj) {
	RygelMediaPrefSection * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, RYGEL_TYPE_MEDIA_PREF_SECTION, RygelMediaPrefSection);
	_g_object_unref0 (self->priv->widgets);
	_g_object_unref0 (self->priv->treeview);
	_g_object_unref0 (self->priv->liststore);
	_g_object_unref0 (self->priv->tree_selection);
	_g_object_unref0 (self->priv->dialog);
	_g_object_unref0 (self->priv->remove_button);
	G_OBJECT_CLASS (rygel_media_pref_section_parent_class)->finalize (obj);
}


GType rygel_media_pref_section_get_type (void) {
	static volatile gsize rygel_media_pref_section_type_id__volatile = 0;
	if (g_once_init_enter (&rygel_media_pref_section_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (RygelMediaPrefSectionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) rygel_media_pref_section_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (RygelMediaPrefSection), 0, (GInstanceInitFunc) rygel_media_pref_section_instance_init, NULL };
		GType rygel_media_pref_section_type_id;
		rygel_media_pref_section_type_id = g_type_register_static (RYGEL_TYPE_PREFERENCES_SECTION, "RygelMediaPrefSection", &g_define_type_info, 0);
		g_once_init_leave (&rygel_media_pref_section_type_id__volatile, rygel_media_pref_section_type_id);
	}
	return rygel_media_pref_section_type_id__volatile;
}



