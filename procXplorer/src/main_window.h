// This file is auto-generated
#pragma once
#include <array>
#include <limits>
#include <slint.h>
#include <cmath>
static_assert(1 == SLINT_VERSION_MAJOR && 17 == SLINT_VERSION_MINOR && 1 == SLINT_VERSION_PATCH, "This file was generated with Slint compiler version 1.17.1, but the Slint library used is " SLINT_VERSION_STRING ". The version numbers must match exactly.");
class MainWindow;

class SharedGlobals;

class FocusBorder_root_1;

class Button_root_3;

class StandardTableView_root_15;

class FocusBorder_root_1 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<float> field_root_1_height;
    slint::private_api::Property<float> field_root_1_width;
    slint::cbindgen_private::BasicBorderRectangle field_root_1 = {};
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_2 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
};

class Component_image_7 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Button_root_3 const> parent;
    slint::cbindgen_private::ImageItem field_image_7 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_3 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Button_root_3 const * parent) -> slint::ComponentHandle<Component_image_7>;
    ~Component_image_7 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_image_7>;
};

class Component_text_9 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Button_root_3 const> parent;
    slint::cbindgen_private::SimpleText field_text_9 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_3 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Button_root_3 const * parent) -> slint::ComponentHandle<Component_text_9>;
    ~Component_text_9 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_9>;
};

class Component_focusborder_13 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Button_root_3 const> parent;
    FocusBorder_root_1 field_focusborder_13;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_3 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Button_root_3 const * parent) -> slint::ComponentHandle<Component_focusborder_13>;
    ~Component_focusborder_13 ();
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_focusborder_13>;
};

class Button_root_3 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<bool> field_root_3_checked;
    slint::private_api::Property<bool> field_root_3_has_focus;
    slint::private_api::Property<float> field_root_3_height;
    slint::private_api::Property<float> field_root_3_i_background_4_width;
    slint::private_api::Property<slint::SharedVector<float>> field_root_3_i_layout_6_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_3_i_layout_6_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_3_i_layout_6_layoutinfo_v;
    slint::private_api::Property<float> field_root_3_i_layout_6_min_height;
    slint::private_api::Property<float> field_root_3_i_layout_6_padding_bottom;
    slint::private_api::Property<float> field_root_3_i_layout_6_padding_top;
    slint::private_api::Property<slint::Image> field_root_3_icon;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_3_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_3_layoutinfo_v;
    slint::private_api::Property<float> field_root_3_min_height;
    slint::private_api::Property<bool> field_root_3_pressed;
    slint::private_api::Property<int> field_root_3_state;
    slint::private_api::Property<slint::SharedString> field_root_3_text;
    slint::private_api::Property<slint::Brush> field_root_3_text_color;
    slint::private_api::Property<float> field_root_3_vertical_stretch;
    slint::private_api::Property<float> field_root_3_width;
    slint::private_api::Property<float> field_root_3_x;
    slint::private_api::Property<float> field_root_3_y;
    slint::private_api::Callback<void()> field_root_3_accessible_action_default;
    slint::private_api::Callback<void()> field_root_3_clicked;
    slint::cbindgen_private::Empty field_root_3 = {};
    slint::cbindgen_private::BasicBorderRectangle field_i_background_4 = {};
    slint::cbindgen_private::BasicBorderRectangle field_i_border_5 = {};
    slint::cbindgen_private::TouchArea field_i_touch_area_11 = {};
    slint::cbindgen_private::FocusScope field_i_focus_scope_12 = {};
    slint::private_api::Conditional<class Component_image_7> repeater_0;
    slint::private_api::Conditional<class Component_text_9> repeater_1;
    slint::private_api::Conditional<class Component_focusborder_13> repeater_2;
    auto fn_i_background_4_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_i_layout_6_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
};

class Component_rectangle_20 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class StandardTableView_root_15 const> parent;
    slint::private_api::Property<slint::language::TableColumn> field_model_data;
    slint::private_api::Property<int> field_model_index;
    slint::private_api::Property<float> field_rectangle_20_empty_22_height;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_20_empty_22_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_20_empty_22_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_20_empty_22_layoutinfo_v;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_20_empty_23_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_20_empty_23_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_20_empty_23_layoutinfo_v;
    slint::private_api::Property<float> field_rectangle_20_height;
    slint::private_api::Property<float> field_rectangle_20_icon_26_y;
    slint::private_api::Property<float> field_rectangle_20_max_width;
    slint::private_api::Property<float> field_rectangle_20_min_width;
    slint::private_api::Property<int> field_rectangle_20_state;
    slint::private_api::Property<float> field_rectangle_20_touch_area_21_x;
    slint::private_api::Property<float> field_rectangle_20_width;
    slint::private_api::Property<float> field_rectangle_20_x;
    slint::private_api::Callback<void(float)> field_rectangle_20_adjust_size;
    slint::cbindgen_private::Rectangle field_rectangle_20 = {};
    slint::cbindgen_private::TouchArea field_touch_area_21 = {};
    slint::cbindgen_private::Empty field_empty_23 = {};
    slint::cbindgen_private::ComplexText field_text_24 = {};
    slint::cbindgen_private::Clip field_icon_visibility_25 = {};
    slint::cbindgen_private::ImageItem field_icon_26 = {};
    slint::cbindgen_private::Rectangle field_rectangle_27 = {};
    slint::cbindgen_private::Rectangle field_rectangle_28 = {};
    slint::cbindgen_private::TouchArea field_movable_touch_area_29 = {};
    auto fn_empty_22_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class StandardTableView_root_15 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class StandardTableView_root_15 const * parent) -> slint::ComponentHandle<Component_rectangle_20>;
    ~Component_rectangle_20 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const slint::language::TableColumn &data) const -> void;
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_20>;
};

class Component_rectangle_37 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class Component_rectangle_34 const> parent;
    slint::private_api::Property<slint::language::StandardListViewItem> field_model_data;
    slint::private_api::Property<int> field_model_index;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_37_empty_39_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_37_empty_39_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_37_empty_39_layoutinfo_v;
    slint::private_api::Property<float> field_rectangle_37_horizontal_stretch;
    slint::private_api::Property<float> field_rectangle_37_max_width;
    slint::private_api::Property<float> field_rectangle_37_min_width;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_37_rectangle_40_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_37_rectangle_40_layoutinfo_v;
    slint::private_api::Property<float> field_rectangle_37_text_41_horizontal_stretch;
    slint::private_api::Property<float> field_rectangle_37_text_41_max_height;
    slint::private_api::Property<float> field_rectangle_37_text_41_max_width;
    slint::private_api::Property<float> field_rectangle_37_text_41_min_height;
    slint::private_api::Property<float> field_rectangle_37_text_41_min_width;
    slint::private_api::Property<float> field_rectangle_37_text_41_preferred_height;
    slint::private_api::Property<float> field_rectangle_37_text_41_preferred_width;
    slint::private_api::Property<float> field_rectangle_37_text_41_vertical_stretch;
    slint::private_api::Property<float> field_rectangle_37_width;
    slint::private_api::Property<float> field_rectangle_37_x;
    slint::cbindgen_private::Empty field_rectangle_37 = {};
    slint::cbindgen_private::Clip field__clip_38 = {};
    slint::cbindgen_private::Empty field_rectangle_40 = {};
    slint::cbindgen_private::ComplexText field_text_41 = {};
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_34 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class Component_rectangle_34 const * parent) -> slint::ComponentHandle<Component_rectangle_37>;
    ~Component_rectangle_37 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const slint::language::StandardListViewItem &data) const -> void;
    auto init () -> void;
    auto layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo;
    auto flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_37>;
};

class Component_rectangle_34 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    vtable::VWeakMapped<slint::private_api::ItemTreeVTable, class StandardTableView_root_15 const> parent;
    slint::private_api::Property<std::shared_ptr<slint::Model<slint::language::StandardListViewItem>>> field_model_data;
    slint::private_api::Property<int> field_model_index;
    slint::private_api::Property<float> field_rectangle_34_actual_y;
    slint::private_api::Property<float> field_rectangle_34_height;
    slint::private_api::Property<float> field_rectangle_34_layout_36_height;
    slint::private_api::Property<slint::SharedVector<float>> field_rectangle_34_layout_36_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_34_layout_36_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_rectangle_34_layout_36_layoutinfo_v;
    slint::private_api::Property<bool> field_rectangle_34_selected;
    slint::private_api::Property<float> field_rectangle_34_selector_43_height;
    slint::private_api::Property<float> field_rectangle_34_selector_43_y;
    slint::private_api::Property<int> field_rectangle_34_state;
    slint::private_api::Property<slint::LogicalPosition> field_rectangle_34_touch_area_35_absolute_position;
    slint::private_api::Property<float> field_rectangle_34_width;
    slint::private_api::Callback<void(slint::language::PointerEvent, slint::LogicalPosition)> field_rectangle_34_pointer_event;
    slint::cbindgen_private::BasicBorderRectangle field_rectangle_34 = {};
    slint::cbindgen_private::TouchArea field_touch_area_35 = {};
    slint::cbindgen_private::BasicBorderRectangle field_selector_43 = {};
    slint::private_api::Repeater<class Component_rectangle_37, slint::language::StandardListViewItem> repeater_0;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class StandardTableView_root_15 const *parent) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    private:
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create (class StandardTableView_root_15 const * parent) -> slint::ComponentHandle<Component_rectangle_34>;
    ~Component_rectangle_34 ();
    auto update_data ([[maybe_unused]] int i, [[maybe_unused]] const std::shared_ptr<slint::Model<slint::language::StandardListViewItem>> &data) const -> void;
    auto init () -> void;
    auto listview_layout (float *offset_y) const -> float;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_34>;
};

class StandardTableView_root_15 {
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<slint::LogicalPosition> field_root_15_absolute_position;
    slint::private_api::Property<std::shared_ptr<slint::Model<slint::language::TableColumn>>> field_root_15_columns;
    slint::private_api::Property<float> field_root_15_current_item_y;
    slint::private_api::Property<int> field_root_15_current_row;
    slint::private_api::Property<int> field_root_15_current_sort_column;
    slint::private_api::Property<int> field_root_15_down_scroll_button_55_state;
    slint::private_api::Property<int> field_root_15_down_scroll_button_68_state;
    slint::private_api::Property<slint::SharedVector<float>> field_root_15_empty_16_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_15_empty_16_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_15_empty_16_layoutinfo_v;
    slint::private_api::Property<float> field_root_15_empty_16_width;
    slint::private_api::Property<float> field_root_15_flickable_32_height;
    slint::private_api::Property<float> field_root_15_flickable_32_horizontal_stretch;
    slint::private_api::Property<float> field_root_15_flickable_32_max_height;
    slint::private_api::Property<float> field_root_15_flickable_32_max_width;
    slint::private_api::Property<float> field_root_15_flickable_32_min_height;
    slint::private_api::Property<float> field_root_15_flickable_32_min_width;
    slint::private_api::Property<float> field_root_15_flickable_32_preferred_height;
    slint::private_api::Property<float> field_root_15_flickable_32_preferred_width;
    slint::private_api::Property<float> field_root_15_flickable_32_vertical_stretch;
    slint::private_api::Property<float> field_root_15_flickable_32_width;
    slint::private_api::Property<float> field_root_15_flickable_viewport_33_y;
    slint::private_api::Property<float> field_root_15_header_layout_19_height;
    slint::private_api::Property<slint::SharedVector<float>> field_root_15_header_layout_19_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_15_header_layout_19_layoutinfo_h;
    slint::private_api::Property<float> field_root_15_header_layout_19_width;
    slint::private_api::Property<float> field_root_15_height;
    slint::private_api::Property<float> field_root_15_horizontal_bar_59_maximum;
    slint::private_api::Property<slint::cbindgen_private::ScrollBarPolicy> field_root_15_horizontal_bar_59_policy;
    slint::private_api::Property<float> field_root_15_horizontal_bar_59_size;
    slint::private_api::Property<int> field_root_15_horizontal_bar_59_state;
    slint::private_api::Property<bool> field_root_15_horizontal_bar_59_visible;
    slint::private_api::Property<float> field_root_15_horizontal_bar_59_width;
    slint::private_api::Property<float> field_root_15_item_height;
    slint::private_api::Property<float> field_root_15_min_height;
    slint::private_api::Property<float> field_root_15_rectangle_17_min_height;
    slint::private_api::Property<float> field_root_15_rectangle_17_vertical_stretch;
    slint::private_api::Property<std::shared_ptr<slint::Model<std::shared_ptr<slint::Model<slint::language::StandardListViewItem>>>>> field_root_15_rows;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_15_scroll_view_31_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_15_scroll_view_31_layoutinfo_v;
    slint::private_api::Property<float> field_root_15_scroll_view_31_min_height;
    slint::private_api::Property<slint::cbindgen_private::ScrollBarPolicy> field_root_15_scroll_view_31_vertical_scrollbar_policy;
    slint::private_api::Property<float> field_root_15_scroll_view_31_vertical_stretch;
    slint::private_api::Property<float> field_root_15_thumb_48_height;
    slint::private_api::Property<float> field_root_15_thumb_48_width;
    slint::private_api::Property<float> field_root_15_thumb_48_y;
    slint::private_api::Property<float> field_root_15_thumb_61_height;
    slint::private_api::Property<float> field_root_15_thumb_61_width;
    slint::private_api::Property<float> field_root_15_thumb_61_x;
    slint::private_api::Property<std::tuple<float, float, float, float>> field_root_15_touch_area_49_saved_values;
    slint::private_api::Property<std::tuple<float, float, float, float>> field_root_15_touch_area_62_saved_values;
    slint::private_api::Property<int> field_root_15_up_scroll_button_51_state;
    slint::private_api::Property<int> field_root_15_up_scroll_button_64_state;
    slint::private_api::Property<float> field_root_15_vertical_bar_46_height;
    slint::private_api::Property<float> field_root_15_vertical_bar_46_maximum;
    slint::private_api::Property<float> field_root_15_vertical_bar_46_size;
    slint::private_api::Property<int> field_root_15_vertical_bar_46_state;
    slint::private_api::Property<bool> field_root_15_vertical_bar_46_visible;
    slint::private_api::Property<float> field_root_15_vertical_stretch;
    slint::private_api::Property<float> field_root_15_width;
    slint::private_api::Property<float> field_root_15_x;
    slint::private_api::Property<float> field_root_15_y;
    slint::private_api::Callback<void(int)> field_root_15_current_row_changed;
    slint::private_api::Callback<void()> field_root_15_horizontal_bar_59_scrolled;
    slint::private_api::Callback<void(int, slint::language::PointerEvent, slint::LogicalPosition)> field_root_15_row_pointer_event;
    slint::private_api::Callback<void(int)> field_root_15_sort_ascending;
    slint::private_api::Callback<void(int)> field_root_15_sort_descending;
    slint::private_api::Callback<void()> field_root_15_vertical_bar_46_scrolled;
    slint::cbindgen_private::Empty field_root_15 = {};
    slint::cbindgen_private::Empty field_rectangle_17 = {};
    slint::cbindgen_private::Clip field__clip_18 = {};
    slint::cbindgen_private::Empty field_header_layout_19 = {};
    slint::cbindgen_private::Empty field_scroll_view_31 = {};
    slint::cbindgen_private::Flickable field_flickable_32 = {};
    slint::cbindgen_private::Empty field_flickable_viewport_33 = {};
    slint::cbindgen_private::Clip field_vertical_bar_visibility_45 = {};
    slint::cbindgen_private::BasicBorderRectangle field_vertical_bar_46 = {};
    slint::cbindgen_private::Clip field_vertical_bar_clip_47 = {};
    slint::cbindgen_private::BasicBorderRectangle field_thumb_48 = {};
    slint::cbindgen_private::TouchArea field_touch_area_49 = {};
    slint::cbindgen_private::Opacity field_up_scroll_button_Opacity_50 = {};
    slint::cbindgen_private::TouchArea field_up_scroll_button_51 = {};
    slint::cbindgen_private::Opacity field_icon_Opacity_52 = {};
    slint::cbindgen_private::ImageItem field_icon_53 = {};
    slint::cbindgen_private::Opacity field_down_scroll_button_Opacity_54 = {};
    slint::cbindgen_private::TouchArea field_down_scroll_button_55 = {};
    slint::cbindgen_private::Opacity field_icon_Opacity_56 = {};
    slint::cbindgen_private::ImageItem field_icon_57 = {};
    slint::cbindgen_private::Clip field_horizontal_bar_visibility_58 = {};
    slint::cbindgen_private::BasicBorderRectangle field_horizontal_bar_59 = {};
    slint::cbindgen_private::Clip field_horizontal_bar_clip_60 = {};
    slint::cbindgen_private::BasicBorderRectangle field_thumb_61 = {};
    slint::cbindgen_private::TouchArea field_touch_area_62 = {};
    slint::cbindgen_private::Opacity field_up_scroll_button_Opacity_63 = {};
    slint::cbindgen_private::TouchArea field_up_scroll_button_64 = {};
    slint::cbindgen_private::Opacity field_icon_Opacity_65 = {};
    slint::cbindgen_private::ImageItem field_icon_66 = {};
    slint::cbindgen_private::Opacity field_down_scroll_button_Opacity_67 = {};
    slint::cbindgen_private::TouchArea field_down_scroll_button_68 = {};
    slint::cbindgen_private::Opacity field_icon_Opacity_69 = {};
    slint::cbindgen_private::ImageItem field_icon_70 = {};
    slint::cbindgen_private::FocusScope field_focus_scope_71 = {};
    slint::private_api::Repeater<class Component_rectangle_20, slint::language::TableColumn> repeater_0;
    slint::private_api::Repeater<class Component_rectangle_34, std::shared_ptr<slint::Model<slint::language::StandardListViewItem>>> repeater_1;
    auto fn_empty_16_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_header_layout_19_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_horizontal_bar_59_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_scroll_view_31_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_set_current_row ([[maybe_unused]] int arg_0) const -> void;
    auto fn_sort ([[maybe_unused]] int arg_0) const -> void;
    auto fn_touch_area_49_update_saved_values () const -> void;
    auto fn_touch_area_62_update_saved_values () const -> void;
    auto fn_vertical_bar_46_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
};

class FluentPalette_78 {
    public:
    slint::private_api::Property<slint::Brush> field_accent_background;
    slint::private_api::Property<slint::Brush> field_background;
    slint::private_api::Property<slint::cbindgen_private::ColorScheme> field_color_scheme;
    slint::private_api::Property<bool> field_dark_color_scheme;
    FluentPalette_78 (const class SharedGlobals *globals);
    private:
    auto init () -> void;
    const class SharedGlobals* globals;
    public:
    auto fn_accentify ([[maybe_unused]] slint::Color arg_0) const -> slint::Color;
    friend class SharedGlobals;
};

class SharedGlobals {
    public:
    std::optional<slint::Window> m_window;
    slint::cbindgen_private::ItemTreeWeak root_weak;
    auto window () const -> slint::Window&{
        auto self = const_cast<SharedGlobals *>(this);
        if (!self->m_window.has_value()) {
           auto &window = self->m_window.emplace(slint::private_api::WindowAdapterRc());
           window.window_handle().set_component(self->root_weak);
        }
        return *self->m_window;
    }
    std::shared_ptr<FluentPalette_78> global_FluentPalette_78 = std::make_shared<FluentPalette_78>(this);
    SharedGlobals (){
    }
    auto init_globals () -> void{
        global_FluentPalette_78->init();
    }
    private:
    SharedGlobals (const SharedGlobals& source, const slint::private_api::WindowAdapterRc& adapter) : root_weak(source.root_weak), global_FluentPalette_78(source.global_FluentPalette_78){
        m_window.emplace(adapter);
    }
    public:
    auto clone_with_window_adapter (const slint::private_api::WindowAdapterRc& adapter) const -> SharedGlobals*{
        return new SharedGlobals(*this, adapter);
    }
};

class MainWindow {
    SharedGlobals m_globals;
    public:
    slint::cbindgen_private::ItemTreeWeak self_weak;
    private:
    const class SharedGlobals* globals;
    uint32_t tree_index_of_first_child;
    uint32_t tree_index;
    slint::private_api::Property<slint::SharedVector<float>> field_root_72_empty_73_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_72_empty_73_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_72_empty_73_layoutinfo_v;
    slint::private_api::Property<float> field_root_72_empty_73_padding;
    slint::private_api::Property<float> field_root_72_empty_73_spacing;
    slint::private_api::Property<slint::SharedVector<float>> field_root_72_empty_74_layout_cache;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_72_empty_74_layoutinfo_h;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_72_empty_74_layoutinfo_v;
    slint::private_api::Property<float> field_root_72_empty_74_padding;
    slint::private_api::Property<slint::cbindgen_private::LayoutInfo> field_root_72_layoutinfo_h;
    slint::private_api::Property<std::shared_ptr<slint::Model<std::shared_ptr<slint::Model<slint::language::StandardListViewItem>>>>> field_root_72_process_list;
    slint::private_api::Callback<void()> field_root_72_refresh_clicked;
    slint::private_api::Property<uint8_t> callback_tracker_root_72_refresh_clicked;
    Button_root_3 field_button_75;
    StandardTableView_root_15 field_standardtableview_76;
    slint::cbindgen_private::WindowItem field_root_72 = {};
    slint::cbindgen_private::Empty field_empty_74 = {};
    public:
    auto fn_empty_73_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_empty_74_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    auto fn_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo;
    private:
    auto init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void;
    auto user_init () -> void;
    auto layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo;
    auto item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect;
    auto accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole;
    auto accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>;
    auto accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void;
    auto supported_accessibility_actions (uint32_t index) const -> uint32_t;
    auto element_infos (uint32_t index) const -> std::optional<slint::SharedString>;
    auto ensure_instantiated () const -> bool;
    auto visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t;
    auto subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange;
    auto subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void;
    static auto visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t;
    static auto get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef;
    static auto get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange;
    static auto get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void;
    static auto get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void;
    static auto embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool;
    static auto subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t;
    static auto item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>;
    static auto item_array () -> const slint::private_api::ItemArray;
    static auto layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo;
    static auto ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool;
    static auto item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect;
    static auto accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole;
    static auto accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool;
    static auto accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void;
    static auto supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t;
    static auto element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool;
    static auto window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void;
    public:
    static const slint::private_api::ItemTreeVTable static_vtable;
    static auto create () -> slint::ComponentHandle<MainWindow>;
    ~MainWindow ();
    auto get_process_list () const -> std::shared_ptr<slint::Model<std::shared_ptr<slint::Model<slint::language::StandardListViewItem>>>>;
    auto set_process_list (const std::shared_ptr<slint::Model<std::shared_ptr<slint::Model<slint::language::StandardListViewItem>>>> &value) const -> void;
    auto invoke_refresh_clicked () const -> void;
    template<std::invocable<> Functor> auto on_refresh_clicked (Functor && callback_handler) const;
    auto show () -> void;
    auto hide () -> void;
    auto window () const -> slint::Window&;
    auto run () -> void;
    friend class FluentPalette_78;
    friend class vtable::VRc<slint::private_api::ItemTreeVTable, MainWindow>;
    friend class slint::private_api::WindowAdapterRc;
};

