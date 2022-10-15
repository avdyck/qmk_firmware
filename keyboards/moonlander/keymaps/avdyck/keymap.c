#include QMK_KEYBOARD_H
#include "version.h"
#include "keydefs.h"
#include "ledmap.h"
#include "g/keymap_combo.h"
#include "achordion.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [QWERTY] = LAYOUT_moonlander(
        _______,  KC_4,     KC_0,     KC_1,     KC_2,     KC_3,     _______,             TG(QOUPY),KC_7,     KC_6,     KC_5,     KC_9,     KC_8,     _______,
        TABBB,    QW_Q,     QW_W,     QW_E,     QW_R,     QW_T,     C(KC_INS),           TG(MDIA), QW_Y,     QW_U,     QW_I,     QW_O,     QW_P,     KC_BSPC,
        ESCAP,    QW_A,     QW_S,     QW_D,     QW_F,     QW_G,     S(KC_INS),           KC_INS,   QW_H,     QW_J,     QW_K,     QW_L,     QW_SCLN,  KC_ENTER,
        SJIFT,    QW_Z,     QW_X,     QW_C,     QW_V,     QW_B,                                    QW_N,     QW_M,     QW_COMM,  QW_DOT,   QW_SLSH,  KC_RSFT,
        _______,  _______,  LTHUMB4,  LTHUMB3,  LTHUMB2,  KC_PSCR,                                 TG(GMNG), RTHUMB2,  RTHUMB3,  RTHUMB4,  _______,  _______,
                                                LTHUMB1,  _______,  _______,             _______,  _______,  RTHUMB1
    ),
    [QOUPY] = LAYOUT_moonlander(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  QOU_Q,    QOU_W,    QOU_E,    QOU_R,    QOU_T,    _______,             _______,  QOU_Y,    QOU_U,    QOU_I,    QOU_O,    QOU_P,    _______,
        _______,  QOU_A,    QOU_S,    QOU_D,    QOU_F,    QOU_G,    _______,             _______,  QOU_H,    QOU_J,    QOU_K,    QOU_L,    QOU_SCLN, _______,
        _______,  QOU_Z,    QOU_X,    QOU_C,    QOU_V,    QOU_B,                                   QOU_N,    QOU_M,    QOU_COMM, QOU_DOT,  QOU_SLSH, _______,
        _______,  _______,  _______,  _______,  _______,  _______,                                 _______,  _______,  _______,  _______,  _______,  _______,
                                                _______,  _______,  _______,             _______,  _______,  _______
    ),
    [SYM] = LAYOUT_moonlander(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  SYM_Q,    SYM_W,    SYM_E,    SYM_R,    SYM_T,    _______,             _______,  SYM_Y,    SYM_U,    SYM_I,    SYM_O,    SYM_P,    _______,
        _______,  SYM_A,    SYM_S,    SYM_D,    SYM_F,    SYM_G,    _______,             _______,  SYM_H,    SYM_J,    SYM_K,    SYM_L,    SYM_SCLN, _______,
        _______,  SYM_Z,    SYM_X,    SYM_C,    SYM_V,    SYM_B,                                   SYM_N,    SYM_M,    SYM_COMM, SYM_DOT,  SYM_SLSH, _______,
        _______,  _______,  _______,  _______,  _______,  _______,                                 _______,  _______,  _______,  _______,  _______,  _______,
                                                _______,  _______,  _______,             _______,  _______,  _______
    ),
    [NAV] = LAYOUT_moonlander(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  NV_F9,    NV_F8,    NV_F7,    NV_F10,   _______,             _______,  _______,  KC_HOME,  KC_UP,    KC_END,   _______,  _______,
        _______,  _______,  NV_F6,    NV_F5,    NV_F4,    NV_F11,   _______,             _______,  CG_LEFT,  KC_LEFT,  KC_DOWN,  KC_RIGHT, CG_RIGHT, _______,
        _______,  _______,  NV_F3,    NV_F2,    NV_F1,    NV_F12,                                  _______,  KC_PGUP,  _______,  KC_PGDN,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,                                 _______,  _______,  _______,  _______,  _______,  _______,
                                                _______,  _______,  _______,             _______,  _______,  _______
    ),
    [MDIA] = LAYOUT_moonlander(
        RESET,    _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,  _______,  KC_PSLS,  KC_PAST,  _______,  _______,
        _______,  BL_DEC,   M_UP,     BL_INC,   _______,  _______,  _______,             _______,  _______,  KC_P7,    KC_P8,    KC_P9,    KC_PMNS,  _______,
        _______,  M_PREV,   M_PLAY,   M_NEXT,   _______,  _______,  _______,             _______,  _______,  KC_P4,    KC_P5,    KC_P6,    KC_PPLS,  _______,
        _______,  B_DOWN,   M_DOWN,   B_UP,     _______,  _______,                                 _______,  KC_P1,    KC_P2,    KC_P3,    KC_PENT,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,                                 _______,  KC_P0,    KC_PDOT,  _______,  KC_PENT,  _______,
                                                _______,  _______,  _______,             _______,  _______,  _______
    ),
    [GMNG] = LAYOUT_moonlander(
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    _______,             _______,  _______,  _______,  _______,  _______,  _______,  _______,
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

typedef struct {
    uint16_t hold_code;
    uint16_t tap_code;
    bool pressed;
    uint16_t time;
} key_state;

static void process_long_tap(uint16_t keycode, keyrecord_t *record, key_state *state) {
    bool pressed = record->event.pressed;

    if (keycode != state->hold_code) {
        if (pressed) { state->pressed = false; }
        return;
    }

    if (pressed) {
        state->pressed = true;
        state->time = timer_read();
    } else {
        unregister_code16(state->hold_code);
        if (state->pressed && timer_elapsed(state->time) <= 500) {
            // we did not press any other key and released within tapping term -> send tap code
            tap_code16(state->tap_code);
        }
        state->pressed = false;
    }
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ESCAP:
        case SHIFTTHUMB:
            return 0;
        default:
            return TAPPING_TERM;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    if (!process_achordion(keycode, record)) { return false; }

    static key_state sthumb1_state = { .hold_code = SHIFTTHUMB, .tap_code = KC_ESCAPE };
    process_long_tap(keycode, record, &sthumb1_state);

    if (!process_custom_shift_keys(keycode, record)) { return false; }

    return true;
}

void matrix_scan_user(void) {
  achordion_task();
}

bool achordion_chord(uint16_t tap_hold_keycode,
                     keyrecord_t* tap_hold_record,
                     uint16_t other_keycode,
                     keyrecord_t* other_record) {
    // Exceptionally consider the following chords as holds
    switch (other_keycode) {
        case QW_B:
        case QW_G:
        case QW_T:
        case QW_Y:
        case QW_H:
        case QW_N:
        case TABBB:
        case ESCAP:
        case KC_ENTER:
        case KC_BSPC:
            return true;
    }

    // Otherwise, follow the opposite hands rule.
    return achordion_opposite_hands(tap_hold_record, other_record);
}

uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
  return 500;
}

uint16_t get_combo_term(uint16_t index, combo_t *combo) {
    return COMBO_TERM;
//    switch (combo->keys[0]) {
//        case LTHUMB1:
//        case RTHUMB1:
//            return COMBO_TERM;
//        default:
//            // non-thumb combos can be faster cause of typos
//            return 30;
//    }
}
