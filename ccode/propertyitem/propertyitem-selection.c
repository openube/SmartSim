/* propertyitem-selection.c generated by valac 0.24.0, the Vala compiler
 * generated from propertyitem-selection.vala, do not modify */

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
 *   Filename: propertyitem/propertyitem-selection.vala
 *   
 *   Copyright Ashley Newson 2013
 */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_PROPERTY_ITEM (property_item_get_type ())
#define PROPERTY_ITEM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTY_ITEM, PropertyItem))
#define PROPERTY_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTY_ITEM, PropertyItemClass))
#define IS_PROPERTY_ITEM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTY_ITEM))
#define IS_PROPERTY_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTY_ITEM))
#define PROPERTY_ITEM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTY_ITEM, PropertyItemClass))

typedef struct _PropertyItem PropertyItem;
typedef struct _PropertyItemClass PropertyItemClass;
typedef struct _PropertyItemPrivate PropertyItemPrivate;

#define TYPE_PROPERTY_ITEM_SELECTION (property_item_selection_get_type ())
#define PROPERTY_ITEM_SELECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTY_ITEM_SELECTION, PropertyItemSelection))
#define PROPERTY_ITEM_SELECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTY_ITEM_SELECTION, PropertyItemSelectionClass))
#define IS_PROPERTY_ITEM_SELECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTY_ITEM_SELECTION))
#define IS_PROPERTY_ITEM_SELECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTY_ITEM_SELECTION))
#define PROPERTY_ITEM_SELECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTY_ITEM_SELECTION, PropertyItemSelectionClass))

typedef struct _PropertyItemSelection PropertyItemSelection;
typedef struct _PropertyItemSelectionClass PropertyItemSelectionClass;
typedef struct _PropertyItemSelectionPrivate PropertyItemSelectionPrivate;

#define PROPERTY_ITEM_SELECTION_TYPE_OPTION (property_item_selection_option_get_type ())
typedef struct _PropertyItemSelectionOption PropertyItemSelectionOption;

#define TYPE_PROPERTY_SET (property_set_get_type ())
#define PROPERTY_SET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_PROPERTY_SET, PropertySet))
#define PROPERTY_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_PROPERTY_SET, PropertySetClass))
#define IS_PROPERTY_SET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_PROPERTY_SET))
#define IS_PROPERTY_SET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_PROPERTY_SET))
#define PROPERTY_SET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_PROPERTY_SET, PropertySetClass))

typedef struct _PropertySet PropertySet;
typedef struct _PropertySetClass PropertySetClass;
#define _property_item_unref0(var) ((var == NULL) ? NULL : (var = (property_item_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_list_free0(var) ((var == NULL) ? NULL : (var = (g_list_free (var), NULL)))

typedef enum  {
	PROPERTY_ITEM_STRING_ERROR_OPTION_NOT_FOUND
} PropertyItemStringError;
#define PROPERTY_ITEM_STRING_ERROR property_item_string_error_quark ()
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

struct _PropertyItemSelection {
	PropertyItem parent_instance;
	PropertyItemSelectionPrivate * priv;
};

struct _PropertyItemSelectionClass {
	PropertyItemClass parent_class;
};

struct _PropertyItemSelectionOption {
	gchar* value;
	gchar* text;
};

struct _PropertyItemSelectionPrivate {
	PropertyItemSelectionOption* options;
	gint options_length1;
	gint _options_size_;
	gint _selected;
};

typedef enum  {
	PROPERTY_ITEM_ERROR_ITEM_NOT_FOUND
} PropertyItemError;
#define PROPERTY_ITEM_ERROR property_item_error_quark ()

static gpointer property_item_selection_parent_class = NULL;