const uint8_t slint_embedded_resource_0[921] = { 0x3c
,0x73,0x76,0x67,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,0x38,0x22,0x20,0x68,0x65
,0x69,0x67,0x68,0x74,0x3d,0x22,0x36,0x22,0x20,0x76,0x69,0x65,0x77,0x42,0x6f,0x78
,0x3d,0x22,0x30,0x20,0x30,0x20,0x38,0x20,0x36,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d
,0x22,0x6e,0x6f,0x6e,0x65,0x22,0x20,0x78,0x6d,0x6c,0x6e,0x73,0x3d,0x22,0x68,0x74
,0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x77,0x33,0x2e,0x6f,0x72,0x67,0x2f
,0x32,0x30,0x30,0x30,0x2f,0x73,0x76,0x67,0x22,0x3e,0xd,0xa,0x3c,0x70,0x61,0x74
,0x68,0x20,0x64,0x3d,0x22,0x4d,0x30,0x20,0x31,0x43,0x30,0x20,0x30,0x2e,0x38,0x36
,0x34,0x35,0x38,0x33,0x20,0x30,0x2e,0x30,0x32,0x36,0x30,0x34,0x31,0x37,0x20,0x30
,0x2e,0x37,0x33,0x35,0x36,0x37,0x37,0x20,0x30,0x2e,0x30,0x37,0x38,0x31,0x32,0x35
,0x20,0x30,0x2e,0x36,0x31,0x33,0x32,0x38,0x31,0x43,0x30,0x2e,0x31,0x33,0x30,0x32
,0x30,0x38,0x20,0x30,0x2e,0x34,0x39,0x30,0x38,0x38,0x35,0x20,0x30,0x2e,0x32,0x30
,0x30,0x35,0x32,0x31,0x20,0x30,0x2e,0x33,0x38,0x35,0x34,0x31,0x37,0x20,0x30,0x2e
,0x32,0x38,0x39,0x30,0x36,0x32,0x20,0x30,0x2e,0x32,0x39,0x36,0x38,0x37,0x35,0x43
,0x30,0x2e,0x33,0x38,0x30,0x32,0x30,0x38,0x20,0x30,0x2e,0x32,0x30,0x35,0x37,0x32
,0x39,0x20,0x30,0x2e,0x34,0x38,0x35,0x36,0x37,0x37,0x20,0x30,0x2e,0x31,0x33,0x34
,0x31,0x31,0x35,0x20,0x30,0x2e,0x36,0x30,0x35,0x34,0x36,0x39,0x20,0x30,0x2e,0x30
,0x38,0x32,0x30,0x33,0x31,0x32,0x43,0x30,0x2e,0x37,0x32,0x35,0x32,0x36,0x20,0x30
,0x2e,0x30,0x32,0x37,0x33,0x34,0x33,0x38,0x20,0x30,0x2e,0x38,0x35,0x34,0x31,0x36
,0x37,0x20,0x30,0x20,0x30,0x2e,0x39,0x39,0x32,0x31,0x38,0x38,0x20,0x30,0x48,0x37
,0x2e,0x30,0x31,0x31,0x37,0x32,0x43,0x37,0x2e,0x31,0x34,0x37,0x31,0x34,0x20,0x30
,0x20,0x37,0x2e,0x32,0x37,0x34,0x37,0x34,0x20,0x30,0x2e,0x30,0x32,0x36,0x30,0x34
,0x31,0x37,0x20,0x37,0x2e,0x33,0x39,0x34,0x35,0x33,0x20,0x30,0x2e,0x30,0x37,0x38
,0x31,0x32,0x35,0x43,0x37,0x2e,0x35,0x31,0x36,0x39,0x33,0x20,0x30,0x2e,0x31,0x33
,0x30,0x32,0x30,0x38,0x20,0x37,0x2e,0x36,0x32,0x32,0x34,0x20,0x30,0x2e,0x32,0x30
,0x31,0x38,0x32,0x33,0x20,0x37,0x2e,0x37,0x31,0x30,0x39,0x34,0x20,0x30,0x2e,0x32
,0x39,0x32,0x39,0x36,0x39,0x43,0x37,0x2e,0x37,0x39,0x39,0x34,0x38,0x20,0x30,0x2e
,0x33,0x38,0x34,0x31,0x31,0x35,0x20,0x37,0x2e,0x38,0x36,0x39,0x37,0x39,0x20,0x30
,0x2e,0x34,0x39,0x30,0x38,0x38,0x35,0x20,0x37,0x2e,0x39,0x32,0x31,0x38,0x38,0x20
,0x30,0x2e,0x36,0x31,0x33,0x32,0x38,0x31,0x43,0x37,0x2e,0x39,0x37,0x33,0x39,0x36
,0x20,0x30,0x2e,0x37,0x33,0x33,0x30,0x37,0x33,0x20,0x38,0x20,0x30,0x2e,0x38,0x36
,0x30,0x36,0x37,0x37,0x20,0x38,0x20,0x30,0x2e,0x39,0x39,0x36,0x30,0x39,0x34,0x43
,0x38,0x20,0x31,0x2e,0x31,0x30,0x35,0x34,0x37,0x20,0x37,0x2e,0x39,0x38,0x34,0x33
,0x38,0x20,0x31,0x2e,0x32,0x30,0x35,0x37,0x33,0x20,0x37,0x2e,0x39,0x35,0x33,0x31
,0x32,0x20,0x31,0x2e,0x32,0x39,0x36,0x38,0x38,0x43,0x37,0x2e,0x39,0x32,0x34,0x34
,0x38,0x20,0x31,0x2e,0x33,0x38,0x38,0x30,0x32,0x20,0x37,0x2e,0x38,0x38,0x30,0x32
,0x31,0x20,0x31,0x2e,0x34,0x37,0x39,0x31,0x37,0x20,0x37,0x2e,0x38,0x32,0x30,0x33
,0x31,0x20,0x31,0x2e,0x35,0x37,0x30,0x33,0x31,0x4c,0x35,0x2e,0x32,0x31,0x38,0x37
,0x35,0x20,0x35,0x2e,0x33,0x35,0x35,0x34,0x37,0x43,0x35,0x2e,0x30,0x38,0x30,0x37
,0x33,0x20,0x35,0x2e,0x35,0x35,0x35,0x39,0x39,0x20,0x34,0x2e,0x39,0x30,0x33,0x36
,0x35,0x20,0x35,0x2e,0x37,0x31,0x33,0x35,0x34,0x20,0x34,0x2e,0x36,0x38,0x37,0x35
,0x20,0x35,0x2e,0x38,0x32,0x38,0x31,0x32,0x43,0x34,0x2e,0x34,0x37,0x33,0x39,0x36
,0x20,0x35,0x2e,0x39,0x34,0x32,0x37,0x31,0x20,0x34,0x2e,0x32,0x34,0x34,0x37,0x39
,0x20,0x36,0x20,0x34,0x20,0x36,0x43,0x33,0x2e,0x37,0x35,0x35,0x32,0x31,0x20,0x36
,0x20,0x33,0x2e,0x35,0x32,0x34,0x37,0x34,0x20,0x35,0x2e,0x39,0x34,0x32,0x37,0x31
,0x20,0x33,0x2e,0x33,0x30,0x38,0x35,0x39,0x20,0x35,0x2e,0x38,0x32,0x38,0x31,0x32
,0x43,0x33,0x2e,0x30,0x39,0x35,0x30,0x35,0x20,0x35,0x2e,0x37,0x31,0x33,0x35,0x34
,0x20,0x32,0x2e,0x39,0x31,0x39,0x32,0x37,0x20,0x35,0x2e,0x35,0x35,0x35,0x39,0x39
,0x20,0x32,0x2e,0x37,0x38,0x31,0x32,0x35,0x20,0x35,0x2e,0x33,0x35,0x35,0x34,0x37
,0x4c,0x30,0x2e,0x31,0x37,0x39,0x36,0x38,0x38,0x20,0x31,0x2e,0x35,0x37,0x30,0x33
,0x31,0x43,0x30,0x2e,0x31,0x31,0x39,0x37,0x39,0x32,0x20,0x31,0x2e,0x34,0x38,0x31
,0x37,0x37,0x20,0x30,0x2e,0x30,0x37,0x34,0x32,0x31,0x38,0x38,0x20,0x31,0x2e,0x33
,0x39,0x31,0x39,0x33,0x20,0x30,0x2e,0x30,0x34,0x32,0x39,0x36,0x38,0x38,0x20,0x31
,0x2e,0x33,0x30,0x30,0x37,0x38,0x43,0x30,0x2e,0x30,0x31,0x34,0x33,0x32,0x32,0x39
,0x20,0x31,0x2e,0x32,0x30,0x39,0x36,0x34,0x20,0x30,0x20,0x31,0x2e,0x31,0x30,0x39
,0x33,0x38,0x20,0x30,0x20,0x31,0x5a,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d,0x22,0x77
,0x68,0x69,0x74,0x65,0x22,0x20,0x66,0x69,0x6c,0x6c,0x2d,0x6f,0x70,0x61,0x63,0x69
,0x74,0x79,0x3d,0x22,0x30,0x2e,0x35,0x34,0x34,0x32,0x22,0x20,0x2f,0x3e,0xd,0xa
,0x3c,0x2f,0x73,0x76,0x67,0x3e,0xd,0xa};

const uint8_t slint_embedded_resource_1[818] = { 0x3c
,0x73,0x76,0x67,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,0x36,0x22,0x20,0x68,0x65
,0x69,0x67,0x68,0x74,0x3d,0x22,0x38,0x22,0x20,0x76,0x69,0x65,0x77,0x42,0x6f,0x78
,0x3d,0x22,0x30,0x20,0x30,0x20,0x36,0x20,0x38,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d
,0x22,0x6e,0x6f,0x6e,0x65,0x22,0x20,0x78,0x6d,0x6c,0x6e,0x73,0x3d,0x22,0x68,0x74
,0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x77,0x33,0x2e,0x6f,0x72,0x67,0x2f
,0x32,0x30,0x30,0x30,0x2f,0x73,0x76,0x67,0x22,0x3e,0xd,0xa,0x3c,0x70,0x61,0x74
,0x68,0x20,0x64,0x3d,0x22,0x4d,0x30,0x20,0x37,0x2e,0x30,0x30,0x37,0x38,0x31,0x4c
,0x30,0x20,0x30,0x2e,0x39,0x39,0x32,0x31,0x38,0x37,0x43,0x30,0x20,0x30,0x2e,0x38
,0x35,0x34,0x31,0x36,0x37,0x20,0x30,0x2e,0x30,0x32,0x36,0x30,0x34,0x31,0x37,0x20
,0x30,0x2e,0x37,0x32,0x35,0x32,0x36,0x20,0x30,0x2e,0x30,0x37,0x38,0x31,0x32,0x35
,0x20,0x30,0x2e,0x36,0x30,0x35,0x34,0x36,0x39,0x43,0x30,0x2e,0x31,0x33,0x32,0x38
,0x31,0x32,0x20,0x30,0x2e,0x34,0x38,0x35,0x36,0x37,0x37,0x20,0x30,0x2e,0x32,0x30
,0x34,0x34,0x32,0x37,0x20,0x30,0x2e,0x33,0x38,0x31,0x35,0x31,0x20,0x30,0x2e,0x32
,0x39,0x32,0x39,0x36,0x39,0x20,0x30,0x2e,0x32,0x39,0x32,0x39,0x36,0x39,0x43,0x30
,0x2e,0x33,0x38,0x34,0x31,0x31,0x35,0x20,0x30,0x2e,0x32,0x30,0x31,0x38,0x32,0x33
,0x20,0x30,0x2e,0x34,0x38,0x39,0x35,0x38,0x33,0x20,0x30,0x2e,0x31,0x33,0x30,0x32
,0x30,0x38,0x20,0x30,0x2e,0x36,0x30,0x39,0x33,0x37,0x35,0x20,0x30,0x2e,0x30,0x37
,0x38,0x31,0x32,0x35,0x43,0x30,0x2e,0x37,0x33,0x31,0x37,0x37,0x31,0x20,0x30,0x2e
,0x30,0x32,0x36,0x30,0x34,0x31,0x37,0x20,0x30,0x2e,0x38,0x36,0x31,0x39,0x37,0x39
,0x20,0x30,0x20,0x31,0x20,0x30,0x43,0x31,0x2e,0x32,0x30,0x35,0x37,0x33,0x20,0x30
,0x20,0x31,0x2e,0x33,0x39,0x35,0x38,0x33,0x20,0x30,0x2e,0x30,0x35,0x39,0x38,0x39
,0x35,0x38,0x20,0x31,0x2e,0x35,0x37,0x30,0x33,0x31,0x20,0x30,0x2e,0x31,0x37,0x39
,0x36,0x38,0x37,0x4c,0x35,0x2e,0x33,0x35,0x35,0x34,0x37,0x20,0x32,0x2e,0x37,0x38
,0x31,0x32,0x35,0x43,0x35,0x2e,0x35,0x35,0x38,0x35,0x39,0x20,0x32,0x2e,0x39,0x32
,0x31,0x38,0x37,0x20,0x35,0x2e,0x37,0x31,0x36,0x31,0x35,0x20,0x33,0x2e,0x30,0x39
,0x38,0x39,0x36,0x20,0x35,0x2e,0x38,0x32,0x38,0x31,0x33,0x20,0x33,0x2e,0x33,0x31
,0x32,0x35,0x43,0x35,0x2e,0x39,0x34,0x32,0x37,0x31,0x20,0x33,0x2e,0x35,0x32,0x36
,0x30,0x34,0x20,0x36,0x20,0x33,0x2e,0x37,0x35,0x35,0x32,0x31,0x20,0x36,0x20,0x34
,0x43,0x36,0x20,0x34,0x2e,0x32,0x34,0x34,0x37,0x39,0x20,0x35,0x2e,0x39,0x34,0x32
,0x37,0x31,0x20,0x34,0x2e,0x34,0x37,0x33,0x39,0x36,0x20,0x35,0x2e,0x38,0x32,0x38
,0x31,0x33,0x20,0x34,0x2e,0x36,0x38,0x37,0x35,0x43,0x35,0x2e,0x37,0x31,0x36,0x31
,0x35,0x20,0x34,0x2e,0x39,0x30,0x31,0x30,0x34,0x20,0x35,0x2e,0x35,0x35,0x38,0x35
,0x39,0x20,0x35,0x2e,0x30,0x37,0x38,0x31,0x32,0x20,0x35,0x2e,0x33,0x35,0x35,0x34
,0x37,0x20,0x35,0x2e,0x32,0x31,0x38,0x37,0x35,0x4c,0x31,0x2e,0x35,0x37,0x30,0x33
,0x31,0x20,0x37,0x2e,0x38,0x32,0x30,0x33,0x31,0x43,0x31,0x2e,0x33,0x39,0x35,0x38
,0x33,0x20,0x37,0x2e,0x39,0x34,0x30,0x31,0x20,0x31,0x2e,0x32,0x30,0x35,0x37,0x33
,0x20,0x38,0x20,0x31,0x20,0x38,0x43,0x30,0x2e,0x38,0x36,0x31,0x39,0x37,0x39,0x20
,0x38,0x20,0x30,0x2e,0x37,0x33,0x31,0x37,0x37,0x31,0x20,0x37,0x2e,0x39,0x37,0x33
,0x39,0x36,0x20,0x30,0x2e,0x36,0x30,0x39,0x33,0x37,0x35,0x20,0x37,0x2e,0x39,0x32
,0x31,0x38,0x38,0x43,0x30,0x2e,0x34,0x38,0x39,0x35,0x38,0x33,0x20,0x37,0x2e,0x38
,0x36,0x39,0x37,0x39,0x20,0x30,0x2e,0x33,0x38,0x34,0x31,0x31,0x35,0x20,0x37,0x2e
,0x37,0x39,0x39,0x34,0x38,0x20,0x30,0x2e,0x32,0x39,0x32,0x39,0x36,0x39,0x20,0x37
,0x2e,0x37,0x31,0x30,0x39,0x34,0x43,0x30,0x2e,0x32,0x30,0x34,0x34,0x32,0x37,0x20
,0x37,0x2e,0x36,0x31,0x39,0x37,0x39,0x20,0x30,0x2e,0x31,0x33,0x32,0x38,0x31,0x33
,0x20,0x37,0x2e,0x35,0x31,0x34,0x33,0x32,0x20,0x30,0x2e,0x30,0x37,0x38,0x31,0x32
,0x35,0x20,0x37,0x2e,0x33,0x39,0x34,0x35,0x33,0x43,0x30,0x2e,0x30,0x32,0x36,0x30
,0x34,0x31,0x37,0x20,0x37,0x2e,0x32,0x37,0x34,0x37,0x34,0x20,0x30,0x20,0x37,0x2e
,0x31,0x34,0x35,0x38,0x33,0x20,0x30,0x20,0x37,0x2e,0x30,0x30,0x37,0x38,0x31,0x5a
,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d,0x22,0x77,0x68,0x69,0x74,0x65,0x22,0x20,0x66
,0x69,0x6c,0x6c,0x2d,0x6f,0x70,0x61,0x63,0x69,0x74,0x79,0x3d,0x22,0x30,0x2e,0x35
,0x34,0x34,0x32,0x22,0x20,0x2f,0x3e,0xd,0xa,0x3c,0x2f,0x73,0x76,0x67,0x3e,0xd
,0xa};

const uint8_t slint_embedded_resource_2[1138] = { 0x3c
,0x73,0x76,0x67,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,0x38,0x22,0x20,0x68,0x65
,0x69,0x67,0x68,0x74,0x3d,0x22,0x36,0x22,0x20,0x76,0x69,0x65,0x77,0x42,0x6f,0x78
,0x3d,0x22,0x30,0x20,0x30,0x20,0x38,0x20,0x36,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d
,0x22,0x6e,0x6f,0x6e,0x65,0x22,0x20,0x78,0x6d,0x6c,0x6e,0x73,0x3d,0x22,0x68,0x74
,0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x77,0x33,0x2e,0x6f,0x72,0x67,0x2f
,0x32,0x30,0x30,0x30,0x2f,0x73,0x76,0x67,0x22,0x3e,0xd,0xa,0x3c,0x70,0x61,0x74
,0x68,0x20,0x64,0x3d,0x22,0x4d,0x30,0x2e,0x39,0x39,0x32,0x31,0x38,0x38,0x20,0x36
,0x43,0x30,0x2e,0x38,0x35,0x34,0x31,0x36,0x37,0x20,0x36,0x20,0x30,0x2e,0x37,0x32
,0x35,0x32,0x36,0x20,0x35,0x2e,0x39,0x37,0x33,0x39,0x36,0x20,0x30,0x2e,0x36,0x30
,0x35,0x34,0x36,0x39,0x20,0x35,0x2e,0x39,0x32,0x31,0x38,0x38,0x43,0x30,0x2e,0x34
,0x38,0x35,0x36,0x37,0x37,0x20,0x35,0x2e,0x38,0x36,0x37,0x31,0x39,0x20,0x30,0x2e
,0x33,0x38,0x30,0x32,0x30,0x38,0x20,0x35,0x2e,0x37,0x39,0x35,0x35,0x37,0x20,0x30
,0x2e,0x32,0x38,0x39,0x30,0x36,0x32,0x20,0x35,0x2e,0x37,0x30,0x37,0x30,0x33,0x43
,0x30,0x2e,0x32,0x30,0x30,0x35,0x32,0x31,0x20,0x35,0x2e,0x36,0x31,0x35,0x38,0x39
,0x20,0x30,0x2e,0x31,0x33,0x30,0x32,0x30,0x38,0x20,0x35,0x2e,0x35,0x31,0x30,0x34
,0x32,0x20,0x30,0x2e,0x30,0x37,0x38,0x31,0x32,0x35,0x20,0x35,0x2e,0x33,0x39,0x30
,0x36,0x32,0x43,0x30,0x2e,0x30,0x32,0x36,0x30,0x34,0x31,0x37,0x20,0x35,0x2e,0x32
,0x36,0x38,0x32,0x33,0x20,0x30,0x20,0x35,0x2e,0x31,0x33,0x38,0x30,0x32,0x20,0x30
,0x20,0x35,0x43,0x30,0x20,0x34,0x2e,0x38,0x39,0x30,0x36,0x32,0x20,0x30,0x2e,0x30
,0x31,0x34,0x33,0x32,0x32,0x39,0x20,0x34,0x2e,0x37,0x39,0x30,0x33,0x36,0x20,0x30
,0x2e,0x30,0x34,0x32,0x39,0x36,0x38,0x38,0x20,0x34,0x2e,0x36,0x39,0x39,0x32,0x32
,0x43,0x30,0x2e,0x30,0x37,0x34,0x32,0x31,0x38,0x38,0x20,0x34,0x2e,0x36,0x30,0x38
,0x30,0x37,0x20,0x30,0x2e,0x31,0x31,0x39,0x37,0x39,0x32,0x20,0x34,0x2e,0x35,0x31
,0x38,0x32,0x33,0x20,0x30,0x2e,0x31,0x37,0x39,0x36,0x38,0x38,0x20,0x34,0x2e,0x34
,0x32,0x39,0x36,0x39,0x4c,0x32,0x2e,0x37,0x38,0x31,0x32,0x35,0x20,0x30,0x2e,0x36
,0x34,0x34,0x35,0x33,0x31,0x43,0x32,0x2e,0x38,0x34,0x38,0x39,0x36,0x20,0x30,0x2e
,0x35,0x34,0x35,0x35,0x37,0x33,0x20,0x32,0x2e,0x39,0x32,0x38,0x33,0x39,0x20,0x30
,0x2e,0x34,0x35,0x38,0x33,0x33,0x33,0x20,0x33,0x2e,0x30,0x31,0x39,0x35,0x33,0x20
,0x30,0x2e,0x33,0x38,0x32,0x38,0x31,0x32,0x43,0x33,0x2e,0x31,0x31,0x30,0x36,0x38
,0x20,0x30,0x2e,0x33,0x30,0x37,0x32,0x39,0x32,0x20,0x33,0x2e,0x32,0x30,0x38,0x33
,0x33,0x20,0x30,0x2e,0x32,0x34,0x34,0x37,0x39,0x32,0x20,0x33,0x2e,0x33,0x31,0x32
,0x35,0x20,0x30,0x2e,0x31,0x39,0x35,0x33,0x31,0x32,0x43,0x33,0x2e,0x34,0x31,0x39
,0x32,0x37,0x20,0x30,0x2e,0x31,0x34,0x33,0x32,0x32,0x39,0x20,0x33,0x2e,0x35,0x33
,0x31,0x32,0x35,0x20,0x30,0x2e,0x31,0x30,0x34,0x31,0x36,0x37,0x20,0x33,0x2e,0x36
,0x34,0x38,0x34,0x34,0x20,0x30,0x2e,0x30,0x37,0x38,0x31,0x32,0x35,0x43,0x33,0x2e
,0x37,0x36,0x35,0x36,0x32,0x20,0x30,0x2e,0x30,0x35,0x32,0x30,0x38,0x33,0x33,0x20
,0x33,0x2e,0x38,0x38,0x32,0x38,0x31,0x20,0x30,0x2e,0x30,0x33,0x39,0x30,0x36,0x32
,0x35,0x20,0x34,0x20,0x30,0x2e,0x30,0x33,0x39,0x30,0x36,0x32,0x35,0x43,0x34,0x2e
,0x31,0x31,0x37,0x31,0x39,0x20,0x30,0x2e,0x30,0x33,0x39,0x30,0x36,0x32,0x35,0x20
,0x34,0x2e,0x32,0x33,0x34,0x33,0x38,0x20,0x30,0x2e,0x30,0x35,0x32,0x30,0x38,0x33
,0x33,0x20,0x34,0x2e,0x33,0x35,0x31,0x35,0x36,0x20,0x30,0x2e,0x30,0x37,0x38,0x31
,0x32,0x35,0x43,0x34,0x2e,0x34,0x36,0x38,0x37,0x35,0x20,0x30,0x2e,0x31,0x30,0x34
,0x31,0x36,0x37,0x20,0x34,0x2e,0x35,0x37,0x39,0x34,0x33,0x20,0x30,0x2e,0x31,0x34
,0x33,0x32,0x32,0x39,0x20,0x34,0x2e,0x36,0x38,0x33,0x35,0x39,0x20,0x30,0x2e,0x31
,0x39,0x35,0x33,0x31,0x32,0x43,0x34,0x2e,0x37,0x39,0x30,0x33,0x36,0x20,0x30,0x2e
,0x32,0x34,0x34,0x37,0x39,0x32,0x20,0x34,0x2e,0x38,0x38,0x39,0x33,0x32,0x20,0x30
,0x2e,0x33,0x30,0x37,0x32,0x39,0x32,0x20,0x34,0x2e,0x39,0x38,0x30,0x34,0x37,0x20
,0x30,0x2e,0x33,0x38,0x32,0x38,0x31,0x32,0x43,0x35,0x2e,0x30,0x37,0x31,0x36,0x31
,0x20,0x30,0x2e,0x34,0x35,0x38,0x33,0x33,0x33,0x20,0x35,0x2e,0x31,0x35,0x31,0x30
,0x34,0x20,0x30,0x2e,0x35,0x34,0x35,0x35,0x37,0x33,0x20,0x35,0x2e,0x32,0x31,0x38
,0x37,0x35,0x20,0x30,0x2e,0x36,0x34,0x34,0x35,0x33,0x31,0x4c,0x37,0x2e,0x38,0x32
,0x30,0x33,0x31,0x20,0x34,0x2e,0x34,0x32,0x39,0x36,0x39,0x43,0x37,0x2e,0x38,0x38
,0x30,0x32,0x31,0x20,0x34,0x2e,0x35,0x31,0x38,0x32,0x33,0x20,0x37,0x2e,0x39,0x32
,0x34,0x34,0x38,0x20,0x34,0x2e,0x36,0x30,0x38,0x30,0x37,0x20,0x37,0x2e,0x39,0x35
,0x33,0x31,0x32,0x20,0x34,0x2e,0x36,0x39,0x39,0x32,0x32,0x43,0x37,0x2e,0x39,0x38
,0x34,0x33,0x38,0x20,0x34,0x2e,0x37,0x39,0x30,0x33,0x36,0x20,0x38,0x20,0x34,0x2e
,0x38,0x39,0x30,0x36,0x32,0x20,0x38,0x20,0x35,0x43,0x38,0x20,0x35,0x2e,0x31,0x33
,0x38,0x30,0x32,0x20,0x37,0x2e,0x39,0x37,0x33,0x39,0x36,0x20,0x35,0x2e,0x32,0x36
,0x38,0x32,0x33,0x20,0x37,0x2e,0x39,0x32,0x31,0x38,0x38,0x20,0x35,0x2e,0x33,0x39
,0x30,0x36,0x32,0x43,0x37,0x2e,0x38,0x36,0x39,0x37,0x39,0x20,0x35,0x2e,0x35,0x31
,0x30,0x34,0x32,0x20,0x37,0x2e,0x37,0x39,0x39,0x34,0x38,0x20,0x35,0x2e,0x36,0x31
,0x35,0x38,0x39,0x20,0x37,0x2e,0x37,0x31,0x30,0x39,0x34,0x20,0x35,0x2e,0x37,0x30
,0x37,0x30,0x33,0x43,0x37,0x2e,0x36,0x32,0x32,0x34,0x20,0x35,0x2e,0x37,0x39,0x35
,0x35,0x37,0x20,0x37,0x2e,0x35,0x31,0x36,0x39,0x33,0x20,0x35,0x2e,0x38,0x36,0x37
,0x31,0x39,0x20,0x37,0x2e,0x33,0x39,0x34,0x35,0x33,0x20,0x35,0x2e,0x39,0x32,0x31
,0x38,0x38,0x43,0x37,0x2e,0x32,0x37,0x34,0x37,0x34,0x20,0x35,0x2e,0x39,0x37,0x33
,0x39,0x36,0x20,0x37,0x2e,0x31,0x34,0x37,0x31,0x34,0x20,0x36,0x20,0x37,0x2e,0x30
,0x31,0x31,0x37,0x32,0x20,0x36,0x48,0x30,0x2e,0x39,0x39,0x32,0x31,0x38,0x38,0x5a
,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d,0x22,0x77,0x68,0x69,0x74,0x65,0x22,0x20,0x66
,0x69,0x6c,0x6c,0x2d,0x6f,0x70,0x61,0x63,0x69,0x74,0x79,0x3d,0x22,0x30,0x2e,0x35
,0x34,0x34,0x32,0x22,0x20,0x2f,0x3e,0xd,0xa,0x3c,0x2f,0x73,0x76,0x67,0x3e,0xd
,0xa};

