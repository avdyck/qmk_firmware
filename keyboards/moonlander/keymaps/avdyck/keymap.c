#include QMK_KEYBOARD_H
#include "version.h"

#define KC_TRANS KC_TRANSPARENT

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_DELETE,         KC_4,              KC_0,               KC_1,               KC_2,               KC_3,              LALT(KC_F4),                     KC_TRANS,          KC_7,              KC_6,              KC_5,              KC_9,              KC_8,                   KC_TRANS,
    KC_TAB,            KC_Q,              KC_W,               KC_E,               KC_R,               KC_T,              LCTL(KC_INSERT),                 TG(5),             KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,                   KC_BSPACE,
    KC_ESCAPE,         KC_A,              KC_S,               KC_D,               KC_F,               KC_G,              LSFT(KC_INSERT),                 KC_INSERT,         KC_H,              KC_J,              KC_K,              KC_L,              KC_SCOLON,              KC_ENTER,
    KC_LSHIFT,         KC_Z,              KC_X,               KC_C,               KC_V,               KC_B,                                                                  KC_N,              KC_M,              KC_COMMA,          KC_DOT,            KC_SLASH,               KC_TRANS,
    KC_LCTL,           KC_LGUI,           KC_LALT,            MO(4),              MO(1),              KC_PSCREEN,                                                            TG(1),             MO(2),             MO(3),             KC_RALT,           KC_RGUI,                KC_RCTL,
                                                                                  KC_TAB,             KC_TRANS,          KC_TRANS,                        KC_TRANS,          KC_TRANS,          KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANS,          KC_TRANS,          KC_TRANS,           KC_TRANS,           KC_TRANS,           KC_TRANS,          KC_NO,                           KC_NO,             KC_TRANS,          KC_TRANS,          KC_TRANS,          KC_TRANS,          KC_TRANS,               KC_TRANS,
    KC_TRANS,          KC_NO,             KC_MINUS,           KC_TILD,            KC_PLUS,            KC_PERC,           KC_NO,                           KC_NO,             KC_HASH,           KC_LBRACKET,       KC_QUOTE,          KC_RBRACKET,       KC_NO,                  KC_TRANS,
    KC_TRANS,          KC_EXLM,           KC_UNDS,            KC_EQUAL,           KC_AT,              KC_PIPE,           KC_NO,                           KC_NO,             KC_AMPR,           KC_LPRN,           KC_DQUO,           KC_RPRN,           KC_BSLASH,              KC_TRANS,
    KC_TRANS,          KC_NO,             KC_ASTR,            KC_NO,              KC_NO,              KC_CIRC,                                                               KC_DLR,            KC_LCBR,           KC_GRAVE,          KC_RCBR,           KC_NO,                  KC_TRANS,
    KC_TRANS,          KC_TRANS,          KC_TRANS,           KC_TRANS,           KC_TRANS,           KC_TRANS,                                                              KC_TRANS,          KC_TRANS,          KC_TRANS,          KC_NO,             KC_NO,                  KC_NO,
                                                                                  KC_TRANS,           KC_TRANS,          KC_TRANS,                        KC_TRANS,          KC_TRANS,          KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_NO,             KC_TRANS,          KC_TRANS,           KC_TRANS,           KC_TRANS,           KC_TRANS,          KC_TRANS,                        KC_TRANS,          KC_TRANS,          KC_TRANS,          KC_TRANS,          KC_TRANS,          KC_TRANS,               KC_NO,
    KC_NO,             KC_NO,             KC_NO,              KC_NO,              KC_NO,              KC_NO,             KC_TRANS,                        KC_TRANS,          KC_DELETE,         KC_HOME,           KC_END,            KC_BSPACE,         KC_NO,                  KC_TRANS,
    KC_TRANS,          KC_LGUI,           KC_LCTRL,           KC_LALT,            KC_LSHIFT,          KC_NO,             KC_TRANS,                        KC_TRANS,          KC_LEFT,           KC_DOWN,           KC_UP,             KC_RIGHT,          KC_NO,                  KC_TRANS,
    KC_TRANS,          KC_NO,             KC_NO,              KC_NO,              KC_NO,              KC_NO,                                                                 KC_TRANS,          KC_TRANS,          KC_TRANS,          KC_TRANS,          KC_NO,                  KC_TRANS,
    KC_TRANS,          KC_TRANS,          KC_TRANS,           KC_TRANS,           KC_TRANS,           KC_TRANS,                                                              KC_TRANS,          KC_TRANS,          KC_TRANS,          KC_TRANS,          TO(0),                  KC_TRANS,
                                                                                  KC_TRANS,           KC_TRANS,          KC_TRANS,                        KC_TRANS,          KC_TRANS,          KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANS,          KC_TRANS,          KC_TRANS,           KC_TRANS,           KC_TRANS,           KC_TRANS,          KC_TRANS,                        KC_TRANS,          KC_TRANS,          KC_TRANS,          KC_TRANS,          KC_TRANS,          KC_TRANS,               KC_TRANS,
    KC_TRANS,          KC_TRANS,          KC_TRANS,           KC_TRANS,           KC_TRANS,           KC_TRANS,          KC_TRANS,                        KC_TRANS,          KC_F10,            KC_F7,             KC_F8,             KC_F9,             KC_TRANS,               KC_TRANS,
    KC_TRANS,          KC_LGUI,           KC_LSHIFT,          KC_LCTRL,           KC_LALT,            KC_TRANS,          KC_TRANS,                        KC_TRANS,          KC_F11,            KC_F4,             KC_F5,             KC_F6,             KC_TRANS,               KC_TRANS,
    KC_TRANS,          KC_TRANS,          KC_TRANS,           KC_TRANS,           KC_TRANS,           KC_TRANS,                                                              KC_F12,            KC_F1,             KC_F2,             KC_F3,             KC_TRANS,               KC_TRANS,
    KC_TRANS,          KC_TRANS,          KC_TRANS,           KC_TRANS,           KC_TRANS,           KC_TRANS,                                                              KC_TRANS,          KC_TRANS,          KC_TRANS,          KC_TRANS,          KC_TRANS,               KC_TRANS,
                                                                                  KC_TRANS,           KC_TRANS,          KC_TRANS,                        KC_TRANS,          KC_TRANS,          KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    RESET,             KC_TRANS,          KC_TRANS,           KC_TRANS,           KC_TRANS,           KC_TRANS,          KC_TRANS,                        KC_TRANS,          KC_TRANS,          KC_TRANS,          KC_TRANS,          KC_TRANS,          KC_TRANS,               KC_TRANS,
    KC_TRANS,          KC_TRANS,          KC_MS_BTN1,         KC_AUDIO_VOL_UP,    KC_MS_BTN2,         KC_TRANS,          KC_TRANS,                        KC_TRANS,          DYN_REC_START1,    DYN_REC_STOP,      DYN_MACRO_PLAY1,   KC_TRANS,          KC_TRANS,               KC_TRANS,
    KC_TRANS,          KC_TRANS,          KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TRANS,          KC_TRANS,                        KC_TRANS,          KC_MS_LEFT,        KC_MS_DOWN,        KC_MS_UP,          KC_MS_RIGHT,       KC_TRANS,               KC_TRANS,
    KC_TRANS,          KC_TRANS,          KC_BRIGHTNESS_DOWN, KC_AUDIO_VOL_DOWN,  KC_BRIGHTNESS_UP,   KC_TRANS,                                                              KC_TRANS,          KC_MS_WH_DOWN,     KC_MS_WH_UP,       KC_TRANS,          KC_TRANS,               KC_TRANS,
    KC_TRANS,          KC_TRANS,          KC_TRANS,           KC_TRANS,           KC_TRANS,           KC_TRANS,                                                              KC_TRANS,          KC_TRANS,          KC_TRANS,          KC_TRANS,          KC_TRANS,               KC_TRANS,
                                                                                  KC_TRANS,           KC_TRANS,          KC_TRANS,                        KC_TRANS,          KC_TRANS,          KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANS,          KC_TRANS,          KC_TRANS,           KC_TRANS,           KC_TRANS,           KC_TRANS,          KC_TRANS,                        KC_TRANS,          KC_NO,             KC_NO,             KC_KP_SLASH,       KC_KP_ASTERISK,    KC_NO,                  KC_TRANS,
    KC_TRANS,          KC_TRANS,          KC_TRANS,           KC_TRANS,           KC_TRANS,           KC_TRANS,          KC_TRANS,                        KC_TRANS,          KC_NO,             KC_KP_7,           KC_KP_8,           KC_KP_9,           KC_KP_MINUS,            KC_TRANS,
    KC_TRANS,          KC_TRANS,          KC_TRANS,           KC_TRANS,           KC_TRANS,           KC_TRANS,          KC_TRANS,                        KC_TRANS,          KC_NO,             KC_KP_4,           KC_KP_5,           KC_KP_6,           KC_KP_PLUS,             KC_TRANS,
    KC_TRANS,          KC_TRANS,          KC_TRANS,           KC_TRANS,           KC_TRANS,           KC_TRANS,                                                              KC_NO,             KC_KP_1,           KC_KP_2,           KC_KP_3,           KC_KP_ENTER,            KC_TRANS,
    KC_TRANS,          KC_TRANS,          KC_TRANS,           KC_TRANS,           KC_TRANS,           KC_TRANS,                                                              KC_TRANS,          KC_KP_0,           KC_TRANS,          KC_KP_DOT,         KC_KP_ENTER,            KC_TRANS,
                                                              KC_TRANS,           KC_TRANS,           KC_TRANS,                                           KC_TRANS,          KC_TRANS,          KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_NO,             KC_4,              KC_0,               KC_1,               KC_2,               KC_3,              KC_NO,                           KC_TRANS,          KC_TRANS,          KC_TRANS,          KC_TRANS,          KC_TRANS,          KC_TRANS,               KC_TRANS,
    KC_TAB,            KC_Q,              KC_W,               KC_E,               KC_R,               KC_T,              MT(MOD_LCTL, KC_INSERT),         KC_TRANS,          KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,                   KC_TRANS,
    KC_ESCAPE,         KC_A,              KC_S,               KC_D,               KC_F,               KC_G,              MT(MOD_LSFT, KC_INSERT),         KC_TRANS,          KC_H,              KC_J,              KC_K,              KC_L,              KC_SCOLON,              KC_TRANS,
    KC_LSHIFT,         KC_Z,              KC_X,               KC_C,               KC_V,               KC_B,                                                                  KC_N,              KC_M,              KC_COMMA,          KC_DOT,            KC_SLASH,               KC_TRANS,
    KC_LCTRL,          KC_LGUI,           KC_NO,              KC_LALT,            KC_SPACE,           KC_TRANS,                                                              KC_TRANS,          KC_TRANS,          KC_TRANS,          KC_TRANS,          KC_TRANS,               KC_TRANS,
                                                                                  KC_TRANS,           KC_TRANS,          KC_TRANS,                        KC_TRANS,          KC_TRANS,          KC_TRANSPARENT
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
    COMBO_ENTER,
    COMBO_TAB,
    COMBO_LESCAPE,
    COMBO_RESCAPE,

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
    COMBO_LALTCTLGUI,
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
    COMBO_RALTCTLGUI,
    COMBO_RSFTALTCTLGUI,

    COMBO_LENGTH // nifty trick to avoid manually specifying how many combos you have
};