GQuark property_item_string_error_quark (void);
gpointer property_item_ref (gpointer instance);
void property_item_unref (gpointer instance);
GParamSpec* param_spec_property_item (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void value_set_property_item (GValue* value, gpointer v_object);
void value_take_property_item (GValue* value, gpointer v_object);
gpointer value_get_property_item (const GValue* value);
GType property_item_get_type (void) G_GNUC_CONST;
GType property_item_selection_get_type (void) G_GNUC_CONST;
static GType property_item_selection_option_get_type (void) G_GNUC_CONST G_GNUC_UNUSED;
static PropertyItemSelectionOption* property_item_selection_option_dup (const PropertyItemSelectionOption* self);
static void property_item_selection_option_free (PropertyItemSelectionOption* self);
static void property_item_selection_option_copy (const PropertyItemSelectionOption* self, PropertyItemSelectionOption* dest);
static void property_item_selection_option_destroy (PropertyItemSelectionOption* self);
#define PROPERTY_ITEM_SELECTION_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_PROPERTY_ITEM_SELECTION, PropertyItemSelectionPrivate))
enum  {
	PROPERTY_ITEM_SELECTION_DUMMY_PROPERTY
};
static void _vala_PropertyItemSelectionOption_array_free (PropertyItemSelectionOption* array, gint array_length);
GType property_set_get_type (void) G_GNUC_CONST;
GQuark property_item_error_quark (void);
gchar* property_item_selection_get_data_throw (PropertySet* propertySet, const gchar* name, GError** error);
PropertyItem* property_set_get_item (PropertySet* self, const gchar* name);
gchar* property_item_selection_get_option (PropertyItemSelection* self);
void property_item_selection_set_data_throw (PropertySet* propertySet, const gchar* name, const gchar* value, GError** error);
gint property_item_selection_set_option (PropertyItemSelection* self, const gchar* value);
gchar* property_item_selection_get_data (PropertySet* propertySet, const gchar* name);
void property_item_selection_set_data (PropertySet* propertySet, const gchar* name, const gchar* value);
PropertyItemSelection* property_item_selection_new (const gchar* name, const gchar* description);
PropertyItemSelection* property_item_selection_construct (GType object_type, const gchar* name, const gchar* description);
PropertyItem* property_item_construct (GType object_type, const gchar* name, const gchar* description);
PropertyItemSelection* property_item_selection_new_copy (PropertyItemSelection* source);
PropertyItemSelection* property_item_selection_construct_copy (GType object_type, PropertyItemSelection* source);
static void _vala_array_add93 (PropertyItemSelectionOption** array, int* length, int* size, const PropertyItemSelectionOption* value);
void property_item_selection_add_option (PropertyItemSelection* self, const gchar* value, const gchar* text);
static void _vala_array_add94 (PropertyItemSelectionOption** array, int* length, int* size, const PropertyItemSelectionOption* value);
gint property_item_selection_get_selected (PropertyItemSelection* self);
gchar* property_item_selection_get_option_text (PropertyItemSelection* self);
void property_item_selection_set_selected (PropertyItemSelection* self, gint value);
gint property_item_selection_set_option_text (PropertyItemSelection* self, const gchar* text);
static GtkWidget* property_item_selection_real_create_widget (PropertyItem* base);
static void _vala_array_add95 (GtkRadioButton*** array, int* length, int* size, GtkRadioButton* value);
static void property_item_selection_real_read_widget (PropertyItem* base, GtkWidget* propertyWidget);
static void property_item_selection_finalize (PropertyItem* obj);
static void _vala_array_destroy (gpointer array, gint array_length, GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array, gint array_length, GDestroyNotify destroy_func);


GQuark property_item_string_error_quark (void) {
	return g_quark_from_static_string ("property_item_string_error-quark");
}


static void _vala_PropertyItemSelectionOption_array_free (PropertyItemSelectionOption* array, gint array_length) {
	if (array != NULL) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			property_item_selection_option_destroy (&array[i]);
		}
	}
	g_free (array);
}


gchar* property_item_selection_get_data_throw (PropertySet* propertySet, const gchar* name, GError** error) {
	gchar* result = NULL;
	PropertyItem* propertyItem = NULL;
	PropertySet* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	PropertyItem* _tmp2_ = NULL;
	PropertyItem* _tmp3_ = NULL;
	PropertySet* _tmp7_ = NULL;
	const gchar* _tmp8_ = NULL;
	gchar* _tmp9_ = NULL;
	gchar* _tmp10_ = NULL;
	gchar* _tmp11_ = NULL;
	gchar* _tmp12_ = NULL;
	const gchar* _tmp13_ = NULL;
	gchar* _tmp14_ = NULL;
	gchar* _tmp15_ = NULL;
	gchar* _tmp16_ = NULL;
	gchar* _tmp17_ = NULL;
	GError* _tmp18_ = NULL;
	GError* _tmp19_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (propertySet != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	_tmp0_ = propertySet;
	_tmp1_ = name;
	_tmp2_ = property_set_get_item (_tmp0_, _tmp1_);
	propertyItem = _tmp2_;
	_tmp3_ = propertyItem;
	if (_tmp3_ != NULL) {
		PropertyItem* _tmp4_ = NULL;
		_tmp4_ = propertyItem;
		if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp4_, TYPE_PROPERTY_ITEM_SELECTION)) {
			PropertyItem* _tmp5_ = NULL;
			gchar* _tmp6_ = NULL;
			_tmp5_ = propertyItem;
			_tmp6_ = property_item_selection_get_option (G_TYPE_CHECK_INSTANCE_TYPE (_tmp5_, TYPE_PROPERTY_ITEM_SELECTION) ? ((PropertyItemSelection*) _tmp5_) : NULL);
			result = _tmp6_;
			_property_item_unref0 (propertyItem);
			return result;
		}
	}
	_tmp7_ = propertySet;
	_tmp8_ = ((PropertyItem*) _tmp7_)->name;
	_tmp9_ = g_strconcat ("\"", _tmp8_, NULL);
	_tmp10_ = _tmp9_;
	_tmp11_ = g_strconcat (_tmp10_, "\" does not contain a selection named \"", NULL);
	_tmp12_ = _tmp11_;
	_tmp13_ = name;
	_tmp14_ = g_strconcat (_tmp12_, _tmp13_, NULL);
	_tmp15_ = _tmp14_;
	_tmp16_ = g_strconcat (_tmp15_, "\"", NULL);
	_tmp17_ = _tmp16_;
	_tmp18_ = g_error_new_literal (PROPERTY_ITEM_ERROR, PROPERTY_ITEM_ERROR_ITEM_NOT_FOUND, _tmp17_);
	_tmp19_ = _tmp18_;
	_g_free0 (_tmp17_);
	_g_free0 (_tmp15_);
	_g_free0 (_tmp12_);
	_g_free0 (_tmp10_);
	_inner_error_ = _tmp19_;
	if (_inner_error_->domain == PROPERTY_ITEM_ERROR) {
		g_propagate_error (error, _inner_error_);
		_property_item_unref0 (propertyItem);
		return NULL;
	} else {
		_property_item_unref0 (propertyItem);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
	_property_item_unref0 (propertyItem);
}