const uint8_t slint_embedded_resource_3[852] = { 0x3c
,0x73,0x76,0x67,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,0x36,0x22,0x20,0x68,0x65
,0x69,0x67,0x68,0x74,0x3d,0x22,0x38,0x22,0x20,0x76,0x69,0x65,0x77,0x42,0x6f,0x78
,0x3d,0x22,0x30,0x20,0x30,0x20,0x36,0x20,0x38,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d
,0x22,0x6e,0x6f,0x6e,0x65,0x22,0x20,0x78,0x6d,0x6c,0x6e,0x73,0x3d,0x22,0x68,0x74
,0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x77,0x33,0x2e,0x6f,0x72,0x67,0x2f
,0x32,0x30,0x30,0x30,0x2f,0x73,0x76,0x67,0x22,0x3e,0xd,0xa,0x3c,0x70,0x61,0x74
,0x68,0x20,0x64,0x3d,0x22,0x4d,0x30,0x20,0x34,0x43,0x30,0x20,0x33,0x2e,0x37,0x35
,0x35,0x32,0x31,0x20,0x30,0x2e,0x30,0x35,0x37,0x32,0x39,0x31,0x37,0x20,0x33,0x2e
,0x35,0x32,0x36,0x30,0x34,0x20,0x30,0x2e,0x31,0x37,0x31,0x38,0x37,0x35,0x20,0x33
,0x2e,0x33,0x31,0x32,0x35,0x43,0x30,0x2e,0x32,0x38,0x36,0x34,0x35,0x38,0x20,0x33
,0x2e,0x30,0x39,0x36,0x33,0x35,0x20,0x30,0x2e,0x34,0x34,0x34,0x30,0x31,0x20,0x32
,0x2e,0x39,0x31,0x39,0x32,0x37,0x20,0x30,0x2e,0x36,0x34,0x34,0x35,0x33,0x31,0x20
,0x32,0x2e,0x37,0x38,0x31,0x32,0x35,0x4c,0x34,0x2e,0x34,0x32,0x39,0x36,0x39,0x20
,0x30,0x2e,0x31,0x37,0x39,0x36,0x38,0x37,0x43,0x34,0x2e,0x35,0x31,0x38,0x32,0x33
,0x20,0x30,0x2e,0x31,0x31,0x39,0x37,0x39,0x32,0x20,0x34,0x2e,0x36,0x30,0x38,0x30
,0x37,0x20,0x30,0x2e,0x30,0x37,0x35,0x35,0x32,0x30,0x38,0x20,0x34,0x2e,0x36,0x39
,0x39,0x32,0x32,0x20,0x30,0x2e,0x30,0x34,0x36,0x38,0x37,0x35,0x43,0x34,0x2e,0x37
,0x39,0x30,0x33,0x36,0x20,0x30,0x2e,0x30,0x31,0x35,0x36,0x32,0x35,0x20,0x34,0x2e
,0x38,0x39,0x30,0x36,0x32,0x20,0x30,0x20,0x35,0x20,0x30,0x43,0x35,0x2e,0x31,0x33
,0x35,0x34,0x32,0x20,0x30,0x20,0x35,0x2e,0x32,0x36,0x34,0x33,0x32,0x20,0x30,0x2e
,0x30,0x32,0x36,0x30,0x34,0x31,0x37,0x20,0x35,0x2e,0x33,0x38,0x36,0x37,0x32,0x20
,0x30,0x2e,0x30,0x37,0x38,0x31,0x32,0x35,0x43,0x35,0x2e,0x35,0x30,0x39,0x31,0x31
,0x20,0x30,0x2e,0x31,0x33,0x30,0x32,0x30,0x38,0x20,0x35,0x2e,0x36,0x31,0x34,0x35
,0x38,0x20,0x30,0x2e,0x32,0x30,0x31,0x38,0x32,0x33,0x20,0x35,0x2e,0x37,0x30,0x33
,0x31,0x32,0x20,0x30,0x2e,0x32,0x39,0x32,0x39,0x36,0x39,0x43,0x35,0x2e,0x37,0x39
,0x34,0x32,0x37,0x20,0x30,0x2e,0x33,0x38,0x31,0x35,0x31,0x20,0x35,0x2e,0x38,0x36
,0x35,0x38,0x39,0x20,0x30,0x2e,0x34,0x38,0x35,0x36,0x37,0x37,0x20,0x35,0x2e,0x39
,0x31,0x37,0x39,0x37,0x20,0x30,0x2e,0x36,0x30,0x35,0x34,0x36,0x39,0x43,0x35,0x2e
,0x39,0x37,0x32,0x36,0x36,0x20,0x30,0x2e,0x37,0x32,0x35,0x32,0x36,0x20,0x36,0x20
,0x30,0x2e,0x38,0x35,0x34,0x31,0x36,0x37,0x20,0x36,0x20,0x30,0x2e,0x39,0x39,0x32
,0x31,0x38,0x37,0x4c,0x36,0x20,0x37,0x2e,0x30,0x30,0x37,0x38,0x31,0x43,0x36,0x20
,0x37,0x2e,0x31,0x34,0x35,0x38,0x33,0x20,0x35,0x2e,0x39,0x37,0x32,0x36,0x36,0x20
,0x37,0x2e,0x32,0x37,0x34,0x37,0x34,0x20,0x35,0x2e,0x39,0x31,0x37,0x39,0x37,0x20
,0x37,0x2e,0x33,0x39,0x34,0x35,0x33,0x43,0x35,0x2e,0x38,0x36,0x35,0x38,0x39,0x20
,0x37,0x2e,0x35,0x31,0x34,0x33,0x32,0x20,0x35,0x2e,0x37,0x39,0x34,0x32,0x37,0x20
,0x37,0x2e,0x36,0x31,0x39,0x37,0x39,0x20,0x35,0x2e,0x37,0x30,0x33,0x31,0x33,0x20
,0x37,0x2e,0x37,0x31,0x30,0x39,0x34,0x43,0x35,0x2e,0x36,0x31,0x34,0x35,0x38,0x20
,0x37,0x2e,0x37,0x39,0x39,0x34,0x38,0x20,0x35,0x2e,0x35,0x30,0x39,0x31,0x31,0x20
,0x37,0x2e,0x38,0x36,0x39,0x37,0x39,0x20,0x35,0x2e,0x33,0x38,0x36,0x37,0x32,0x20
,0x37,0x2e,0x39,0x32,0x31,0x38,0x37,0x43,0x35,0x2e,0x32,0x36,0x34,0x33,0x32,0x20
,0x37,0x2e,0x39,0x37,0x33,0x39,0x36,0x20,0x35,0x2e,0x31,0x33,0x35,0x34,0x32,0x20
,0x38,0x20,0x35,0x20,0x38,0x43,0x34,0x2e,0x37,0x39,0x34,0x32,0x37,0x20,0x38,0x20
,0x34,0x2e,0x36,0x30,0x34,0x31,0x37,0x20,0x37,0x2e,0x39,0x34,0x30,0x31,0x20,0x34
,0x2e,0x34,0x32,0x39,0x36,0x39,0x20,0x37,0x2e,0x38,0x32,0x30,0x33,0x31,0x4c,0x30
,0x2e,0x36,0x34,0x34,0x35,0x33,0x31,0x20,0x35,0x2e,0x32,0x31,0x38,0x37,0x35,0x43
,0x30,0x2e,0x34,0x34,0x34,0x30,0x31,0x20,0x35,0x2e,0x30,0x38,0x30,0x37,0x33,0x20
,0x30,0x2e,0x32,0x38,0x36,0x34,0x35,0x38,0x20,0x34,0x2e,0x39,0x30,0x34,0x39,0x35
,0x20,0x30,0x2e,0x31,0x37,0x31,0x38,0x37,0x35,0x20,0x34,0x2e,0x36,0x39,0x31,0x34
,0x31,0x43,0x30,0x2e,0x30,0x35,0x37,0x32,0x39,0x31,0x37,0x20,0x34,0x2e,0x34,0x37
,0x35,0x32,0x36,0x20,0x30,0x20,0x34,0x2e,0x32,0x34,0x34,0x37,0x39,0x20,0x30,0x20
,0x34,0x5a,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d,0x22,0x77,0x68,0x69,0x74,0x65,0x22
,0x20,0x66,0x69,0x6c,0x6c,0x2d,0x6f,0x70,0x61,0x63,0x69,0x74,0x79,0x3d,0x22,0x30
,0x2e,0x35,0x34,0x34,0x32,0x22,0x20,0x2f,0x3e,0xd,0xa,0x3c,0x2f,0x73,0x76,0x67
,0x3e,0xd,0xa};

const uint8_t slint_embedded_resource_4[516] = { 0x3c
,0x73,0x76,0x67,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,0x31,0x32,0x22,0x20,0x68
,0x65,0x69,0x67,0x68,0x74,0x3d,0x22,0x31,0x32,0x22,0x20,0x76,0x69,0x65,0x77,0x42
,0x6f,0x78,0x3d,0x22,0x30,0x20,0x30,0x20,0x31,0x32,0x20,0x31,0x32,0x22,0x20,0x66
,0x69,0x6c,0x6c,0x3d,0x22,0x6e,0x6f,0x6e,0x65,0x22,0x20,0x78,0x6d,0x6c,0x6e,0x73
,0x3d,0x22,0x68,0x74,0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x77,0x33,0x2e
,0x6f,0x72,0x67,0x2f,0x32,0x30,0x30,0x30,0x2f,0x73,0x76,0x67,0x22,0x3e,0xd,0xa
,0x3c,0x70,0x61,0x74,0x68,0x20,0x64,0x3d,0x22,0x4d,0x36,0x20,0x31,0x30,0x2e,0x35
,0x43,0x36,0x2e,0x32,0x37,0x36,0x31,0x34,0x20,0x31,0x30,0x2e,0x35,0x20,0x36,0x2e
,0x35,0x20,0x31,0x30,0x2e,0x32,0x37,0x36,0x31,0x20,0x36,0x2e,0x35,0x20,0x31,0x30
,0x56,0x33,0x2e,0x32,0x30,0x37,0x31,0x31,0x4c,0x39,0x2e,0x31,0x34,0x36,0x34,0x35
,0x20,0x35,0x2e,0x38,0x35,0x33,0x35,0x35,0x43,0x39,0x2e,0x33,0x34,0x31,0x37,0x31
,0x20,0x36,0x2e,0x30,0x34,0x38,0x38,0x32,0x20,0x39,0x2e,0x36,0x35,0x38,0x32,0x39
,0x20,0x36,0x2e,0x30,0x34,0x38,0x38,0x32,0x20,0x39,0x2e,0x38,0x35,0x33,0x35,0x35
,0x20,0x35,0x2e,0x38,0x35,0x33,0x35,0x35,0x43,0x31,0x30,0x2e,0x30,0x34,0x38,0x38
,0x20,0x35,0x2e,0x36,0x35,0x38,0x32,0x39,0x20,0x31,0x30,0x2e,0x30,0x34,0x38,0x38
,0x20,0x35,0x2e,0x33,0x34,0x31,0x37,0x31,0x20,0x39,0x2e,0x38,0x35,0x33,0x35,0x35
,0x20,0x35,0x2e,0x31,0x34,0x36,0x34,0x35,0x4c,0x36,0x2e,0x33,0x35,0x33,0x35,0x35
,0x20,0x31,0x2e,0x36,0x34,0x36,0x34,0x35,0x43,0x36,0x2e,0x31,0x35,0x38,0x32,0x39
,0x20,0x31,0x2e,0x34,0x35,0x31,0x31,0x38,0x20,0x35,0x2e,0x38,0x34,0x31,0x37,0x31
,0x20,0x31,0x2e,0x34,0x35,0x31,0x31,0x38,0x20,0x35,0x2e,0x36,0x34,0x36,0x34,0x35
,0x20,0x31,0x2e,0x36,0x34,0x36,0x34,0x35,0x4c,0x32,0x2e,0x31,0x34,0x36,0x34,0x35
,0x20,0x35,0x2e,0x31,0x34,0x36,0x34,0x35,0x43,0x31,0x2e,0x39,0x35,0x31,0x31,0x38
,0x20,0x35,0x2e,0x33,0x34,0x31,0x37,0x31,0x20,0x31,0x2e,0x39,0x35,0x31,0x31,0x38
,0x20,0x35,0x2e,0x36,0x35,0x38,0x32,0x39,0x20,0x32,0x2e,0x31,0x34,0x36,0x34,0x35
,0x20,0x35,0x2e,0x38,0x35,0x33,0x35,0x35,0x43,0x32,0x2e,0x33,0x34,0x31,0x37,0x31
,0x20,0x36,0x2e,0x30,0x34,0x38,0x38,0x32,0x20,0x32,0x2e,0x36,0x35,0x38,0x32,0x39
,0x20,0x36,0x2e,0x30,0x34,0x38,0x38,0x32,0x20,0x32,0x2e,0x38,0x35,0x33,0x35,0x35
,0x20,0x35,0x2e,0x38,0x35,0x33,0x35,0x35,0x4c,0x35,0x2e,0x35,0x20,0x33,0x2e,0x32
,0x30,0x37,0x31,0x31,0x56,0x31,0x30,0x43,0x35,0x2e,0x35,0x20,0x31,0x30,0x2e,0x32
,0x37,0x36,0x31,0x20,0x35,0x2e,0x37,0x32,0x33,0x38,0x36,0x20,0x31,0x30,0x2e,0x35
,0x20,0x36,0x20,0x31,0x30,0x2e,0x35,0x5a,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d,0x22
,0x77,0x68,0x69,0x74,0x65,0x22,0x20,0x2f,0x3e,0xd,0xa,0x3c,0x2f,0x73,0x76,0x67
,0x3e,0xd,0xa};

const uint8_t slint_embedded_resource_5[510] = { 0x3c
,0x73,0x76,0x67,0x20,0x77,0x69,0x64,0x74,0x68,0x3d,0x22,0x31,0x32,0x22,0x20,0x68
,0x65,0x69,0x67,0x68,0x74,0x3d,0x22,0x31,0x32,0x22,0x20,0x76,0x69,0x65,0x77,0x42
,0x6f,0x78,0x3d,0x22,0x30,0x20,0x30,0x20,0x31,0x32,0x20,0x31,0x32,0x22,0x20,0x66
,0x69,0x6c,0x6c,0x3d,0x22,0x6e,0x6f,0x6e,0x65,0x22,0x20,0x78,0x6d,0x6c,0x6e,0x73
,0x3d,0x22,0x68,0x74,0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x77,0x33,0x2e
,0x6f,0x72,0x67,0x2f,0x32,0x30,0x30,0x30,0x2f,0x73,0x76,0x67,0x22,0x3e,0xd,0xa
,0x3c,0x70,0x61,0x74,0x68,0x20,0x64,0x3d,0x22,0x4d,0x36,0x20,0x31,0x2e,0x35,0x43
,0x36,0x2e,0x32,0x37,0x36,0x31,0x34,0x20,0x31,0x2e,0x35,0x20,0x36,0x2e,0x35,0x20
,0x31,0x2e,0x37,0x32,0x33,0x38,0x36,0x20,0x36,0x2e,0x35,0x20,0x32,0x56,0x38,0x2e
,0x37,0x39,0x32,0x38,0x39,0x4c,0x39,0x2e,0x31,0x34,0x36,0x34,0x35,0x20,0x36,0x2e
,0x31,0x34,0x36,0x34,0x35,0x43,0x39,0x2e,0x33,0x34,0x31,0x37,0x31,0x20,0x35,0x2e
,0x39,0x35,0x31,0x31,0x38,0x20,0x39,0x2e,0x36,0x35,0x38,0x32,0x39,0x20,0x35,0x2e
,0x39,0x35,0x31,0x31,0x38,0x20,0x39,0x2e,0x38,0x35,0x33,0x35,0x35,0x20,0x36,0x2e
,0x31,0x34,0x36,0x34,0x35,0x43,0x31,0x30,0x2e,0x30,0x34,0x38,0x38,0x20,0x36,0x2e
,0x33,0x34,0x31,0x37,0x31,0x20,0x31,0x30,0x2e,0x30,0x34,0x38,0x38,0x20,0x36,0x2e
,0x36,0x35,0x38,0x32,0x39,0x20,0x39,0x2e,0x38,0x35,0x33,0x35,0x35,0x20,0x36,0x2e
,0x38,0x35,0x33,0x35,0x35,0x4c,0x36,0x2e,0x33,0x35,0x33,0x35,0x35,0x20,0x31,0x30
,0x2e,0x33,0x35,0x33,0x36,0x43,0x36,0x2e,0x31,0x35,0x38,0x32,0x39,0x20,0x31,0x30
,0x2e,0x35,0x34,0x38,0x38,0x20,0x35,0x2e,0x38,0x34,0x31,0x37,0x31,0x20,0x31,0x30
,0x2e,0x35,0x34,0x38,0x38,0x20,0x35,0x2e,0x36,0x34,0x36,0x34,0x35,0x20,0x31,0x30
,0x2e,0x33,0x35,0x33,0x36,0x4c,0x32,0x2e,0x31,0x34,0x36,0x34,0x35,0x20,0x36,0x2e
,0x38,0x35,0x33,0x35,0x35,0x43,0x31,0x2e,0x39,0x35,0x31,0x31,0x38,0x20,0x36,0x2e
,0x36,0x35,0x38,0x32,0x39,0x20,0x31,0x2e,0x39,0x35,0x31,0x31,0x38,0x20,0x36,0x2e
,0x33,0x34,0x31,0x37,0x31,0x20,0x32,0x2e,0x31,0x34,0x36,0x34,0x35,0x20,0x36,0x2e
,0x31,0x34,0x36,0x34,0x35,0x43,0x32,0x2e,0x33,0x34,0x31,0x37,0x31,0x20,0x35,0x2e
,0x39,0x35,0x31,0x31,0x38,0x20,0x32,0x2e,0x36,0x35,0x38,0x32,0x39,0x20,0x35,0x2e
,0x39,0x35,0x31,0x31,0x38,0x20,0x32,0x2e,0x38,0x35,0x33,0x35,0x35,0x20,0x36,0x2e
,0x31,0x34,0x36,0x34,0x35,0x4c,0x35,0x2e,0x35,0x20,0x38,0x2e,0x37,0x39,0x32,0x38
,0x39,0x56,0x32,0x43,0x35,0x2e,0x35,0x20,0x31,0x2e,0x37,0x32,0x33,0x38,0x36,0x20
,0x35,0x2e,0x37,0x32,0x33,0x38,0x36,0x20,0x31,0x2e,0x35,0x20,0x36,0x20,0x31,0x2e
,0x35,0x5a,0x22,0x20,0x66,0x69,0x6c,0x6c,0x3d,0x22,0x77,0x68,0x69,0x74,0x65,0x22
,0x20,0x2f,0x3e,0xd,0xa,0x3c,0x2f,0x73,0x76,0x67,0x3e,0xd,0xa};

inline auto FocusBorder_root_1::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->field_root_1.border_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.294967295e9) : slint::Color::from_argb_encoded(+3.85875968e9)));
                        });
    self->field_root_1.border_width.set(2);
    self->field_rectangle_2.border_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+3.003121664e9) : slint::Color::from_argb_encoded(+4.294967295e9)));
                        });
    self->field_rectangle_2.border_radius.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_root_1.border_radius.get() -(float) 2);
                        });
    self->field_rectangle_2.border_width.set(1);
    self->field_root_1.background.set_constant();
    self->field_root_1.border_width.set_constant();
    self->field_rectangle_2.background.set_constant();
    self->field_rectangle_2.border_width.set_constant();
}

inline auto FocusBorder_root_1::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto FocusBorder_root_1::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), const_cast<slint::cbindgen_private::BasicBorderRectangle*>(&self->field_root_1), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), const_cast<slint::cbindgen_private::BasicBorderRectangle*>(&self->field_root_1), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);
}

inline auto FocusBorder_root_1::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_1_height.get()), float(self->field_root_1_width.get()), float(0), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float((self->field_root_1_height.get() -(float) 4)), float((self->field_root_1_width.get() -(float) 4)), float(2), float(2)));
    }
    return {};
}

inline auto FocusBorder_root_1::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto FocusBorder_root_1::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto FocusBorder_root_1::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto FocusBorder_root_1::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto FocusBorder_root_1::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto FocusBorder_root_1::ensure_instantiated () const -> bool{
    [[maybe_unused]] auto self = this;
    bool _changed = false;
    return _changed;
}

inline const slint::private_api::ItemTreeVTable Component_image_7::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, ensure_instantiated, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_image_7>, slint::private_api::dealloc };

inline auto Component_image_7::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_3 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Button_root_3>(parent->self_weak.lock().value(), parent);
    slint::private_api::optional_then(self->parent.lock(), [&](auto&&x) { slint::private_api::Property<slint::Image>::link_two_way(&self->field_image_7.source, &x->field_root_3_icon); });
    self->field_image_7.colorize.set(slint::Brush(slint::Color::from_argb_encoded(0)));
    self->field_image_7.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_3_height.get(); })) -(float) 5) -(float) 5);
                        });
    self->field_image_7.image_fit.set(slint::cbindgen_private::ImageFit::Contain);
    self->field_image_7.width.set(20);
    self->field_image_7.colorize.set_constant();
    self->field_image_7.image_fit.set_constant();
    self->field_image_7.image_rendering.set_constant();
    self->field_image_7.source.set_constant();
    self->field_image_7.width.set_constant();
}

inline auto Component_image_7::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto Component_image_7::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->field_image_7), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(20, layout_info.max_percent, 20, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }() : [&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->field_image_7), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, 20, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }();
}

inline auto Component_image_7::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(((slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_3_height.get(); })) -(float) 5) -(float) 5)), float(20), float(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return slint::private_api::layout_cache_access(x->field_root_3_i_layout_6_layout_cache.get(), 0, 0, 2); }))), float(5)));
    }
    return {};
}

inline auto Component_image_7::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::AccessibleRole::Image;
    }
    return {};
}

inline auto Component_image_7::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto Component_image_7::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto Component_image_7::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_image_7::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_image_7::ensure_instantiated () const -> bool{
    [[maybe_unused]] auto self = this;
    bool _changed = false;
    return _changed;
}

inline auto Component_image_7::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_image_7*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_image_7*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_image_7::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_image_7::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_image_7::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_image_7::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_image_7::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_image_7*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 5 };
}

inline auto Component_image_7::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_image_7::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_image_7::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(0, 1, 0, 0, true) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_image_7::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(ImageItemVTable),  offsetof(Component_image_7, field_image_7) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_image_7::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_image_7*>(component.instance)->layout_info(o);
}

inline auto Component_image_7::ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool{
    return reinterpret_cast<const Component_image_7*>(component.instance)->ensure_instantiated();
}

inline auto Component_image_7::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_image_7*>(component.instance)->item_geometry(index);
}

inline auto Component_image_7::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_image_7*>(component.instance)->accessible_role(index);
}

inline auto Component_image_7::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_image_7*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_image_7::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_image_7*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_image_7::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_image_7*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_image_7::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_image_7::window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_image_7*>(component.instance)->globals->window().window_handle();
}

inline auto Component_image_7::create (class Button_root_3 const * parent) -> slint::ComponentHandle<Component_image_7>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_image_7>::make();
    auto self = const_cast<Component_image_7 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_image_7>{ self_rc };
}

inline Component_image_7::~Component_image_7 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_image_7::init () -> void{
    user_init();
}

inline auto Component_image_7::layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline auto Component_image_7::flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo{
    auto base = layout_item_info(o, child_index); return { base.constraint, 0.0f, 0.0f, -1.0f, slint::cbindgen_private::FlexboxLayoutAlignSelf::Auto, 0 };
}

inline const slint::private_api::ItemTreeVTable Component_text_9::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, ensure_instantiated, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_text_9>, slint::private_api::dealloc };

inline auto Component_text_9::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_3 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Button_root_3>(parent->self_weak.lock().value(), parent);
    self->field_text_9.color.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_3_text_color.get(); }));
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_text_9.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_3_height.get(); })) -(float) 5) -(float) 5);
                        });
    self->field_text_9.horizontal_alignment.set(slint::cbindgen_private::TextHorizontalAlignment::Center);
    self->field_text_9.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_3_text.get(); }));
                        });
    self->field_text_9.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_9.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return slint::private_api::layout_cache_access(x->field_root_3_i_layout_6_layout_cache.get(), 3, 0, 2); }));
                        });
    self->field_text_9.font_size.set_constant();
    self->field_text_9.font_weight.set_constant();
    self->field_text_9.horizontal_alignment.set_constant();
    self->field_text_9.vertical_alignment.set_constant();
}

inline auto Component_text_9::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto Component_text_9::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_9), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index) : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(SimpleTextVTable), const_cast<slint::cbindgen_private::SimpleText*>(&self->field_text_9), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);
}

inline auto Component_text_9::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(((slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_3_height.get(); })) -(float) 5) -(float) 5)), float(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return slint::private_api::layout_cache_access(x->field_root_3_i_layout_6_layout_cache.get(), 3, 0, 2); }))), float(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return slint::private_api::layout_cache_access(x->field_root_3_i_layout_6_layout_cache.get(), 2, 0, 2); }))), float(5)));
    }
    return {};
}

inline auto Component_text_9::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_text_9::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto Component_text_9::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto Component_text_9::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_text_9::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_text_9::ensure_instantiated () const -> bool{
    [[maybe_unused]] auto self = this;
    bool _changed = false;
    return _changed;
}

inline auto Component_text_9::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_text_9*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_text_9*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_text_9::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_text_9::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_text_9::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_text_9::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_text_9::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_text_9*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 6 };
}

inline auto Component_text_9::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_text_9::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_text_9::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(0, 1, 0, 0, false) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_text_9::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(SimpleTextVTable),  offsetof(Component_text_9, field_text_9) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_text_9::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_text_9*>(component.instance)->layout_info(o);
}

inline auto Component_text_9::ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool{
    return reinterpret_cast<const Component_text_9*>(component.instance)->ensure_instantiated();
}

inline auto Component_text_9::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_text_9*>(component.instance)->item_geometry(index);
}

inline auto Component_text_9::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_text_9*>(component.instance)->accessible_role(index);
}

inline auto Component_text_9::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_text_9*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_text_9::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_text_9*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_text_9::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_text_9*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_text_9::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_text_9::window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_text_9*>(component.instance)->globals->window().window_handle();
}

inline auto Component_text_9::create (class Button_root_3 const * parent) -> slint::ComponentHandle<Component_text_9>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_text_9>::make();
    auto self = const_cast<Component_text_9 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_text_9>{ self_rc };
}

inline Component_text_9::~Component_text_9 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_text_9::init () -> void{
    user_init();
}

inline auto Component_text_9::layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline auto Component_text_9::flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo{
    auto base = layout_item_info(o, child_index); return { base.constraint, 0.0f, 0.0f, -1.0f, slint::cbindgen_private::FlexboxLayoutAlignSelf::Auto, 0 };
}

inline const slint::private_api::ItemTreeVTable Component_focusborder_13::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, ensure_instantiated, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_focusborder_13>, slint::private_api::dealloc };

inline auto Component_focusborder_13::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Button_root_3 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Button_root_3>(parent->self_weak.lock().value(), parent);
    this->field_focusborder_13.init(globals, self_weak.into_dyn(), tree_index, tree_index_of_first_child + 1 - 1);
    self->field_focusborder_13.field_root_1.border_radius.set(4);
    self->field_focusborder_13.field_root_1_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_3_height.get(); }));
                        });
    self->field_focusborder_13.field_root_1_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_3_width.get(); }));
                        });
    self->field_focusborder_13.field_root_1.background.set_constant();
    self->field_focusborder_13.field_root_1.border_radius.set_constant();
    self->field_focusborder_13.field_root_1.border_width.set_constant();
}

inline auto Component_focusborder_13::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->field_focusborder_13.user_init();
}

inline auto Component_focusborder_13::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), const_cast<slint::cbindgen_private::BasicBorderRectangle*>(&self->field_focusborder_13.field_root_1), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->field_focusborder_13.self_weak.lock()->into_dyn(), self->field_focusborder_13.tree_index) : slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), const_cast<slint::cbindgen_private::BasicBorderRectangle*>(&self->field_focusborder_13.field_root_1), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->field_focusborder_13.self_weak.lock()->into_dyn(), self->field_focusborder_13.tree_index);
}

inline auto Component_focusborder_13::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_3_height.get(); }))), float(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_3_width.get(); }))), float(0), float(0)));
    }
    if (index == 0) {
        return self->field_focusborder_13.item_geometry(0);
    } else if (index >= 1 && index < 2) {
        return self->field_focusborder_13.item_geometry(index - 0);
    } else return {};
}

inline auto Component_focusborder_13::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->field_focusborder_13.accessible_role(0);
    } else if (index >= 1 && index < 2) {
        return self->field_focusborder_13.accessible_role(index - 0);
    } else return {};
}

inline auto Component_focusborder_13::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    if (index == 0) {
        return self->field_focusborder_13.accessible_string_property(0, what);
    } else if (index >= 1 && index < 2) {
        return self->field_focusborder_13.accessible_string_property(index - 0, what);
    } else return {};
}

inline auto Component_focusborder_13::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    if (index == 0) {
        return self->field_focusborder_13.accessibility_action(0, action);
    } else if (index >= 1 && index < 2) {
        return self->field_focusborder_13.accessibility_action(index - 0, action);
    } else return ;
}

inline auto Component_focusborder_13::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->field_focusborder_13.supported_accessibility_actions(0);
    } else if (index >= 1 && index < 2) {
        return self->field_focusborder_13.supported_accessibility_actions(index - 0);
    } else return {};
}

inline auto Component_focusborder_13::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 0) {
        return self->field_focusborder_13.element_infos(0);
    } else if (index >= 1 && index < 2) {
        return self->field_focusborder_13.element_infos(index - 0);
    } else return {};
}

