#include QMK_KEYBOARD_H
#include "version.h"

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_DELETE,         KC_4,              KC_0,               KC_1,               KC_2,               KC_3,              LALT(KC_F4),                     KC_TRANSPARENT,    KC_7,              KC_6,              KC_5,              KC_9,              KC_8,                   KC_TRANSPARENT,
    KC_TAB,            KC_Q,              KC_W,               KC_E,               KC_R,               KC_T,              LCTL(KC_INSERT),                 TG(5),             KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,                   KC_BSPACE,
    KC_ESCAPE,         KC_A,              KC_S,               KC_D,               KC_F,               KC_G,              LSFT(KC_INSERT),                 KC_INSERT,         KC_H,              KC_J,              KC_K,              KC_L,              KC_SCOLON,              KC_ENTER,
    KC_LSHIFT,         KC_Z,              KC_X,               KC_C,               KC_V,               KC_B,                                                                  KC_N,              KC_M,              KC_COMMA,          KC_DOT,            KC_SLASH,               KC_TRANSPARENT,
    KC_LCTL,           KC_LGUI,           KC_LALT,            MO(4),              MO(1),              KC_PSCREEN,                                                            TG(1),             MO(2),             MO(3),             KC_RALT,           KC_RGUI,                KC_RCTL,
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
  int lay = biton32(layer_state);
  if (lay < 7) {
    set_layer_color(lay);
  } else if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
    rgb_matrix_set_color_all(0, 0, 0);
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

// define combo names
enum combos {
    COMBO_LSFT,
    COMBO_LALT,
    COMBO_LCTL,
    COMBO_LGUI,
    COMBO_LSFTALT,
    COMBO_LSFTCTL,
    COMBO_LSFTGUI,
    COMBO_LALTCTL,
    COMBO_LALTGUI,
    COMBO_LCTLGUI,
    COMBO_LSFTALTCTL,
    COMBO_LSFTALTGUI,
    COMBO_LSFTCTLGUI,
    COMBO_LSFTALTCTLGUI,

    COMBO_RSFT,
    COMBO_RALT,
    COMBO_RCTL,
    COMBO_RGUI,
    COMBO_RSFTALT,
    COMBO_RSFTCTL,
    COMBO_RSFTGUI,
    COMBO_RALTCTL,
    COMBO_RALTGUI,
    COMBO_RCTLGUI,
    COMBO_RSFTALTCTL,
    COMBO_RSFTALTGUI,
    COMBO_RSFTCTLGUI,
    COMBO_RSFTALTCTLGUI,

    COMBO_LENGTH // nifty trick to avoid manually specifying how many combos you have
};

uint16_t COMBO_LEN = COMBO_LENGTH; // nifty trick continued