void property_item_selection_set_data_throw (PropertySet* propertySet, const gchar* name, const gchar* value, GError** error) {
	PropertyItem* propertyItem = NULL;
	PropertySet* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	PropertyItem* _tmp2_ = NULL;
	PropertyItem* _tmp3_ = NULL;
	PropertySet* _tmp26_ = NULL;
	const gchar* _tmp27_ = NULL;
	gchar* _tmp28_ = NULL;
	gchar* _tmp29_ = NULL;
	gchar* _tmp30_ = NULL;
	gchar* _tmp31_ = NULL;
	const gchar* _tmp32_ = NULL;
	gchar* _tmp33_ = NULL;
	gchar* _tmp34_ = NULL;
	gchar* _tmp35_ = NULL;
	gchar* _tmp36_ = NULL;
	GError* _tmp37_ = NULL;
	GError* _tmp38_ = NULL;
	GError * _inner_error_ = NULL;
	g_return_if_fail (propertySet != NULL);
	g_return_if_fail (name != NULL);
	g_return_if_fail (value != NULL);
	_tmp0_ = propertySet;
	_tmp1_ = name;
	_tmp2_ = property_set_get_item (_tmp0_, _tmp1_);
	propertyItem = _tmp2_;
	_tmp3_ = propertyItem;
	if (_tmp3_ != NULL) {
		PropertyItem* _tmp4_ = NULL;
		_tmp4_ = propertyItem;
		if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp4_, TYPE_PROPERTY_ITEM_SELECTION)) {
			PropertyItem* _tmp5_ = NULL;
			const gchar* _tmp6_ = NULL;
			gint _tmp7_ = 0;
			_tmp5_ = propertyItem;
			_tmp6_ = value;
			_tmp7_ = property_item_selection_set_option (G_TYPE_CHECK_INSTANCE_TYPE (_tmp5_, TYPE_PROPERTY_ITEM_SELECTION) ? ((PropertyItemSelection*) _tmp5_) : NULL, _tmp6_);
			if (_tmp7_ == 1) {
				PropertySet* _tmp8_ = NULL;
				const gchar* _tmp9_ = NULL;
				gchar* _tmp10_ = NULL;
				gchar* _tmp11_ = NULL;
				gchar* _tmp12_ = NULL;
				gchar* _tmp13_ = NULL;
				const gchar* _tmp14_ = NULL;
				gchar* _tmp15_ = NULL;
				gchar* _tmp16_ = NULL;
				gchar* _tmp17_ = NULL;
				gchar* _tmp18_ = NULL;
				const gchar* _tmp19_ = NULL;
				gchar* _tmp20_ = NULL;
				gchar* _tmp21_ = NULL;
				gchar* _tmp22_ = NULL;
				gchar* _tmp23_ = NULL;
				GError* _tmp24_ = NULL;
				GError* _tmp25_ = NULL;
				_tmp8_ = propertySet;
				_tmp9_ = ((PropertyItem*) _tmp8_)->name;
				_tmp10_ = g_strconcat ("\"", _tmp9_, NULL);
				_tmp11_ = _tmp10_;
				_tmp12_ = g_strconcat (_tmp11_, "\"'s selection named \"", NULL);
				_tmp13_ = _tmp12_;
				_tmp14_ = name;
				_tmp15_ = g_strconcat (_tmp13_, _tmp14_, NULL);
				_tmp16_ = _tmp15_;
				_tmp17_ = g_strconcat (_tmp16_, "\" does not contain option \"", NULL);
				_tmp18_ = _tmp17_;
				_tmp19_ = value;
				_tmp20_ = g_strconcat (_tmp18_, _tmp19_, NULL);
				_tmp21_ = _tmp20_;
				_tmp22_ = g_strconcat (_tmp21_, "\"", NULL);
				_tmp23_ = _tmp22_;
				_tmp24_ = g_error_new_literal (PROPERTY_ITEM_STRING_ERROR, PROPERTY_ITEM_STRING_ERROR_OPTION_NOT_FOUND, _tmp23_);
				_tmp25_ = _tmp24_;
				_g_free0 (_tmp23_);
				_g_free0 (_tmp21_);
				_g_free0 (_tmp18_);
				_g_free0 (_tmp16_);
				_g_free0 (_tmp13_);
				_g_free0 (_tmp11_);
				_inner_error_ = _tmp25_;
				if ((_inner_error_->domain == PROPERTY_ITEM_ERROR) || (_inner_error_->domain == PROPERTY_ITEM_STRING_ERROR)) {
					g_propagate_error (error, _inner_error_);
					_property_item_unref0 (propertyItem);
					return;
				} else {
					_property_item_unref0 (propertyItem);
					g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
					g_clear_error (&_inner_error_);
					return;
				}
			}
			_property_item_unref0 (propertyItem);
			return;
		}
	}
	_tmp26_ = propertySet;
	_tmp27_ = ((PropertyItem*) _tmp26_)->name;
	_tmp28_ = g_strconcat ("\"", _tmp27_, NULL);
	_tmp29_ = _tmp28_;
	_tmp30_ = g_strconcat (_tmp29_, "\" does not contain a selection named \"", NULL);
	_tmp31_ = _tmp30_;
	_tmp32_ = name;
	_tmp33_ = g_strconcat (_tmp31_, _tmp32_, NULL);
	_tmp34_ = _tmp33_;
	_tmp35_ = g_strconcat (_tmp34_, "\"", NULL);
	_tmp36_ = _tmp35_;
	_tmp37_ = g_error_new_literal (PROPERTY_ITEM_ERROR, PROPERTY_ITEM_ERROR_ITEM_NOT_FOUND, _tmp36_);
	_tmp38_ = _tmp37_;
	_g_free0 (_tmp36_);
	_g_free0 (_tmp34_);
	_g_free0 (_tmp31_);
	_g_free0 (_tmp29_);
	_inner_error_ = _tmp38_;
	if ((_inner_error_->domain == PROPERTY_ITEM_ERROR) || (_inner_error_->domain == PROPERTY_ITEM_STRING_ERROR)) {
		g_propagate_error (error, _inner_error_);
		_property_item_unref0 (propertyItem);
		return;
	} else {
		_property_item_unref0 (propertyItem);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
	_property_item_unref0 (propertyItem);
}