inline auto Component_focusborder_13::ensure_instantiated () const -> bool{
    [[maybe_unused]] auto self = this;
    bool _changed = false;
    return _changed;
}

inline auto Component_focusborder_13::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_focusborder_13*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_focusborder_13*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_focusborder_13::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_focusborder_13::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_focusborder_13::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_focusborder_13::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_focusborder_13::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_focusborder_13*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 3 };
}

inline auto Component_focusborder_13::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_focusborder_13::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto Component_focusborder_13::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(1, 1, 0, 0, false), 
slint::private_api::make_item_node(0, 2, 0, 1, false) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_focusborder_13::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(Component_focusborder_13, field_focusborder_13) +  offsetof(FocusBorder_root_1, field_root_1) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(Component_focusborder_13, field_focusborder_13) +  offsetof(FocusBorder_root_1, field_rectangle_2) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_focusborder_13::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_focusborder_13*>(component.instance)->layout_info(o);
}

inline auto Component_focusborder_13::ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool{
    return reinterpret_cast<const Component_focusborder_13*>(component.instance)->ensure_instantiated();
}

inline auto Component_focusborder_13::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_focusborder_13*>(component.instance)->item_geometry(index);
}

inline auto Component_focusborder_13::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_focusborder_13*>(component.instance)->accessible_role(index);
}

inline auto Component_focusborder_13::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_focusborder_13*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_focusborder_13::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_focusborder_13*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_focusborder_13::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_focusborder_13*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_focusborder_13::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_focusborder_13::window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_focusborder_13*>(component.instance)->globals->window().window_handle();
}

inline auto Component_focusborder_13::create (class Button_root_3 const * parent) -> slint::ComponentHandle<Component_focusborder_13>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_focusborder_13>::make();
    auto self = const_cast<Component_focusborder_13 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_focusborder_13>{ self_rc };
}

inline Component_focusborder_13::~Component_focusborder_13 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_focusborder_13::init () -> void{
    user_init();
}

inline auto Component_focusborder_13::layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline auto Component_focusborder_13::flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo{
    auto base = layout_item_info(o, child_index); return { base.constraint, 0.0f, 0.0f, -1.0f, slint::cbindgen_private::FlexboxLayoutAlignSelf::Auto, 0 };
}

inline auto Button_root_3::fn_i_background_4_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->fn_i_layout_6_layoutinfo_v_with_constraint(arg_0));
}

inline auto Button_root_3::fn_i_layout_6_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return [&]{   std::vector<slint::cbindgen_private::LayoutItemInfo> cells_vector;self->repeater_0.track_instance_changes();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Vertical, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_0.len());
                                }self->repeater_1.track_instance_changes();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Vertical, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_1.len());
                                } slint::cbindgen_private::Slice<slint::cbindgen_private::LayoutItemInfo>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info_ortho(cells,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(self->field_root_3_i_layout_6_padding_top.get(), self->field_root_3_i_layout_6_padding_bottom.get())); }();
}

inline auto Button_root_3::fn_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return ([&]{ [[maybe_unused]] auto layout_info_1 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_1.max, layout_info_1.max_percent, std::max<float>(32, self->field_root_3_i_layout_6_min_height.get()), layout_info_1.min_percent, layout_info_1.preferred, 0); }() + self->fn_i_background_4_layoutinfo_v_with_constraint(arg_0));
}

inline auto Button_root_3::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    slint::private_api::Property<bool>::link_two_way(&self->field_i_touch_area_11.enabled, &self->field_i_focus_scope_12.enabled);
    self->field_root_3_accessible_action_default.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->field_i_touch_area_11.clicked.call();
                });
    self->field_root_3_has_focus.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_i_focus_scope_12.has_focus.get();
                        });
    self->field_root_3_i_background_4_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_3_width.get();
                        });
    self->field_root_3_i_layout_6_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ std::array<int, 4> repeated_indices_array;  std::vector<slint::cbindgen_private::LayoutItemInfo> cells_vector;self->repeater_0.track_instance_changes();repeated_indices_array[0] = cells_vector.size();repeated_indices_array[1] = self->repeater_0.len();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Horizontal, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_0.len());
                                }self->repeater_1.track_instance_changes();repeated_indices_array[2] = cells_vector.size();repeated_indices_array[3] = self->repeater_1.len();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Horizontal, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_1.len());
                                }slint::cbindgen_private::Slice<int> repeated_indices = slint::private_api::make_slice(std::span(repeated_indices_array)); slint::cbindgen_private::Slice<slint::cbindgen_private::LayoutItemInfo>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Center, cells, [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 12), self->field_root_3_i_background_4_width.get(), 4),repeated_indices); }();
                        });
    self->field_root_3_i_layout_6_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{   std::vector<slint::cbindgen_private::LayoutItemInfo> cells_vector;self->repeater_0.track_instance_changes();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Horizontal, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_0.len());
                                }self->repeater_1.track_instance_changes();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Horizontal, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_1.len());
                                } slint::cbindgen_private::Slice<slint::cbindgen_private::LayoutItemInfo>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info(cells,4,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 12),slint::cbindgen_private::LayoutAlignment::Center); }();
                        });
    self->field_root_3_i_layout_6_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{   std::vector<slint::cbindgen_private::LayoutItemInfo> cells_vector;self->repeater_0.track_instance_changes();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Vertical, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_0.len());
                                }self->repeater_1.track_instance_changes();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_1.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Vertical, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_1.len());
                                } slint::cbindgen_private::Slice<slint::cbindgen_private::LayoutItemInfo>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info_ortho(cells,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(5, 5)); }();
                        });
    self->field_root_3_i_layout_6_min_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_3_i_layout_6_layoutinfo_v.get().min;
                        });
    self->field_root_3_i_layout_6_padding_bottom.set(5);
    self->field_root_3_i_layout_6_padding_top.set(5);
    self->field_root_3_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto layout_info_0 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_0.max, layout_info_0.max_percent, std::max<float>(32, self->field_root_3_i_layout_6_layoutinfo_h.get().min), layout_info_0.min_percent, layout_info_0.preferred, 0); }() + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_3_i_layout_6_layoutinfo_h.get()));
                        });
    self->field_root_3_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto layout_info_1 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_1.max, layout_info_1.max_percent, std::max<float>(32, self->field_root_3_i_layout_6_layoutinfo_v.get().min), layout_info_1.min_percent, layout_info_1.preferred, 0); }() + ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_root_3_i_layout_6_layoutinfo_v.get()));
                        });
    self->field_root_3_min_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(32, self->field_root_3_i_layout_6_layoutinfo_v.get().min);
                        });
    self->field_root_3_pressed.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_i_focus_scope_12.enabled.get() && self->field_i_touch_area_11.pressed.get());
                        });
    self->field_root_3_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (! self->field_i_focus_scope_12.enabled.get() ? 1 : (self->field_root_3_pressed.get() ? 2 : (self->field_i_touch_area_11.has_hover.get() ? 3 : (self->field_root_3_checked.get() ? 4 : 0))));
                        });
    self->field_root_3_text_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_3_state = self->field_root_3_state.get();;return (std::abs(float(tmp_root_3_state - 1)) < std::numeric_limits<float>::epsilon() ? (self->field_root_3_checked.get() ? slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+2.281701375e9) : slint::Color::from_argb_encoded(+4.294967295e9))) : slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+1.593835519e9) : slint::Color::from_argb_encoded(+1.577058304e9)))) : (std::abs(float(tmp_root_3_state - 2)) < std::numeric_limits<float>::epsilon() ? (self->field_root_3_checked.get() ? slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+2.147483648e9) : slint::Color::from_argb_encoded(+3.019898879e9))) : slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+3.388997631e9) : slint::Color::from_argb_encoded(+2.566914048e9)))) : (std::abs(float(tmp_root_3_state - 4)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.27819008e9) : slint::Color::from_argb_encoded(+4.294967295e9))) : (self->field_root_3_checked.get() ? slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.27819008e9) : slint::Color::from_argb_encoded(+4.294967295e9))) : slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.294967295e9) : slint::Color::from_argb_encoded(+3.85875968e9))))))); }();
                        });
    self->field_root_3_vertical_stretch.set(0);
    self->field_i_background_4.background.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_3_state = self->field_root_3_state.get();;return (std::abs(float(tmp_root_3_state - 1)) < std::numeric_limits<float>::epsilon() ? (self->field_root_3_checked.get() ? slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(704643071) : slint::Color::from_argb_encoded(939524096))) : slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(184549375) : slint::Color::from_argb_encoded(+1.308228089e9)))) : (std::abs(float(tmp_root_3_state - 2)) < std::numeric_limits<float>::epsilon() ? (self->field_root_3_checked.get() ? self->globals->global_FluentPalette_78->field_accent_background.get().with_alpha(0.8) : slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(150994943) : slint::Color::from_argb_encoded(+1.308228089e9)))) : (std::abs(float(tmp_root_3_state - 3)) < std::numeric_limits<float>::epsilon() ? (self->field_root_3_checked.get() ? self->globals->global_FluentPalette_78->field_accent_background.get().with_alpha(0.9) : slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+2.163866105e9)))) : (std::abs(float(tmp_root_3_state - 4)) < std::numeric_limits<float>::epsilon() ? self->globals->global_FluentPalette_78->field_accent_background.get() : slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(268435455) : slint::Color::from_argb_encoded(+3.019898879e9))))))); }();
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_i_background_4.border_radius.set(4);
    self->field_i_border_5.border_color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_3_state = self->field_root_3_state.get();;return (std::abs(float(tmp_root_3_state - 1)) < std::numeric_limits<float>::epsilon() ? (self->field_root_3_checked.get() ? slint::Brush(slint::Color::from_argb_encoded(0)) : slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+1.92937984e9)))) : (std::abs(float(tmp_root_3_state - 2)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+1.92937984e9))) : (std::abs(float(tmp_root_3_state - 4)) < std::numeric_limits<float>::epsilon() ? (self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? [&] { const slint::private_api::GradientStop stops[] = { slint::private_api::GradientStop{ slint::Color::from_argb_encoded(352321535), float(0.9067000000000001), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(603979776), float(1), } }; return slint::Brush(slint::private_api::LinearGradientBrush(180, stops, 2)); }() : [&] { const slint::private_api::GradientStop stops[] = { slint::private_api::GradientStop{ slint::Color::from_argb_encoded(352321535), float(0.9067000000000001), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(+1.711276032e9), float(1), } }; return slint::Brush(slint::private_api::LinearGradientBrush(180, stops, 2)); }()) : (self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? [&] { const slint::private_api::GradientStop stops[] = { slint::private_api::GradientStop{ slint::Color::from_argb_encoded(402653183), float(0), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(301989888), float(0.0833), } }; return slint::Brush(slint::private_api::LinearGradientBrush(180, stops, 2)); }() : [&] { const slint::private_api::GradientStop stops[] = { slint::private_api::GradientStop{ slint::Color::from_argb_encoded(251658240), float(0.9058), }, slint::private_api::GradientStop{ slint::Color::from_argb_encoded(687865856), float(1), } }; return slint::Brush(slint::private_api::LinearGradientBrush(180, stops, 2)); }())))); }();
                        });
    self->field_i_border_5.border_radius.set(4);
    self->field_i_border_5.border_width.set(1);
    self->field_i_touch_area_11.clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    [&]{ if (false) { self->field_root_3_checked.set((! self->field_root_3_checked.get())); } else { ; };self->field_root_3_clicked.call(); }();
                });
    self->field_i_focus_scope_12.enabled.set(true);
    self->field_i_focus_scope_12.focus_on_click.set(true);
    self->field_i_focus_scope_12.focus_on_tab_navigation.set(true);
    self->field_i_focus_scope_12.key_pressed.set_handler(
                [this]([[maybe_unused]] slint::language::KeyEvent arg_0) {
                    [[maybe_unused]] auto self = this;
                    return (! ((arg_0.text == slint::SharedString(u8" ")) || (arg_0.text == slint::SharedString(u8"\n"))) ? slint::cbindgen_private::EventResult::Reject : [&]{ self->field_i_touch_area_11.clicked.call();return slint::cbindgen_private::EventResult::Accept; }());
                });
    self->field_root_3_i_layout_6_padding_bottom.set_constant();
    self->field_root_3_i_layout_6_padding_top.set_constant();
    self->field_root_3_icon.set_constant();
    self->field_root_3_vertical_stretch.set_constant();
    self->field_i_background_4.border_color.set_constant();
    self->field_i_background_4.border_radius.set_constant();
    self->field_i_background_4.border_width.set_constant();
    self->field_i_border_5.background.set_constant();
    self->field_i_border_5.border_radius.set_constant();
    self->field_i_border_5.border_width.set_constant();
    self->field_i_touch_area_11.mouse_cursor.set_constant();
    self->field_i_focus_scope_12.focus_on_click.set_constant();
    self->field_i_focus_scope_12.focus_on_tab_navigation.set_constant();
    self->repeater_0.set_model_binding([self] { (void)self; return ((slint::Image().size().width > 0) && (slint::Image().size().height > 0)); });
    self->repeater_1.set_model_binding([self] { (void)self; return (self->field_root_3_text.get() != slint::SharedString(u8"")); });
    self->repeater_2.set_model_binding([self] { (void)self; return (self->field_root_3_has_focus.get() && self->field_i_focus_scope_12.enabled.get()); });
}

inline auto Button_root_3::user_init () -> void{
    [[maybe_unused]] auto self = this;
}

inline auto Button_root_3::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = self->field_root_3_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->field_root_3_i_layout_6_layoutinfo_h.get().min), layout_info.min_percent, layout_info.preferred, 0); }() : [&]{ [[maybe_unused]] auto layout_info = self->fn_layoutinfo_v_with_constraint(self->field_root_3_layoutinfo_h.get().preferred);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->field_root_3_i_layout_6_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }();
}

inline auto Button_root_3::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_3_height.get()), float(self->field_root_3_width.get()), float(self->field_root_3_x.get()), float(self->field_root_3_y.get())));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_3_height.get()), float(self->field_root_3_width.get()), float(0), float(0)));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_3_height.get()), float(self->field_root_3_width.get()), float(0), float(0)));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_3_height.get()), float(0), float(0), float(0)));
        case 5: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_3_height.get()), float(self->field_root_3_width.get()), float(0), float(0)));
    }
    return {};
}

inline auto Button_root_3::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::AccessibleRole::Button;
    }
    return {};
}

inline auto Button_root_3::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Checkable): return (false ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Checked): return (self->field_root_3_checked.get() ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Enabled): return (self->field_i_focus_scope_12.enabled.get() ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->field_root_3_text.get();
    }
    return {};
}

inline auto Button_root_3::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
        case (0 << 8) | uintptr_t(slint::cbindgen_private::AccessibilityAction::Tag::Default): return self->field_root_3_accessible_action_default.call();
    }
    return ;
}

inline auto Button_root_3::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::SupportedAccessibilityAction_Default;
    }
    return {};
}

inline auto Button_root_3::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Button_root_3::ensure_instantiated () const -> bool{
    [[maybe_unused]] auto self = this;
    bool _changed = false;
    _changed |= self->repeater_0.ensure_updated(self);
    _changed |= self->repeater_1.ensure_updated(self);
    _changed |= self->repeater_2.ensure_updated(self);
    return _changed;
}

inline auto Button_root_3::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: {
                return self->repeater_0.visit(order, visitor);
            }
        case 1: {
                return self->repeater_1.visit(order, visitor);
            }
        case 2: {
                return self->repeater_2.visit(order, visitor);
            } };
        std::abort();
}

inline auto Button_root_3::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.track_instance_changes();
                return self->repeater_0.index_range();
            }
        case 1: {
                self->repeater_1.track_instance_changes();
                return self->repeater_1.index_range();
            }
        case 2: {
                self->repeater_2.track_instance_changes();
                return self->repeater_2.index_range();
            } };
        std::abort();
}

inline auto Button_root_3::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                *result = self->repeater_0.instance_at(subtree_index);
                return;
            }
        case 1: {
                *result = self->repeater_1.instance_at(subtree_index);
                return;
            }
        case 2: {
                *result = self->repeater_2.instance_at(subtree_index);
                return;
            } };
        std::abort();
}

inline const slint::private_api::ItemTreeVTable Component_rectangle_20::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, ensure_instantiated, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_rectangle_20>, slint::private_api::dealloc };

inline auto Component_rectangle_20::fn_empty_22_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_rectangle_20_empty_23_layoutinfo_v.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->field_icon_26), slint::cbindgen_private::Orientation::Vertical, arg_0, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 7 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
}

inline auto Component_rectangle_20::fn_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->fn_empty_22_layoutinfo_v_with_constraint(arg_0));
}

inline auto Component_rectangle_20::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class StandardTableView_root_15 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const StandardTableView_root_15>(parent->self_weak.lock().value(), parent);
    self->field_rectangle_20_adjust_size.set_handler(
                [this]([[maybe_unused]] float arg_0) {
                    [[maybe_unused]] auto self = this;
                    self->parent.lock().value()->repeater_0.model_set_row_data(self->field_model_index.get(), [&]{ [[maybe_unused]] auto struct_assignment0 = self->field_model_data.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::language::TableColumn o{}; o.horizontal_stretch = a_0; o.min_width = a_1; o.sort_order = a_2; o.title = a_3; o.width = a_4; return o; }(struct_assignment0.horizontal_stretch, struct_assignment0.min_width, struct_assignment0.sort_order, struct_assignment0.title, std::max<float>(1, (self->field_rectangle_20_width.get() + arg_0))); }());
                });
    self->field_rectangle_20.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_rectangle_20_state = self->field_rectangle_20_state.get();;return (std::abs(float(tmp_rectangle_20_state - 1)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+2.163866105e9))) : (std::abs(float(tmp_rectangle_20_state - 2)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(184549375) : slint::Color::from_argb_encoded(83886080))) : slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.280032284e9) : slint::Color::from_argb_encoded(+4.29463833e9))))); }();
                        });
    self->field_rectangle_20_empty_22_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_15_header_layout_19_height.get(); }));
                        });
    self->field_rectangle_20_empty_22_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_rectangle_20_empty_23_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->field_icon_26), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 7 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(12, layout_info.max_percent, 12, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 12), self->field_rectangle_20_width.get(), 2),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_rectangle_20_empty_22_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_rectangle_20_empty_23_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->field_icon_26), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 7 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(12, layout_info.max_percent, 12, layout_info.min_percent, layout_info.preferred, layout_info.stretch); }()) ) }.data(), 2),2,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 12),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_rectangle_20_empty_22_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_rectangle_20_empty_23_layoutinfo_v.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ImageItemVTable), const_cast<slint::cbindgen_private::ImageItem*>(&self->field_icon_26), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 7 - 1)) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_rectangle_20_empty_23_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 1>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_24), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 6 - 1)) ) }.data(), 1), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), self->field_rectangle_20_empty_22_layout_cache.get()[1], 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_rectangle_20_empty_23_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 1>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_24), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 6 - 1)) ) }.data(), 1),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_rectangle_20_empty_23_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 1>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_24), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 6 - 1)) ) }.data(), 1),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_rectangle_20_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_15_empty_16_layout_cache.get()[1]; }));
                        });
    self->field_rectangle_20_icon_26_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_15_header_layout_19_height.get(); })) -(float) self->field_rectangle_20_empty_22_height.get()) /(float) 2);
                        });
    self->field_rectangle_20_max_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_model_index.get() < slint::private_api::model_length(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_15_columns.get(); })))) && (self->field_model_data.get().width >= 1) ? std::max<float>(self->field_model_data.get().min_width, self->field_model_data.get().width) : 100000);
                        });
    self->field_rectangle_20_min_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->field_model_data.get().min_width, self->field_model_data.get().width);
                        });
    self->field_rectangle_20_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_touch_area_21.pressed.get() ? 1 : (self->field_touch_area_21.has_hover.get() ? 2 : 0));
                        });
    self->field_rectangle_20_touch_area_21_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_rectangle_20_width.get() -(float) (self->field_rectangle_20_width.get() -(float) 11)) /(float) 2);
                        });
    self->field_rectangle_20_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return slint::private_api::layout_cache_access(x->field_root_15_header_layout_19_layout_cache.get(), 1, self->field_model_index.get(), 2); }));
                        });
    self->field_rectangle_20_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return slint::private_api::layout_cache_access(x->field_root_15_header_layout_19_layout_cache.get(), 0, self->field_model_index.get(), 2); }));
                        });
    self->field_touch_area_21.clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    slint::private_api::optional_then(self->parent.lock(), [&](auto&&x) { x->fn_sort(self->field_model_index.get()); });
                });
    self->field_touch_area_21.enabled.set(true);
    self->field_text_24.color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+3.388997631e9) : slint::Color::from_argb_encoded(+2.566914048e9)));
                        });
    self->field_text_24.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_15_header_layout_19_height.get(); }));
                        });
    self->field_text_24.overflow.set(slint::cbindgen_private::TextOverflow::Elide);
    self->field_text_24.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_model_data.get().title;
                        });
    self->field_text_24.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_24.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_rectangle_20_empty_23_layout_cache.get()[1];
                        });
    self->field_icon_visibility_25.clip.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (! (self->field_model_data.get().sort_order != slint::cbindgen_private::SortOrder::Unsorted));
                        });
    self->field_icon_26.colorize.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+3.388997631e9) : slint::Color::from_argb_encoded(+2.566914048e9)));
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_icon_26.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_15_header_layout_19_height.get(); }));
                        });
    self->field_icon_26.image_fit.set(slint::cbindgen_private::ImageFit::Contain);
    self->field_icon_26.source.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_model_data.get().sort_order == slint::cbindgen_private::SortOrder::Ascending ? slint::private_api::load_image_from_embedded_data(slint_embedded_resource_4, "svg") : slint::private_api::load_image_from_embedded_data(slint_embedded_resource_5, "svg"));
                        });
    self->field_icon_26.width.set(12);
    self->field_rectangle_27.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(335544320)));
                        });
    self->field_rectangle_28.background.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float((self->field_movable_touch_area_29.has_hover.get() ? 1 : 0) - 1)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+2.163866105e9))) : slint::Brush(slint::Color::from_argb_encoded(0)));
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_movable_touch_area_29.enabled.set(true);
    self->field_movable_touch_area_29.mouse_cursor.set(slint::cbindgen_private::MouseCursor::EwResize);
    self->field_movable_touch_area_29.moved.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    if (self->field_movable_touch_area_29.pressed.get()) { self->field_rectangle_20_adjust_size.call((self->field_movable_touch_area_29.mouse_x.get() -(float) self->field_movable_touch_area_29.pressed_x.get())); } else { ; };
                });
    self->field_touch_area_21.enabled.set_constant();
    self->field_touch_area_21.mouse_cursor.set_constant();
    self->field_text_24.font_family.set_constant();
    self->field_text_24.font_italic.set_constant();
    self->field_text_24.font_size.set_constant();
    self->field_text_24.font_weight.set_constant();
    self->field_text_24.horizontal_alignment.set_constant();
    self->field_text_24.letter_spacing.set_constant();
    self->field_text_24.overflow.set_constant();
    self->field_text_24.stroke.set_constant();
    self->field_text_24.stroke_style.set_constant();
    self->field_text_24.stroke_width.set_constant();
    self->field_text_24.vertical_alignment.set_constant();
    self->field_text_24.wrap.set_constant();
    self->field_icon_visibility_25.border_bottom_left_radius.set_constant();
    self->field_icon_visibility_25.border_bottom_right_radius.set_constant();
    self->field_icon_visibility_25.border_top_left_radius.set_constant();
    self->field_icon_visibility_25.border_top_right_radius.set_constant();
    self->field_icon_visibility_25.border_width.set_constant();
    self->field_icon_26.image_fit.set_constant();
    self->field_icon_26.image_rendering.set_constant();
    self->field_icon_26.width.set_constant();
    self->field_movable_touch_area_29.enabled.set_constant();
    self->field_movable_touch_area_29.mouse_cursor.set_constant();
}

inline auto Component_rectangle_20::user_init () -> void{
    [[maybe_unused]] auto self = this;
    ;
}

inline auto Component_rectangle_20::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = (([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) + self->field_rectangle_20_empty_22_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->field_rectangle_20_max_width.get(), layout_info.max_percent, self->field_rectangle_20_min_width.get(), layout_info.min_percent, self->field_rectangle_20_min_width.get(), self->field_model_data.get().horizontal_stretch); }() : self->fn_layoutinfo_v_with_constraint((([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1)) + self->field_rectangle_20_empty_22_layoutinfo_h.get()).preferred);
}

inline auto Component_rectangle_20::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_15_empty_16_layout_cache.get()[1]; }))), float(self->field_rectangle_20_width.get()), float(self->field_rectangle_20_x.get()), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_15_empty_16_layout_cache.get()[1]; }))), float((self->field_rectangle_20_width.get() -(float) 11)), float(self->field_rectangle_20_touch_area_21_x.get()), float(0)));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_15_header_layout_19_height.get(); }))), float(self->field_rectangle_20_empty_22_layout_cache.get()[1]), float(self->field_rectangle_20_empty_22_layout_cache.get()[0]), float(0)));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(0), float(0), float(0), float(0)));
        case 4: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(1), float((1 * self->field_rectangle_20_width.get())), float(0), float((slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_15_empty_16_layout_cache.get()[1]; })) -(float) 1))));
        case 5: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_15_empty_16_layout_cache.get()[1]; }))), float(1), float((self->field_rectangle_20_width.get() -(float) 1)), float(0)));
        case 6: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_15_header_layout_19_height.get(); }))), float(self->field_rectangle_20_empty_23_layout_cache.get()[1]), float(self->field_rectangle_20_empty_23_layout_cache.get()[0]), float(0)));
        case 7: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_15_header_layout_19_height.get(); }))), float(12), float(self->field_rectangle_20_empty_22_layout_cache.get()[2]), float(self->field_rectangle_20_icon_26_y.get())));
        case 8: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_rectangle_20_height.get()), float(10), float(-4.5), float(0)));
    }
    return {};
}

inline auto Component_rectangle_20::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 6: return slint::cbindgen_private::AccessibleRole::Text;
    }
    return {};
}

inline auto Component_rectangle_20::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (6 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->field_model_data.get().title;
    }
    return {};
}

inline auto Component_rectangle_20::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto Component_rectangle_20::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_rectangle_20::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_rectangle_20::ensure_instantiated () const -> bool{
    [[maybe_unused]] auto self = this;
    bool _changed = false;
    return _changed;
}

inline auto Component_rectangle_20::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_rectangle_20*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_rectangle_20*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_rectangle_20::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_rectangle_20::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_rectangle_20::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_rectangle_20::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_rectangle_20::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_rectangle_20*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 5 };
}

inline auto Component_rectangle_20::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_rectangle_20::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    auto self = reinterpret_cast<const Component_rectangle_20*>(component.instance);
    return self->field_model_index.get();
}

