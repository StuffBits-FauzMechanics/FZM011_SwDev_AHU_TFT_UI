#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

#include "ui_db_map.h"

typedef struct _objects_t {
    lv_obj_t *main;
    lv_obj_t *edit_para_page;
    lv_obj_t *pressure_page;
    lv_obj_t *settings_page;
    lv_obj_t *button_settings;
    lv_obj_t *panel_channel_1;
    lv_obj_t *panel_channel_1__panel_channel;
    lv_obj_t *panel_channel_1__label_chan_alarm_lo_val;
    lv_obj_t *panel_channel_1__label_chan_unit;
    lv_obj_t *panel_channel_1__label_chan_value;
    lv_obj_t *panel_channel_1__label_chan_alarm_hi;
    lv_obj_t *panel_channel_1__label_chan_alarm_lo;
    lv_obj_t *panel_channel_1__label_chan_alarm_hi_val;
    lv_obj_t *panel_channel_1__label_chan_name;
    lv_obj_t *panel_channel_2;
    lv_obj_t *panel_channel_2__panel_channel;
    lv_obj_t *panel_channel_2__label_chan_alarm_lo_val;
    lv_obj_t *panel_channel_2__label_chan_unit;
    lv_obj_t *panel_channel_2__label_chan_value;
    lv_obj_t *panel_channel_2__label_chan_alarm_hi;
    lv_obj_t *panel_channel_2__label_chan_alarm_lo;
    lv_obj_t *panel_channel_2__label_chan_alarm_hi_val;
    lv_obj_t *panel_channel_2__label_chan_name;
    lv_obj_t *panel_channel_3;
    lv_obj_t *panel_channel_3__panel_channel;
    lv_obj_t *panel_channel_3__label_chan_alarm_lo_val;
    lv_obj_t *panel_channel_3__label_chan_unit;
    lv_obj_t *panel_channel_3__label_chan_value;
    lv_obj_t *panel_channel_3__label_chan_alarm_hi;
    lv_obj_t *panel_channel_3__label_chan_alarm_lo;
    lv_obj_t *panel_channel_3__label_chan_alarm_hi_val;
    lv_obj_t *panel_channel_3__label_chan_name;
    lv_obj_t *obj0;
    lv_obj_t *button_unlock;
    lv_obj_t *label_button_unlock;
    lv_obj_t *button_alarm;
    lv_obj_t *label_button_alarm;
    lv_obj_t *label_button_settings;
    lv_obj_t *obj1;
    lv_obj_t *obj1__rtc_panel_1;
    lv_obj_t *obj1__label_time_val_1;
    lv_obj_t *obj1__label_date_val_1;
    lv_obj_t *btn_save_1;
    lv_obj_t *txtarea_user_input_1;
    lv_obj_t *btn_back_space_1;
    lv_obj_t *btnmx_numeric_keypad_1;
    lv_obj_t *obj2;
    lv_obj_t *obj2__title_panel;
    lv_obj_t *obj2__btn_cancel_1;
    lv_obj_t *obj2__lbl_para_name_2;
    lv_obj_t *obj2__btn_cancel;
    lv_obj_t *obj3;
    lv_obj_t *obj3__title_panel;
    lv_obj_t *obj3__btn_cancel_1;
    lv_obj_t *obj3__lbl_para_name_2;
    lv_obj_t *obj3__btn_cancel;
    lv_obj_t *obj4;
    lv_obj_t *obj4__txt_edit_value;
    lv_obj_t *obj4__lbl_para_name;
    lv_obj_t *obj5;
    lv_obj_t *obj5__txt_edit_value;
    lv_obj_t *obj5__lbl_para_name;
    lv_obj_t *obj6;
    lv_obj_t *obj6__txt_edit_value;
    lv_obj_t *obj6__lbl_para_name;
    lv_obj_t *obj7;
    lv_obj_t *obj7__txt_edit_value;
    lv_obj_t *obj7__lbl_para_name;
    lv_obj_t *obj8;
    lv_obj_t *obj8__txt_edit_value;
    lv_obj_t *obj8__lbl_para_name;
    lv_obj_t *obj9;
    lv_obj_t *obj9__title_panel;
    lv_obj_t *obj9__btn_cancel_1;
    lv_obj_t *obj9__lbl_para_name_2;
    lv_obj_t *obj9__btn_cancel;
    lv_obj_t *obj10;
    lv_obj_t *obj10__obj0;
    lv_obj_t *obj11;
    lv_obj_t *obj11__obj0;
    lv_obj_t *obj12;
    lv_obj_t *obj12__obj0;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN = 1,
    SCREEN_ID_EDIT_PARA_PAGE = 2,
    SCREEN_ID_PRESSURE_PAGE = 3,
    SCREEN_ID_SETTINGS_PAGE = 4,
};

void create_screen_main();
void tick_screen_main();

void create_screen_edit_para_page();
void tick_screen_edit_para_page();

void create_screen_pressure_page();
void tick_screen_pressure_page();

void create_screen_settings_page();
void tick_screen_settings_page();

void create_user_widget_panel_channel(lv_obj_t *parent_obj, int startWidgetIndex);
void tick_user_widget_panel_channel(int startWidgetIndex);

void create_user_widget_edit_user_param(lv_obj_t *parent_obj, int startWidgetIndex);
void tick_user_widget_edit_user_param(int startWidgetIndex);

void create_user_widget_status_bar(lv_obj_t *parent_obj, int startWidgetIndex);
void tick_user_widget_status_bar(int startWidgetIndex);

void create_user_widget_title_bar(lv_obj_t *parent_obj, int startWidgetIndex);
void tick_user_widget_title_bar(int startWidgetIndex);

void create_user_widget_chan_button(lv_obj_t *parent_obj, int startWidgetIndex);
void tick_user_widget_chan_button(int startWidgetIndex);

void create_user_widget_settings_button(lv_obj_t *parent_obj, int startWidgetIndex);
void tick_user_widget_settings_button(int startWidgetIndex);

void create_user_widget_edit_dropdown(lv_obj_t *parent_obj, int startWidgetIndex);
void tick_user_widget_edit_dropdown(int startWidgetIndex);

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/