gchar* property_item_selection_get_data (PropertySet* propertySet, const gchar* name) {
	gchar* result = NULL;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (propertySet != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	{
		gchar* _tmp0_ = NULL;
		PropertySet* _tmp1_ = NULL;
		const gchar* _tmp2_ = NULL;
		gchar* _tmp3_ = NULL;
		gchar* _tmp4_ = NULL;
		_tmp1_ = propertySet;
		_tmp2_ = name;
		_tmp3_ = property_item_selection_get_data_throw (_tmp1_, _tmp2_, &_inner_error_);
		_tmp0_ = _tmp3_;
		if (_inner_error_ != NULL) {
			goto __catch67_g_error;
		}
		_tmp4_ = _tmp0_;
		_tmp0_ = NULL;
		result = _tmp4_;
		_g_free0 (_tmp0_);
		return result;
	}
	goto __finally67;
	__catch67_g_error:
	{
		gchar* _tmp5_ = NULL;
		g_clear_error (&_inner_error_);
		_inner_error_ = NULL;
		_tmp5_ = g_strdup ("");
		result = _tmp5_;
		return result;
	}
	__finally67:
	g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
	g_clear_error (&_inner_error_);
	return NULL;
}


void property_item_selection_set_data (PropertySet* propertySet, const gchar* name, const gchar* value) {
	GError * _inner_error_ = NULL;
	g_return_if_fail (propertySet != NULL);
	g_return_if_fail (name != NULL);
	g_return_if_fail (value != NULL);
	{
		PropertySet* _tmp0_ = NULL;
		const gchar* _tmp1_ = NULL;
		const gchar* _tmp2_ = NULL;
		_tmp0_ = propertySet;
		_tmp1_ = name;
		_tmp2_ = value;
		property_item_selection_set_data_throw (_tmp0_, _tmp1_, _tmp2_, &_inner_error_);
		if (_inner_error_ != NULL) {
			goto __catch68_g_error;
		}
	}
	goto __finally68;
	__catch68_g_error:
	{
		g_clear_error (&_inner_error_);
		_inner_error_ = NULL;
	}
	__finally68:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
}


PropertyItemSelection* property_item_selection_construct (GType object_type, const gchar* name, const gchar* description) {
	PropertyItemSelection* self = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	PropertyItemSelectionOption* _tmp2_ = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (description != NULL, NULL);
	_tmp0_ = name;
	_tmp1_ = description;
	self = (PropertyItemSelection*) property_item_construct (object_type, _tmp0_, _tmp1_);
	_tmp2_ = g_new0 (PropertyItemSelectionOption, 0);
	self->priv->options = (_vala_PropertyItemSelectionOption_array_free (self->priv->options, self->priv->options_length1), NULL);
	self->priv->options = _tmp2_;
	self->priv->options_length1 = 0;
	self->priv->_options_size_ = self->priv->options_length1;
	self->priv->_selected = 0;
	return self;
}


PropertyItemSelection* property_item_selection_new (const gchar* name, const gchar* description) {
	return property_item_selection_construct (TYPE_PROPERTY_ITEM_SELECTION, name, description);
}


static void _vala_array_add93 (PropertyItemSelectionOption** array, int* length, int* size, const PropertyItemSelectionOption* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (PropertyItemSelectionOption, *array, *size);
	}
	(*array)[(*length)++] = *value;
}


PropertyItemSelection* property_item_selection_construct_copy (GType object_type, PropertyItemSelection* source) {
	PropertyItemSelection* self = NULL;
	PropertyItemSelection* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	PropertyItemSelection* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	PropertyItemSelectionOption* _tmp4_ = NULL;
	PropertyItemSelection* _tmp5_ = NULL;
	PropertyItemSelectionOption* _tmp6_ = NULL;
	gint _tmp6__length1 = 0;
	PropertyItemSelection* _tmp11_ = NULL;
	gint _tmp12_ = 0;
	g_return_val_if_fail (source != NULL, NULL);
	_tmp0_ = source;
	_tmp1_ = ((PropertyItem*) _tmp0_)->name;
	_tmp2_ = source;
	_tmp3_ = ((PropertyItem*) _tmp2_)->description;
	self = (PropertyItemSelection*) property_item_construct (object_type, _tmp1_, _tmp3_);
	_tmp4_ = g_new0 (PropertyItemSelectionOption, 0);
	self->priv->options = (_vala_PropertyItemSelectionOption_array_free (self->priv->options, self->priv->options_length1), NULL);
	self->priv->options = _tmp4_;
	self->priv->options_length1 = 0;
	self->priv->_options_size_ = self->priv->options_length1;
	_tmp5_ = source;
	_tmp6_ = _tmp5_->priv->options;
	_tmp6__length1 = _tmp5_->priv->options_length1;
	{
		PropertyItemSelectionOption* option_collection = NULL;
		gint option_collection_length1 = 0;
		gint _option_collection_size_ = 0;
		gint option_it = 0;
		option_collection = _tmp6_;
		option_collection_length1 = _tmp6__length1;
		for (option_it = 0; option_it < _tmp6__length1; option_it = option_it + 1) {
			PropertyItemSelectionOption _tmp7_ = {0};
			PropertyItemSelectionOption option = {0};
			property_item_selection_option_copy (&option_collection[option_it], &_tmp7_);
			option = _tmp7_;
			{
				PropertyItemSelectionOption* _tmp8_ = NULL;
				gint _tmp8__length1 = 0;
				PropertyItemSelectionOption _tmp9_ = {0};
				PropertyItemSelectionOption _tmp10_ = {0};
				_tmp8_ = self->priv->options;
				_tmp8__length1 = self->priv->options_length1;
				_tmp9_ = option;
				property_item_selection_option_copy (&_tmp9_, &_tmp10_);
				_vala_array_add93 (&self->priv->options, &self->priv->options_length1, &self->priv->_options_size_, &_tmp10_);
				property_item_selection_option_destroy (&option);
			}
		}
	}
	_tmp11_ = source;
	_tmp12_ = _tmp11_->priv->_selected;
	self->priv->_selected = _tmp12_;
	return self;
}