inline auto Component_rectangle_20::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(5, 1, 0, 0, false), 
slint::private_api::make_item_node(0, 6, 0, 1, false), 
slint::private_api::make_item_node(1, 6, 0, 2, false), 
slint::private_api::make_item_node(1, 7, 0, 3, false), 
slint::private_api::make_item_node(0, 8, 0, 4, false), 
slint::private_api::make_item_node(1, 8, 0, 5, false), 
slint::private_api::make_item_node(0, 7, 2, 6, true), 
slint::private_api::make_item_node(0, 8, 3, 7, false), 
slint::private_api::make_item_node(0, 9, 5, 8, false) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_rectangle_20::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(RectangleVTable),  offsetof(Component_rectangle_20, field_rectangle_20) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(Component_rectangle_20, field_touch_area_21) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(Component_rectangle_20, field_empty_23) }, 
{ SLINT_GET_ITEM_VTABLE(ClipVTable),  offsetof(Component_rectangle_20, field_icon_visibility_25) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable),  offsetof(Component_rectangle_20, field_rectangle_27) }, 
{ SLINT_GET_ITEM_VTABLE(RectangleVTable),  offsetof(Component_rectangle_20, field_rectangle_28) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(Component_rectangle_20, field_text_24) }, 
{ SLINT_GET_ITEM_VTABLE(ImageItemVTable),  offsetof(Component_rectangle_20, field_icon_26) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(Component_rectangle_20, field_movable_touch_area_29) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_rectangle_20::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_rectangle_20*>(component.instance)->layout_info(o);
}

inline auto Component_rectangle_20::ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool{
    return reinterpret_cast<const Component_rectangle_20*>(component.instance)->ensure_instantiated();
}

inline auto Component_rectangle_20::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_rectangle_20*>(component.instance)->item_geometry(index);
}

inline auto Component_rectangle_20::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_rectangle_20*>(component.instance)->accessible_role(index);
}

inline auto Component_rectangle_20::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_rectangle_20*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_rectangle_20::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_rectangle_20*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_rectangle_20::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_rectangle_20*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_rectangle_20::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_rectangle_20::window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_rectangle_20*>(component.instance)->globals->window().window_handle();
}

inline auto Component_rectangle_20::create (class StandardTableView_root_15 const * parent) -> slint::ComponentHandle<Component_rectangle_20>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_20>::make();
    auto self = const_cast<Component_rectangle_20 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_rectangle_20>{ self_rc };
}

inline Component_rectangle_20::~Component_rectangle_20 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_rectangle_20::update_data ([[maybe_unused]] int i, [[maybe_unused]] const slint::language::TableColumn &data) const -> void{
    [[maybe_unused]] auto self = this;
    self->field_model_index.set(i);
    self->field_model_data.set(data);
}

inline auto Component_rectangle_20::init () -> void{
    user_init();
}

inline auto Component_rectangle_20::layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline auto Component_rectangle_20::flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo{
    auto base = layout_item_info(o, child_index); return { base.constraint, 0.0f, 0.0f, -1.0f, slint::cbindgen_private::FlexboxLayoutAlignSelf::Auto, 0 };
}

inline const slint::private_api::ItemTreeVTable Component_rectangle_37::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, ensure_instantiated, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_rectangle_37>, slint::private_api::dealloc };

inline auto Component_rectangle_37::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class Component_rectangle_34 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const Component_rectangle_34>(parent->self_weak.lock().value(), parent);
    self->field_rectangle_37_empty_39_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 1>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_rectangle_37_rectangle_40_layoutinfo_h.get()) ) }.data(), 1), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 12), self->field_rectangle_37_width.get(), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_rectangle_37_empty_39_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 1>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_rectangle_37_rectangle_40_layoutinfo_h.get()) ) }.data(), 1),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(12, 12),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_rectangle_37_empty_39_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 1>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_rectangle_37_rectangle_40_layoutinfo_v.get()) ) }.data(), 1),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(9, 9));
                        });
    self->field_rectangle_37_horizontal_stretch.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::access_array_index(slint::private_api::optional_or_default(slint::private_api::optional_transform(slint::private_api::optional_and_then(self->parent.lock(), [&](auto&&x) { return x->parent.lock(); }), [&](auto&&x) { return x->field_root_15_columns.get(); })), self->field_model_index.get()).horizontal_stretch;
                        });
    self->field_rectangle_37_max_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_15_columns = slint::private_api::optional_or_default(slint::private_api::optional_transform(slint::private_api::optional_and_then(self->parent.lock(), [&](auto&&x) { return x->parent.lock(); }), [&](auto&&x) { return x->field_root_15_columns.get(); }));;return ((self->field_model_index.get() < slint::private_api::model_length(tmp_root_15_columns)) && (slint::private_api::access_array_index(tmp_root_15_columns, self->field_model_index.get()).width >= 1) ? std::max<float>(slint::private_api::access_array_index(tmp_root_15_columns, self->field_model_index.get()).min_width, slint::private_api::access_array_index(tmp_root_15_columns, self->field_model_index.get()).width) : 100000); }();
                        });
    self->field_rectangle_37_min_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_15_columns = slint::private_api::optional_or_default(slint::private_api::optional_transform(slint::private_api::optional_and_then(self->parent.lock(), [&](auto&&x) { return x->parent.lock(); }), [&](auto&&x) { return x->field_root_15_columns.get(); }));;return std::max<float>(slint::private_api::access_array_index(tmp_root_15_columns, self->field_model_index.get()).min_width, slint::private_api::access_array_index(tmp_root_15_columns, self->field_model_index.get()).width); }();
                        });
    self->field_rectangle_37_rectangle_40_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->field_rectangle_37_text_41_max_width.get(), 100, self->field_rectangle_37_text_41_min_width.get(), 0, self->field_rectangle_37_text_41_preferred_width.get(), self->field_rectangle_37_text_41_horizontal_stretch.get()));
                        });
    self->field_rectangle_37_rectangle_40_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->field_rectangle_37_text_41_max_height.get(), 100, self->field_rectangle_37_text_41_min_height.get(), 0, self->field_rectangle_37_text_41_preferred_height.get(), self->field_rectangle_37_text_41_vertical_stretch.get()));
                        });
    self->field_rectangle_37_text_41_horizontal_stretch.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_41), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 3 - 1).stretch;
                        });
    self->field_rectangle_37_text_41_max_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_41), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 3 - 1).max;
                        });
    self->field_rectangle_37_text_41_max_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_41), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 3 - 1).max;
                        });
    self->field_rectangle_37_text_41_min_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_41), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 3 - 1).min;
                        });
    self->field_rectangle_37_text_41_min_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_41), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 3 - 1).min;
                        });
    self->field_rectangle_37_text_41_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_41), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 3 - 1).preferred;
                        });
    self->field_rectangle_37_text_41_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_41), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 3 - 1).preferred;
                        });
    self->field_rectangle_37_text_41_vertical_stretch.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(ComplexTextVTable), const_cast<slint::cbindgen_private::ComplexText*>(&self->field_text_41), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 3 - 1).stretch;
                        });
    self->field_rectangle_37_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return slint::private_api::layout_cache_access(x->field_rectangle_34_layout_36_layout_cache.get(), 1, self->field_model_index.get(), 2); }));
                        });
    self->field_rectangle_37_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return slint::private_api::layout_cache_access(x->field_rectangle_34_layout_36_layout_cache.get(), 0, self->field_model_index.get(), 2); }));
                        });
    self->field__clip_38.clip.set(true);
    self->field_text_41.color.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(([](float a, float b) { auto r = std::fmod(a, b); return r >= 0 ? r : r + std::abs(b); })(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_model_index.get(); })),2) - 0)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.294967295e9) : slint::Color::from_argb_encoded(+3.85875968e9))) : slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+3.388997631e9) : slint::Color::from_argb_encoded(+2.566914048e9))));
                        });
    self->field_text_41.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (1 * ((([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_rectangle_34_layout_36_layoutinfo_v.get(); }))).preferred -(float) 9) -(float) 9));
                        });
    self->field_text_41.overflow.set(slint::cbindgen_private::TextOverflow::Elide);
    self->field_text_41.text.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_model_data.get().text;
                        });
    self->field_text_41.vertical_alignment.set(slint::cbindgen_private::TextVerticalAlignment::Center);
    self->field_text_41.width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (1 * self->field_rectangle_37_empty_39_layout_cache.get()[1]);
                        });
    self->field__clip_38.border_bottom_left_radius.set_constant();
    self->field__clip_38.border_bottom_right_radius.set_constant();
    self->field__clip_38.border_top_left_radius.set_constant();
    self->field__clip_38.border_top_right_radius.set_constant();
    self->field__clip_38.border_width.set_constant();
    self->field_text_41.font_family.set_constant();
    self->field_text_41.font_italic.set_constant();
    self->field_text_41.font_size.set_constant();
    self->field_text_41.font_weight.set_constant();
    self->field_text_41.horizontal_alignment.set_constant();
    self->field_text_41.letter_spacing.set_constant();
    self->field_text_41.overflow.set_constant();
    self->field_text_41.stroke.set_constant();
    self->field_text_41.stroke_style.set_constant();
    self->field_text_41.stroke_width.set_constant();
    self->field_text_41.vertical_alignment.set_constant();
    self->field_text_41.wrap.set_constant();
}

inline auto Component_rectangle_37::user_init () -> void{
    [[maybe_unused]] auto self = this;
    ;
}

inline auto Component_rectangle_37::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_rectangle_37_empty_39_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->field_rectangle_37_max_width.get(), layout_info.max_percent, self->field_rectangle_37_min_width.get(), layout_info.min_percent, self->field_rectangle_37_min_width.get(), self->field_rectangle_37_horizontal_stretch.get()); }() : ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_rectangle_37_empty_39_layoutinfo_v.get());
}

inline auto Component_rectangle_37::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_rectangle_34_layout_36_layoutinfo_v.get(); }))).preferred), float(self->field_rectangle_37_width.get()), float(self->field_rectangle_37_x.get()), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_rectangle_34_layout_36_height.get(); }))), float(self->field_rectangle_37_width.get()), float(0), float(0)));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(((([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_rectangle_34_layout_36_layoutinfo_v.get(); }))).preferred -(float) 9) -(float) 9)), float(self->field_rectangle_37_empty_39_layout_cache.get()[1]), float(self->field_rectangle_37_empty_39_layout_cache.get()[0]), float(9)));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float((1 * ((([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_rectangle_34_layout_36_layoutinfo_v.get(); }))).preferred -(float) 9) -(float) 9))), float((1 * self->field_rectangle_37_empty_39_layout_cache.get()[1])), float(0), float(0)));
    }
    return {};
}

inline auto Component_rectangle_37::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 3: return slint::cbindgen_private::AccessibleRole::Text;
    }
    return {};
}

inline auto Component_rectangle_37::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (3 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->field_model_data.get().text;
    }
    return {};
}

inline auto Component_rectangle_37::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto Component_rectangle_37::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_rectangle_37::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_rectangle_37::ensure_instantiated () const -> bool{
    [[maybe_unused]] auto self = this;
    bool _changed = false;
    return _changed;
}

inline auto Component_rectangle_37::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_rectangle_37*>(base);
        std::abort();
    };
    auto self_rc = reinterpret_cast<const Component_rectangle_37*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_rectangle_37::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_rectangle_37::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
        std::abort();
}

inline auto Component_rectangle_37::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
        std::abort();
}

inline auto Component_rectangle_37::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_rectangle_37::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_rectangle_37*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 1 };
}

inline auto Component_rectangle_37::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_rectangle_37::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    auto self = reinterpret_cast<const Component_rectangle_37*>(component.instance);
    return self->field_model_index.get();
}

inline auto Component_rectangle_37::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(1, 1, 0, 0, false), 
slint::private_api::make_item_node(1, 2, 0, 1, false), 
slint::private_api::make_item_node(1, 3, 1, 2, false), 
slint::private_api::make_item_node(0, 4, 2, 3, true) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_rectangle_37::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(Component_rectangle_37, field_rectangle_37) }, 
{ SLINT_GET_ITEM_VTABLE(ClipVTable),  offsetof(Component_rectangle_37, field__clip_38) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(Component_rectangle_37, field_rectangle_40) }, 
{ SLINT_GET_ITEM_VTABLE(ComplexTextVTable),  offsetof(Component_rectangle_37, field_text_41) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_rectangle_37::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_rectangle_37*>(component.instance)->layout_info(o);
}

inline auto Component_rectangle_37::ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool{
    return reinterpret_cast<const Component_rectangle_37*>(component.instance)->ensure_instantiated();
}

inline auto Component_rectangle_37::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_rectangle_37*>(component.instance)->item_geometry(index);
}

inline auto Component_rectangle_37::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_rectangle_37*>(component.instance)->accessible_role(index);
}

inline auto Component_rectangle_37::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_rectangle_37*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_rectangle_37::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_rectangle_37*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_rectangle_37::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_rectangle_37*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_rectangle_37::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_rectangle_37::window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_rectangle_37*>(component.instance)->globals->window().window_handle();
}

inline auto Component_rectangle_37::create (class Component_rectangle_34 const * parent) -> slint::ComponentHandle<Component_rectangle_37>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_37>::make();
    auto self = const_cast<Component_rectangle_37 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_rectangle_37>{ self_rc };
}

inline Component_rectangle_37::~Component_rectangle_37 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_rectangle_37::update_data ([[maybe_unused]] int i, [[maybe_unused]] const slint::language::StandardListViewItem &data) const -> void{
    [[maybe_unused]] auto self = this;
    self->field_model_index.set(i);
    self->field_model_data.set(data);
}

inline auto Component_rectangle_37::init () -> void{
    user_init();
}

inline auto Component_rectangle_37::layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::LayoutItemInfo{
    return { layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, o) };
}

inline auto Component_rectangle_37::flexbox_layout_item_info (slint::cbindgen_private::Orientation o, [[maybe_unused]] std::optional<size_t> child_index) const -> slint::cbindgen_private::FlexboxLayoutItemInfo{
    auto base = layout_item_info(o, child_index); return { base.constraint, 0.0f, 0.0f, -1.0f, slint::cbindgen_private::FlexboxLayoutAlignSelf::Auto, 0 };
}

inline const slint::private_api::ItemTreeVTable Component_rectangle_34::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, ensure_instantiated, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<Component_rectangle_34>, slint::private_api::dealloc };

inline auto Component_rectangle_34::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child,class StandardTableView_root_15 const *parent) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->parent = vtable::VRcMapped<slint::private_api::ItemTreeVTable, const StandardTableView_root_15>(parent->self_weak.lock().value(), parent);
    self->field_rectangle_34.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_rectangle_34_state = self->field_rectangle_34_state.get();;return (std::abs(float(tmp_rectangle_34_state - 1)) < std::numeric_limits<float>::epsilon() ? (self->field_rectangle_34_selected.get() ? slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(268435455) : slint::Color::from_argb_encoded(167772160))) : slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(184549375) : slint::Color::from_argb_encoded(83886080)))) : (std::abs(float(tmp_rectangle_34_state - 2)) < std::numeric_limits<float>::epsilon() ? (self->field_rectangle_34_selected.get() ? slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(184549375) : slint::Color::from_argb_encoded(83886080))) : slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(268435455) : slint::Color::from_argb_encoded(167772160)))) : (std::abs(float(tmp_rectangle_34_state - 3)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(268435455) : slint::Color::from_argb_encoded(167772160))) : (std::abs(float(([](float a, float b) { auto r = std::fmod(a, b); return r >= 0 ? r : r + std::abs(b); })(self->field_model_index.get(),2) - 0)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(268435455) : slint::Color::from_argb_encoded(+3.019898879e9))) : slint::Brush(slint::Color::from_argb_encoded(0)))))); }();
                        });
    self->field_rectangle_34.border_radius.set(4);
    self->field_rectangle_34_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_rectangle_34_layout_36_layoutinfo_v.get()).preferred;
                        });
    self->field_rectangle_34_layout_36_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_rectangle_34_layout_36_layoutinfo_v.get()).preferred;
                        });
    self->field_rectangle_34_layout_36_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ std::array<int, 2> repeated_indices_array;  std::vector<slint::cbindgen_private::LayoutItemInfo> cells_vector;self->repeater_0.track_instance_changes();repeated_indices_array[0] = cells_vector.size();repeated_indices_array[1] = self->repeater_0.len();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Horizontal, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_0.len());
                                }slint::cbindgen_private::Slice<int> repeated_indices = slint::private_api::make_slice(std::span(repeated_indices_array)); slint::cbindgen_private::Slice<slint::cbindgen_private::LayoutItemInfo>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, cells, [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), self->field_rectangle_34_width.get(), 0),repeated_indices); }();
                        });
    self->field_rectangle_34_layout_36_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{   std::vector<slint::cbindgen_private::LayoutItemInfo> cells_vector;self->repeater_0.track_instance_changes();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Horizontal, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_0.len());
                                } slint::cbindgen_private::Slice<slint::cbindgen_private::LayoutItemInfo>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info(cells,0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch); }();
                        });
    self->field_rectangle_34_layout_36_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{   std::vector<slint::cbindgen_private::LayoutItemInfo> cells_vector;self->repeater_0.track_instance_changes();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Vertical, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_0.len());
                                } slint::cbindgen_private::Slice<slint::cbindgen_private::LayoutItemInfo>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info_ortho(cells,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0)); }();
                        });
    self->field_rectangle_34_pointer_event.set_handler(
                [this]([[maybe_unused]] slint::language::PointerEvent arg_0, [[maybe_unused]] slint::LogicalPosition arg_1) {
                    [[maybe_unused]] auto self = this;
                    slint::private_api::optional_then(self->parent.lock(), [&](auto&&x) { x->field_root_15_row_pointer_event.call(self->field_model_index.get(),arg_0,[&](const auto &o){ slint::LogicalPosition s; s.x = std::get<0>(o); s.y = std::get<1>(o);  return s; }(std::make_tuple(float((arg_1.x -(float) slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_15_absolute_position.get(); })).x)), float((arg_1.y -(float) slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_15_absolute_position.get(); })).y))))); });
                });
    self->field_rectangle_34_selected.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_model_index.get() - slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_15_current_row.get(); })))) < std::numeric_limits<float>::epsilon());
                        });
    self->field_rectangle_34_selector_43_height.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_rectangle_34_state = self->field_rectangle_34_state.get();;return (std::abs(float(tmp_rectangle_34_state - 2)) < std::numeric_limits<float>::epsilon() ? (self->field_rectangle_34_selected.get() ? 16 : 0) : (std::abs(float(tmp_rectangle_34_state - 3)) < std::numeric_limits<float>::epsilon() ? 16 : 0)); }();
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_rectangle_34_selector_43_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_rectangle_34_layout_36_layoutinfo_v.get()).preferred -(float) self->field_rectangle_34_selector_43_height.get()) /(float) 2);
                        });
    self->field_rectangle_34_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_touch_area_35.pressed.get() ? 1 : (self->field_touch_area_35.has_hover.get() ? 2 : (self->field_rectangle_34_selected.get() ? 3 : 0)));
                        });
    self->field_rectangle_34_touch_area_35_absolute_position.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto parent_position = slint::LogicalPosition(slint::cbindgen_private::slint_item_absolute_position(&self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 1 - 1));;return [&](const auto &a_0, const auto &a_1){ slint::LogicalPosition o{}; o.x = a_0; o.y = a_1; return o; }((parent_position.x + 0), (parent_position.y + 0)); }();
                        });
    self->field_rectangle_34_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_15_flickable_32_width.get(); }));
                        });
    self->field_touch_area_35.clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    [&]{ self->globals->window().window_handle().set_focus_item(self->parent.lock().value()->self_weak.lock()->into_dyn(), self->parent.lock().value()->tree_index_of_first_child + 3 - 1, true, slint::cbindgen_private::FocusReason::Programmatic);;slint::private_api::optional_then(self->parent.lock(), [&](auto&&x) { x->fn_set_current_row(self->field_model_index.get()); }); }();
                });
    self->field_touch_area_35.enabled.set(true);
    self->field_touch_area_35.pointer_event.set_handler(
                [this]([[maybe_unused]] slint::language::PointerEvent arg_0) {
                    [[maybe_unused]] auto self = this;
                    self->field_rectangle_34_pointer_event.call(arg_0,[&](const auto &o){ slint::LogicalPosition s; s.x = std::get<0>(o); s.y = std::get<1>(o);  return s; }(std::make_tuple(float((self->field_rectangle_34_touch_area_35_absolute_position.get().x + self->field_touch_area_35.mouse_x.get())), float((self->field_rectangle_34_touch_area_35_absolute_position.get().y + self->field_touch_area_35.mouse_y.get())))));
                });
    self->field_selector_43.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->globals->global_FluentPalette_78->field_accent_background.get();
                        });
    self->field_selector_43.border_radius.set(2);
    self->field_rectangle_34.border_color.set_constant();
    self->field_rectangle_34.border_radius.set_constant();
    self->field_rectangle_34.border_width.set_constant();
    self->field_touch_area_35.enabled.set_constant();
    self->field_touch_area_35.mouse_cursor.set_constant();
    self->field_selector_43.border_color.set_constant();
    self->field_selector_43.border_radius.set_constant();
    self->field_selector_43.border_width.set_constant();
    self->repeater_0.set_model_binding([self] { (void)self; return self->field_model_data.get(); });
}

inline auto Component_rectangle_34::user_init () -> void{
    [[maybe_unused]] auto self = this;
    ;
}

inline auto Component_rectangle_34::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_rectangle_34_layout_36_layoutinfo_h.get()) : ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_rectangle_34_layout_36_layoutinfo_v.get());
}

inline auto Component_rectangle_34::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_rectangle_34_layout_36_layoutinfo_v.get()).preferred), float(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_15_flickable_32_width.get(); }))), float(0), float(self->field_rectangle_34_actual_y.get())));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + self->field_rectangle_34_layout_36_layoutinfo_v.get()).preferred), float(slint::private_api::optional_or_default(slint::private_api::optional_transform(self->parent.lock(), [&](auto&&x) { return x->field_root_15_flickable_32_width.get(); }))), float(0), float(0)));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_rectangle_34_selector_43_height.get()), float(3), float(0), float(self->field_rectangle_34_selector_43_y.get())));
    }
    return {};
}

inline auto Component_rectangle_34::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_rectangle_34::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
    }
    return {};
}

inline auto Component_rectangle_34::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto Component_rectangle_34::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_rectangle_34::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto Component_rectangle_34::ensure_instantiated () const -> bool{
    [[maybe_unused]] auto self = this;
    bool _changed = false;
    _changed |= self->repeater_0.ensure_updated(self);
    return _changed;
}

inline auto Component_rectangle_34::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: {
                return self->repeater_0.visit(order, visitor);
            } };
        std::abort();
}

inline auto Component_rectangle_34::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.track_instance_changes();
                return self->repeater_0.index_range();
            } };
        std::abort();
}

inline auto Component_rectangle_34::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                *result = self->repeater_0.instance_at(subtree_index);
                return;
            } };
        std::abort();
}

inline auto Component_rectangle_34::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const Component_rectangle_34*>(base);
        return self->visit_dynamic_children(dyn_index, order, visitor);
    };
    auto self_rc = reinterpret_cast<const Component_rectangle_34*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto Component_rectangle_34::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto Component_rectangle_34::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
    auto self = reinterpret_cast<const Component_rectangle_34*>(component.instance);
    return self->subtree_range(dyn_index);
}

inline auto Component_rectangle_34::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
    auto self = reinterpret_cast<const Component_rectangle_34*>(component.instance);
    self->subtree_component(dyn_index, subtree_index, result);
}

inline auto Component_rectangle_34::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto Component_rectangle_34::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
    auto self = reinterpret_cast<const Component_rectangle_34*>(component.instance);
    auto parent = self->parent.lock().value();
    *result = { parent->self_weak, parent->tree_index_of_first_child + 10 };
}

inline auto Component_rectangle_34::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto Component_rectangle_34::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    auto self = reinterpret_cast<const Component_rectangle_34*>(component.instance);
    return self->field_model_index.get();
}

inline auto Component_rectangle_34::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(3, 1, 0, 0, false), 
slint::private_api::make_item_node(0, 4, 0, 1, false), 
slint::private_api::make_dyn_node(0, 0), 
slint::private_api::make_item_node(0, 4, 0, 2, false) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto Component_rectangle_34::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(Component_rectangle_34, field_rectangle_34) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable),  offsetof(Component_rectangle_34, field_touch_area_35) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable),  offsetof(Component_rectangle_34, field_selector_43) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto Component_rectangle_34::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const Component_rectangle_34*>(component.instance)->layout_info(o);
}

inline auto Component_rectangle_34::ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool{
    return reinterpret_cast<const Component_rectangle_34*>(component.instance)->ensure_instantiated();
}

inline auto Component_rectangle_34::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const Component_rectangle_34*>(component.instance)->item_geometry(index);
}

inline auto Component_rectangle_34::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const Component_rectangle_34*>(component.instance)->accessible_role(index);
}

inline auto Component_rectangle_34::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const Component_rectangle_34*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto Component_rectangle_34::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const Component_rectangle_34*>(component.instance)->accessibility_action(index, *action);
}

inline auto Component_rectangle_34::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const Component_rectangle_34*>(component.instance)->supported_accessibility_actions(index);
}

inline auto Component_rectangle_34::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto Component_rectangle_34::window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const Component_rectangle_34*>(component.instance)->globals->window().window_handle();
}

inline auto Component_rectangle_34::create (class StandardTableView_root_15 const * parent) -> slint::ComponentHandle<Component_rectangle_34>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, Component_rectangle_34>::make();
    auto self = const_cast<Component_rectangle_34 *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), parent->globals->m_window);
    self->init(parent->globals, self->self_weak, 0, 1 , parent);
    return slint::ComponentHandle<Component_rectangle_34>{ self_rc };
}

inline Component_rectangle_34::~Component_rectangle_34 (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto Component_rectangle_34::update_data ([[maybe_unused]] int i, [[maybe_unused]] const std::shared_ptr<slint::Model<slint::language::StandardListViewItem>> &data) const -> void{
    [[maybe_unused]] auto self = this;
    self->field_model_index.set(i);
    self->field_model_data.set(data);
}

inline auto Component_rectangle_34::init () -> void{
    user_init();
}

inline auto Component_rectangle_34::listview_layout (float *offset_y) const -> float{
    [[maybe_unused]] auto self = this;
    self->field_rectangle_34_actual_y.set(*offset_y);
    *offset_y += self->field_rectangle_34_height.get();
    return layout_info({&static_vtable, const_cast<void *>(static_cast<const void *>(this))}, slint::cbindgen_private::Orientation::Horizontal).min;
}

inline auto StandardTableView_root_15::fn_empty_16_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(EmptyVTable), const_cast<slint::cbindgen_private::Empty*>(&self->field_rectangle_17), slint::cbindgen_private::Orientation::Vertical, arg_0, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 1 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, self->field_root_15_rectangle_17_min_height.get(), layout_info.min_percent, layout_info.preferred, self->field_root_15_rectangle_17_vertical_stretch.get()); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->fn_scroll_view_31_layoutinfo_v_with_constraint(arg_0);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, self->field_root_15_scroll_view_31_min_height.get(), layout_info.min_percent, layout_info.preferred, self->field_root_15_scroll_view_31_vertical_stretch.get()); }()) ) }.data(), 2),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
}

