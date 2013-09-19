/* propertiesquery.c generated by valac 0.20.1, the Vala compiler
 * generated from propertiesquery.vala, do not modify */

/* 
 * SmartSim - Digital Logic Circuit Designer and Simulator
 *   
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *   
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *   
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *   
 *   Filename: propertiesquery.vala
 *   
 *   Copyright Ashley Newson 2013
 */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <gobject/gvaluecollector.h>


#define TYPE_PROPERTIES_QUERY (properties_query_get_type ())
#define PROPERTIES_QUERY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTIES_QUERY, PropertiesQuery))
#define PROPERTIES_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTIES_QUERY, PropertiesQueryClass))
#define IS_PROPERTIES_QUERY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTIES_QUERY))
#define IS_PROPERTIES_QUERY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTIES_QUERY))
#define PROPERTIES_QUERY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTIES_QUERY, PropertiesQueryClass))

typedef struct _PropertiesQuery PropertiesQuery;
typedef struct _PropertiesQueryClass PropertiesQueryClass;
typedef struct _PropertiesQueryPrivate PropertiesQueryPrivate;

#define TYPE_PROPERTY_ITEM (property_item_get_type ())
#define PROPERTY_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTY_ITEM, PropertyItem))
#define PROPERTY_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTY_ITEM, PropertyItemClass))
#define IS_PROPERTY_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTY_ITEM))
#define IS_PROPERTY_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTY_ITEM))
#define PROPERTY_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTY_ITEM, PropertyItemClass))

typedef struct _PropertyItem PropertyItem;
typedef struct _PropertyItemClass PropertyItemClass;

#define TYPE_PROPERTY_SET (property_set_get_type ())
#define PROPERTY_SET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTY_SET, PropertySet))
#define PROPERTY_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTY_SET, PropertySetClass))
#define IS_PROPERTY_SET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTY_SET))
#define IS_PROPERTY_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTY_SET))
#define PROPERTY_SET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTY_SET, PropertySetClass))

typedef struct _PropertySet PropertySet;
typedef struct _PropertySetClass PropertySetClass;
#define _property_item_unref0(var) ((var == NULL) ? NULL : (var = (property_item_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _PropertyItemPrivate PropertyItemPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _PropertySetPrivate PropertySetPrivate;
typedef struct _ParamSpecPropertiesQuery ParamSpecPropertiesQuery;

struct _PropertiesQuery {
	GTypeInstance parent_instance;
	volatile int ref_count;
	PropertiesQueryPrivate * priv;
};

struct _PropertiesQueryClass {
	GTypeClass parent_class;
	void (*finalize) (PropertiesQuery *self);
};

struct _PropertiesQueryPrivate {
	PropertySet* propertySet;
	GtkDialog* dialog;
	GtkLabel* titleNameLabel;
	GtkLabel* titleDescriptionLabel;
	GtkBox** propertyVBoxes;
	gint propertyVBoxes_length1;
	gint _propertyVBoxes_size_;
	GtkLabel** nameLabels;
	gint nameLabels_length1;
	gint _nameLabels_size_;
	GtkLabel** descriptionLabels;
	gint descriptionLabels_length1;
	gint _descriptionLabels_size_;
	GtkWidget** propertyWidgets;
	gint propertyWidgets_length1;
	gint _propertyWidgets_size_;
	GtkButton* applyButton;
	GtkButton* cancelButton;
};

struct _PropertyItem {
	GTypeInstance parent_instance;
	volatile int ref_count;
	PropertyItemPrivate * priv;
	gchar* name;
	gchar* description;
};

struct _PropertyItemClass {
	GTypeClass parent_class;
	void (*finalize) (PropertyItem *self);
	GtkWidget* (*create_widget) (PropertyItem* self);
	void (*read_widget) (PropertyItem* self, GtkWidget* propertyWidget);
};

struct _PropertySet {
	PropertyItem parent_instance;
	PropertySetPrivate * priv;
	PropertyItem** propertyItems;
	gint propertyItems_length1;
};

struct _PropertySetClass {
	PropertyItemClass parent_class;
};