// define keys that make up combos
const uint16_t PROGMEM f_combo[]    = {KC_TAB,   KC_F, COMBO_END};
const uint16_t PROGMEM d_combo[]    = {KC_TAB,   KC_D, COMBO_END};
const uint16_t PROGMEM s_combo[]    = {KC_TAB,   KC_S, COMBO_END};
const uint16_t PROGMEM a_combo[]    = {KC_TAB,   KC_A, COMBO_END};
const uint16_t PROGMEM fd_combo[]   = {KC_TAB,   KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM fs_combo[]   = {KC_TAB,   KC_F, KC_S, COMBO_END};
const uint16_t PROGMEM fa_combo[]   = {KC_TAB,   KC_F, KC_A, COMBO_END};
const uint16_t PROGMEM ds_combo[]   = {KC_TAB,   KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM da_combo[]   = {KC_TAB,   KC_D, KC_A, COMBO_END};
const uint16_t PROGMEM sa_combo[]   = {KC_TAB,   KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM fds_combo[]  = {KC_TAB,   KC_F, KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM fda_combo[]  = {KC_TAB,   KC_F, KC_D, KC_A, COMBO_END};
const uint16_t PROGMEM dsa_combo[]  = {KC_TAB,   KC_D, KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM fdsa_combo[] = {KC_TAB,   KC_F, KC_D, KC_S, KC_A, COMBO_END};

const uint16_t PROGMEM j_combo[]    = {KC_SPACE, KC_J, COMBO_END};
const uint16_t PROGMEM k_combo[]    = {KC_SPACE, KC_K, COMBO_END};
const uint16_t PROGMEM l_combo[]    = {KC_SPACE, KC_L, COMBO_END};
const uint16_t PROGMEM m_combo[]    = {KC_SPACE, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM jk_combo[]   = {KC_SPACE, KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM jl_combo[]   = {KC_SPACE, KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM jm_combo[]   = {KC_SPACE, KC_J, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM kl_combo[]   = {KC_SPACE, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM km_combo[]   = {KC_SPACE, KC_K, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM lm_combo[]   = {KC_SPACE, KC_L, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM jkl_combo[]  = {KC_SPACE, KC_J, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM jkm_combo[]  = {KC_SPACE, KC_J, KC_K, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM klm_combo[]  = {KC_SPACE, KC_K, KC_L, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM jklm_combo[] = {KC_SPACE, KC_J, KC_K, KC_L, KC_SCOLON, COMBO_END};

// map combo names to their keys and the key they trigger
combo_t key_combos[] = {

    [COMBO_LSFT]          = COMBO(   f_combo, KC_LSFT),
    [COMBO_LALT]          = COMBO(   d_combo, KC_LALT),
    [COMBO_LCTL]          = COMBO(   s_combo, KC_LCTL),
    [COMBO_LGUI]          = COMBO(   a_combo, KC_LGUI),
    [COMBO_LSFTALT]       = COMBO(  fd_combo, LSFT(KC_LALT)),
    [COMBO_LSFTCTL]       = COMBO(  fs_combo, LSFT(KC_LCTL)),
    [COMBO_LSFTGUI]       = COMBO(  fa_combo, LSFT(KC_LGUI)),
    [COMBO_LALTCTL]       = COMBO(  ds_combo, LALT(KC_LCTL)),
    [COMBO_LALTGUI]       = COMBO(  da_combo, LALT(KC_LGUI)),
    [COMBO_LCTLGUI]       = COMBO(  sa_combo, LCTL(KC_LGUI)),
    [COMBO_LSFTALTCTL]    = COMBO( fds_combo, LSFT(LALT(KC_LCTL))),
    [COMBO_LSFTALTGUI]    = COMBO( fda_combo, LSFT(LALT(KC_LGUI))),
    [COMBO_LSFTCTLGUI]    = COMBO( dsa_combo, LCTL(LALT(KC_LGUI))),
    [COMBO_LSFTALTCTLGUI] = COMBO(fdsa_combo, LSFT(LALT(LCTL(KC_LGUI)))),

    [COMBO_RSFT]          = COMBO(   j_combo, KC_RSFT),
    [COMBO_RALT]          = COMBO(   k_combo, KC_RALT),
    [COMBO_RCTL]          = COMBO(   l_combo, KC_RCTL),
    [COMBO_RGUI]          = COMBO(   m_combo, KC_RGUI),
    [COMBO_RSFTALT]       = COMBO(  jk_combo, RSFT(KC_RALT)),
    [COMBO_RSFTCTL]       = COMBO(  jl_combo, RSFT(KC_RCTL)),
    [COMBO_RSFTGUI]       = COMBO(  jm_combo, RSFT(KC_RGUI)),
    [COMBO_RALTCTL]       = COMBO(  kl_combo, RALT(KC_RCTL)),
    [COMBO_RALTGUI]       = COMBO(  km_combo, RALT(KC_RGUI)),
    [COMBO_RCTLGUI]       = COMBO(  lm_combo, RCTL(KC_RGUI)),
    [COMBO_RSFTALTCTL]    = COMBO( jkl_combo, RSFT(RALT(KC_RCTL))),
    [COMBO_RSFTALTGUI]    = COMBO( jkm_combo, RSFT(RALT(KC_RGUI))),
    [COMBO_RSFTCTLGUI]    = COMBO( klm_combo, RALT(RCTL(KC_RGUI))),
    [COMBO_RSFTALTCTLGUI] = COMBO(jklm_combo, RSFT(RALT(LCTL(KC_RGUI)))),

    // more here...
};