inline auto StandardTableView_root_15::fn_header_layout_19_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return [&]{   std::vector<slint::cbindgen_private::LayoutItemInfo> cells_vector;self->repeater_0.track_instance_changes();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Vertical, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_0.len());
                                } slint::cbindgen_private::Slice<slint::cbindgen_private::LayoutItemInfo>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info_ortho(cells,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0)); }();
}

inline auto StandardTableView_root_15::fn_horizontal_bar_59_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1));
}

inline auto StandardTableView_root_15::fn_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return ([&]{ [[maybe_unused]] auto layout_info_3 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_3.max, layout_info_3.max_percent, 200, layout_info_3.min_percent, layout_info_3.preferred, 1); }() + self->fn_empty_16_layoutinfo_v_with_constraint(arg_0));
}

inline auto StandardTableView_root_15::fn_scroll_view_31_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->field_root_15_flickable_32_max_height.get(), 100, self->field_root_15_flickable_32_min_height.get(), 0, self->field_root_15_flickable_32_preferred_height.get(), self->field_root_15_flickable_32_vertical_stretch.get()));
}

inline auto StandardTableView_root_15::fn_set_current_row ([[maybe_unused]] int arg_0) const -> void{
    [[maybe_unused]] auto self = this;
    if (! ((arg_0 < 0) || (arg_0 >= slint::private_api::model_length(self->field_root_15_rows.get())))) { [&]{ self->field_root_15_current_row.set(arg_0);self->field_root_15_current_row_changed.call(self->field_root_15_current_row.get());if (self->field_root_15_current_item_y.get() < 0) { self->field_flickable_32.viewport_y.set((self->field_flickable_32.viewport_y.get() + (0 -(float) self->field_root_15_current_item_y.get()))); } else { ; };if ((self->field_root_15_current_item_y.get() + self->field_root_15_item_height.get()) > self->field_root_15_flickable_32_height.get()) { self->field_flickable_32.viewport_y.set((self->field_flickable_32.viewport_y.get() -(float) ((self->field_root_15_current_item_y.get() + self->field_root_15_item_height.get()) -(float) self->field_root_15_flickable_32_height.get()))); } else { ; }; }(); } else { ; };
}

inline auto StandardTableView_root_15::fn_sort ([[maybe_unused]] int arg_0) const -> void{
    [[maybe_unused]] auto self = this;
    [&]{ if (std::abs(float(self->field_root_15_current_sort_column.get() - arg_0)) >= std::numeric_limits<float>::epsilon()) { [&](auto index, const auto &base) { if (index >= 0. && std::size_t(index) < base->row_count()) base->set_row_data(index, [&]{ [[maybe_unused]] auto struct_assignment1 = slint::private_api::access_array_index(self->field_root_15_columns.get(), self->field_root_15_current_sort_column.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::language::TableColumn o{}; o.horizontal_stretch = a_0; o.min_width = a_1; o.sort_order = a_2; o.title = a_3; o.width = a_4; return o; }(struct_assignment1.horizontal_stretch, struct_assignment1.min_width, slint::cbindgen_private::SortOrder::Unsorted, struct_assignment1.title, struct_assignment1.width); }()); }(self->field_root_15_current_sort_column.get(), self->field_root_15_columns.get()); } else { ; };if (slint::private_api::access_array_index(self->field_root_15_columns.get(), arg_0).sort_order == slint::cbindgen_private::SortOrder::Ascending) { [&]{ [&](auto index, const auto &base) { if (index >= 0. && std::size_t(index) < base->row_count()) base->set_row_data(index, [&]{ [[maybe_unused]] auto struct_assignment2 = slint::private_api::access_array_index(self->field_root_15_columns.get(), arg_0);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::language::TableColumn o{}; o.horizontal_stretch = a_0; o.min_width = a_1; o.sort_order = a_2; o.title = a_3; o.width = a_4; return o; }(struct_assignment2.horizontal_stretch, struct_assignment2.min_width, slint::cbindgen_private::SortOrder::Descending, struct_assignment2.title, struct_assignment2.width); }()); }(arg_0, self->field_root_15_columns.get());self->field_root_15_sort_descending.call(arg_0); }(); } else { [&]{ [&](auto index, const auto &base) { if (index >= 0. && std::size_t(index) < base->row_count()) base->set_row_data(index, [&]{ [[maybe_unused]] auto struct_assignment3 = slint::private_api::access_array_index(self->field_root_15_columns.get(), arg_0);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::language::TableColumn o{}; o.horizontal_stretch = a_0; o.min_width = a_1; o.sort_order = a_2; o.title = a_3; o.width = a_4; return o; }(struct_assignment3.horizontal_stretch, struct_assignment3.min_width, slint::cbindgen_private::SortOrder::Ascending, struct_assignment3.title, struct_assignment3.width); }()); }(arg_0, self->field_root_15_columns.get());self->field_root_15_sort_ascending.call(arg_0); }(); };self->field_root_15_current_sort_column.set(arg_0); }();
}

inline auto StandardTableView_root_15::fn_touch_area_49_update_saved_values () const -> void{
    [[maybe_unused]] auto self = this;
    self->field_root_15_touch_area_49_saved_values.set(std::make_tuple(float(self->field_root_15_vertical_bar_46_maximum.get()), float((- self->field_flickable_32.viewport_y.get())), float(self->field_touch_area_49.mouse_x.get()), float(self->field_touch_area_49.mouse_y.get())));
}

inline auto StandardTableView_root_15::fn_touch_area_62_update_saved_values () const -> void{
    [[maybe_unused]] auto self = this;
    self->field_root_15_touch_area_62_saved_values.set(std::make_tuple(float(self->field_root_15_horizontal_bar_59_maximum.get()), float((- self->field_flickable_32.viewport_x.get())), float(self->field_touch_area_62.mouse_x.get()), float(self->field_touch_area_62.mouse_y.get())));
}

inline auto StandardTableView_root_15::fn_vertical_bar_46_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1));
}

inline auto StandardTableView_root_15::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    self->field_root_15_absolute_position.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto parent_position = slint::LogicalPosition(slint::cbindgen_private::slint_item_absolute_position(&self->self_weak.lock()->into_dyn(), self->tree_index));;return [&](const auto &a_0, const auto &a_1){ slint::LogicalPosition o{}; o.x = a_0; o.y = a_1; return o; }((parent_position.x + self->field_root_15_x.get()), (parent_position.y + self->field_root_15_y.get())); }();
                        });
    self->field_root_15_current_item_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_flickable_32.viewport_y.get() + (self->field_root_15_current_row.get() * self->field_root_15_item_height.get()));
                        });
    self->field_root_15_current_row.set(slint::private_api::saturating_float_to_int(-1));
    self->field_root_15_current_sort_column.set(slint::private_api::saturating_float_to_int(-1));
    self->field_root_15_down_scroll_button_55_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_down_scroll_button_55.pressed.get() ? 1 : (self->field_down_scroll_button_55.has_hover.get() ? 2 : 0));
                        });
    self->field_root_15_down_scroll_button_68_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_down_scroll_button_68.pressed.get() ? 1 : (self->field_down_scroll_button_68.has_hover.get() ? 2 : 0));
                        });
    self->field_root_15_empty_16_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(EmptyVTable), const_cast<slint::cbindgen_private::Empty*>(&self->field_rectangle_17), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 1 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, 42, layout_info.min_percent, layout_info.preferred, 0); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_scroll_view_31_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, 50, layout_info.min_percent, layout_info.preferred, 1); }()) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0), self->field_root_15_height.get(), 0),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_15_empty_16_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(EmptyVTable), const_cast<slint::cbindgen_private::Empty*>(&self->field_rectangle_17), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 1 - 1)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_scroll_view_31_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, 50, layout_info.min_percent, layout_info.preferred, 1); }()) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0));
                        });
    self->field_root_15_empty_16_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(EmptyVTable), const_cast<slint::cbindgen_private::Empty*>(&self->field_rectangle_17), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 1 - 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, 42, layout_info.min_percent, layout_info.preferred, 0); }()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_root_15_scroll_view_31_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, 50, layout_info.min_percent, layout_info.preferred, 1); }()) ) }.data(), 2),0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 0),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_15_empty_16_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_width.get();
                        });
    self->field_root_15_flickable_32_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_16_layout_cache.get()[3];
                        });
    self->field_root_15_flickable_32_horizontal_stretch.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(FlickableVTable), const_cast<slint::cbindgen_private::Flickable*>(&self->field_flickable_32), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 7 - 1).stretch;
                        });
    self->field_root_15_flickable_32_max_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(FlickableVTable), const_cast<slint::cbindgen_private::Flickable*>(&self->field_flickable_32), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 7 - 1).max;
                        });
    self->field_root_15_flickable_32_max_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(FlickableVTable), const_cast<slint::cbindgen_private::Flickable*>(&self->field_flickable_32), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 7 - 1).max;
                        });
    self->field_root_15_flickable_32_min_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(FlickableVTable), const_cast<slint::cbindgen_private::Flickable*>(&self->field_flickable_32), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 7 - 1).min;
                        });
    self->field_root_15_flickable_32_min_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(FlickableVTable), const_cast<slint::cbindgen_private::Flickable*>(&self->field_flickable_32), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 7 - 1).min;
                        });
    self->field_root_15_flickable_32_preferred_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(FlickableVTable), const_cast<slint::cbindgen_private::Flickable*>(&self->field_flickable_32), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 7 - 1).preferred;
                        });
    self->field_root_15_flickable_32_preferred_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(FlickableVTable), const_cast<slint::cbindgen_private::Flickable*>(&self->field_flickable_32), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 7 - 1).preferred;
                        });
    self->field_root_15_flickable_32_vertical_stretch.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(FlickableVTable), const_cast<slint::cbindgen_private::Flickable*>(&self->field_flickable_32), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index_of_first_child + 7 - 1).stretch;
                        });
    self->field_root_15_flickable_32_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_16_width.get();
                        });
    self->field_root_15_header_layout_19_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_empty_16_layout_cache.get()[1];
                        });
    self->field_root_15_header_layout_19_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ std::array<int, 2> repeated_indices_array;  std::vector<slint::cbindgen_private::LayoutItemInfo> cells_vector;self->repeater_0.track_instance_changes();repeated_indices_array[0] = cells_vector.size();repeated_indices_array[1] = self->repeater_0.len();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Horizontal, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_0.len());
                                }slint::cbindgen_private::Slice<int> repeated_indices = slint::private_api::make_slice(std::span(repeated_indices_array)); slint::cbindgen_private::Slice<slint::cbindgen_private::LayoutItemInfo>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, cells, [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 6), self->field_root_15_header_layout_19_width.get(), 0),repeated_indices); }();
                        });
    self->field_root_15_header_layout_19_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{   std::vector<slint::cbindgen_private::LayoutItemInfo> cells_vector;self->repeater_0.track_instance_changes();{
                                    auto start_offset = cells_vector.size();
                                    self->repeater_0.for_each([&](const auto &sub_comp){ cells_vector.push_back(sub_comp->layout_item_info(slint::cbindgen_private::Orientation::Horizontal, std::nullopt)); });
                                    cells_vector.resize(start_offset + self->repeater_0.len());
                                } slint::cbindgen_private::Slice<slint::cbindgen_private::LayoutItemInfo>cells = slint::private_api::make_slice(std::span(cells_vector)); return slint::private_api::box_layout_info(cells,0,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(0, 6),slint::cbindgen_private::LayoutAlignment::Stretch); }();
                        });
    self->field_root_15_header_layout_19_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::max<float>(self->field_root_15_header_layout_19_layoutinfo_h.get().preferred, self->field_root_15_empty_16_width.get());
                        });
    self->field_root_15_horizontal_bar_59_maximum.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_flickable_32.viewport_width.get() -(float) self->field_root_15_flickable_32_width.get());
                        });
    self->field_root_15_horizontal_bar_59_policy.set(slint::cbindgen_private::ScrollBarPolicy::AsNeeded);
    self->field_root_15_horizontal_bar_59_scrolled.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->field_flickable_32.flicked.call();
                });
    self->field_root_15_horizontal_bar_59_size.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_horizontal_bar_59_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? 6 : 2);
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_root_15_horizontal_bar_59_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_touch_area_62.has_hover.get() || self->field_down_scroll_button_68.has_hover.get()) || self->field_up_scroll_button_64.has_hover.get() ? 1 : 0);
                        });
    self->field_root_15_horizontal_bar_59_visible.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_15_horizontal_bar_59_policy = self->field_root_15_horizontal_bar_59_policy.get();;return ((tmp_root_15_horizontal_bar_59_policy == slint::cbindgen_private::ScrollBarPolicy::AlwaysOn) || ((tmp_root_15_horizontal_bar_59_policy == slint::cbindgen_private::ScrollBarPolicy::AsNeeded) && (self->field_root_15_horizontal_bar_59_maximum.get() > 0))); }();
                        });
    self->field_root_15_horizontal_bar_59_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_root_15_vertical_bar_46_visible.get() ? (self->field_root_15_empty_16_width.get() -(float) 14) : self->field_root_15_empty_16_width.get());
                        });
    self->field_root_15_item_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_flickable_32.viewport_height.get() /(float) slint::private_api::model_length(self->field_root_15_rows.get()));
                        });
    self->field_root_15_min_height.set(200);
    self->field_root_15_rectangle_17_min_height.set(42);
    self->field_root_15_rectangle_17_vertical_stretch.set(0);
    self->field_root_15_scroll_view_31_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->field_root_15_flickable_32_max_width.get(), 100, self->field_root_15_flickable_32_min_width.get(), 0, self->field_root_15_flickable_32_preferred_width.get(), self->field_root_15_flickable_32_horizontal_stretch.get()));
                        });
    self->field_root_15_scroll_view_31_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1) + [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(self->field_root_15_flickable_32_max_height.get(), 100, self->field_root_15_flickable_32_min_height.get(), 0, self->field_root_15_flickable_32_preferred_height.get(), self->field_root_15_flickable_32_vertical_stretch.get()));
                        });
    self->field_root_15_scroll_view_31_min_height.set(50);
    self->field_root_15_scroll_view_31_vertical_scrollbar_policy.set(slint::cbindgen_private::ScrollBarPolicy::AsNeeded);
    self->field_root_15_scroll_view_31_vertical_stretch.set(1);
    self->field_root_15_thumb_48_height.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_15_vertical_bar_46_maximum = self->field_root_15_vertical_bar_46_maximum.get();;return ((tmp_root_15_vertical_bar_46_maximum <= (0 /(float) self->globals->window().window_handle().scale_factor()) ? 0 : [&]{ [[maybe_unused]] auto tmp_root_15_vertical_bar_46_page_size = self->field_root_15_flickable_32_height.get();;return (std::max<float>(std::min<float>(16, self->field_root_15_vertical_bar_46_height.get()), ((self->field_root_15_vertical_bar_46_height.get() -(float) 32) * (tmp_root_15_vertical_bar_46_page_size /(float) (tmp_root_15_vertical_bar_46_maximum + tmp_root_15_vertical_bar_46_page_size)))) * self->globals->window().window_handle().scale_factor()); }()) /(float) self->globals->window().window_handle().scale_factor()); }();
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_root_15_thumb_48_width.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_vertical_bar_46_size.get();
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_root_15_thumb_48_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (16 + (((self->field_root_15_vertical_bar_46_height.get() -(float) 32) -(float) self->field_root_15_thumb_48_height.get()) * ((- self->field_flickable_32.viewport_y.get()) /(float) self->field_root_15_vertical_bar_46_maximum.get())));
                        });
    self->field_root_15_thumb_61_height.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_horizontal_bar_59_size.get();
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_root_15_thumb_61_width.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_15_horizontal_bar_59_maximum = self->field_root_15_horizontal_bar_59_maximum.get();;return ((tmp_root_15_horizontal_bar_59_maximum <= (0 /(float) self->globals->window().window_handle().scale_factor()) ? 0 : [&]{ [[maybe_unused]] auto tmp_root_15_horizontal_bar_59_page_size = self->field_root_15_flickable_32_width.get();;return (std::max<float>(std::min<float>(16, self->field_root_15_horizontal_bar_59_width.get()), (((self->field_root_15_horizontal_bar_59_width.get() -(float) 32) * tmp_root_15_horizontal_bar_59_page_size) /(float) (tmp_root_15_horizontal_bar_59_maximum + tmp_root_15_horizontal_bar_59_page_size))) * self->globals->window().window_handle().scale_factor()); }()) /(float) self->globals->window().window_handle().scale_factor()); }();
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_root_15_thumb_61_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (16 + (((self->field_root_15_horizontal_bar_59_width.get() -(float) 32) -(float) self->field_root_15_thumb_61_width.get()) * ((- self->field_flickable_32.viewport_x.get()) /(float) self->field_root_15_horizontal_bar_59_maximum.get())));
                        });
    self->field_root_15_up_scroll_button_51_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_up_scroll_button_51.pressed.get() ? 1 : (self->field_up_scroll_button_51.has_hover.get() ? 2 : 0));
                        });
    self->field_root_15_up_scroll_button_64_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_up_scroll_button_64.pressed.get() ? 1 : (self->field_up_scroll_button_64.has_hover.get() ? 2 : 0));
                        });
    self->field_root_15_vertical_bar_46_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_root_15_horizontal_bar_59_visible.get() ? (self->field_root_15_empty_16_layout_cache.get()[3] -(float) 14) : self->field_root_15_empty_16_layout_cache.get()[3]);
                        });
    self->field_root_15_vertical_bar_46_maximum.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_flickable_32.viewport_height.get() -(float) self->field_root_15_flickable_32_height.get());
                        });
    self->field_root_15_vertical_bar_46_scrolled.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->field_flickable_32.flicked.call();
                });
    self->field_root_15_vertical_bar_46_size.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_vertical_bar_46_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? 6 : 2);
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_root_15_vertical_bar_46_state.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_touch_area_49.has_hover.get() || self->field_down_scroll_button_55.has_hover.get()) || self->field_up_scroll_button_51.has_hover.get() ? 1 : 0);
                        });
    self->field_root_15_vertical_bar_46_visible.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_root_15_scroll_view_31_vertical_scrollbar_policy = self->field_root_15_scroll_view_31_vertical_scrollbar_policy.get();;return ((tmp_root_15_scroll_view_31_vertical_scrollbar_policy == slint::cbindgen_private::ScrollBarPolicy::AlwaysOn) || ((tmp_root_15_scroll_view_31_vertical_scrollbar_policy == slint::cbindgen_private::ScrollBarPolicy::AsNeeded) && (self->field_root_15_vertical_bar_46_maximum.get() > 0))); }();
                        });
    self->field_root_15_vertical_stretch.set(1);
    self->field__clip_18.clip.set(true);
    self->field_flickable_32.interactive.set(false);
    self->field_flickable_32.viewport_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_flickable_32_height.get();
                        });
    self->field_flickable_32.viewport_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_15_flickable_32_width.get();
                        });
    self->field_flickable_32.viewport_x.set(0);
    self->field_flickable_32.viewport_y.set(0);
    self->field_vertical_bar_visibility_45.clip.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (! self->field_root_15_vertical_bar_46_visible.get());
                        });
    self->field_vertical_bar_46.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_vertical_bar_46_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.281084972e9) : slint::Color::from_argb_encoded(+4.2939804e9))) : slint::Brush(slint::Color::from_argb_encoded(0)));
                        });
    self->field_vertical_bar_46.border_radius.set(7);
    self->field_vertical_bar_46.border_width.set(1);
    self->field_vertical_bar_clip_47.border_bottom_left_radius.set(7);
    self->field_vertical_bar_clip_47.border_bottom_right_radius.set(7);
    self->field_vertical_bar_clip_47.border_top_left_radius.set(7);
    self->field_vertical_bar_clip_47.border_top_right_radius.set(7);
    self->field_vertical_bar_clip_47.border_width.set(1);
    self->field_vertical_bar_clip_47.clip.set(true);
    self->field_thumb_48.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+1.92937984e9)));
                        });
    self->field_thumb_48.border_radius.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_root_15_thumb_48_width.get() /(float) 2);
                        });
    self->field_touch_area_49.enabled.set(true);
    self->field_touch_area_49.moved.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    if (true && self->field_touch_area_49.pressed.get()) { [&]{ if (std::abs(float(std::get<0>(self->field_root_15_touch_area_49_saved_values.get()) - self->field_root_15_vertical_bar_46_maximum.get())) >= std::numeric_limits<float>::epsilon()) { self->fn_touch_area_49_update_saved_values(); } else { ; };self->field_flickable_32.viewport_y.set((- std::max<float>(0, std::min<float>(self->field_root_15_vertical_bar_46_maximum.get(), (std::get<1>(self->field_root_15_touch_area_49_saved_values.get()) + (false ? ((self->field_touch_area_49.mouse_x.get() -(float) std::get<2>(self->field_root_15_touch_area_49_saved_values.get())) * (self->field_root_15_vertical_bar_46_maximum.get() /(float) ((self->field_root_15_vertical_bar_46_height.get() -(float) 32) -(float) self->field_root_15_thumb_48_width.get()))) : ((self->field_touch_area_49.mouse_y.get() -(float) std::get<3>(self->field_root_15_touch_area_49_saved_values.get())) * (self->field_root_15_vertical_bar_46_maximum.get() /(float) ((self->field_root_15_vertical_bar_46_height.get() -(float) 32) -(float) self->field_root_15_thumb_48_height.get())))))))));self->field_root_15_vertical_bar_46_scrolled.call(); }(); } else { ; };
                });
    self->field_touch_area_49.pointer_event.set_handler(
                [this]([[maybe_unused]] slint::language::PointerEvent arg_0) {
                    [[maybe_unused]] auto self = this;
                    if ((arg_0.button == slint::cbindgen_private::PointerEventButton::Left) && (arg_0.kind == slint::cbindgen_private::PointerEventKind::Down)) { self->fn_touch_area_49_update_saved_values(); } else { ; };
                });
    self->field_touch_area_49.scroll_event.set_handler(
                [this]([[maybe_unused]] slint::language::PointerScrollEvent arg_0) {
                    [[maybe_unused]] auto self = this;
                    return [&]{ [[maybe_unused]] auto returned_expression0 = [&]{ [[maybe_unused]] auto return_check_merge0 = (false && (std::abs(float(arg_0.delta_x - 0)) >= std::numeric_limits<float>::epsilon()) ? std::make_tuple(false, [&]{ self->field_flickable_32.viewport_y.set(std::max<float>((- self->field_root_15_vertical_bar_46_maximum.get()), std::min<float>(0, (self->field_flickable_32.viewport_y.get() + arg_0.delta_x))));return slint::cbindgen_private::EventResult::Accept; }()) : (! ((! false) && (std::abs(float(arg_0.delta_y - 0)) >= std::numeric_limits<float>::epsilon())) ? std::make_tuple(true, slint::cbindgen_private::EventResult::Reject) : std::make_tuple(false, [&]{ self->field_flickable_32.viewport_y.set(std::max<float>((- self->field_root_15_vertical_bar_46_maximum.get()), std::min<float>(0, (self->field_flickable_32.viewport_y.get() + arg_0.delta_y))));return slint::cbindgen_private::EventResult::Accept; }())));;return (std::get<0>(return_check_merge0) ? std::make_tuple(slint::cbindgen_private::EventResult::Reject, true, slint::cbindgen_private::EventResult::Reject) : std::make_tuple(slint::cbindgen_private::EventResult::Reject, false, std::get<1>(return_check_merge0))); }();;return (std::get<1>(returned_expression0) ? std::get<0>(returned_expression0) : std::get<2>(returned_expression0)); }();
                });
    self->field_up_scroll_button_Opacity_50.opacity.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_vertical_bar_46_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? 1 : 0);
                        });
    self->field_up_scroll_button_51.clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->field_flickable_32.viewport_y.set(std::min<float>(0, (self->field_flickable_32.viewport_y.get() + 10)));
                });
    self->field_up_scroll_button_51.enabled.set(true);
    self->field_icon_Opacity_52.opacity.set(1);
    self->field_icon_53.colorize.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_up_scroll_button_51_state.get() - 2)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+3.388997631e9) : slint::Color::from_argb_encoded(+2.566914048e9))) : slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+1.92937984e9))));
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_icon_53.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto image_implicit_size = slint::private_api::load_image_from_embedded_data(slint_embedded_resource_2, "svg").size();;return (image_implicit_size.height /(float) image_implicit_size.width); }() * self->field_icon_53.width.get());
                        });
    self->field_icon_53.source.set(slint::private_api::load_image_from_embedded_data(slint_embedded_resource_2, "svg"));
    self->field_icon_53.width.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_up_scroll_button_51_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? 6 : 8);
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_down_scroll_button_Opacity_54.opacity.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_vertical_bar_46_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? 1 : 0);
                        });
    self->field_down_scroll_button_55.clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->field_flickable_32.viewport_y.set(std::max<float>((- self->field_root_15_vertical_bar_46_maximum.get()), (self->field_flickable_32.viewport_y.get() -(float) 10)));
                });
    self->field_down_scroll_button_55.enabled.set(true);
    self->field_icon_Opacity_56.opacity.set(1);
    self->field_icon_57.colorize.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_down_scroll_button_55_state.get() - 2)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+3.388997631e9) : slint::Color::from_argb_encoded(+2.566914048e9))) : slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+1.92937984e9))));
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_icon_57.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto image_implicit_size = slint::private_api::load_image_from_embedded_data(slint_embedded_resource_0, "svg").size();;return (image_implicit_size.height /(float) image_implicit_size.width); }() * self->field_icon_57.width.get());
                        });
    self->field_icon_57.source.set(slint::private_api::load_image_from_embedded_data(slint_embedded_resource_0, "svg"));
    self->field_icon_57.width.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_down_scroll_button_55_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? 6 : 8);
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_horizontal_bar_visibility_58.clip.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (! self->field_root_15_horizontal_bar_59_visible.get());
                        });
    self->field_horizontal_bar_59.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_horizontal_bar_59_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.281084972e9) : slint::Color::from_argb_encoded(+4.2939804e9))) : slint::Brush(slint::Color::from_argb_encoded(0)));
                        });
    self->field_horizontal_bar_59.border_radius.set(7);
    self->field_horizontal_bar_59.border_width.set(1);
    self->field_horizontal_bar_clip_60.border_bottom_left_radius.set(7);
    self->field_horizontal_bar_clip_60.border_bottom_right_radius.set(7);
    self->field_horizontal_bar_clip_60.border_top_left_radius.set(7);
    self->field_horizontal_bar_clip_60.border_top_right_radius.set(7);
    self->field_horizontal_bar_clip_60.border_width.set(1);
    self->field_horizontal_bar_clip_60.clip.set(true);
    self->field_thumb_61.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+1.92937984e9)));
                        });
    self->field_thumb_61.border_radius.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (self->field_root_15_thumb_61_height.get() /(float) 2);
                        });
    self->field_touch_area_62.enabled.set(true);
    self->field_touch_area_62.moved.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    if (true && self->field_touch_area_62.pressed.get()) { [&]{ if (std::abs(float(std::get<0>(self->field_root_15_touch_area_62_saved_values.get()) - self->field_root_15_horizontal_bar_59_maximum.get())) >= std::numeric_limits<float>::epsilon()) { self->fn_touch_area_62_update_saved_values(); } else { ; };self->field_flickable_32.viewport_x.set((- std::max<float>(0, std::min<float>(self->field_root_15_horizontal_bar_59_maximum.get(), (std::get<1>(self->field_root_15_touch_area_62_saved_values.get()) + (true ? ((self->field_touch_area_62.mouse_x.get() -(float) std::get<2>(self->field_root_15_touch_area_62_saved_values.get())) * (self->field_root_15_horizontal_bar_59_maximum.get() /(float) ((self->field_root_15_horizontal_bar_59_width.get() -(float) 32) -(float) self->field_root_15_thumb_61_width.get()))) : ((self->field_touch_area_62.mouse_y.get() -(float) std::get<3>(self->field_root_15_touch_area_62_saved_values.get())) * (self->field_root_15_horizontal_bar_59_maximum.get() /(float) ((self->field_root_15_horizontal_bar_59_width.get() -(float) 32) -(float) self->field_root_15_thumb_61_height.get())))))))));self->field_root_15_horizontal_bar_59_scrolled.call(); }(); } else { ; };
                });
    self->field_touch_area_62.pointer_event.set_handler(
                [this]([[maybe_unused]] slint::language::PointerEvent arg_0) {
                    [[maybe_unused]] auto self = this;
                    if ((arg_0.button == slint::cbindgen_private::PointerEventButton::Left) && (arg_0.kind == slint::cbindgen_private::PointerEventKind::Down)) { self->fn_touch_area_62_update_saved_values(); } else { ; };
                });
    self->field_touch_area_62.scroll_event.set_handler(
                [this]([[maybe_unused]] slint::language::PointerScrollEvent arg_0) {
                    [[maybe_unused]] auto self = this;
                    return [&]{ [[maybe_unused]] auto returned_expression1 = [&]{ [[maybe_unused]] auto return_check_merge1 = (true && (std::abs(float(arg_0.delta_x - 0)) >= std::numeric_limits<float>::epsilon()) ? std::make_tuple(false, [&]{ self->field_flickable_32.viewport_x.set(std::max<float>((- self->field_root_15_horizontal_bar_59_maximum.get()), std::min<float>(0, (self->field_flickable_32.viewport_x.get() + arg_0.delta_x))));return slint::cbindgen_private::EventResult::Accept; }()) : (! ((! true) && (std::abs(float(arg_0.delta_y - 0)) >= std::numeric_limits<float>::epsilon())) ? std::make_tuple(true, slint::cbindgen_private::EventResult::Reject) : std::make_tuple(false, [&]{ self->field_flickable_32.viewport_x.set(std::max<float>((- self->field_root_15_horizontal_bar_59_maximum.get()), std::min<float>(0, (self->field_flickable_32.viewport_x.get() + arg_0.delta_y))));return slint::cbindgen_private::EventResult::Accept; }())));;return (std::get<0>(return_check_merge1) ? std::make_tuple(slint::cbindgen_private::EventResult::Reject, true, slint::cbindgen_private::EventResult::Reject) : std::make_tuple(slint::cbindgen_private::EventResult::Reject, false, std::get<1>(return_check_merge1))); }();;return (std::get<1>(returned_expression1) ? std::get<0>(returned_expression1) : std::get<2>(returned_expression1)); }();
                });
    self->field_up_scroll_button_Opacity_63.opacity.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_horizontal_bar_59_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? 1 : 0);
                        });
    self->field_up_scroll_button_64.clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->field_flickable_32.viewport_x.set(std::min<float>(0, (self->field_flickable_32.viewport_x.get() + 10)));
                });
    self->field_up_scroll_button_64.enabled.set(true);
    self->field_icon_Opacity_65.opacity.set(1);
    self->field_icon_66.colorize.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_up_scroll_button_64_state.get() - 2)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+3.388997631e9) : slint::Color::from_argb_encoded(+2.566914048e9))) : slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+1.92937984e9))));
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_icon_66.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto image_implicit_size = slint::private_api::load_image_from_embedded_data(slint_embedded_resource_3, "svg").size();;return (image_implicit_size.height /(float) image_implicit_size.width); }() * self->field_icon_66.width.get());
                        });
    self->field_icon_66.source.set(slint::private_api::load_image_from_embedded_data(slint_embedded_resource_3, "svg"));
    self->field_icon_66.width.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_up_scroll_button_64_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? 4 : 6);
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_down_scroll_button_Opacity_67.opacity.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_horizontal_bar_59_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? 1 : 0);
                        });
    self->field_down_scroll_button_68.clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    self->field_flickable_32.viewport_x.set(std::max<float>((- self->field_root_15_horizontal_bar_59_maximum.get()), (self->field_flickable_32.viewport_x.get() -(float) 10)));
                });
    self->field_down_scroll_button_68.enabled.set(true);
    self->field_icon_Opacity_69.opacity.set(1);
    self->field_icon_70.colorize.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_down_scroll_button_68_state.get() - 2)) < std::numeric_limits<float>::epsilon() ? slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+3.388997631e9) : slint::Color::from_argb_encoded(+2.566914048e9))) : slint::Brush((self->globals->global_FluentPalette_78->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(352321535) : slint::Color::from_argb_encoded(+1.92937984e9))));
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_icon_70.height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto image_implicit_size = slint::private_api::load_image_from_embedded_data(slint_embedded_resource_1, "svg").size();;return (image_implicit_size.height /(float) image_implicit_size.width); }() * self->field_icon_70.width.get());
                        });
    self->field_icon_70.source.set(slint::private_api::load_image_from_embedded_data(slint_embedded_resource_1, "svg"));
    self->field_icon_70.width.set_animated_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return (std::abs(float(self->field_root_15_down_scroll_button_68_state.get() - 1)) < std::numeric_limits<float>::epsilon() ? 4 : 6);
                        },
                                [this](uint64_t **start_time) -> slint::cbindgen_private::PropertyAnimation {
                                    [[maybe_unused]] auto self = this;
                                    auto anim = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::PropertyAnimation o{}; o.delay = a_0; o.direction = a_1; o.duration = a_2; o.easing = a_3; o.enabled = a_4; o.iteration_count = a_5; return o; }(0, slint::cbindgen_private::AnimationDirection::Normal, 150, slint::cbindgen_private::EasingCurve(slint::cbindgen_private::EasingCurve::Tag::CubicBezier, 0, 0, 0.58, 1), true, 1);
                                    *start_time = nullptr;
                                    return anim;
                                });
    self->field_focus_scope_71.enabled.set(true);
    self->field_focus_scope_71.focus_on_click.set(true);
    self->field_focus_scope_71.focus_on_tab_navigation.set(true);
    self->field_focus_scope_71.key_pressed.set_handler(
                [this]([[maybe_unused]] slint::language::KeyEvent arg_0) {
                    [[maybe_unused]] auto self = this;
                    return [&]{ [[maybe_unused]] auto returned_expression2 = [&]{ [[maybe_unused]] auto return_check_merge2 = (arg_0.text == slint::SharedString(u8"\U0000f700") ? std::make_tuple(false, [&]{ self->fn_set_current_row(slint::private_api::saturating_float_to_int((self->field_root_15_current_row.get() -(float) 1)));return slint::cbindgen_private::EventResult::Accept; }()) : (! (arg_0.text == slint::SharedString(u8"\U0000f701")) ? std::make_tuple(true, slint::cbindgen_private::EventResult::Reject) : std::make_tuple(false, [&]{ self->fn_set_current_row(slint::private_api::saturating_float_to_int((self->field_root_15_current_row.get() + 1)));return slint::cbindgen_private::EventResult::Accept; }())));;return (std::get<0>(return_check_merge2) ? std::make_tuple(slint::cbindgen_private::EventResult::Reject, true, slint::cbindgen_private::EventResult::Reject) : std::make_tuple(slint::cbindgen_private::EventResult::Reject, false, std::get<1>(return_check_merge2))); }();;return (std::get<1>(returned_expression2) ? std::get<0>(returned_expression2) : std::get<2>(returned_expression2)); }();
                });
    self->field_root_15_min_height.set_constant();
    self->field_root_15_rectangle_17_min_height.set_constant();
    self->field_root_15_rectangle_17_vertical_stretch.set_constant();
    self->field_root_15_scroll_view_31_min_height.set_constant();
    self->field_root_15_scroll_view_31_vertical_stretch.set_constant();
    self->field_root_15_vertical_stretch.set_constant();
    self->field__clip_18.border_bottom_left_radius.set_constant();
    self->field__clip_18.border_bottom_right_radius.set_constant();
    self->field__clip_18.border_top_left_radius.set_constant();
    self->field__clip_18.border_top_right_radius.set_constant();
    self->field__clip_18.border_width.set_constant();
    self->field_vertical_bar_visibility_45.border_bottom_left_radius.set_constant();
    self->field_vertical_bar_visibility_45.border_bottom_right_radius.set_constant();
    self->field_vertical_bar_visibility_45.border_top_left_radius.set_constant();
    self->field_vertical_bar_visibility_45.border_top_right_radius.set_constant();
    self->field_vertical_bar_visibility_45.border_width.set_constant();
    self->field_vertical_bar_46.border_color.set_constant();
    self->field_vertical_bar_46.border_radius.set_constant();
    self->field_vertical_bar_46.border_width.set_constant();
    self->field_vertical_bar_clip_47.border_bottom_left_radius.set_constant();
    self->field_vertical_bar_clip_47.border_bottom_right_radius.set_constant();
    self->field_vertical_bar_clip_47.border_top_left_radius.set_constant();
    self->field_vertical_bar_clip_47.border_top_right_radius.set_constant();
    self->field_vertical_bar_clip_47.border_width.set_constant();
    self->field_thumb_48.border_color.set_constant();
    self->field_thumb_48.border_width.set_constant();
    self->field_touch_area_49.enabled.set_constant();
    self->field_touch_area_49.mouse_cursor.set_constant();
    self->field_up_scroll_button_51.enabled.set_constant();
    self->field_up_scroll_button_51.mouse_cursor.set_constant();
    self->field_icon_53.image_fit.set_constant();
    self->field_icon_53.image_rendering.set_constant();
    self->field_icon_53.source.set_constant();
    self->field_down_scroll_button_55.enabled.set_constant();
    self->field_down_scroll_button_55.mouse_cursor.set_constant();
    self->field_icon_57.image_fit.set_constant();
    self->field_icon_57.image_rendering.set_constant();
    self->field_icon_57.source.set_constant();
    self->field_horizontal_bar_visibility_58.border_bottom_left_radius.set_constant();
    self->field_horizontal_bar_visibility_58.border_bottom_right_radius.set_constant();
    self->field_horizontal_bar_visibility_58.border_top_left_radius.set_constant();
    self->field_horizontal_bar_visibility_58.border_top_right_radius.set_constant();
    self->field_horizontal_bar_visibility_58.border_width.set_constant();
    self->field_horizontal_bar_59.border_color.set_constant();
    self->field_horizontal_bar_59.border_radius.set_constant();
    self->field_horizontal_bar_59.border_width.set_constant();
    self->field_horizontal_bar_clip_60.border_bottom_left_radius.set_constant();
    self->field_horizontal_bar_clip_60.border_bottom_right_radius.set_constant();
    self->field_horizontal_bar_clip_60.border_top_left_radius.set_constant();
    self->field_horizontal_bar_clip_60.border_top_right_radius.set_constant();
    self->field_horizontal_bar_clip_60.border_width.set_constant();
    self->field_thumb_61.border_color.set_constant();
    self->field_thumb_61.border_width.set_constant();
    self->field_touch_area_62.enabled.set_constant();
    self->field_touch_area_62.mouse_cursor.set_constant();
    self->field_up_scroll_button_64.enabled.set_constant();
    self->field_up_scroll_button_64.mouse_cursor.set_constant();
    self->field_icon_66.image_fit.set_constant();
    self->field_icon_66.image_rendering.set_constant();
    self->field_icon_66.source.set_constant();
    self->field_down_scroll_button_68.enabled.set_constant();
    self->field_down_scroll_button_68.mouse_cursor.set_constant();
    self->field_icon_70.image_fit.set_constant();
    self->field_icon_70.image_rendering.set_constant();
    self->field_icon_70.source.set_constant();
    self->field_focus_scope_71.enabled.set_constant();
    self->field_focus_scope_71.focus_on_click.set_constant();
    self->field_focus_scope_71.focus_on_tab_navigation.set_constant();
    self->repeater_0.set_model_binding([self] { (void)self; return self->field_root_15_columns.get(); });
    self->repeater_1.set_model_binding([self] { (void)self; return self->field_root_15_rows.get(); });
}

