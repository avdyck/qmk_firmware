#include QMK_KEYBOARD_H
#include "version.h"
#include "g/keymap_combo.h"
#include "colors.h"
#include "layers.h"

#define ________ KC_TRANSPARENT

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    ________,          KC_4,              KC_0,               KC_1,               KC_2,               KC_3,              LALT(KC_F4),                     ________,          KC_7,              KC_6,              KC_5,              KC_9,              KC_8,                   ________,
    KC_TAB,            KC_Q,              KC_W,               KC_E,               KC_R,               KC_T,              LCTL(KC_INSERT),                 TG(5),             KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,                   KC_BSPACE,
    LT(2, KC_ESCAPE),  KC_A,              KC_S,               KC_D,               KC_F,               KC_G,              LSFT(KC_INSERT),                 KC_INSERT,         KC_H,              KC_J,              KC_K,              KC_L,              KC_SCOLON,              KC_ENTER,
    KC_LSHIFT,         KC_Z,              KC_X,               KC_C,               KC_V,               KC_B,                                                                  KC_N,              KC_M,              KC_COMMA,          KC_DOT,            KC_SLASH,               KC_GRAVE,
    KC_LCTL,           KC_LGUI,           KC_LALT,            MO(4),              MO(1),              KC_PSCREEN,                                                            TG(6),             MO(3),             ________,          ________,          ________,               ________,
                                                                                  LT(1, KC_ESCAPE),   ________,          ________,                        ________,          ________,          KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    ________,          ________,          ________,           ________,           ________,           ________,          ________,                        ________,          ________,          ________,          ________,          ________,          ________,               ________,
    ________,          ________,          KC_MINUS,           KC_TILD,            KC_PLUS,            KC_PERC,           ________,                        ________,          KC_HASH,           KC_LBRACKET,       KC_QUOTE,          KC_RBRACKET,       ________,               ________,
    ________,          KC_EXLM,           KC_UNDS,            KC_EQUAL,           KC_AT,              KC_PIPE,           ________,                        ________,          KC_AMPR,           KC_LPRN,           KC_DQUO,           KC_RPRN,           KC_BSLASH,              ________,
    ________,          ________,          KC_ASTR,            ________,           ________,           KC_CIRC,                                                               KC_DLR,            KC_LCBR,           KC_GRAVE,          KC_RCBR,           ________,               ________,
    ________,          ________,          ________,           ________,           ________,           ________,                                                              ________,          ________,          ________,          ________,          ________,               ________,
                                                                                  ________,           ________,          ________,                        ________,          ________,          ________
  ),
  [2] = LAYOUT_moonlander(
    ________,          ________,          ________,           ________,           ________,           ________,          ________,                        ________,          ________,          ________,          ________,          ________,          ________,               ________,
    ________,          ________,          ________,           ________,           ________,           ________,          ________,                        ________,          ________,          KC_HOME,           KC_END,            ________,          ________,               ________,
    ________,          KC_LGUI,           KC_LCTRL,           KC_LALT,            KC_LSHIFT,          ________,          ________,                        ________,          KC_LEFT,           KC_DOWN,           KC_UP,             KC_RIGHT,          ________,               ________,
    ________,          ________,          ________,           ________,           ________,           ________,                                                              LCTL(LGUI(KC_LEFT)), ________,        ________,          LCTL(LGUI(KC_RIGHT)), ________,            ________,
    ________,          ________,          ________,           ________,           ________,           ________,                                                              ________,          ________,          ________,          ________,          TO(0),                  ________,
                                                                                  ________,           ________,          ________,                        ________,          ________,          ________
  ),
  [3] = LAYOUT_moonlander(
    ________,          ________,          ________,           ________,           ________,           ________,          ________,                        ________,          ________,          ________,          ________,          ________,          ________,               ________,
    ________,          ________,          ________,           ________,           ________,           ________,          ________,                        ________,          KC_F10,            KC_F7,             KC_F8,             KC_F9,             ________,               ________,
    ________,          KC_LGUI,           KC_LSHIFT,          KC_LCTRL,           KC_LALT,            ________,          ________,                        ________,          KC_F11,            KC_F4,             KC_F5,             KC_F6,             ________,               ________,
    ________,          ________,          ________,           ________,           ________,           ________,                                                              KC_F12,            KC_F1,             KC_F2,             KC_F3,             ________,               ________,
    ________,          ________,          ________,           ________,           ________,           ________,                                                              ________,          ________,          ________,          ________,          ________,               ________,
                                                                                  ________,           ________,          ________,                        ________,          ________,          ________
  ),
  [4] = LAYOUT_moonlander(
    RESET,             ________,          ________,           ________,           ________,           ________,          ________,                        ________,          ________,          ________,          ________,          ________,          ________,               ________,
    ________,          ________,          KC_MS_BTN1,         KC_AUDIO_VOL_UP,    KC_MS_BTN2,         ________,          ________,                        ________,          DYN_REC_START1,    DYN_REC_STOP,      DYN_MACRO_PLAY1,   ________,          ________,               ________,
    ________,          ________,          KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,________,          ________,                        ________,          KC_MS_LEFT,        KC_MS_DOWN,        KC_MS_UP,          KC_MS_RIGHT,       ________,               ________,
    ________,          ________,          KC_BRIGHTNESS_DOWN, KC_AUDIO_VOL_DOWN,  KC_BRIGHTNESS_UP,   ________,                                                              ________,          KC_MS_WH_DOWN,     KC_MS_WH_UP,       ________,          ________,               ________,
    ________,          ________,          ________,           ________,           ________,           ________,                                                              ________,          ________,          ________,          ________,          ________,               ________,
                                                                                  ________,           ________,          ________,                        ________,          ________,          ________
  ),
  [5] = LAYOUT_moonlander(
    ________,          ________,          ________,           ________,           ________,           ________,          ________,                        ________,          ________,          ________,          KC_KP_SLASH,       KC_KP_ASTERISK,    ________,               ________,
    ________,          ________,          ________,           ________,           ________,           ________,          ________,                        ________,          ________,          KC_KP_7,           KC_KP_8,           KC_KP_9,           KC_KP_MINUS,            ________,
    ________,          ________,          ________,           ________,           ________,           ________,          ________,                        ________,          ________,          KC_KP_4,           KC_KP_5,           KC_KP_6,           KC_KP_PLUS,             ________,
    ________,          ________,          ________,           ________,           ________,           ________,                                                              ________,          KC_KP_1,           KC_KP_2,           KC_KP_3,           KC_KP_ENTER,            ________,
    ________,          ________,          ________,           ________,           ________,           ________,                                                              ________,          KC_KP_0,           ________,          KC_KP_DOT,         KC_KP_ENTER,            ________,
                                                              ________,           ________,           ________,                                           ________,          ________,          ________
  ),
  [6] = LAYOUT_moonlander(
    ________,          KC_4,              KC_0,               KC_1,               KC_2,               KC_3,              ________,                        ________,          ________,          ________,          ________,          ________,          ________,               ________,
    KC_TAB,            KC_Q,              KC_W,               KC_E,               KC_R,               KC_T,              MT(MOD_LCTL, KC_INSERT),         ________,          KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,                   ________,
    KC_ESCAPE,         KC_A,              KC_S,               KC_D,               KC_F,               KC_G,              MT(MOD_LSFT, KC_INSERT),         ________,          KC_H,              KC_J,              KC_K,              KC_L,              KC_SCOLON,              ________,
    KC_LSHIFT,         KC_Z,              KC_X,               KC_C,               KC_V,               KC_B,                                                                  KC_N,              KC_M,              KC_COMMA,          KC_DOT,            KC_SLASH,               ________,
    KC_LCTRL,          KC_LGUI,           ________,           KC_LALT,            KC_SPACE,           ________,                                                              ________,          ________,          ________,          ________,          ________,               ________,
                                                                                  ________,           ________,          ________,                        ________,          ________,          ________
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
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

uint16_t get_combo_term(uint16_t index, combo_t *combo) {

    return COMBO_TERM;
}
