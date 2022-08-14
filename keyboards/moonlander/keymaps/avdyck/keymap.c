#include QMK_KEYBOARD_H
#include "version.h"

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_DELETE,         KC_4,              KC_0,               KC_1,               KC_2,               KC_3,              LALT(KC_F4),                     KC_TRANSPARENT,    KC_7,              KC_6,              KC_5,              KC_9,              KC_8,                   KC_TRANSPARENT,
    KC_TAB,            KC_Q,              KC_W,               KC_E,               KC_R,               KC_T,              LCTL(KC_INSERT),                 TG(5),             KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,                   KC_BSPACE,
    KC_ESCAPE,         MT(MOD_LGUI, KC_A),MT(MOD_LCTL, KC_S), MT(MOD_LALT, KC_D), MT(MOD_LSFT, KC_F), KC_G,              LSFT(KC_INSERT),                 KC_INSERT,         KC_H,              MT(MOD_RSFT, KC_J),MT(MOD_RALT, KC_K),MT(MOD_RCTL, KC_L),MT(MOD_RGUI, KC_SCOLON),KC_ENTER,
    KC_LSHIFT,         KC_Z,              KC_X,               KC_C,               KC_V,               KC_B,                                                                  KC_N,              KC_M,              KC_COMMA,          KC_DOT,            KC_SLASH,               KC_TRANSPARENT,
    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,     MO(4),              MO(1),              KC_PSCREEN,                                                            TG(1),             MO(2),             MO(3),             KC_TRANSPARENT,    KC_TRANSPARENT,         KC_TRANSPARENT,
                                                                                  KC_TAB,             KC_TRANSPARENT,    KC_TRANSPARENT,                  KC_TRANSPARENT,    KC_TRANSPARENT,    KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,    KC_NO,                           KC_NO,             KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TRANSPARENT,    KC_NO,             KC_MINUS,           KC_TILD,            KC_PLUS,            KC_PERC,           KC_NO,                           KC_NO,             KC_HASH,           KC_LBRACKET,       KC_QUOTE,          KC_RBRACKET,       KC_NO,                  KC_TRANSPARENT,
    KC_TRANSPARENT,    KC_EXLM,           KC_UNDS,            KC_EQUAL,           KC_AT,              KC_PIPE,           KC_NO,                           KC_NO,             KC_AMPR,           KC_LPRN,           KC_DQUO,           KC_RPRN,           KC_BSLASH,              KC_TRANSPARENT,
    KC_TRANSPARENT,    KC_NO,             KC_ASTR,            KC_NO,              KC_NO,              KC_CIRC,                                                               KC_DLR,            KC_LCBR,           KC_GRAVE,          KC_RCBR,           KC_NO,                  KC_TRANSPARENT,
    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,                                                        KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_NO,             KC_NO,                  KC_NO,
                                                                                  KC_TRANSPARENT,     KC_TRANSPARENT,    KC_TRANSPARENT,                  KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_NO,             KC_TRANSPARENT,    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,    KC_TRANSPARENT,                  KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,         KC_NO,
    KC_NO,             KC_NO,             KC_NO,              KC_NO,              KC_NO,              KC_NO,             KC_TRANSPARENT,                  KC_TRANSPARENT,    KC_DELETE,         KC_HOME,           KC_END,            KC_BSPACE,         KC_NO,                  KC_TRANSPARENT,
    KC_TRANSPARENT,    KC_LGUI,           KC_LCTRL,           KC_LALT,            KC_LSHIFT,          KC_NO,             KC_TRANSPARENT,                  KC_TRANSPARENT,    KC_LEFT,           KC_DOWN,           KC_UP,             KC_RIGHT,          KC_NO,                  KC_TRANSPARENT,
    KC_TRANSPARENT,    KC_NO,             KC_NO,              KC_NO,              KC_NO,              KC_NO,                                                                 KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_NO,                  KC_TRANSPARENT,
    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,                                                        KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    TO(0),                  KC_TRANSPARENT,
                                                                                  KC_TRANSPARENT,     KC_TRANSPARENT,    KC_TRANSPARENT,                  KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,    KC_TRANSPARENT,                  KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,    KC_TRANSPARENT,                  KC_TRANSPARENT,    KC_F10,            KC_F7,             KC_F8,             KC_F9,             KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TRANSPARENT,    KC_LGUI,           KC_LSHIFT,          KC_LCTRL,           KC_LALT,            KC_TRANSPARENT,    KC_TRANSPARENT,                  KC_TRANSPARENT,    KC_F11,            KC_F4,             KC_F5,             KC_F6,             KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,                                                        KC_F12,            KC_F1,             KC_F2,             KC_F3,             KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,                                                        KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,         KC_TRANSPARENT,
                                                                                  KC_TRANSPARENT,     KC_TRANSPARENT,    KC_TRANSPARENT,                  KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    RESET,             KC_TRANSPARENT,    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,    KC_TRANSPARENT,                  KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_MS_BTN1,         KC_AUDIO_VOL_UP,    KC_MS_BTN2,         KC_TRANSPARENT,    KC_TRANSPARENT,                  KC_TRANSPARENT,    DYN_REC_START1,    DYN_REC_STOP,      DYN_MACRO_PLAY1,   KC_TRANSPARENT,    KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT,    KC_TRANSPARENT,                  KC_TRANSPARENT,    KC_MS_LEFT,        KC_MS_DOWN,        KC_MS_UP,          KC_MS_RIGHT,       KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_BRIGHTNESS_DOWN, KC_AUDIO_VOL_DOWN,  KC_BRIGHTNESS_UP,   KC_TRANSPARENT,                                                        KC_TRANSPARENT,    KC_MS_WH_DOWN,     KC_MS_WH_UP,       KC_TRANSPARENT,    KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,                                                        KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,         KC_TRANSPARENT,
                                                                                  KC_TRANSPARENT,     KC_TRANSPARENT,    KC_TRANSPARENT,                  KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,    KC_TRANSPARENT,                  KC_TRANSPARENT,    KC_NO,             KC_NO,             KC_KP_SLASH,       KC_KP_ASTERISK,    KC_NO,                  KC_TRANSPARENT,
    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,    KC_TRANSPARENT,                  KC_TRANSPARENT,    KC_NO,             KC_KP_7,           KC_KP_8,           KC_KP_9,           KC_KP_MINUS,            KC_TRANSPARENT,
    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,    KC_TRANSPARENT,                  KC_TRANSPARENT,    KC_NO,             KC_KP_4,           KC_KP_5,           KC_KP_6,           KC_KP_PLUS,             KC_TRANSPARENT,
    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,                                                        KC_NO,             KC_KP_1,           KC_KP_2,           KC_KP_3,           KC_KP_ENTER,            KC_TRANSPARENT,
    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,                                                        KC_TRANSPARENT,    KC_KP_0,           KC_TRANSPARENT,    KC_KP_DOT,         KC_KP_ENTER,            KC_TRANSPARENT,
                                                              KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,                                     KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_NO,             KC_4,              KC_0,               KC_1,               KC_2,               KC_3,              KC_NO,                           KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TAB,            KC_Q,              KC_W,               KC_E,               KC_R,               KC_T,              MT(MOD_LCTL, KC_INSERT),         KC_TRANSPARENT,    KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,                   KC_TRANSPARENT,
    KC_ESCAPE,         KC_A,              KC_S,               KC_D,               KC_F,               KC_G,              MT(MOD_LSFT, KC_INSERT),         KC_TRANSPARENT,    KC_H,              KC_J,              KC_K,              KC_L,              KC_SCOLON,              KC_TRANSPARENT,
    KC_LSHIFT,         KC_Z,              KC_X,               KC_C,               KC_V,               KC_B,                                                                  KC_N,              KC_M,              KC_COMMA,          KC_DOT,            KC_SLASH,               KC_TRANSPARENT,
    KC_LCTRL,          KC_LGUI,           KC_NO,              KC_LALT,            KC_SPACE,           KC_TRANSPARENT,                                                        KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT,         KC_TRANSPARENT,
                                                                                  KC_TRANSPARENT,     KC_TRANSPARENT,    KC_TRANSPARENT,                  KC_TRANSPARENT,    KC_TRANSPARENT,    KC_TRANSPARENT
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

