#include QMK_KEYBOARD_H
#include "version.h"
#include "keydefs.h"
#include "ledmap.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [QWERTY] = LAYOUT_moonlander(
    KC_DEL,   KC_4,     KC_0,     KC_1,     KC_2,     KC_3,     _______,             TG(BLMK), KC_7,     KC_6,     KC_5,     KC_9,     KC_8,     _______,
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     C(KC_INS),           TG(NUM),  KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
    ESCAP,    KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     S(KC_INS),           KC_INS,   KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_ENT,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                                    KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  _______,
    _______,  _______,  MO(MDIA), KC_LGUI,  KC_LALT,  KC_PSCR,                                 TG(GMNG), MO(SYM),  MO(FUNC), _______,  _______,  _______,
                                            LTHUMB,   _______,  _______,             _______,  _______,  RTHUMB
  ),
  [BLMK] = LAYOUT_moonlander(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  KC_X,     KC_G,     KC_L,     KC_B,     KC_V,     _______,             _______,  KC_Q,     KC_F,     KC_U,     KC_O,     KC_Y,     _______,
    _______,  KC_M,     KC_S,     KC_R,     KC_T,     KC_P,     _______,             _______,  KC_K,     KC_N,     KC_E,     KC_A,     KC_I,     _______,
    _______,  KC_C,     KC_W,     KC_J,     KC_D,     KC_Z,                                    KC_SCLN,  KC_H,     KC_COMM,  KC_DOT,   KC_SLSH,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                 _______,  _______,  _______,  _______,  _______,  _______,
                                            _______,  _______,  _______,             _______,  _______,  _______
  ),
  [SYM] = LAYOUT_moonlander(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  SYM_Q,    SYM_W,    SYM_E,    SYM_R,    SYM_T,    _______,             _______,  SYM_Y,     SYM_U,   SYM_I,    SYM_O,    SYM_P,    _______,
    _______,  SYM_A,    SYM_S,    SYM_D,    SYM_F,    SYM_G,    _______,             _______,  SYM_H,     SYM_J,   SYM_K,    SYM_L,    SYM_SCLN, _______,
    _______,  SYM_Z,    SYM_X,    SYM_C,    SYM_V,    SYM_B,                                   SYM_N,     SYM_M,   SYM_COMM, SYM_DOT,  SYM_SLSH, _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                 _______,  _______,  _______,  _______,  _______,  _______,
                                            _______,  _______,  _______,             _______,  _______,  _______
  ),
  [NAV] = LAYOUT_moonlander(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,  KC_HOME,  KC_END,   _______,  _______,  _______,
    _______,  KC_LGUI,  KC_LSFT,  KC_LALT,  KC_LCTL,  _______,  _______,             _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, _______,  _______,
    _______,  _______,  ZOOMOUT,  ZOOMNTR,  ZOOMIN,   _______,                                 CG_LEFT,  KC_PGDOWN,KC_PGUP,  CG_RIGHT, _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                 _______,  _______,  _______,  _______,  _______,  _______,
                                            _______,  _______,  _______,             _______,  _______,  _______
  ),
  [FUNC] = LAYOUT_moonlander(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,             _______,  KC_F10,   KC_F7,    KC_F8,    KC_F9,    _______,  _______,
    _______,  KC_LGUI,  KC_LSFT,  KC_LALT,  KC_LCTL,  _______,  _______,             _______,  KC_F11,   KC_F4,    KC_F5,    KC_F6,    _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                 KC_F12,   KC_F1,    KC_F2,    KC_F3,    _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                 _______,  _______,  _______,  _______,  _______,  _______,
                                            _______,  _______,  _______,             _______,  _______,  _______
  ),
  [MDIA] = LAYOUT_moonlander(
    RESET,    _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  BL_DEC,   M_UP,     BL_INC,   _______,  _______,  _______,             _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  M_PREV,   M_PLAY,   M_NEXT,   _______,  _______,  _______,             _______,  _______,  _______,  _______,  _______,  _______,  _______,
    _______,  B_DOWN,   M_DOWN,   B_UP,     _______,  _______,                                 _______,  _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                 _______,  _______,  _______,  _______,  _______,  _______,
                                            _______,  _______,  _______,             _______,  _______,  _______
  ),
  [NUM] = LAYOUT_moonlander(
    _______,  _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,  _______,  KC_PSLS,  KC_PAST,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,  KC_P7,    KC_P8,    KC_P9,    KC_PMNS,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,  KC_P4,    KC_P5,    KC_P6,    KC_PPLS,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                 _______,  KC_P1,    KC_P2,    KC_P3,    KC_PENT,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,                                 _______,  KC_P0,    _______,  KC_PDOT,  KC_PENT,  _______,
                                            _______,  _______,  _______,             _______,  _______,  _______
  ),
  [GMNG] = LAYOUT_moonlander(
    _______,  KC_4,     KC_0,     KC_1,     KC_2,     KC_3,     _______,             _______,  _______,  _______,  _______,  _______,  _______,  _______,
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     _______,             _______,  KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     _______,
    KC_ESC,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     _______,             _______,  KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  _______,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                                    KC_N,     KC_M,     KC_COMMA, KC_DOT,   KC_SLSH,  _______,
    KC_LCTL,  KC_LGUI,  _______,  KC_LALT,  KC_SPACE, _______,                                 _______,  _______,  _______,  _______,  _______,  _______,
                                            _______,  _______,  _______,             _______,  _______,  _______
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

static void process_long_tap(bool matching_keycode, keyrecord_t *record, bool *pressed_state, uint16_t long_press_keycode) {
  bool pressed = record->event.pressed;
  if (matching_keycode) {
    if (pressed) {
      *pressed_state = true;
    } else {
      if (*pressed_state) {
        tap_code16(long_press_keycode);
      }
    }
  } else if (pressed) {
    *pressed_state = false;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_custom_shift_keys(keycode, record)) { return false; }
  static bool escap_state = false;
  process_long_tap(keycode == ESCAP,  record, &escap_state,  KC_ESCAPE);

  return true;
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ESCAP:
            return 0;
        default:
            return TAPPING_TERM;
    }
}
