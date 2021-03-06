#include "sleight.h"
#include "rgblight.h"
#include "action_layer.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(
        KC_F12,KC_F11,KC_F10,KC_F9,KC_F8,KC_F7,KC_F6,KC_F5,KC_F4,KC_F3,\
        KC_BSPC,KC_EQL,KC_MINS,KC_0,KC_9,KC_8,KC_7,KC_6,KC_5,KC_4,\
        KC_BSLS,KC_RBRC,KC_LBRC,KC_P,KC_O,KC_I,KC_U,KC_Y,KC_T,KC_R,\
        KC_ENT,KC_QUOT,KC_SCLN,KC_L,KC_K,KC_J,KC_H,KC_G,KC_F,KC_D,\
        KC_RSFT,KC_SLSH,KC_DOT,KC_COMM,KC_M,KC_N,KC_B,KC_V,KC_C,KC_X,\
        KC_RCTL,KC_RGUI,F(0),KC_RALT,KC_SPC,KC_S,KC_Z,KC_LSFT,KC_4,KC_LALT,\
        KC_F2,KC_F1,KC_ESC,KC_GRV,KC_0,KC_9,KC_LGUI,KC_LCTL,KC_2,KC_3,\
        KC_3,KC_2,KC_1,KC_TAB,KC_8,KC_7,                         KC_1,\
        KC_E,KC_W,KC_Q,       KC_6,KC_5,                              \
        KC_S,KC_A,KC_CAPS),
/*
    KEYMAP(
	      KC_ESC,KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,KC_MINS,KC_EQL,KC_GRV,\
        KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_LBRC,KC_RBRC,KC_BSPC,\
        KC_CAPS,KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,KC_SCLN,KC_QUOT,KC_NO,KC_ENT,\
        KC_LSFT,F(1),KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,F(0),KC_RSFT,\
        KC_LCTL,KC_LGUI,KC_LALT,       KC_SPC,             KC_BSLS,KC_RALT,KC_RGUI,KC_APP,KC_RCTL),
*/
    /* 1: fn */
    KEYMAP(
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_RIGHT,\
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,RGB_HUD,KC_TRNS,\
        KC_TRNS,KC_TRNS,KC_TRNS,KC_KP_MINUS,KC_TRNS,RESET,KC_TRNS,KC_TRNS,RGB_MOD,RGB_HUI,\
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,RGB_VAD,RGB_VAI,                         RGB_TOG,\
        KC_TRNS,KC_UP,KC_TRNS,       RGB_SAD,RGB_SAI,                              \
        KC_DOWN,KC_LEFT,KC_TRNS),
/*
	KEYMAP(
        KC_ESC,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,KC_TRNS,\
        KC_TRNS,KC_TRNS,KC_UP,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\
        KC_TRNS,KC_LEFT,KC_DOWN,KC_RGHT,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\
        KC_TRNS,KC_TRNS,KC_TRNS,       KC_TRNS,            KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS),
*/
    /* 2: arrows */
/*
	KEYMAP(
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,\
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_UP,\
        KC_TRNS,KC_TRNS,KC_TRNS,       KC_TRNS,            KC_TRNS,KC_TRNS,KC_LEFT,KC_DOWN,KC_RGHT),
*/
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
    [1] = ACTION_LAYER_TOGGLE(2),     // toggle arrow overlay
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};

void matrix_scan_user(void) {

//Layer LED indicators
    uint32_t layer = layer_state;

    if (layer & (1<<1)) {
        //gh60_wasd_leds_on();
        //gh60_fn_led_on();
    } else {
        //gh60_wasd_leds_off();
        //gh60_fn_led_off();
    }

    if (layer & (1<<2)) {
        //gh60_poker_leds_on();
        //gh60_esc_led_on();
    } else {
        //gh60_poker_leds_off();
        //gh60_esc_led_off();
    }

};