PropertyItemSelection* property_item_selection_new_copy (PropertyItemSelection* source) {
	return property_item_selection_construct_copy (TYPE_PROPERTY_ITEM_SELECTION, source);
}


static void _vala_array_add94 (PropertyItemSelectionOption** array, int* length, int* size, const PropertyItemSelectionOption* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (PropertyItemSelectionOption, *array, *size);
	}
	(*array)[(*length)++] = *value;
}


void property_item_selection_add_option (PropertyItemSelection* self, const gchar* value, const gchar* text) {
	PropertyItemSelectionOption option = {0};
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	gchar* _tmp6_ = NULL;
	PropertyItemSelectionOption* _tmp7_ = NULL;
	gint _tmp7__length1 = 0;
	PropertyItemSelectionOption _tmp8_ = {0};
	PropertyItemSelectionOption _tmp9_ = {0};
	g_return_if_fail (self != NULL);
	g_return_if_fail (value != NULL);
	memset (&option, 0, sizeof (PropertyItemSelectionOption));
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (option.value);
	option.value = _tmp1_;
	_tmp3_ = text;
	if (_tmp3_ != NULL) {
		const gchar* _tmp4_ = NULL;
		_tmp4_ = text;
		_tmp2_ = _tmp4_;
	} else {
		const gchar* _tmp5_ = NULL;
		_tmp5_ = value;
		_tmp2_ = _tmp5_;
	}
	_tmp6_ = g_strdup (_tmp2_);
	_g_free0 (option.text);
	option.text = _tmp6_;
	_tmp7_ = self->priv->options;
	_tmp7__length1 = self->priv->options_length1;
	_tmp8_ = option;
	property_item_selection_option_copy (&_tmp8_, &_tmp9_);
	_vala_array_add94 (&self->priv->options, &self->priv->options_length1, &self->priv->_options_size_, &_tmp9_);
	property_item_selection_option_destroy (&option);
}


gchar* property_item_selection_get_option (PropertyItemSelection* self) {
	gchar* result = NULL;
	PropertyItemSelectionOption* _tmp0_ = NULL;
	gint _tmp0__length1 = 0;
	PropertyItemSelectionOption* _tmp2_ = NULL;
	gint _tmp2__length1 = 0;
	gint _tmp3_ = 0;
	gint _tmp4_ = 0;
	PropertyItemSelectionOption _tmp5_ = {0};
	const gchar* _tmp6_ = NULL;
	gchar* _tmp7_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->options;
	_tmp0__length1 = self->priv->options_length1;
	if (_tmp0__length1 == 0) {
		gchar* _tmp1_ = NULL;
		_tmp1_ = g_strdup ("");
		result = _tmp1_;
		return result;
	}
	_tmp2_ = self->priv->options;
	_tmp2__length1 = self->priv->options_length1;
	_tmp3_ = property_item_selection_get_selected (self);
	_tmp4_ = _tmp3_;
	_tmp5_ = _tmp2_[_tmp4_];
	_tmp6_ = _tmp5_.value;
	_tmp7_ = g_strdup (_tmp6_);
	result = _tmp7_;
	return result;
}


gchar* property_item_selection_get_option_text (PropertyItemSelection* self) {
	gchar* result = NULL;
	PropertyItemSelectionOption* _tmp0_ = NULL;
	gint _tmp0__length1 = 0;
	PropertyItemSelectionOption* _tmp2_ = NULL;
	gint _tmp2__length1 = 0;
	gint _tmp3_ = 0;
	gint _tmp4_ = 0;
	PropertyItemSelectionOption _tmp5_ = {0};
	const gchar* _tmp6_ = NULL;
	gchar* _tmp7_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->options;
	_tmp0__length1 = self->priv->options_length1;
	if (_tmp0__length1 == 0) {
		gchar* _tmp1_ = NULL;
		_tmp1_ = g_strdup ("");
		result = _tmp1_;
		return result;
	}
	_tmp2_ = self->priv->options;
	_tmp2__length1 = self->priv->options_length1;
	_tmp3_ = property_item_selection_get_selected (self);
	_tmp4_ = _tmp3_;
	_tmp5_ = _tmp2_[_tmp4_];
	_tmp6_ = _tmp5_.text;
	_tmp7_ = g_strdup (_tmp6_);
	result = _tmp7_;
	return result;
}