// TODO
const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
 [0] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {141,255,233}, {141,255,233}, {141,255,233}, {0,0,0}, {0,0,255}, {141,255,233}, {141,255,233}, {141,255,233}, {0,0,0}, {0,0,255}, {141,255,233}, {141,255,233}, {141,255,233}, {0,0,255}, {0,0,255}, {141,255,233}, {141,255,233}, {141,255,233}, {85,203,158}, {0,0,255}, {141,255,233}, {141,255,233}, {141,255,233}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {141,255,233}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {141,255,233}, {141,255,233}, {0,0,255}, {0,0,0}, {0,0,255}, {141,255,233}, {141,255,233}, {0,0,255}, {0,0,255}, {0,0,255}, {141,255,233}, {141,255,233}, {141,255,233}, {0,0,255}, {0,0,255}, {141,255,233}, {141,255,233}, {141,255,233}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255} }, [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {85,203,158}, {85,203,158}, {0,0,0}, {0,0,0}, {85,203,158}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {85,203,158}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {85,203,158}, {85,203,158}, {85,203,158}, {0,0,0}, {0,0,0}, {85,203,158}, {85,203,158}, {85,203,158}, {0,0,0}, {0,0,0}, {85,203,158}, {85,203,158}, {85,203,158}, {0,0,0}, {0,0,0}, {85,203,158}, {85,203,158}, {85,203,158}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

 [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,183,238}, {249,228,255}, {0,0,0}, {0,0,0}, {0,0,0}, {249,228,255}, {249,228,255}, {0,0,0}, {0,0,0}, {0,0,0}, {249,228,255}, {249,228,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,183,238}, {249,228,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

 [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,120,255}, {169,120,255}, {169,120,255}, {0,0,0}, {0,0,0}, {169,120,255}, {169,120,255}, {169,120,255}, {0,0,0}, {0,0,0}, {169,120,255}, {169,120,255}, {169,120,255}, {0,0,0}, {0,0,0}, {169,120,255}, {169,120,255}, {169,120,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

 [4] = { {0,183,238}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {249,228,255}, {169,120,255}, {126,218,204}, {0,0,0}, {0,0,0}, {169,120,255}, {169,120,255}, {169,120,255}, {0,0,0}, {0,0,0}, {249,228,255}, {169,120,255}, {126,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {249,228,255}, {0,0,0}, {0,0,0}, {0,0,0}, {154,218,204}, {249,228,255}, {0,0,0}, {0,0,0}, {0,0,0}, {154,218,204}, {249,228,255}, {0,0,0}, {0,0,0}, {0,0,0}, {154,218,204}, {249,228,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

 [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,255,255}, {105,255,255}, {154,255,255}, {154,255,255}, {105,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {105,255,255}, {154,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {0,0,0}, {0,0,0}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

 [6] = { {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {146,224,255}, {0,0,255}, {0,183,238}, {0,0,255}, {0,0,255}, {146,224,255}, {0,183,238}, {0,183,238}, {0,0,255}, {0,0,0}, {146,224,255}, {0,0,255}, {0,183,238}, {0,0,255}, {0,0,255}, {146,224,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {146,224,255}, {0,0,255}, {0,0,255}, {0,0,255}, {146,224,255}, {146,224,255}, {146,224,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


