#ifndef EEZ_LVGL_UI_IMAGES_H
#define EEZ_LVGL_UI_IMAGES_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

extern const lv_img_dsc_t img_right_arrow;
extern const lv_img_dsc_t img_left_arrow;
extern const lv_img_dsc_t img_backspace32;
extern const lv_img_dsc_t img_cancel;
extern const lv_img_dsc_t img_pressure_gauge1;
extern const lv_img_dsc_t img_settings;
extern const lv_img_dsc_t img_home;
extern const lv_img_dsc_t img_settings_80;
extern const lv_img_dsc_t img_reset_pswd_80;
extern const lv_img_dsc_t img_pressure_80;
extern const lv_img_dsc_t img_date_time_80;

#ifndef EXT_IMG_DESC_T
#define EXT_IMG_DESC_T
typedef struct _ext_img_desc_t {
    const char *name;
    const lv_img_dsc_t *img_dsc;
} ext_img_desc_t;
#endif

extern const ext_img_desc_t images[11];


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_IMAGES_H*/