struct _ParamSpecPropertiesQuery {
	GParamSpec parent_instance;
};


static gpointer properties_query_parent_class = NULL;

gpointer properties_query_ref (gpointer instance);
void properties_query_unref (gpointer instance);
GParamSpec* param_spec_properties_query (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_properties_query (GValue* value, gpointer v_object);
void value_take_properties_query (GValue* value, gpointer v_object);
gpointer value_get_properties_query (const GValue* value);
GType properties_query_get_type (void) G_GNUC_CONST;
gpointer property_item_ref (gpointer instance);
void property_item_unref (gpointer instance);
GParamSpec* param_spec_property_item (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_property_item (GValue* value, gpointer v_object);
void value_take_property_item (GValue* value, gpointer v_object);
gpointer value_get_property_item (const GValue* value);
GType property_item_get_type (void) G_GNUC_CONST;
GType property_set_get_type (void) G_GNUC_CONST;
#define PROPERTIES_QUERY_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_PROPERTIES_QUERY, PropertiesQueryPrivate))
enum  {
	PROPERTIES_QUERY_DUMMY_PROPERTY
};
PropertiesQuery* properties_query_new (const gchar* title, GtkWindow* parent, PropertySet* propertySet);
PropertiesQuery* properties_query_construct (GType object_type, const gchar* title, GtkWindow* parent, PropertySet* propertySet);
static void _vala_array_add83 (GtkBox*** array, int* length, int* size, GtkBox* value);
static void _vala_array_add84 (GtkLabel*** array, int* length, int* size, GtkLabel* value);
static void _vala_array_add85 (GtkLabel*** array, int* length, int* size, GtkLabel* value);
GtkWidget* property_item_create_widget (PropertyItem* self);
static void _vala_array_add86 (GtkWidget*** array, int* length, int* size, GtkWidget* value);
void properties_query_response_handler (PropertiesQuery* self, gint response_id);
static void _properties_query_response_handler_gtk_dialog_response (GtkDialog* _sender, gint response_id, gpointer self);
gboolean properties_query_apply_changes (PropertiesQuery* self);
gint properties_query_run (PropertiesQuery* self);
void property_item_read_widget (PropertyItem* self, GtkWidget* propertyWidget);
static void properties_query_finalize (PropertiesQuery* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


/**
 * Creates a new PropertyQuery with the title //title//, openned by
 * //parent//, to edit //propertySet//.
 */
static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static gpointer _property_item_ref0 (gpointer self) {
	return self ? property_item_ref (self) : NULL;
}


static void _vala_array_add83 (GtkBox*** array, int* length, int* size, GtkBox* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (GtkBox*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}


static void _vala_array_add84 (GtkLabel*** array, int* length, int* size, GtkLabel* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (GtkLabel*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}


static void _vala_array_add85 (GtkLabel*** array, int* length, int* size, GtkLabel* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (GtkLabel*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}


static void _vala_array_add86 (GtkWidget*** array, int* length, int* size, GtkWidget* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (GtkWidget*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}


static void _properties_query_response_handler_gtk_dialog_response (GtkDialog* _sender, gint response_id, gpointer self) {
	properties_query_response_handler (self, response_id);
}


PropertiesQuery* properties_query_construct (GType object_type, const gchar* title, GtkWindow* parent, PropertySet* propertySet) {
	PropertiesQuery* self = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* _tmp2_;
	const gchar* _tmp3_;
	const gchar* _tmp7_;
	GtkWindow* _tmp8_;
	GtkDialog* _tmp9_;
	GtkDialog* _tmp10_;
	GtkBox* _tmp11_ = NULL;
	GtkBox* _tmp12_;
	GtkBox* content;
	GtkDialog* _tmp13_;
	GtkDialog* _tmp14_;
	PropertySet* _tmp15_;
	const gchar* _tmp16_;
	GtkLabel* _tmp17_;
	PropertySet* _tmp18_;
	const gchar* _tmp19_;
	GtkLabel* _tmp20_;
	GtkBox* _tmp21_;
	GtkLabel* _tmp22_;
	GtkBox* _tmp23_;
	GtkLabel* _tmp24_;
	GtkDialog* _tmp74_;
	GtkButton* _tmp75_;
	GtkDialog* _tmp76_;
	GtkButton* _tmp77_;
	GtkButton* _tmp78_;
	GtkDialog* _tmp79_;
	GtkButton* _tmp80_;
	PropertySet* _tmp81_;
	PropertySet* _tmp82_;
	GtkDialog* _tmp83_;
	g_return_val_if_fail (propertySet != NULL, NULL);
	self = (PropertiesQuery*) g_type_create_instance (object_type);
	_tmp0_ = title;
	_tmp1_ = g_strdup (_tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = _tmp2_;
	if (_tmp3_ == NULL) {
		PropertySet* _tmp4_;
		const gchar* _tmp5_;
		gchar* _tmp6_;
		_tmp4_ = propertySet;
		_tmp5_ = ((PropertyItem*) _tmp4_)->name;
		_tmp6_ = g_strconcat ("Properties - ", _tmp5_, NULL);
		_g_free0 (_tmp2_);
		_tmp2_ = _tmp6_;
	}
	_tmp7_ = _tmp2_;
	_tmp8_ = parent;
	_tmp9_ = (GtkDialog*) gtk_dialog_new_with_buttons (_tmp7_, _tmp8_, GTK_DIALOG_MODAL, NULL);
	g_object_ref_sink (_tmp9_);
	_g_object_unref0 (self->priv->dialog);
	self->priv->dialog = _tmp9_;
	_tmp10_ = self->priv->dialog;
	_tmp11_ = gtk_dialog_get_content_area (_tmp10_);
	_tmp12_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp11_, GTK_TYPE_BOX) ? ((GtkBox*) _tmp11_) : NULL);
	content = _tmp12_;
	_tmp13_ = self->priv->dialog;
	gtk_window_set_default_size ((GtkWindow*) _tmp13_, 200, 150);
	_tmp14_ = self->priv->dialog;
	gtk_container_set_border_width ((GtkContainer*) _tmp14_, (guint) 1);
	_tmp15_ = propertySet;
	_tmp16_ = ((PropertyItem*) _tmp15_)->name;
	_tmp17_ = (GtkLabel*) gtk_label_new (_tmp16_);
	g_object_ref_sink (_tmp17_);
	_g_object_unref0 (self->priv->titleNameLabel);
	self->priv->titleNameLabel = _tmp17_;
	_tmp18_ = propertySet;
	_tmp19_ = ((PropertyItem*) _tmp18_)->description;
	_tmp20_ = (GtkLabel*) gtk_label_new (_tmp19_);
	g_object_ref_sink (_tmp20_);
	_g_object_unref0 (self->priv->titleDescriptionLabel);
	self->priv->titleDescriptionLabel = _tmp20_;
	_tmp21_ = content;
	_tmp22_ = self->priv->titleNameLabel;
	gtk_box_pack_start (_tmp21_, (GtkWidget*) _tmp22_, FALSE, TRUE, (guint) 4);
	_tmp23_ = content;
	_tmp24_ = self->priv->titleDescriptionLabel;
	gtk_box_pack_start (_tmp23_, (GtkWidget*) _tmp24_, FALSE, TRUE, (guint) 1);
	{
		gint i;
		i = 0;
		{
			gboolean _tmp25_;
			_tmp25_ = TRUE;
			while (TRUE) {
				gboolean _tmp26_;
				gint _tmp28_;
				PropertySet* _tmp29_;
				PropertyItem** _tmp30_;
				gint _tmp30__length1;
				GtkBox* _tmp31_;
				GtkSeparator* _tmp32_;
				GtkSeparator* _tmp33_;
				PropertySet* _tmp34_;
				PropertyItem** _tmp35_;
				gint _tmp35__length1;
				gint _tmp36_;
				PropertyItem* _tmp37_;
				PropertyItem* _tmp38_;
				PropertyItem* propertyItem;
				PropertyItem* _tmp39_;
				const gchar* _tmp40_;
				gchar* _tmp41_;
				gchar* name;
				PropertyItem* _tmp42_;
				const gchar* _tmp43_;
				gchar* _tmp44_;
				gchar* description;
				GtkBox* _tmp45_;
				GtkBox* propertyVBox;
				GtkBox** _tmp46_;
				gint _tmp46__length1;
				GtkBox* _tmp47_;
				GtkBox* _tmp48_;
				const gchar* _tmp49_;
				GtkLabel* _tmp50_;
				GtkLabel* nameLabel;
				GtkLabel** _tmp51_;
				gint _tmp51__length1;
				GtkLabel* _tmp52_;
				GtkLabel* _tmp53_;
				const gchar* _tmp54_;
				GtkLabel* _tmp55_;
				GtkLabel* descriptionLabel;
				GtkLabel* _tmp56_;
				GtkLabel** _tmp57_;
				gint _tmp57__length1;
				GtkLabel* _tmp58_;
				GtkLabel* _tmp59_;
				GtkBox* _tmp60_;
				GtkLabel* _tmp61_;
				const gchar* _tmp62_;
				PropertyItem* _tmp65_;
				GtkWidget* _tmp66_ = NULL;
				GtkWidget* propertyWidget;
				GtkWidget** _tmp67_;
				gint _tmp67__length1;
				GtkWidget* _tmp68_;
				GtkWidget* _tmp69_;
				GtkBox* _tmp70_;
				GtkWidget* _tmp71_;
				GtkBox* _tmp72_;
				GtkBox* _tmp73_;
				_tmp26_ = _tmp25_;
				if (!_tmp26_) {
					gint _tmp27_;
					_tmp27_ = i;
					i = _tmp27_ + 1;
				}
				_tmp25_ = FALSE;
				_tmp28_ = i;
				_tmp29_ = propertySet;
				_tmp30_ = _tmp29_->propertyItems;
				_tmp30__length1 = _tmp29_->propertyItems_length1;
				if (!(_tmp28_ < _tmp30__length1)) {
					break;
				}
				_tmp31_ = content;
				_tmp32_ = (GtkSeparator*) gtk_separator_new (GTK_ORIENTATION_HORIZONTAL);
				g_object_ref_sink (_tmp32_);
				_tmp33_ = _tmp32_;
				gtk_box_pack_start (_tmp31_, (GtkWidget*) _tmp33_, FALSE, FALSE, (guint) 3);
				_g_object_unref0 (_tmp33_);
				_tmp34_ = propertySet;
				_tmp35_ = _tmp34_->propertyItems;
				_tmp35__length1 = _tmp34_->propertyItems_length1;
				_tmp36_ = i;
				_tmp37_ = _tmp35_[_tmp36_];
				_tmp38_ = _property_item_ref0 (_tmp37_);
				propertyItem = _tmp38_;
				_tmp39_ = propertyItem;
				_tmp40_ = _tmp39_->name;
				_tmp41_ = g_strdup (_tmp40_);
				name = _tmp41_;
				_tmp42_ = propertyItem;
				_tmp43_ = _tmp42_->description;
				_tmp44_ = g_strdup (_tmp43_);
				description = _tmp44_;
				_tmp45_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_VERTICAL, 1);
				g_object_ref_sink (_tmp45_);
				propertyVBox = _tmp45_;
				_tmp46_ = self->priv->propertyVBoxes;
				_tmp46__length1 = self->priv->propertyVBoxes_length1;
				_tmp47_ = propertyVBox;
				_tmp48_ = _g_object_ref0 (_tmp47_);
				_vala_array_add83 (&self->priv->propertyVBoxes, &self->priv->propertyVBoxes_length1, &self->priv->_propertyVBoxes_size_, _tmp48_);
				_tmp49_ = name;
				_tmp50_ = (GtkLabel*) gtk_label_new (_tmp49_);
				g_object_ref_sink (_tmp50_);
				nameLabel = _tmp50_;
				_tmp51_ = self->priv->nameLabels;
				_tmp51__length1 = self->priv->nameLabels_length1;
				_tmp52_ = nameLabel;
				_tmp53_ = _g_object_ref0 (_tmp52_);
				_vala_array_add84 (&self->priv->nameLabels, &self->priv->nameLabels_length1, &self->priv->_nameLabels_size_, _tmp53_);
				_tmp54_ = description;
				_tmp55_ = (GtkLabel*) gtk_label_new (_tmp54_);
				g_object_ref_sink (_tmp55_);
				descriptionLabel = _tmp55_;
				_tmp56_ = descriptionLabel;
				g_object_set (_tmp56_, "wrap", TRUE, NULL);
				_tmp57_ = self->priv->descriptionLabels;
				_tmp57__length1 = self->priv->descriptionLabels_length1;
				_tmp58_ = descriptionLabel;
				_tmp59_ = _g_object_ref0 (_tmp58_);
				_vala_array_add85 (&self->priv->descriptionLabels, &self->priv->descriptionLabels_length1, &self->priv->_descriptionLabels_size_, _tmp59_);
				_tmp60_ = propertyVBox;
				_tmp61_ = nameLabel;
				gtk_box_pack_start (_tmp60_, (GtkWidget*) _tmp61_, FALSE, TRUE, (guint) 4);
				_tmp62_ = description;
				if (g_strcmp0 (_tmp62_, "") != 0) {
					GtkBox* _tmp63_;
					GtkLabel* _tmp64_;
					_tmp63_ = propertyVBox;
					_tmp64_ = descriptionLabel;
					gtk_box_pack_start (_tmp63_, (GtkWidget*) _tmp64_, FALSE, TRUE, (guint) 1);
				}
				_tmp65_ = propertyItem;
				_tmp66_ = property_item_create_widget (_tmp65_);
				propertyWidget = _tmp66_;
				_tmp67_ = self->priv->propertyWidgets;
				_tmp67__length1 = self->priv->propertyWidgets_length1;
				_tmp68_ = propertyWidget;
				_tmp69_ = _g_object_ref0 (_tmp68_);
				_vala_array_add86 (&self->priv->propertyWidgets, &self->priv->propertyWidgets_length1, &self->priv->_propertyWidgets_size_, _tmp69_);
				_tmp70_ = propertyVBox;
				_tmp71_ = propertyWidget;
				gtk_box_pack_start (_tmp70_, _tmp71_, FALSE, TRUE, (guint) 1);
				_tmp72_ = content;
				_tmp73_ = propertyVBox;
				gtk_box_pack_start (_tmp72_, (GtkWidget*) _tmp73_, FALSE, TRUE, (guint) 1);
				_g_object_unref0 (propertyWidget);
				_g_object_unref0 (descriptionLabel);
				_g_object_unref0 (nameLabel);
				_g_object_unref0 (propertyVBox);
				_g_free0 (description);
				_g_free0 (name);
				_property_item_unref0 (propertyItem);
			}
		}
	}
	_tmp74_ = self->priv->dialog;
	g_signal_connect (_tmp74_, "response", (GCallback) _properties_query_response_handler_gtk_dialog_response, self);
	_tmp75_ = (GtkButton*) gtk_button_new_with_label ("Cancel");
	g_object_ref_sink (_tmp75_);
	_g_object_unref0 (self->priv->cancelButton);
	self->priv->cancelButton = _tmp75_;
	_tmp76_ = self->priv->dialog;
	_tmp77_ = self->priv->cancelButton;
	gtk_dialog_add_action_widget (_tmp76_, (GtkWidget*) _tmp77_, (gint) GTK_RESPONSE_CANCEL);
	_tmp78_ = (GtkButton*) gtk_button_new_with_label ("Apply");
	g_object_ref_sink (_tmp78_);
	_g_object_unref0 (self->priv->applyButton);
	self->priv->applyButton = _tmp78_;
	_tmp79_ = self->priv->dialog;
	_tmp80_ = self->priv->applyButton;
	gtk_dialog_add_action_widget (_tmp79_, (GtkWidget*) _tmp80_, (gint) GTK_RESPONSE_APPLY);
	_tmp81_ = propertySet;
	_tmp82_ = _property_item_ref0 (_tmp81_);
	_property_item_unref0 (self->priv->propertySet);
	self->priv->propertySet = _tmp82_;
	_tmp83_ = self->priv->dialog;
	gtk_widget_show_all ((GtkWidget*) _tmp83_);
	_g_object_unref0 (content);
	_g_free0 (_tmp2_);
	return self;
}


PropertiesQuery* properties_query_new (const gchar* title, GtkWindow* parent, PropertySet* propertySet) {
	return properties_query_construct (TYPE_PROPERTIES_QUERY, title, parent, propertySet);
}


/**
 * Handles any action which closes the dialog (apply or cancel).
 */
void properties_query_response_handler (PropertiesQuery* self, gint response_id) {
	gint _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = response_id;
	switch (_tmp0_) {
		case GTK_RESPONSE_APPLY:
		{
			properties_query_apply_changes (self);
			break;
		}
		case GTK_RESPONSE_CANCEL:
		{
			break;
		}
		default:
		break;
	}
}


/**
 * Makes the dialog modal, and waits for the dialog to close.
 */
gint properties_query_run (PropertiesQuery* self) {
	gint result = 0;
	gint response_id = 0;
	GtkDialog* _tmp0_;
	gint _tmp1_ = 0;
	GtkDialog* _tmp2_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->dialog;
	_tmp1_ = gtk_dialog_run (_tmp0_);
	response_id = _tmp1_;
	_tmp2_ = self->priv->dialog;
	gtk_widget_destroy ((GtkWidget*) _tmp2_);
	result = response_id;
	return result;
}


/**
 * Copies the values stored in GTK widgets into the PropertySet.
 */
gboolean properties_query_apply_changes (PropertiesQuery* self) {
	gboolean result = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	{
		gint i;
		i = 0;
		{
			gboolean _tmp0_;
			_tmp0_ = TRUE;
			while (TRUE) {
				gboolean _tmp1_;
				gint _tmp3_;
				PropertySet* _tmp4_;
				PropertyItem** _tmp5_;
				gint _tmp5__length1;
				PropertySet* _tmp6_;
				PropertyItem** _tmp7_;
				gint _tmp7__length1;
				gint _tmp8_;
				PropertyItem* _tmp9_;
				PropertyItem* _tmp10_;
				PropertyItem* propertyItem;
				GtkWidget** _tmp11_;
				gint _tmp11__length1;
				gint _tmp12_;
				GtkWidget* _tmp13_;
				GtkWidget* _tmp14_;
				GtkWidget* propertyWidget;
				PropertyItem* _tmp15_;
				GtkWidget* _tmp16_;
				_tmp1_ = _tmp0_;
				if (!_tmp1_) {
					gint _tmp2_;
					_tmp2_ = i;
					i = _tmp2_ + 1;
				}
				_tmp0_ = FALSE;
				_tmp3_ = i;
				_tmp4_ = self->priv->propertySet;
				_tmp5_ = _tmp4_->propertyItems;
				_tmp5__length1 = _tmp4_->propertyItems_length1;
				if (!(_tmp3_ < _tmp5__length1)) {
					break;
				}
				_tmp6_ = self->priv->propertySet;
				_tmp7_ = _tmp6_->propertyItems;
				_tmp7__length1 = _tmp6_->propertyItems_length1;
				_tmp8_ = i;
				_tmp9_ = _tmp7_[_tmp8_];
				_tmp10_ = _property_item_ref0 (_tmp9_);
				propertyItem = _tmp10_;
				_tmp11_ = self->priv->propertyWidgets;
				_tmp11__length1 = self->priv->propertyWidgets_length1;
				_tmp12_ = i;
				_tmp13_ = _tmp11_[_tmp12_];
				_tmp14_ = _g_object_ref0 (_tmp13_);
				propertyWidget = _tmp14_;
				_tmp15_ = propertyItem;
				_tmp16_ = propertyWidget;
				property_item_read_widget (_tmp15_, _tmp16_);
				_g_object_unref0 (propertyWidget);
				_property_item_unref0 (propertyItem);
			}
		}
	}
	result = FALSE;
	return result;
}


static void value_properties_query_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void value_properties_query_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		properties_query_unref (value->data[0].v_pointer);
	}
}


static void value_properties_query_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = properties_query_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer value_properties_query_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* value_properties_query_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		PropertiesQuery* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = properties_query_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* value_properties_query_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	PropertiesQuery** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = properties_query_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* param_spec_properties_query (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	ParamSpecPropertiesQuery* spec;
	g_return_val_if_fail (g_type_is_a (object_type, TYPE_PROPERTIES_QUERY), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer value_get_properties_query (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_PROPERTIES_QUERY), NULL);
	return value->data[0].v_pointer;
}


void value_set_properties_query (GValue* value, gpointer v_object) {
	PropertiesQuery* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_PROPERTIES_QUERY));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_PROPERTIES_QUERY));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		properties_query_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		properties_query_unref (old);
	}
}