inline auto StandardTableView_root_15::user_init () -> void{
    [[maybe_unused]] auto self = this;
    [&]{ [&]{ ;; }();[&]{ ;; }(); }();
}

inline auto StandardTableView_root_15::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = ([&]{ [[maybe_unused]] auto layout_info_2 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_2.max, layout_info_2.max_percent, 400, layout_info_2.min_percent, layout_info_2.preferred, 1); }() + self->field_root_15_empty_16_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, 400, layout_info.min_percent, layout_info.preferred, 1); }() : [&]{ [[maybe_unused]] auto layout_info = self->fn_layoutinfo_v_with_constraint(([&]{ [[maybe_unused]] auto layout_info_2 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_2.max, layout_info_2.max_percent, 400, layout_info_2.min_percent, layout_info_2.preferred, 1); }() + self->field_root_15_empty_16_layoutinfo_h.get()).preferred);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, 200, layout_info.min_percent, layout_info.preferred, 1); }();
}

inline auto StandardTableView_root_15::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_height.get()), float(self->field_root_15_width.get()), float(self->field_root_15_x.get()), float(self->field_root_15_y.get())));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_16_layout_cache.get()[1]), float(self->field_root_15_width.get()), float(0), float(self->field_root_15_empty_16_layout_cache.get()[0])));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_16_layout_cache.get()[3]), float(self->field_root_15_width.get()), float(0), float(self->field_root_15_empty_16_layout_cache.get()[2])));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_height.get()), float(0), float(0), float(0)));
        case 4: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_16_layout_cache.get()[1]), float(self->field_root_15_empty_16_width.get()), float(0), float(0)));
        case 5: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_empty_16_layout_cache.get()[1]), float(self->field_root_15_header_layout_19_width.get()), float(self->field_flickable_32.viewport_x.get()), float(0)));
        case 7: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_flickable_32_height.get()), float(self->field_root_15_flickable_32_width.get()), float(0), float(0)));
        case 8: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(0), float(0), float(0), float(0)));
        case 9: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(0), float(0), float(0), float(0)));
        case 10: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(0), float(self->field_flickable_32.viewport_width.get()), float(self->field_flickable_32.viewport_x.get()), float(self->field_root_15_flickable_viewport_33_y.get())));
        case 12: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_vertical_bar_46_height.get()), float(14), float(((self->field_root_15_flickable_32_width.get() + 0) -(float) 14)), float(0)));
        case 13: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_vertical_bar_46_height.get()), float(14), float(0), float(0)));
        case 14: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_thumb_48_height.get()), float(self->field_root_15_thumb_48_width.get()), float((10 -(float) self->field_root_15_thumb_48_width.get())), float(self->field_root_15_thumb_48_y.get())));
        case 15: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_vertical_bar_46_height.get()), float(14), float(0), float(0)));
        case 16: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(6), float(8), float(3), float(4)));
        case 17: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(6), float(8), float(3), float(((self->field_root_15_vertical_bar_46_height.get() -(float) 6) -(float) 4))));
        case 18: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(6), float(8), float(0), float(0)));
        case 19: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_icon_53.height.get()), float(self->field_icon_53.width.get()), float(((8 -(float) self->field_icon_53.width.get()) /(float) 2)), float(((6 -(float) self->field_icon_53.height.get()) /(float) 2))));
        case 20: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_icon_53.height.get()), float(self->field_icon_53.width.get()), float(0), float(0)));
        case 21: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(6), float(8), float(0), float(0)));
        case 22: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_icon_57.height.get()), float(self->field_icon_57.width.get()), float(((8 -(float) self->field_icon_57.width.get()) /(float) 2)), float(((6 -(float) self->field_icon_57.height.get()) /(float) 2))));
        case 23: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_icon_57.height.get()), float(self->field_icon_57.width.get()), float(0), float(0)));
        case 24: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(14), float(self->field_root_15_horizontal_bar_59_width.get()), float(0), float(((self->field_root_15_flickable_32_height.get() + 0) -(float) 14))));
        case 25: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(14), float(self->field_root_15_horizontal_bar_59_width.get()), float(0), float(0)));
        case 26: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_15_thumb_61_height.get()), float(self->field_root_15_thumb_61_width.get()), float(self->field_root_15_thumb_61_x.get()), float((10 -(float) self->field_root_15_thumb_61_height.get()))));
        case 27: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(14), float(self->field_root_15_horizontal_bar_59_width.get()), float(0), float(0)));
        case 28: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(8), float(6), float(4), float(3)));
        case 29: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(8), float(6), float(((self->field_root_15_horizontal_bar_59_width.get() -(float) 6) -(float) 4)), float(3)));
        case 30: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(8), float(6), float(0), float(0)));
        case 31: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_icon_66.height.get()), float(self->field_icon_66.width.get()), float(((6 -(float) self->field_icon_66.width.get()) /(float) 2)), float(((8 -(float) self->field_icon_66.height.get()) /(float) 2))));
        case 32: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_icon_66.height.get()), float(self->field_icon_66.width.get()), float(0), float(0)));
        case 33: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(8), float(6), float(0), float(0)));
        case 34: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_icon_70.height.get()), float(self->field_icon_70.width.get()), float(((6 -(float) self->field_icon_70.width.get()) /(float) 2)), float(((8 -(float) self->field_icon_70.height.get()) /(float) 2))));
        case 35: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_icon_70.height.get()), float(self->field_icon_70.width.get()), float(0), float(0)));
    }
    return {};
}

inline auto StandardTableView_root_15::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::cbindgen_private::AccessibleRole::Table;
        case 2: return slint::cbindgen_private::AccessibleRole::List;
    }
    return {};
}

inline auto StandardTableView_root_15::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (2 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Orientation): return [&]() -> slint::SharedString { switch (slint::cbindgen_private::Orientation::Vertical) { case slint::cbindgen_private::Orientation::Horizontal: return "horizontal"; case slint::cbindgen_private::Orientation::Vertical: return "vertical"; default: return {}; } }();
    }
    return {};
}

inline auto StandardTableView_root_15::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
    }
    return ;
}

inline auto StandardTableView_root_15::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto StandardTableView_root_15::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    return {};
}

inline auto StandardTableView_root_15::ensure_instantiated () const -> bool{
    [[maybe_unused]] auto self = this;
    bool _changed = false;
    _changed |= self->repeater_0.ensure_updated(self);
    _changed |= self->repeater_1.ensure_updated_listview(self, &self->field_flickable_32.viewport_width, &self->field_flickable_32.viewport_height, &self->field_flickable_32.viewport_y, self->field_root_15_flickable_32_width.get(), self->field_root_15_flickable_32_height.get());
    return _changed;
}

inline auto StandardTableView_root_15::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: {
                return self->repeater_0.visit(order, visitor);
            }
        case 1: {
                self->repeater_1.track_changes_listview(&self->field_flickable_32.viewport_width, &self->field_flickable_32.viewport_height, &self->field_flickable_32.viewport_y, self->field_root_15_flickable_32_width.get(), &self->field_root_15_flickable_32_height);
                return self->repeater_1.visit(order, visitor);
            } };
        std::abort();
}

inline auto StandardTableView_root_15::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                self->repeater_0.track_instance_changes();
                return self->repeater_0.index_range();
            }
        case 1: {
                self->repeater_1.track_instance_changes();
                return self->repeater_1.index_range();
            } };
        std::abort();
}

inline auto StandardTableView_root_15::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: {
                *result = self->repeater_0.instance_at(subtree_index);
                return;
            }
        case 1: {
                *result = self->repeater_1.instance_at(subtree_index);
                return;
            } };
        std::abort();
}

inline FluentPalette_78::FluentPalette_78 (const class SharedGlobals *globals)
 : globals(globals)
{
}

inline auto FluentPalette_78::init () -> void{
    (void)this->globals;
    this->field_accent_background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush((this->field_dark_color_scheme.get() ? this->fn_accentify(slint::Color::from_argb_encoded(+4.284534271e9)) : this->fn_accentify(slint::Color::from_argb_encoded(+4.278214584e9))));
                        });
    this->field_background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::Brush((this->field_dark_color_scheme.get() ? slint::Color::from_argb_encoded(+4.280032284e9) : slint::Color::from_argb_encoded(+4.29463833e9)));
                        });
    this->field_color_scheme.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ auto _root = (*this->globals->root_weak.lock()).into_dyn(); return slint::cbindgen_private::slint_context_color_scheme(&_root); }();
                        });
    this->field_dark_color_scheme.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return [&]{ [[maybe_unused]] auto tmp_FluentPalette_78_color_scheme = this->field_color_scheme.get();;return (! (tmp_FluentPalette_78_color_scheme == slint::cbindgen_private::ColorScheme::Unknown) ? (tmp_FluentPalette_78_color_scheme == slint::cbindgen_private::ColorScheme::Dark) : ([&]{ auto _root = (*this->globals->root_weak.lock()).into_dyn(); return slint::cbindgen_private::slint_context_color_scheme(&_root); }() == slint::cbindgen_private::ColorScheme::Dark)); }();
                        });
}

inline auto FluentPalette_78::fn_accentify ([[maybe_unused]] slint::Color arg_0) const -> slint::Color{
    [[maybe_unused]] auto self = this;
    return [&]{ [[maybe_unused]] auto local_accent_color = [&]{ auto _root = (*this->globals->root_weak.lock()).into_dyn(); slint::Color col; slint::cbindgen_private::slint_context_accent_color(&_root, &col); return col; }();;return (! (local_accent_color.to_argb_uint().alpha > 0) ? arg_0 : [&]{ [[maybe_unused]] auto local_default_lch = arg_0.to_oklch();;[[maybe_unused]] auto local_accent_lch = local_accent_color.to_oklch();;return slint::Color::from_oklch(std::clamp(static_cast<float>(local_default_lch.lightness), 0.f, 1.f), std::max(static_cast<float>(local_accent_lch.chroma), 0.f), static_cast<float>(local_accent_lch.hue), std::clamp(static_cast<float>(1), 0.f, 1.f)); }()); }();
}

inline const slint::private_api::ItemTreeVTable MainWindow::static_vtable = { visit_children, get_item_ref, get_subtree_range, get_subtree, get_item_tree, parent_node, embed_component, subtree_index, layout_info, ensure_instantiated, item_geometry, accessible_role, accessible_string_property, accessibility_action, supported_accessibility_actions, element_infos, window_adapter, slint::private_api::drop_in_place<MainWindow>, slint::private_api::dealloc };

inline auto MainWindow::fn_empty_73_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->fn_empty_74_layoutinfo_v_with_constraint(arg_0)) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_standardtableview_76.fn_layoutinfo_v_with_constraint(arg_0);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, self->field_standardtableview_76.field_root_15_min_height.get(), layout_info.min_percent, layout_info.preferred, self->field_standardtableview_76.field_root_15_vertical_stretch.get()); }()) ) }.data(), 2),self->field_root_72_empty_73_spacing.get(),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(self->field_root_72_empty_73_padding.get(), self->field_root_72_empty_73_padding.get()),slint::cbindgen_private::LayoutAlignment::Stretch);
}

inline auto MainWindow::fn_empty_74_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 1>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_button_75.fn_layoutinfo_v_with_constraint(arg_0);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, self->field_button_75.field_root_3_min_height.get(), layout_info.min_percent, layout_info.preferred, self->field_button_75.field_root_3_vertical_stretch.get()); }()) ) }.data(), 1),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(self->field_root_72_empty_74_padding.get(), self->field_root_72_empty_74_padding.get()));
}

inline auto MainWindow::fn_layoutinfo_v_with_constraint ([[maybe_unused]] float arg_0) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return ([&]{ [[maybe_unused]] auto layout_info_5 = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->field_root_72), slint::cbindgen_private::Orientation::Vertical, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_5.max, layout_info_5.max_percent, layout_info_5.min, layout_info_5.min_percent, 600, layout_info_5.stretch); }() + self->fn_empty_73_layoutinfo_v_with_constraint(arg_0));
}