uint16_t COMBO_LEN = COMBO_LENGTH; // nifty trick continued

// define keys that make up combos
const uint16_t PROGMEM tab_combo[]  = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM entr_combo[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM resq_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM lesq_combo[] = {KC_D, KC_F, COMBO_END};

const uint16_t PROGMEM __x__combo[] = {KC_TAB,   KC_D, COMBO_END};
const uint16_t PROGMEM _x___combo[] = {KC_TAB,   KC_S, COMBO_END};
const uint16_t PROGMEM x____combo[] = {KC_TAB,   KC_A, COMBO_END};
const uint16_t PROGMEM _xx__combo[] = {KC_TAB,   KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM x_x__combo[] = {KC_TAB,   KC_D, KC_A, COMBO_END};
const uint16_t PROGMEM xx___combo[] = {KC_TAB,   KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM xxx__combo[] = {KC_TAB,   KC_D, KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM ___x_combo[] = {KC_TAB,   KC_F, COMBO_END};
const uint16_t PROGMEM __xx_combo[] = {KC_TAB,   KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM _x_x_combo[] = {KC_TAB,   KC_F, KC_S, COMBO_END};
const uint16_t PROGMEM x__x_combo[] = {KC_TAB,   KC_F, KC_A, COMBO_END};
const uint16_t PROGMEM _xxx_combo[] = {KC_TAB,   KC_F, KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM x_xx_combo[] = {KC_TAB,   KC_F, KC_D, KC_A, COMBO_END};
const uint16_t PROGMEM xx_x_combo[] = {KC_TAB,   KC_F, KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM xxxx_combo[] = {KC_TAB,   KC_F, KC_D, KC_S, KC_A, COMBO_END};

const uint16_t PROGMEM _y___combo[] = {KC_SPACE, KC_K, COMBO_END};
const uint16_t PROGMEM __y__combo[] = {KC_SPACE, KC_L, COMBO_END};
const uint16_t PROGMEM ___y_combo[] = {KC_SPACE, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM _yy__combo[] = {KC_SPACE, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM _y_y_combo[] = {KC_SPACE, KC_K, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM __yy_combo[] = {KC_SPACE, KC_L, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM y____combo[] = {KC_SPACE, KC_J, COMBO_END};
const uint16_t PROGMEM yy___combo[] = {KC_SPACE, KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM y_y__combo[] = {KC_SPACE, KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM y__y_combo[] = {KC_SPACE, KC_J, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM yyy__combo[] = {KC_SPACE, KC_J, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM y_yy_combo[] = {KC_SPACE, KC_J, KC_K, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM yy_y_combo[] = {KC_SPACE, KC_J, KC_L, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM _yyy_combo[] = {KC_SPACE, KC_K, KC_L, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM yyyy_combo[] = {KC_SPACE, KC_J, KC_K, KC_L, KC_SCOLON, COMBO_END};

// map combo names to their keys and the key they trigger
combo_t key_combos[] = {
    [COMBO_TAB]           = COMBO( tab_combo, KC_TAB),
    [COMBO_ENTER]         = COMBO(entr_combo, KC_ENTER),
    [COMBO_RESCAPE]       = COMBO(resq_combo, KC_ESCAPE),
    [COMBO_LESCAPE]       = COMBO(lesq_combo, KC_ESCAPE),

    [COMBO_LSFT]          = COMBO(___x_combo, KC_LSFT),
    [COMBO_LALT]          = COMBO(__x__combo, KC_LALT),
    [COMBO_LCTL]          = COMBO(_x___combo, KC_LCTL),
    [COMBO_LGUI]          = COMBO(x____combo, KC_LGUI),
    [COMBO_LSFTALT]       = COMBO(__xx_combo, LSFT(KC_LALT)),
    [COMBO_LSFTCTL]       = COMBO(_x_x_combo, LSFT(KC_LCTL)),
    [COMBO_LSFTGUI]       = COMBO(x__x_combo, LSFT(KC_LGUI)),
    [COMBO_LALTCTL]       = COMBO(_xx__combo, LALT(KC_LCTL)),
    [COMBO_LALTGUI]       = COMBO(x_x__combo, LALT(KC_LGUI)),
    [COMBO_LCTLGUI]       = COMBO(xx___combo, LCTL(KC_LGUI)),
    [COMBO_LSFTALTCTL]    = COMBO(_xxx_combo, LSFT(LALT(KC_LCTL))),
    [COMBO_LSFTALTGUI]    = COMBO(x_xx_combo, LSFT(LALT(KC_LGUI))),
    [COMBO_LSFTCTLGUI]    = COMBO(xx_x_combo, LSFT(LCTL(KC_LGUI))),
    [COMBO_LALTCTLGUI]    = COMBO(xxx__combo, LALT(LCTL(KC_LGUI))),
    [COMBO_LSFTALTCTLGUI] = COMBO(xxxx_combo, LSFT(LALT(LCTL(KC_LGUI)))),

    [COMBO_RSFT]          = COMBO(y____combo, KC_RSFT),
    [COMBO_RALT]          = COMBO(_y___combo, KC_RALT),
    [COMBO_RCTL]          = COMBO(__y__combo, KC_RCTL),
    [COMBO_RGUI]          = COMBO(___y_combo, KC_RGUI),
    [COMBO_RSFTALT]       = COMBO(yy___combo, RSFT(KC_RALT)),
    [COMBO_RSFTCTL]       = COMBO(y_y__combo, RSFT(KC_RCTL)),
    [COMBO_RSFTGUI]       = COMBO(y__y_combo, RSFT(KC_RGUI)),
    [COMBO_RALTCTL]       = COMBO(_yy__combo, RALT(KC_RCTL)),
    [COMBO_RALTGUI]       = COMBO(_y_y_combo, RALT(KC_RGUI)),
    [COMBO_RCTLGUI]       = COMBO(__yy_combo, RCTL(KC_RGUI)),
    [COMBO_RSFTALTCTL]    = COMBO(yyy__combo, RSFT(RALT(KC_RCTL))),
    [COMBO_RSFTALTGUI]    = COMBO(yy_y_combo, RSFT(RALT(KC_RGUI))),
    [COMBO_RSFTCTLGUI]    = COMBO(y_yy_combo, RSFT(RCTL(KC_RGUI))),
    [COMBO_RALTCTLGUI]    = COMBO(_yyy_combo, RALT(RCTL(KC_RGUI))),
    [COMBO_RSFTALTCTLGUI] = COMBO(yyyy_combo, RSFT(RALT(LCTL(KC_RGUI)))),

    // more here...
};

uint16_t get_combo_term(uint16_t index, combo_t *combo) {

    // thumb combos are slower but less error-prone so higher combo term
    int combo_starter = combo->keys[0];
    if (combo_starter == KC_TAB || combo_starter == KC_ENTER) {
        return 50;
    }

    return 10;
}