void value_take_properties_query (GValue* value, gpointer v_object) {
	PropertiesQuery* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, TYPE_PROPERTIES_QUERY));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, TYPE_PROPERTIES_QUERY));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		properties_query_unref (old);
	}
}


static void properties_query_class_init (PropertiesQueryClass * klass) {
	properties_query_parent_class = g_type_class_peek_parent (klass);
	PROPERTIES_QUERY_CLASS (klass)->finalize = properties_query_finalize;
	g_type_class_add_private (klass, sizeof (PropertiesQueryPrivate));
}


static void properties_query_instance_init (PropertiesQuery * self) {
	self->priv = PROPERTIES_QUERY_GET_PRIVATE (self);
	self->ref_count = 1;
}


static void properties_query_finalize (PropertiesQuery* obj) {
	PropertiesQuery * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_PROPERTIES_QUERY, PropertiesQuery);
	_property_item_unref0 (self->priv->propertySet);
	_g_object_unref0 (self->priv->dialog);
	_g_object_unref0 (self->priv->titleNameLabel);
	_g_object_unref0 (self->priv->titleDescriptionLabel);
	self->priv->propertyVBoxes = (_vala_array_free (self->priv->propertyVBoxes, self->priv->propertyVBoxes_length1, (GDestroyNotify) g_object_unref), NULL);
	self->priv->nameLabels = (_vala_array_free (self->priv->nameLabels, self->priv->nameLabels_length1, (GDestroyNotify) g_object_unref), NULL);
	self->priv->descriptionLabels = (_vala_array_free (self->priv->descriptionLabels, self->priv->descriptionLabels_length1, (GDestroyNotify) g_object_unref), NULL);
	self->priv->propertyWidgets = (_vala_array_free (self->priv->propertyWidgets, self->priv->propertyWidgets_length1, (GDestroyNotify) g_object_unref), NULL);
	_g_object_unref0 (self->priv->applyButton);
	_g_object_unref0 (self->priv->cancelButton);
}


/**
 * User interface to edit a PropertySet.
 * 
 * Creates a GTK Dialog which allows the editting of a PropertySet.
 */
GType properties_query_get_type (void) {
	static volatile gsize properties_query_type_id__volatile = 0;
	if (g_once_init_enter (&properties_query_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { value_properties_query_init, value_properties_query_free_value, value_properties_query_copy_value, value_properties_query_peek_pointer, "p", value_properties_query_collect_value, "p", value_properties_query_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (PropertiesQueryClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) properties_query_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (PropertiesQuery), 0, (GInstanceInitFunc) properties_query_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType properties_query_type_id;
		properties_query_type_id = g_type_register_fundamental (g_type_fundamental_next (), "PropertiesQuery", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&properties_query_type_id__volatile, properties_query_type_id);
	}
	return properties_query_type_id__volatile;
}


gpointer properties_query_ref (gpointer instance) {
	PropertiesQuery* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void properties_query_unref (gpointer instance) {
	PropertiesQuery* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		PROPERTIES_QUERY_GET_CLASS (self)->finalize (self);
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