inline auto MainWindow::init (const class SharedGlobals* globals,slint::cbindgen_private::ItemTreeWeak enclosing_component,uint32_t tree_index,uint32_t tree_index_of_first_child) -> void{
    auto self = this;
    self->self_weak = enclosing_component;
    self->globals = globals;
    this->tree_index_of_first_child = tree_index_of_first_child;
    self->tree_index = tree_index;
    this->field_button_75.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 3 - 1, tree_index_of_first_child + 4 - 1);
    this->field_standardtableview_76.init(globals, self_weak.into_dyn(), tree_index_of_first_child + 2 - 1, tree_index_of_first_child + 11 - 1);
    self->field_root_72.background.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->globals->global_FluentPalette_78->field_background.get();
                        });
    self->field_root_72_empty_73_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Stretch, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_72_empty_74_layoutinfo_v.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&]{ [[maybe_unused]] auto layout_info_3 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_3.max, layout_info_3.max_percent, 200, layout_info_3.min_percent, layout_info_3.preferred, 1); }() + self->field_standardtableview_76.field_root_15_empty_16_layoutinfo_v.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, 200, layout_info.min_percent, layout_info.preferred, 1); }()) ) }.data(), 2), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8), self->field_root_72.height.get(), 8),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_72_empty_73_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_72_empty_74_layoutinfo_h.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&]{ [[maybe_unused]] auto layout_info_2 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_2.max, layout_info_2.max_percent, 400, layout_info_2.min_percent, layout_info_2.preferred, 1); }() + self->field_standardtableview_76.field_root_15_empty_16_layoutinfo_h.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, 400, layout_info.min_percent, layout_info.preferred, 1); }()) ) }.data(), 2),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8));
                        });
    self->field_root_72_empty_73_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 2>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }(self->field_root_72_empty_74_layoutinfo_v.get()) ), slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = ([&]{ [[maybe_unused]] auto layout_info_3 = [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(+3.4028234663852886e38, 100, 0, 0, 0, 1);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_3.max, layout_info_3.max_percent, 200, layout_info_3.min_percent, layout_info_3.preferred, 1); }() + self->field_standardtableview_76.field_root_15_empty_16_layoutinfo_v.get());;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, 200, layout_info.min_percent, layout_info.preferred, 1); }()) ) }.data(), 2),8,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8),slint::cbindgen_private::LayoutAlignment::Stretch);
                        });
    self->field_root_72_empty_73_padding.set(8);
    self->field_root_72_empty_73_spacing.set(8);
    self->field_root_72_empty_74_layout_cache.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::solve_box_layout([&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::cbindgen_private::BoxLayoutData o{}; o.alignment = a_0; o.cells = a_1; o.padding = a_2; o.size = a_3; o.spacing = a_4; return o; }(slint::cbindgen_private::LayoutAlignment::Start, slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 1>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_button_75.field_root_3_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->field_button_75.field_root_3_i_layout_6_layoutinfo_h.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ) }.data(), 1), [&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8), ((self->field_root_72.width.get() -(float) 8) -(float) 8), 8),slint::private_api::make_slice<int>(std::array<int, 0>{  }.data(), 0));
                        });
    self->field_root_72_empty_74_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 1>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_button_75.field_root_3_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->field_button_75.field_root_3_i_layout_6_layoutinfo_h.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ) }.data(), 1),8,[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8),slint::cbindgen_private::LayoutAlignment::Start);
                        });
    self->field_root_72_empty_74_layoutinfo_v.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return slint::private_api::box_layout_info_ortho(slint::private_api::make_slice<slint::cbindgen_private::LayoutItemInfo>(std::array<slint::cbindgen_private::LayoutItemInfo, 1>{ slint::cbindgen_private::LayoutItemInfo ( [&](const auto &a_0){ slint::cbindgen_private::LayoutItemInfo o{}; o.constraint = a_0; return o; }([&]{ [[maybe_unused]] auto layout_info = self->field_button_75.field_root_3_layoutinfo_v.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, std::max<float>(32, self->field_button_75.field_root_3_i_layout_6_layoutinfo_v.get().min), layout_info.min_percent, layout_info.preferred, 0); }()) ) }.data(), 1),[&](const auto &a_0, const auto &a_1){ slint::cbindgen_private::Padding o{}; o.begin = a_0; o.end = a_1; return o; }(8, 8));
                        });
    self->field_root_72_empty_74_padding.set(8);
    self->field_root_72_layoutinfo_h.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ([&]{ [[maybe_unused]] auto layout_info_4 = slint::private_api::item_layout_info(SLINT_GET_ITEM_VTABLE(WindowItemVTable), const_cast<slint::cbindgen_private::WindowItem*>(&self->field_root_72), slint::cbindgen_private::Orientation::Horizontal, -1, &self->globals->window().window_handle(), self->self_weak.lock()->into_dyn(), self->tree_index);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info_4.max, layout_info_4.max_percent, layout_info_4.min, layout_info_4.min_percent, 900, layout_info_4.stretch); }() + self->field_root_72_empty_73_layoutinfo_h.get());
                        });
    self->field_root_72_process_list.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::make_shared<slint::private_api::ArrayModel<0,std::shared_ptr<slint::Model<slint::language::StandardListViewItem>>>>();
                        });
    self->field_root_72.title.set(slint::SharedString(u8"procXplorer"));
    self->field_button_75.field_root_3_clicked.set_handler(
                [this]() {
                    [[maybe_unused]] auto self = this;
                    (void)self->callback_tracker_root_72_refresh_clicked.get(), self->field_root_72_refresh_clicked.call();
                });
    self->field_button_75.field_root_3_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_72_empty_73_layout_cache.get()[1] -(float) 8) -(float) 8);
                        });
    self->field_button_75.field_root_3_text.set(slint::SharedString(u8"Refresh Processes"));
    self->field_button_75.field_root_3_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_72_empty_74_layout_cache.get()[1];
                        });
    self->field_button_75.field_root_3_x.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_72_empty_74_layout_cache.get()[0];
                        });
    self->field_button_75.field_root_3_y.set(8);
    self->field_standardtableview_76.field_root_15_columns.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return std::make_shared<slint::private_api::ArrayModel<3,slint::language::TableColumn>>(slint::language::TableColumn ( [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::language::TableColumn o{}; o.horizontal_stretch = a_0; o.min_width = a_1; o.sort_order = a_2; o.title = a_3; o.width = a_4; return o; }(0, 0, slint::cbindgen_private::SortOrder::Unsorted, slint::SharedString(u8"PID"), 0) ), slint::language::TableColumn ( [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::language::TableColumn o{}; o.horizontal_stretch = a_0; o.min_width = a_1; o.sort_order = a_2; o.title = a_3; o.width = a_4; return o; }(0, 0, slint::cbindgen_private::SortOrder::Unsorted, slint::SharedString(u8"Process Name"), 0) ), slint::language::TableColumn ( [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4){ slint::language::TableColumn o{}; o.horizontal_stretch = a_0; o.min_width = a_1; o.sort_order = a_2; o.title = a_3; o.width = a_4; return o; }(0, 0, slint::cbindgen_private::SortOrder::Unsorted, slint::SharedString(u8"Threads"), 0) ));
                        });
    self->field_standardtableview_76.field_root_15_height.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_72_empty_73_layout_cache.get()[3];
                        });
    self->field_standardtableview_76.field_root_15_rows.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_72_process_list.get();
                        });
    self->field_standardtableview_76.field_root_15_width.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return ((self->field_root_72.width.get() -(float) 8) -(float) 8);
                        });
    self->field_standardtableview_76.field_root_15_x.set(8);
    self->field_standardtableview_76.field_root_15_y.set_binding([this]() {
                            [[maybe_unused]] auto self = this;
                            return self->field_root_72_empty_73_layout_cache.get()[2];
                        });
    self->field_root_72.always_on_top.set_constant();
    self->field_root_72.default_font_family.set_constant();
    self->field_root_72.default_font_size.set_constant();
    self->field_root_72.default_font_weight.set_constant();
    self->field_root_72_empty_73_padding.set_constant();
    self->field_root_72_empty_73_spacing.set_constant();
    self->field_root_72_empty_74_padding.set_constant();
    self->field_root_72.icon.set_constant();
    self->field_root_72.no_frame.set_constant();
    self->field_root_72.resize_border_width.set_constant();
    self->field_root_72.title.set_constant();
    self->field_button_75.field_root_3_i_layout_6_padding_bottom.set_constant();
    self->field_button_75.field_root_3_i_layout_6_padding_top.set_constant();
    self->field_button_75.field_root_3_icon.set_constant();
    self->field_button_75.field_root_3_text.set_constant();
    self->field_button_75.field_root_3_vertical_stretch.set_constant();
    self->field_button_75.field_root_3_y.set_constant();
    self->field_standardtableview_76.field_root_15_flickable_viewport_33_y.set_constant();
    self->field_standardtableview_76.field_root_15_min_height.set_constant();
    self->field_standardtableview_76.field_root_15_rectangle_17_min_height.set_constant();
    self->field_standardtableview_76.field_root_15_rectangle_17_vertical_stretch.set_constant();
    self->field_standardtableview_76.field_root_15_scroll_view_31_min_height.set_constant();
    self->field_standardtableview_76.field_root_15_scroll_view_31_vertical_stretch.set_constant();
    self->field_standardtableview_76.field_root_15_vertical_stretch.set_constant();
    self->field_standardtableview_76.field_root_15_x.set_constant();
}

inline auto MainWindow::user_init () -> void{
    [[maybe_unused]] auto self = this;
    this->field_button_75.user_init();
    this->field_standardtableview_76.user_init();
    ;
    ;
}

inline auto MainWindow::layout_info (slint::cbindgen_private::Orientation o) const -> slint::cbindgen_private::LayoutInfo{
    [[maybe_unused]] auto self = this;
    return o == slint::cbindgen_private::Orientation::Horizontal ? [&]{ [[maybe_unused]] auto layout_info = self->field_root_72_layoutinfo_h.get();;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, 900, layout_info.stretch); }() : [&]{ [[maybe_unused]] auto layout_info = self->fn_layoutinfo_v_with_constraint(self->field_root_72_layoutinfo_h.get().preferred);;return [&](const auto &a_0, const auto &a_1, const auto &a_2, const auto &a_3, const auto &a_4, const auto &a_5){ slint::cbindgen_private::LayoutInfo o{}; o.max = a_0; o.max_percent = a_1; o.min = a_2; o.min_percent = a_3; o.preferred = a_4; o.stretch = a_5; return o; }(layout_info.max, layout_info.max_percent, layout_info.min, layout_info.min_percent, 600, layout_info.stretch); }();
}

inline auto MainWindow::item_geometry (uint32_t index) const -> slint::cbindgen_private::Rect{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 0: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_72.height.get()), float(self->field_root_72.width.get()), float(0), float(0)));
        case 1: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_72_empty_73_layout_cache.get()[1]), float(((self->field_root_72.width.get() -(float) 8) -(float) 8)), float(8), float(self->field_root_72_empty_73_layout_cache.get()[0])));
        case 2: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(self->field_root_72_empty_73_layout_cache.get()[3]), float(((self->field_root_72.width.get() -(float) 8) -(float) 8)), float(8), float(self->field_root_72_empty_73_layout_cache.get()[2])));
        case 3: return slint::private_api::convert_anonymous_rect(std::make_tuple(float(((self->field_root_72_empty_73_layout_cache.get()[1] -(float) 8) -(float) 8)), float(self->field_root_72_empty_74_layout_cache.get()[1]), float(self->field_root_72_empty_74_layout_cache.get()[0]), float(8)));
    }
    if (index == 3) {
        return self->field_button_75.item_geometry(0);
    } else if (index >= 4 && index < 11) {
        return self->field_button_75.item_geometry(index - 3);
    } else if (index == 2) {
        return self->field_standardtableview_76.item_geometry(0);
    } else if (index >= 11 && index < 46) {
        return self->field_standardtableview_76.item_geometry(index - 10);
    } else return {};
}

inline auto MainWindow::accessible_role (uint32_t index) const -> slint::cbindgen_private::AccessibleRole{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 2: return slint::cbindgen_private::AccessibleRole::Table;
        case 3: return slint::cbindgen_private::AccessibleRole::Button;
    }
    if (index == 3) {
        return self->field_button_75.accessible_role(0);
    } else if (index >= 4 && index < 11) {
        return self->field_button_75.accessible_role(index - 3);
    } else if (index == 2) {
        return self->field_standardtableview_76.accessible_role(0);
    } else if (index >= 11 && index < 46) {
        return self->field_standardtableview_76.accessible_role(index - 10);
    } else return {};
}

inline auto MainWindow::accessible_string_property (uint32_t index, slint::cbindgen_private::AccessibleStringProperty what) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(what)) {
        case (3 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Checkable): return (false ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (3 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Checked): return (self->field_button_75.field_root_3_checked.get() ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (3 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Enabled): return (self->field_button_75.field_i_focus_scope_12.enabled.get() ? slint::SharedString(u8"true") : slint::SharedString(u8"false"));
        case (3 << 8) | uintptr_t(slint::cbindgen_private::AccessibleStringProperty::Label): return self->field_button_75.field_root_3_text.get();
    }
    if (index == 3) {
        return self->field_button_75.accessible_string_property(0, what);
    } else if (index >= 4 && index < 11) {
        return self->field_button_75.accessible_string_property(index - 3, what);
    } else if (index == 2) {
        return self->field_standardtableview_76.accessible_string_property(0, what);
    } else if (index >= 11 && index < 46) {
        return self->field_standardtableview_76.accessible_string_property(index - 10, what);
    } else return {};
}

inline auto MainWindow::accessibility_action (uint32_t index, const slint::cbindgen_private::AccessibilityAction &action) const -> void{
    [[maybe_unused]] auto self = this;
    switch ((index << 8) | uintptr_t(action.tag)) {
        case (3 << 8) | uintptr_t(slint::cbindgen_private::AccessibilityAction::Tag::Default): return self->field_button_75.field_root_3_accessible_action_default.call();
    }
    if (index == 3) {
        return self->field_button_75.accessibility_action(0, action);
    } else if (index >= 4 && index < 11) {
        return self->field_button_75.accessibility_action(index - 3, action);
    } else if (index == 2) {
        return self->field_standardtableview_76.accessibility_action(0, action);
    } else if (index >= 11 && index < 46) {
        return self->field_standardtableview_76.accessibility_action(index - 10, action);
    } else return ;
}

inline auto MainWindow::supported_accessibility_actions (uint32_t index) const -> uint32_t{
    [[maybe_unused]] auto self = this;
    switch (index) {
        case 3: return slint::cbindgen_private::SupportedAccessibilityAction_Default;
    }
    if (index == 3) {
        return self->field_button_75.supported_accessibility_actions(0);
    } else if (index >= 4 && index < 11) {
        return self->field_button_75.supported_accessibility_actions(index - 3);
    } else if (index == 2) {
        return self->field_standardtableview_76.supported_accessibility_actions(0);
    } else if (index >= 11 && index < 46) {
        return self->field_standardtableview_76.supported_accessibility_actions(index - 10);
    } else return {};
}

inline auto MainWindow::element_infos (uint32_t index) const -> std::optional<slint::SharedString>{
    [[maybe_unused]] auto self = this;
    switch (index) {
    }
    if (index == 3) {
        return self->field_button_75.element_infos(0);
    } else if (index >= 4 && index < 11) {
        return self->field_button_75.element_infos(index - 3);
    } else if (index == 2) {
        return self->field_standardtableview_76.element_infos(0);
    } else if (index >= 11 && index < 46) {
        return self->field_standardtableview_76.element_infos(index - 10);
    } else return {};
}

inline auto MainWindow::ensure_instantiated () const -> bool{
    [[maybe_unused]] auto self = this;
    bool _changed = false;
    _changed |= self->field_button_75.ensure_instantiated();
    _changed |= self->field_standardtableview_76.ensure_instantiated();
    return _changed;
}

inline auto MainWindow::visit_dynamic_children (uint32_t dyn_index, [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor) const -> uint64_t{
        auto self = this;
        switch(dyn_index) { 
        case 0: case 1: case 2:  {
                        return self->field_button_75.visit_dynamic_children(dyn_index - 0, order, visitor);
                    }
        case 3: case 4:  {
                        return self->field_standardtableview_76.visit_dynamic_children(dyn_index - 3, order, visitor);
                    } };
        std::abort();
}

inline auto MainWindow::subtree_range (uintptr_t dyn_index) const -> slint::private_api::IndexRange{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: case 1: case 2:  {
                        return self->field_button_75.subtree_range(dyn_index - 0);
                    }
        case 3: case 4:  {
                        return self->field_standardtableview_76.subtree_range(dyn_index - 3);
                    } };
        std::abort();
}

inline auto MainWindow::subtree_component (uintptr_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) const -> void{
    [[maybe_unused]] auto self = this;
        switch(dyn_index) { 
        case 0: case 1: case 2:  {
                        self->field_button_75.subtree_component(dyn_index - 0, subtree_index, result);
                        return;
                    }
        case 3: case 4:  {
                        self->field_standardtableview_76.subtree_component(dyn_index - 3, subtree_index, result);
                        return;
                    } };
        std::abort();
}

inline auto MainWindow::visit_children (slint::private_api::ItemTreeRef component, intptr_t index, slint::private_api::TraversalOrder order, slint::private_api::ItemVisitorRefMut visitor) -> uint64_t{
    static const auto dyn_visit = [] (const void *base,  [[maybe_unused]] slint::private_api::TraversalOrder order, [[maybe_unused]] slint::private_api::ItemVisitorRefMut visitor, [[maybe_unused]] uint32_t dyn_index) -> uint64_t {
        [[maybe_unused]] auto self = reinterpret_cast<const MainWindow*>(base);
        return self->visit_dynamic_children(dyn_index, order, visitor);
    };
    auto self_rc = reinterpret_cast<const MainWindow*>(component.instance)->self_weak.lock()->into_dyn();
    return slint::cbindgen_private::slint_visit_item_tree(&self_rc, get_item_tree(component) , index, order, visitor, dyn_visit);
}

inline auto MainWindow::get_item_ref (slint::private_api::ItemTreeRef component, uint32_t index) -> slint::private_api::ItemRef{
    return slint::private_api::get_item_ref(component, get_item_tree(component), item_array(), index);
}

inline auto MainWindow::get_subtree_range ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index) -> slint::private_api::IndexRange{
    auto self = reinterpret_cast<const MainWindow*>(component.instance);
    return self->subtree_range(dyn_index);
}

inline auto MainWindow::get_subtree ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t dyn_index, [[maybe_unused]] uintptr_t subtree_index, [[maybe_unused]] slint::private_api::ItemTreeWeak *result) -> void{
    auto self = reinterpret_cast<const MainWindow*>(component.instance);
    self->subtree_component(dyn_index, subtree_index, result);
}

inline auto MainWindow::get_item_tree (slint::private_api::ItemTreeRef) -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    return item_tree();
}

inline auto MainWindow::parent_node ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] slint::private_api::ItemWeak *result) -> void{
}

inline auto MainWindow::embed_component ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] const slint::private_api::ItemTreeWeak *parent_component, [[maybe_unused]] const uint32_t parent_index) -> bool{
    return false; /* todo! */
}

inline auto MainWindow::subtree_index ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> uintptr_t{
    return std::numeric_limits<uintptr_t>::max();
}

inline auto MainWindow::item_tree () -> slint::cbindgen_private::Slice<slint::private_api::ItemTreeNode>{
    static const slint::private_api::ItemTreeNode children[] {
        slint::private_api::make_item_node(2, 1, 0, 0, false), 
slint::private_api::make_item_node(1, 3, 0, 1, false), 
slint::private_api::make_item_node(3, 11, 0, 2, true), 
slint::private_api::make_item_node(4, 4, 1, 3, true), 
slint::private_api::make_item_node(3, 8, 3, 4, false), 
slint::private_api::make_item_node(0, 11, 3, 5, false), 
slint::private_api::make_item_node(0, 11, 3, 6, false), 
slint::private_api::make_dyn_node(2, 3), 
slint::private_api::make_item_node(0, 11, 4, 7, false), 
slint::private_api::make_dyn_node(0, 4), 
slint::private_api::make_dyn_node(1, 4), 
slint::private_api::make_item_node(1, 14, 2, 8, false), 
slint::private_api::make_item_node(3, 17, 2, 9, true), 
slint::private_api::make_item_node(0, 46, 2, 10, false), 
slint::private_api::make_item_node(1, 15, 11, 11, false), 
slint::private_api::make_item_node(1, 16, 14, 12, false), 
slint::private_api::make_dyn_node(3, 15), 
slint::private_api::make_item_node(1, 20, 12, 13, false), 
slint::private_api::make_item_node(1, 22, 12, 14, false), 
slint::private_api::make_item_node(1, 34, 12, 15, false), 
slint::private_api::make_item_node(1, 21, 17, 16, false), 
slint::private_api::make_dyn_node(4, 20), 
slint::private_api::make_item_node(1, 23, 18, 17, false), 
slint::private_api::make_item_node(4, 24, 22, 18, false), 
slint::private_api::make_item_node(0, 28, 23, 19, false), 
slint::private_api::make_item_node(0, 28, 23, 20, false), 
slint::private_api::make_item_node(1, 28, 23, 21, false), 
slint::private_api::make_item_node(1, 31, 23, 22, false), 
slint::private_api::make_item_node(1, 29, 26, 23, false), 
slint::private_api::make_item_node(1, 30, 28, 24, false), 
slint::private_api::make_item_node(0, 31, 29, 25, false), 
slint::private_api::make_item_node(1, 32, 27, 26, false), 
slint::private_api::make_item_node(1, 33, 31, 27, false), 
slint::private_api::make_item_node(0, 34, 32, 28, false), 
slint::private_api::make_item_node(1, 35, 19, 29, false), 
slint::private_api::make_item_node(4, 36, 34, 30, false), 
slint::private_api::make_item_node(0, 40, 35, 31, false), 
slint::private_api::make_item_node(0, 40, 35, 32, false), 
slint::private_api::make_item_node(1, 40, 35, 33, false), 
slint::private_api::make_item_node(1, 43, 35, 34, false), 
slint::private_api::make_item_node(1, 41, 38, 35, false), 
slint::private_api::make_item_node(1, 42, 40, 36, false), 
slint::private_api::make_item_node(0, 43, 41, 37, false), 
slint::private_api::make_item_node(1, 44, 39, 38, false), 
slint::private_api::make_item_node(1, 45, 43, 39, false), 
slint::private_api::make_item_node(0, 46, 44, 40, false) };
    return slint::private_api::make_slice(std::span(children));
}

inline auto MainWindow::item_array () -> const slint::private_api::ItemArray{
    static const slint::private_api::ItemArrayEntry items[] {
        { SLINT_GET_ITEM_VTABLE(WindowItemVTable),  offsetof(MainWindow, field_root_72) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable),  offsetof(MainWindow, field_empty_74) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_root_15) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(MainWindow, field_button_75) +  offsetof(Button_root_3, field_root_3) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(MainWindow, field_button_75) +  offsetof(Button_root_3, field_i_background_4) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable), offsetof(MainWindow, field_button_75) +  offsetof(Button_root_3, field_i_touch_area_11) }, 
{ SLINT_GET_ITEM_VTABLE(FocusScopeVTable), offsetof(MainWindow, field_button_75) +  offsetof(Button_root_3, field_i_focus_scope_12) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(MainWindow, field_button_75) +  offsetof(Button_root_3, field_i_border_5) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_rectangle_17) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_scroll_view_31) }, 
{ SLINT_GET_ITEM_VTABLE(FocusScopeVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_focus_scope_71) }, 
{ SLINT_GET_ITEM_VTABLE(ClipVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field__clip_18) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_header_layout_19) }, 
{ SLINT_GET_ITEM_VTABLE(FlickableVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_flickable_32) }, 
{ SLINT_GET_ITEM_VTABLE(ClipVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_vertical_bar_visibility_45) }, 
{ SLINT_GET_ITEM_VTABLE(ClipVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_horizontal_bar_visibility_58) }, 
{ SLINT_GET_ITEM_VTABLE(EmptyVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_flickable_viewport_33) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_vertical_bar_46) }, 
{ SLINT_GET_ITEM_VTABLE(ClipVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_vertical_bar_clip_47) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_thumb_48) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_touch_area_49) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_up_scroll_button_Opacity_50) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_down_scroll_button_Opacity_54) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_up_scroll_button_51) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_icon_Opacity_52) }, 
{ SLINT_GET_ITEM_VTABLE(ImageItemVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_icon_53) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_down_scroll_button_55) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_icon_Opacity_56) }, 
{ SLINT_GET_ITEM_VTABLE(ImageItemVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_icon_57) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_horizontal_bar_59) }, 
{ SLINT_GET_ITEM_VTABLE(ClipVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_horizontal_bar_clip_60) }, 
{ SLINT_GET_ITEM_VTABLE(BasicBorderRectangleVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_thumb_61) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_touch_area_62) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_up_scroll_button_Opacity_63) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_down_scroll_button_Opacity_67) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_up_scroll_button_64) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_icon_Opacity_65) }, 
{ SLINT_GET_ITEM_VTABLE(ImageItemVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_icon_66) }, 
{ SLINT_GET_ITEM_VTABLE(TouchAreaVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_down_scroll_button_68) }, 
{ SLINT_GET_ITEM_VTABLE(OpacityVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_icon_Opacity_69) }, 
{ SLINT_GET_ITEM_VTABLE(ImageItemVTable), offsetof(MainWindow, field_standardtableview_76) +  offsetof(StandardTableView_root_15, field_icon_70) } };
    return slint::private_api::make_slice(std::span(items));
}

inline auto MainWindow::layout_info ([[maybe_unused]] slint::private_api::ItemTreeRef component, slint::cbindgen_private::Orientation o) -> slint::cbindgen_private::LayoutInfo{
    return reinterpret_cast<const MainWindow*>(component.instance)->layout_info(o);
}

inline auto MainWindow::ensure_instantiated ([[maybe_unused]] slint::private_api::ItemTreeRef component) -> bool{
    return reinterpret_cast<const MainWindow*>(component.instance)->ensure_instantiated();
}

inline auto MainWindow::item_geometry ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::LogicalRect{
    return reinterpret_cast<const MainWindow*>(component.instance)->item_geometry(index);
}

inline auto MainWindow::accessible_role ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> slint::cbindgen_private::AccessibleRole{
    return reinterpret_cast<const MainWindow*>(component.instance)->accessible_role(index);
}

inline auto MainWindow::accessible_string_property ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, slint::cbindgen_private::AccessibleStringProperty what, slint::SharedString *result) -> bool{
    if (auto r = reinterpret_cast<const MainWindow*>(component.instance)->accessible_string_property(index, what)) { *result = *r; return true; } else { return false; }
}

inline auto MainWindow::accessibility_action ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index, const slint::cbindgen_private::AccessibilityAction *action) -> void{
    reinterpret_cast<const MainWindow*>(component.instance)->accessibility_action(index, *action);
}

inline auto MainWindow::supported_accessibility_actions ([[maybe_unused]] slint::private_api::ItemTreeRef component, uint32_t index) -> uint32_t{
    return reinterpret_cast<const MainWindow*>(component.instance)->supported_accessibility_actions(index);
}

inline auto MainWindow::element_infos ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] uint32_t index, [[maybe_unused]] slint::SharedString *result) -> bool{
    return false;
}

inline auto MainWindow::window_adapter ([[maybe_unused]] slint::private_api::ItemTreeRef component, [[maybe_unused]] bool do_create, [[maybe_unused]] slint::cbindgen_private::Option<slint::private_api::WindowAdapterRc>* result) -> void{
    *reinterpret_cast<slint::private_api::WindowAdapterRc*>(result) = reinterpret_cast<const MainWindow*>(component.instance)->globals->window().window_handle();
}

inline auto MainWindow::create () -> slint::ComponentHandle<MainWindow>{
    auto self_rc = vtable::VRc<slint::private_api::ItemTreeVTable, MainWindow>::make();
    auto self = const_cast<MainWindow *>(&*self_rc);
    self->self_weak = vtable::VWeak(self_rc).into_dyn();
    slint::cbindgen_private::slint_ensure_backend();
    self->globals = &self->m_globals;
    self->m_globals.root_weak = self->self_weak;
    self->m_globals.init_globals();
    slint::private_api::register_item_tree(&self_rc.into_dyn(), self->globals->m_window);
    self->init(self->globals, self->self_weak, 0, 1 );
    auto &window = self->globals->window();
    self->user_init();
    self->m_globals.window();
    slint::cbindgen_private::slint_windowrc_ensure_tree_instantiated(reinterpret_cast<const slint::cbindgen_private::WindowAdapterRcOpaque*>(&window.window_handle()));
    return slint::ComponentHandle<MainWindow>{ self_rc };
}

inline MainWindow::~MainWindow (){
    if (auto &window = globals->m_window) window->window_handle().unregister_item_tree(this, item_array());
}

inline auto MainWindow::get_process_list () const -> std::shared_ptr<slint::Model<std::shared_ptr<slint::Model<slint::language::StandardListViewItem>>>>{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_72_process_list.get();
}

inline auto MainWindow::set_process_list (const std::shared_ptr<slint::Model<std::shared_ptr<slint::Model<slint::language::StandardListViewItem>>>> &value) const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_72_process_list.set(value);
}

inline auto MainWindow::invoke_refresh_clicked () const -> void{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    return self->field_root_72_refresh_clicked.call();
}

template<std::invocable<> Functor> inline auto MainWindow::on_refresh_clicked (Functor && callback_handler) const{
    slint::private_api::assert_main_thread();
    [[maybe_unused]] auto self = this;
    self->field_root_72_refresh_clicked.set_handler(std::forward<Functor>(callback_handler));
    self->callback_tracker_root_72_refresh_clicked.mark_dirty();
}

inline auto MainWindow::show () -> void{
    m_globals.window().show();
}

inline auto MainWindow::hide () -> void{
    m_globals.window().hide();
}

inline auto MainWindow::window () const -> slint::Window&{
    return m_globals.window();
}

inline auto MainWindow::run () -> void{
    show();
    slint::run_event_loop();
    hide();
}