gint property_item_selection_set_option (PropertyItemSelection* self, const gchar* value) {
	gint result = 0;
	g_return_val_if_fail (self != NULL, 0);
	g_return_val_if_fail (value != NULL, 0);
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp0_ = FALSE;
			_tmp0_ = TRUE;
			while (TRUE) {
				gint _tmp2_ = 0;
				PropertyItemSelectionOption* _tmp3_ = NULL;
				gint _tmp3__length1 = 0;
				const gchar* _tmp4_ = NULL;
				PropertyItemSelectionOption* _tmp5_ = NULL;
				gint _tmp5__length1 = 0;
				gint _tmp6_ = 0;
				PropertyItemSelectionOption _tmp7_ = {0};
				const gchar* _tmp8_ = NULL;
				if (!_tmp0_) {
					gint _tmp1_ = 0;
					_tmp1_ = i;
					i = _tmp1_ + 1;
				}
				_tmp0_ = FALSE;
				_tmp2_ = i;
				_tmp3_ = self->priv->options;
				_tmp3__length1 = self->priv->options_length1;
				if (!(_tmp2_ < _tmp3__length1)) {
					break;
				}
				_tmp4_ = value;
				_tmp5_ = self->priv->options;
				_tmp5__length1 = self->priv->options_length1;
				_tmp6_ = i;
				_tmp7_ = _tmp5_[_tmp6_];
				_tmp8_ = _tmp7_.value;
				if (g_strcmp0 (_tmp4_, _tmp8_) == 0) {
					gint _tmp9_ = 0;
					_tmp9_ = i;
					property_item_selection_set_selected (self, _tmp9_);
					result = 0;
					return result;
				}
			}
		}
	}
	result = 1;
	return result;
}


gint property_item_selection_set_option_text (PropertyItemSelection* self, const gchar* text) {
	gint result = 0;
	g_return_val_if_fail (self != NULL, 0);
	g_return_val_if_fail (text != NULL, 0);
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp0_ = FALSE;
			_tmp0_ = TRUE;
			while (TRUE) {
				gint _tmp2_ = 0;
				PropertyItemSelectionOption* _tmp3_ = NULL;
				gint _tmp3__length1 = 0;
				const gchar* _tmp4_ = NULL;
				PropertyItemSelectionOption* _tmp5_ = NULL;
				gint _tmp5__length1 = 0;
				gint _tmp6_ = 0;
				PropertyItemSelectionOption _tmp7_ = {0};
				const gchar* _tmp8_ = NULL;
				if (!_tmp0_) {
					gint _tmp1_ = 0;
					_tmp1_ = i;
					i = _tmp1_ + 1;
				}
				_tmp0_ = FALSE;
				_tmp2_ = i;
				_tmp3_ = self->priv->options;
				_tmp3__length1 = self->priv->options_length1;
				if (!(_tmp2_ < _tmp3__length1)) {
					break;
				}
				_tmp4_ = text;
				_tmp5_ = self->priv->options;
				_tmp5__length1 = self->priv->options_length1;
				_tmp6_ = i;
				_tmp7_ = _tmp5_[_tmp6_];
				_tmp8_ = _tmp7_.text;
				if (g_strcmp0 (_tmp4_, _tmp8_) == 0) {
					gint _tmp9_ = 0;
					_tmp9_ = i;
					property_item_selection_set_selected (self, _tmp9_);
					result = 0;
					return result;
				}
			}
		}
	}
	result = 1;
	return result;
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void _vala_array_add95 (GtkRadioButton*** array, int* length, int* size, GtkRadioButton* value) {
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (GtkRadioButton*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}


static GtkWidget* property_item_selection_real_create_widget (PropertyItem* base) {
	PropertyItemSelection * self;
	GtkWidget* result = NULL;
	gint numberOfOptions = 0;
	PropertyItemSelectionOption* _tmp0_ = NULL;
	gint _tmp0__length1 = 0;
	GtkBox* vBox = NULL;
	GtkBox* _tmp1_ = NULL;
	GtkRadioButton** radioButtons = NULL;
	GtkRadioButton** _tmp2_ = NULL;
	gint radioButtons_length1 = 0;
	gint _radioButtons_size_ = 0;
	gint _tmp25_ = 0;
	self = (PropertyItemSelection*) base;
	_tmp0_ = self->priv->options;
	_tmp0__length1 = self->priv->options_length1;
	numberOfOptions = _tmp0__length1;
	_tmp1_ = (GtkBox*) gtk_box_new (GTK_ORIENTATION_VERTICAL, 1);
	g_object_ref_sink (_tmp1_);
	vBox = _tmp1_;
	_tmp2_ = g_new0 (GtkRadioButton*, 0 + 1);
	radioButtons = _tmp2_;
	radioButtons_length1 = 0;
	_radioButtons_size_ = radioButtons_length1;
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp3_ = FALSE;
			_tmp3_ = TRUE;
			while (TRUE) {
				gint _tmp5_ = 0;
				gint _tmp6_ = 0;
				GtkRadioButton* radioButton = NULL;
				gint _tmp7_ = 0;
				GtkRadioButton** _tmp20_ = NULL;
				gint _tmp20__length1 = 0;
				GtkRadioButton* _tmp21_ = NULL;
				GtkRadioButton* _tmp22_ = NULL;
				GtkBox* _tmp23_ = NULL;
				GtkRadioButton* _tmp24_ = NULL;
				if (!_tmp3_) {
					gint _tmp4_ = 0;
					_tmp4_ = i;
					i = _tmp4_ + 1;
				}
				_tmp3_ = FALSE;
				_tmp5_ = i;
				_tmp6_ = numberOfOptions;
				if (!(_tmp5_ < _tmp6_)) {
					break;
				}
				_tmp7_ = i;
				if (_tmp7_ == 0) {
					PropertyItemSelectionOption* _tmp8_ = NULL;
					gint _tmp8__length1 = 0;
					gint _tmp9_ = 0;
					PropertyItemSelectionOption _tmp10_ = {0};
					const gchar* _tmp11_ = NULL;
					GtkRadioButton* _tmp12_ = NULL;
					_tmp8_ = self->priv->options;
					_tmp8__length1 = self->priv->options_length1;
					_tmp9_ = i;
					_tmp10_ = _tmp8_[_tmp9_];
					_tmp11_ = _tmp10_.text;
					_tmp12_ = (GtkRadioButton*) gtk_radio_button_new_with_label (NULL, _tmp11_);
					g_object_ref_sink (_tmp12_);
					_g_object_unref0 (radioButton);
					radioButton = _tmp12_;
				} else {
					GtkRadioButton** _tmp13_ = NULL;
					gint _tmp13__length1 = 0;
					GtkRadioButton* _tmp14_ = NULL;
					PropertyItemSelectionOption* _tmp15_ = NULL;
					gint _tmp15__length1 = 0;
					gint _tmp16_ = 0;
					PropertyItemSelectionOption _tmp17_ = {0};
					const gchar* _tmp18_ = NULL;
					GtkRadioButton* _tmp19_ = NULL;
					_tmp13_ = radioButtons;
					_tmp13__length1 = radioButtons_length1;
					_tmp14_ = _tmp13_[0];
					_tmp15_ = self->priv->options;
					_tmp15__length1 = self->priv->options_length1;
					_tmp16_ = i;
					_tmp17_ = _tmp15_[_tmp16_];
					_tmp18_ = _tmp17_.text;
					_tmp19_ = (GtkRadioButton*) gtk_radio_button_new_with_label_from_widget (_tmp14_, _tmp18_);
					g_object_ref_sink (_tmp19_);
					_g_object_unref0 (radioButton);
					radioButton = _tmp19_;
				}
				_tmp20_ = radioButtons;
				_tmp20__length1 = radioButtons_length1;
				_tmp21_ = radioButton;
				_tmp22_ = _g_object_ref0 (_tmp21_);
				_vala_array_add95 (&radioButtons, &radioButtons_length1, &_radioButtons_size_, _tmp22_);
				_tmp23_ = vBox;
				_tmp24_ = radioButton;
				gtk_box_pack_start (_tmp23_, (GtkWidget*) _tmp24_, FALSE, TRUE, (guint) 1);
				_g_object_unref0 (radioButton);
			}
		}
	}
	_tmp25_ = numberOfOptions;
	if (_tmp25_ > 0) {
		GtkRadioButton** _tmp26_ = NULL;
		gint _tmp26__length1 = 0;
		gint _tmp27_ = 0;
		gint _tmp28_ = 0;
		GtkRadioButton* _tmp29_ = NULL;
		_tmp26_ = radioButtons;
		_tmp26__length1 = radioButtons_length1;
		_tmp27_ = property_item_selection_get_selected (self);
		_tmp28_ = _tmp27_;
		_tmp29_ = _tmp26_[_tmp28_];
		gtk_toggle_button_set_active ((GtkToggleButton*) _tmp29_, TRUE);
	}
	result = (GtkWidget*) vBox;
	radioButtons = (_vala_array_free (radioButtons, radioButtons_length1, (GDestroyNotify) g_object_unref), NULL);
	return result;
}


