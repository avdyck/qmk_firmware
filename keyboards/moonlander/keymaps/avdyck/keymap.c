#include QMK_KEYBOARD_H
#include "version.h"
#include "keydefs.h"
#include "ledmap.h"
//#include "g/keymap_combo.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [QWERTY] = LAYOUT_moonlander(
        KC_DEL,   KC_4,     KC_0,     KC_1,     KC_2,     KC_3,     _______,             TG(BLMK), KC_7,     KC_6,     KC_5,     KC_9,     KC_8,     _______,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     C(KC_INS),           TG(NUM),  KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
        ESCAP,    KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     S(KC_INS),           KC_INS,   KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_ENT,
        KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,                                    KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  _______,
        _______,  _______,  LTHUMB4,  LTHUMB3,  LTHUMB2,  KC_PSCR,                                 TG(GMNG), RTHUMB2,  RTHUMB3,  RTHUMB4,  _______,  _______,
                                                LTHUMB1,  _______,  _______,             _______,  _______,  RTHUMB1
    ),
    [BLMK] = LAYOUT_moonlander(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,             _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  KC_Q,     KC_L,     KC_M,     KC_P,     KC_Z,     _______,             _______,  KC_Y,     KC_F,     KC_O,     KC_U,     KC_SCLN,  _______,
        _______,  KC_C,     KC_R,     KC_S,     KC_T,     KC_K,     _______,             _______,  KC_J,     KC_N,     KC_A,     KC_E,     KC_I,     _______,
        _______,  KC_V,     KC_W,     KC_G,     KC_D,     KC_B,                                    KC_X,     KC_H,     KC_COMM,  KC_DOT,   KC_SLSH,  _______,
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
        _______,  _______,  KC_F9,    KC_F8,    KC_F7,    KC_F10,   _______,             _______,  _______,  KC_HOME,  KC_END,   _______,  _______,  _______,
        _______,  _______,  KC_F6,    KC_F5,    KC_F4,    KC_F11,   _______,             _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, _______,  _______,
        _______,  _______,  KC_F3,    KC_F2,    KC_F1,    KC_F12,                                  _______,  KC_PGDN,  KC_PGUP,  _______,  _______,  _______,
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
        _______,  _______,  _______,  _______,  _______,  _______,                                 _______,  KC_P0,    KC_PDOT,  _______,  KC_PENT,  _______,
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
        if (state->pressed && timer_elapsed(state->time) <= TAPPING_TERM) {
            // we did not press any other key and released within tapping term -> send tap code
            tap_code16(state->tap_code);
        }
        state->pressed = false;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_custom_shift_keys(keycode, record)) { return false; }

    static key_state escap_state = { .hold_code = ESCAP,   .tap_code = KC_ESCAPE };
    static key_state thumb_state = { .hold_code = LTHUMB1, .tap_code = KC_ESCAPE };
    process_long_tap(keycode, record, &escap_state);
    process_long_tap(keycode, record, &thumb_state);
    return true;
}

//uint16_t get_combo_term(uint16_t index, combo_t *combo) {
//    return COMBO_TERM;
////    switch (combo->keys[0]) {
////        case LTHUMB1:
////        case RTHUMB1:
////            return COMBO_TERM;
////        default:
////            // non-thumb combos can be faster cause of typos
////            return 30;
////    }
//}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ESCAP:
        case LTHUMB1:
            return 0;
        default:
            return TAPPING_TERM;
    }
}