static void property_item_selection_real_read_widget (PropertyItem* base, GtkWidget* propertyWidget) {
	PropertyItemSelection * self;
	GtkWidget* _tmp0_ = NULL;
	self = (PropertyItemSelection*) base;
	g_return_if_fail (propertyWidget != NULL);
	_tmp0_ = propertyWidget;
	if (_tmp0_ != NULL) {
		GtkWidget* _tmp1_ = NULL;
		_tmp1_ = propertyWidget;
		if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp1_, GTK_TYPE_BOX)) {
			GtkBox* vBox = NULL;
			GtkWidget* _tmp2_ = NULL;
			GtkBox* _tmp3_ = NULL;
			GList* radioButtons = NULL;
			GtkBox* _tmp4_ = NULL;
			GList* _tmp5_ = NULL;
			GList* _tmp6_ = NULL;
			guint _tmp7_ = 0U;
			PropertyItemSelectionOption* _tmp8_ = NULL;
			gint _tmp8__length1 = 0;
			_tmp2_ = propertyWidget;
			_tmp3_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp2_, GTK_TYPE_BOX) ? ((GtkBox*) _tmp2_) : NULL);
			vBox = _tmp3_;
			_tmp4_ = vBox;
			_tmp5_ = gtk_container_get_children ((GtkContainer*) _tmp4_);
			radioButtons = _tmp5_;
			_tmp6_ = radioButtons;
			_tmp7_ = g_list_length (_tmp6_);
			_tmp8_ = self->priv->options;
			_tmp8__length1 = self->priv->options_length1;
			if (_tmp7_ == ((guint) _tmp8__length1)) {
				{
					gint i = 0;
					i = 0;
					{
						gboolean _tmp9_ = FALSE;
						_tmp9_ = TRUE;
						while (TRUE) {
							gint _tmp11_ = 0;
							PropertyItemSelectionOption* _tmp12_ = NULL;
							gint _tmp12__length1 = 0;
							GtkWidget* widget = NULL;
							GList* _tmp13_ = NULL;
							gint _tmp14_ = 0;
							gconstpointer _tmp15_ = NULL;
							GtkWidget* _tmp16_ = NULL;
							GtkWidget* _tmp17_ = NULL;
							if (!_tmp9_) {
								gint _tmp10_ = 0;
								_tmp10_ = i;
								i = _tmp10_ + 1;
							}
							_tmp9_ = FALSE;
							_tmp11_ = i;
							_tmp12_ = self->priv->options;
							_tmp12__length1 = self->priv->options_length1;
							if (!(_tmp11_ < _tmp12__length1)) {
								break;
							}
							_tmp13_ = radioButtons;
							_tmp14_ = i;
							_tmp15_ = g_list_nth_data (_tmp13_, (guint) _tmp14_);
							_tmp16_ = _g_object_ref0 ((GtkWidget*) _tmp15_);
							widget = _tmp16_;
							_tmp17_ = widget;
							if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp17_, GTK_TYPE_RADIO_BUTTON)) {
								GtkWidget* _tmp18_ = NULL;
								gboolean _tmp19_ = FALSE;
								gboolean _tmp20_ = FALSE;
								_tmp18_ = widget;
								_tmp19_ = gtk_toggle_button_get_active ((GtkToggleButton*) (G_TYPE_CHECK_INSTANCE_TYPE (_tmp18_, GTK_TYPE_RADIO_BUTTON) ? ((GtkRadioButton*) _tmp18_) : NULL));
								_tmp20_ = _tmp19_;
								if (_tmp20_ == TRUE) {
									gint _tmp21_ = 0;
									_tmp21_ = i;
									property_item_selection_set_selected (self, _tmp21_);
									_g_object_unref0 (widget);
									_g_list_free0 (radioButtons);
									_g_object_unref0 (vBox);
									return;
								}
							}
							_g_object_unref0 (widget);
						}
					}
				}
			}
			_g_list_free0 (radioButtons);
			_g_object_unref0 (vBox);
		}
	}
}


gint property_item_selection_get_selected (PropertyItemSelection* self) {
	gint result;
	gint _tmp0_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_selected;
	result = _tmp0_;
	return result;
}


void property_item_selection_set_selected (PropertyItemSelection* self, gint value) {
	gboolean _tmp0_ = FALSE;
	gint _tmp1_ = 0;
	g_return_if_fail (self != NULL);
	_tmp1_ = value;
	if (_tmp1_ >= 0) {
		gint _tmp2_ = 0;
		PropertyItemSelectionOption* _tmp3_ = NULL;
		gint _tmp3__length1 = 0;
		_tmp2_ = value;
		_tmp3_ = self->priv->options;
		_tmp3__length1 = self->priv->options_length1;
		_tmp0_ = _tmp2_ < _tmp3__length1;
	} else {
		_tmp0_ = FALSE;
	}
	if (_tmp0_) {
		gint _tmp4_ = 0;
		_tmp4_ = value;
		self->priv->_selected = _tmp4_;
	}
}


static void property_item_selection_option_copy (const PropertyItemSelectionOption* self, PropertyItemSelectionOption* dest) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	_tmp0_ = (*self).value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 ((*dest).value);
	(*dest).value = _tmp1_;
	_tmp2_ = (*self).text;
	_tmp3_ = g_strdup (_tmp2_);
	_g_free0 ((*dest).text);
	(*dest).text = _tmp3_;
}


static void property_item_selection_option_destroy (PropertyItemSelectionOption* self) {
	_g_free0 ((*self).value);
	_g_free0 ((*self).text);
}


static PropertyItemSelectionOption* property_item_selection_option_dup (const PropertyItemSelectionOption* self) {
	PropertyItemSelectionOption* dup;
	dup = g_new0 (PropertyItemSelectionOption, 1);
	property_item_selection_option_copy (self, dup);
	return dup;
}


static void property_item_selection_option_free (PropertyItemSelectionOption* self) {
	property_item_selection_option_destroy (self);
	g_free (self);
}


static GType property_item_selection_option_get_type (void) {
	static volatile gsize property_item_selection_option_type_id__volatile = 0;
	if (g_once_init_enter (&property_item_selection_option_type_id__volatile)) {
		GType property_item_selection_option_type_id;
		property_item_selection_option_type_id = g_boxed_type_register_static ("PropertyItemSelectionOption", (GBoxedCopyFunc) property_item_selection_option_dup, (GBoxedFreeFunc) property_item_selection_option_free);
		g_once_init_leave (&property_item_selection_option_type_id__volatile, property_item_selection_option_type_id);
	}
	return property_item_selection_option_type_id__volatile;
}


static void property_item_selection_class_init (PropertyItemSelectionClass * klass) {
	property_item_selection_parent_class = g_type_class_peek_parent (klass);
	PROPERTY_ITEM_CLASS (klass)->finalize = property_item_selection_finalize;
	g_type_class_add_private (klass, sizeof (PropertyItemSelectionPrivate));
	PROPERTY_ITEM_CLASS (klass)->create_widget = property_item_selection_real_create_widget;
	PROPERTY_ITEM_CLASS (klass)->read_widget = property_item_selection_real_read_widget;
}


static void property_item_selection_instance_init (PropertyItemSelection * self) {
	self->priv = PROPERTY_ITEM_SELECTION_GET_PRIVATE (self);
}


static void property_item_selection_finalize (PropertyItem* obj) {
	PropertyItemSelection * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_PROPERTY_ITEM_SELECTION, PropertyItemSelection);
	self->priv->options = (_vala_PropertyItemSelectionOption_array_free (self->priv->options, self->priv->options_length1), NULL);
	PROPERTY_ITEM_CLASS (property_item_selection_parent_class)->finalize (obj);
}


GType property_item_selection_get_type (void) {
	static volatile gsize property_item_selection_type_id__volatile = 0;
	if (g_once_init_enter (&property_item_selection_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (PropertyItemSelectionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) property_item_selection_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (PropertyItemSelection), 0, (GInstanceInitFunc) property_item_selection_instance_init, NULL };
		GType property_item_selection_type_id;
		property_item_selection_type_id = g_type_register_static (TYPE_PROPERTY_ITEM, "PropertyItemSelection", &g_define_type_info, 0);
		g_once_init_leave (&property_item_selection_type_id__volatile, property_item_selection_type_id);
	}
	return property_item_selection_type_id__volatile;
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



