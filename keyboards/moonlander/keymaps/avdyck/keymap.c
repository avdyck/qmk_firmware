#include QMK_KEYBOARD_H
#include "version.h"
#include "keydefs.h"
#include "g/keymap_combo.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [QWERTY] = LAYOUT_moonlander(
    KC_DELETE,  KC_4,      KC_0,      KC_1,      KC_2,      KC_3,      ________,              ________,  KC_7,      KC_6,       KC_5,       KC_9,       KC_8,       ________,
    KC_TAB,     KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      LCTL(KC_INSERT),       TG(5),     KC_Y,      KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPACE,
    ESCAP,      KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      LSFT(KC_INSERT),       KC_INSERT, KC_H,      KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENTER,
    KC_LSHIFT,  KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,                                        KC_N,      KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_GRAVE,
    ________,   ________,   ________, MO(MEDIA), ________,  KC_PSCREEN,                                  TG(NUMPAD),MO(FUNCTIONS),________, ________,   ________,   ________,
                                                 LTHUMB,    ________,  ________,              ________,  ________,  RTHUMB
  ),
  [SYMBOLS] = LAYOUT_moonlander(
    ________,   ________,  ________,  ________,  ________,  ________,  ________,              ________,  ________,  ________,   ________,   ________,   ________,   ________,
    ________,   SYM_Q,     SYM_W,     SYM_E,     SYM_R,     SYM_T,     ________,              ________,  SYM_Y,      SYM_U,     SYM_I,      SYM_O,      SYM_P,      ________,
    ________,   SYM_A,     SYM_S,     SYM_D,     SYM_F,     SYM_G,     ________,              ________,  SYM_H,      SYM_J,     SYM_K,      SYM_L,      SYM_SCLN,   ________,
    ________,   SYM_Z,     SYM_X,     SYM_C,     SYM_V,     SYM_B,                                       SYM_N,      SYM_M,     SYM_COMM,   SYM_DOT,    SYM_SLSH,   ________,
    ________,   ________,  ________,  ________,  ________,  ________,                                    ________,  ________,   ________,   ________,   ________,   ________,
                                                 ________,  ________,  ________,              ________,  ________,  ________
  ),
  [NAV] = LAYOUT_moonlander(
    ________,   ________,  ________,  ________,  ________,  ________,  ________,              ________,  ________,  ________,   ________,   ________,   ________,   ________,
    ________,   ________,  ________,  ________,  ________,  ________,  ________,              ________,  ________,  KC_HOME,    KC_END,     ________,   ________,   ________,
    ________,   KC_LGUI,   KC_LSFT,   KC_LALT,   KC_LCTL,   ________,  ________,              ________,  KC_LEFT,   KC_DOWN,    KC_UP,      KC_RIGHT,   ________,   ________,
    ________,   ________,  ZOOMOUT,   ZOOMNTR,   ZOOMIN,    ________,                                    CG_LEFT,   KC_PGUP,    KC_PGDOWN,  CG_RIGHT,   ________,   ________,
    ________,   ________,  ________,  ________,  ________,  ________,                                    ________,  ________,   ________,   ________,   ________,   ________,
                                                 ________,  ________,  ________,              ________,  ________,  ________
  ),
  [FUNCTIONS] = LAYOUT_moonlander(
    ________,   ________,  ________,  ________,  ________,  ________,  ________,              ________,  ________,  ________,   ________,   ________,   ________,   ________,
    ________,   ________,  ________,  ________,  ________,  ________,  ________,              ________,  KC_F10,    KC_F7,      KC_F8,      KC_F9,      ________,   ________,
    ________,   KC_LGUI,   KC_LSFT,   KC_LALT,   KC_LCTL,   ________,  ________,              ________,  KC_F11,    KC_F4,      KC_F5,      KC_F6,      ________,   ________,
    ________,   ________,  ________,  ________,  ________,  ________,                                    KC_F12,    KC_F1,      KC_F2,      KC_F3,      ________,   ________,
    ________,   ________,  ________,  ________,  ________,  ________,                                    ________,  ________,   ________,   ________,   ________,   ________,
                                                 ________,  ________,  ________,              ________,  ________,  ________
  ),
  [MEDIA] = LAYOUT_moonlander(
    RESET,      ________,  ________,  ________,  ________,  ________,  ________,              ________,  ________,  ________,   ________,   ________,   ________,   ________,
    ________,   ________,  BL_DEC,    M_UP,      BL_INC,    ________,  ________,              ________,  ________,  ________,   ________,   ________,   ________,   ________,
    ________,   ________,  M_PREV,    M_PLAY,    M_NEXT,    ________,  ________,              ________,  ________,  ________,   ________,   ________,   ________,   ________,
    ________,   ________,  B_DOWN,    M_DOWN,    B_UP,      ________,                                    ________,  ________,   ________,   ________,   ________,   ________,
    ________,   ________,  ________,  ________,  ________,  ________,                                    ________,  ________,   ________,   ________,   ________,   ________,
                                                 ________,  ________,  ________,              ________,  ________,  ________
  ),
  [NUMPAD] = LAYOUT_moonlander(
    ________,   ________,  ________,  ________,  ________,  ________,  ________,              ________,  ________,  ________,   KC_KP_SLASH,KC_KP_ASTERISK,________,________,
    ________,   ________,  ________,  ________,  ________,  ________,  ________,              ________,  ________,  KC_KP_7,    KC_KP_8,    KC_KP_9,    KC_KP_MINUS,________,
    ________,   ________,  ________,  ________,  ________,  ________,  ________,              ________,  ________,  KC_KP_4,    KC_KP_5,    KC_KP_6,    KC_KP_PLUS, ________,
    ________,   ________,  ________,  ________,  ________,  ________,                                    ________,  KC_KP_1,    KC_KP_2,    KC_KP_3,    KC_KP_ENTER,________,
    ________,   ________,  ________,  ________,  ________,  ________,                                    ________,  KC_KP_0,    ________,   KC_KP_DOT,  KC_KP_ENTER,________,
                                                 ________,  ________,  ________,                         ________,  ________,   ________
  ),
  [GAMING] = LAYOUT_moonlander(
    ________,   KC_4,      KC_0,      KC_1,      KC_2,      KC_3,      ________,              ________,  ________,  ________,   ________,   ________,   ________,   ________,
    KC_TAB,     KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      ________,              ________,  KC_Y,      KC_U,       KC_I,       KC_O,       KC_P,       ________,
    KC_ESCAPE,  KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      ________,              ________,  KC_H,      KC_J,       KC_K,       KC_L,       KC_SCOLON,  ________,
    KC_LSHIFT,  KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,                                        KC_N,      KC_M,       KC_COMMA,   KC_DOT,     KC_SLASH,   ________,
    KC_LCTRL,   KC_LGUI,   ________,  KC_LALT,   KC_SPACE,  ________,                                    ________,  ________,   ________,   ________,   ________,   ________,
                                                 ________,  ________,  ________,              ________,  ________,  ________
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

uint16_t get_combo_term(uint16_t index, combo_t *combo) {
    switch (combo->keys[0]) {
        case LTHUMB:
        case RTHUMB:
            return COMBO_TERM;
        default:
            // non-thumb combos have to be faster cause of typos
            return 30;
    }
}

typedef struct {
  bool active;
  uint16_t keycode;
  uint16_t pressed_time;
} key_event;

typedef struct {
  uint16_t pressed_time;
  bool pressed;
  bool held;
  bool retro_pressed;
} custom_key_state;

// keep track of when we pressed lthumb, rthumb or a key pressed while lthumb or rthumb was depressed
static custom_key_state lthumb_state = {};
static custom_key_state rthumb_state = {};
static key_event queued_key = {};

void activate_lheld(void) {
  // activate symbols layer
  lthumb_state.held = true;
  layer_on(SYMBOLS);
}

void deactivate_lheld(void) {
  // deactivate symbols layer
  lthumb_state.held = false;
  layer_off(SYMBOLS);
}

void activate_rheld(void) {
  // activate shift
  rthumb_state.held = true;
  register_mods(MOD_LSFT);
}

void deactivate_rheld(void) {
  // deactivate shift
  rthumb_state.held = false;
  unregister_mods(MOD_LSFT);
}

void tap_key(uint16_t keycode) {
  if (keycode == LTHUMB || keycode == RTHUMB) {
    return;
  }
  int lay = biton32(layer_state);
  if (lay == SYMBOLS) {
    keycode = get_symbol_code(keycode);
  }
  if (!press_custom_shifted(keycode)) {
    release_custom_shifted();
  } else {
    tap_code16(keycode);
  }
}

void tap_queued_key(void) {
  lthumb_state.retro_pressed = false;
  rthumb_state.retro_pressed = false;
  tap_key(queued_key.keycode);
  queued_key.active = false;
}

bool pressed_and_not_held(custom_key_state *state) {
  return state->pressed && !state->held;
}

void custom_press(custom_key_state *state, keyrecord_t *record) {
  state->pressed = true;
  state->pressed_time = record->event.time;
  state->retro_pressed = true;
  state->held = false;
}

void custom_release(custom_key_state *state) {
  state->pressed = false;
  state->retro_pressed = false;
  state->held = false;
}

//  _____                      //
// |  __ \                     //
// | |__) | __ ___  ___ ___    //
// |  ___/ '__/ _ \/ __/ __|   //
// | |   | | |  __/\__ \__ \   //
// |_|   |_|  \___||___/___/   //

bool handle_key_pressed(uint16_t keycode, keyrecord_t *record) {
  lthumb_state.retro_pressed = false;
  rthumb_state.retro_pressed = false;

  // first handle queued keys
  if (queued_key.active) {
    bool hold_activation = false;
    if (pressed_and_not_held(&lthumb_state)) {
      activate_lheld();
      hold_activation = true;
    }
    if (pressed_and_not_held(&rthumb_state)) {
      activate_rheld();
      hold_activation = true;
    }
    if (hold_activation) {
      tap_queued_key();
    }
  }

  // check if custom pressed but not held
  if (pressed_and_not_held(&lthumb_state) || pressed_and_not_held(&rthumb_state)) {
    // if yes: add key to queue instead of immediately handling it
    queued_key.active = true;
    queued_key.keycode = keycode;
    queued_key.pressed_time = record->event.time;
    return false;
  }

  // check if keypress is custom key
  if (keycode == LTHUMB) {
    custom_press(&lthumb_state, record);
    return false;
  }
  if (keycode == RTHUMB) {
    custom_press(&rthumb_state, record);
    return false;
  }

  // normal-ass key press
  return press_custom_shifted(keycode);
}

//  _______ _                          //
// |__   __(_)                         //
//    | |   _ _ __ ___   ___ _ __      //
//    | |  | | '_ ` _ \ / _ \ '__|     //
//    | |  | | | | | | |  __/ |        //
//    |_|  |_|_| |_| |_|\___|_|        //
//

void matrix_scan_user(void) {
  bool hold_activation = false;
  if (pressed_and_not_held(&lthumb_state)) {
    if (timer_elapsed(lthumb_state.pressed_time) > TAPPING_TERM) {
      activate_lheld();
      hold_activation = true;
    }
  }
  if (pressed_and_not_held(&rthumb_state)) {
    if (timer_elapsed(rthumb_state.pressed_time) > TAPPING_TERM) {
      activate_rheld();
      hold_activation = true;
    }
  }
  if (hold_activation && queued_key.active) {
    tap_queued_key();
  }
}

//  _____      _                       //
// |  __ \    | |                      //
// | |__) |___| | ___  __ _ ___  ___   //
// |  _  // _ \ |/ _ \/ _` / __|/ _ \  //
// | | \ \  __/ |  __/ (_| \__ \  __/  //
// |_|  \_\___|_|\___|\__,_|___/\___|  //
//

bool handle_key_release(uint16_t keycode, keyrecord_t *record) {
  // handle queued keys TODO: grace period
  if (queued_key.active && keycode == queued_key.keycode) {
    tap_queued_key();
    return false;
  }

  // handle custom keys
  if (keycode == LTHUMB) {
    if (lthumb_state.retro_pressed || !lthumb_state.held) {
      tap_code16(KC_ESCAPE);
    }
    if (lthumb_state.held) {
      deactivate_lheld();
    }
    custom_release(&lthumb_state);
    return false;
  }
  if (keycode == RTHUMB) {
    if (rthumb_state.retro_pressed || !rthumb_state.held) {
      tap_code16(KC_SPACE);
    }
    if (rthumb_state.held) {
      deactivate_rheld();
    }
    custom_release(&rthumb_state);
    return false;
  }

  // normal-ass release
  release_custom_shifted();
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    return handle_key_pressed(keycode, record);
  } else {
    return handle_key_release(keycode, record);
  }
}


#define white {0,0,255}
#define reddd {249,228,255}
#define black {0,0,0}
#define dblue {141,255,233}
#define bluee {141,255,233}
#define green {85,203,158}
#define cyeen {105,255,255}
#define yelow {31,255,255}
#define purpl {169,120,255}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [QWERTY] = {
        black, white, white, white, black,
        black, bluee, bluee, bluee, black,
        black, bluee, bluee, bluee, black,
        black, bluee, bluee, bluee, dblue,
        black, bluee, bluee, bluee, white,
        black, bluee, bluee, bluee,
        black, white, white, green, black, black, white,

        black, white, white, white, black,
        black, bluee, white, white, black,
        black, bluee, bluee, white, black,
        black, bluee, bluee, white, black,
        black, bluee, bluee, bluee, purpl,
        black, bluee, bluee, bluee,
        black, white, white, white, black, black, white
    },

    [SYMBOLS] = {
        black, black, black, black, black,
        black, green, green, green, black,
        black, green, green, green, black,
        black, green, green, green, black,
        black, green, green, green, black,
        black, green, green, green,
        black, black, black, black, black, black, black,

        black, black, black, black, black,
        black, green, green, green, black,
        black, green, green, green, black,
        black, green, green, green, black,
        black, green, green, green, black,
        black, green, green, green,
        black, black, black, black, black, black, black
    },

    [NAV] = {
        black, black, black, black, black,
        black, black, black, black, black,
        black, black, black, black, black,
        black, black, black, black, black,
        black, black, black, black, black,
        black, black, black, black,
        black, black, black, black, black, black, black,

        black, black, black, black, black,
        black, black, black, black, black,
        black, black, reddd, reddd, black,
        black, reddd, reddd, black, black,
        black, reddd, reddd, black, black,
        black, black, reddd, reddd,
        black, black, black, black, black, black, black
    },

    [FUNCTIONS] = {
        black, black, black, black, black,
        black, black, black, black, black,
        black, black, black, black, black,
        black, black, black, black, black,
        black, black, black, black, black,
        black, black, black, black,
        black, black, black, black, black, black, black,

        black, black, black, black, black,
        black, black, black, black, black,
        black, purpl, purpl, purpl, black,
        black, purpl, purpl, purpl, black,
        black, purpl, purpl, purpl, black,
        black, purpl, purpl, purpl,
        black, black, black, black, black, black, black
    },

    [MEDIA] = {
        reddd, black, black, black, black,
        black, black, black, black, black,
        black, reddd, purpl, reddd, black,
        black, purpl, purpl, purpl, black,
        black, reddd, purpl, reddd, black,
        black, black, black, black,
        black, black, black, black, black, black, black,

        black, black, black, black, black,
        black, black, black, black, black,
        black, black, black, black, black,
        black, black, black, black, black,
        black, black, black, black, black,
        black, black, black, black,
        black, black, black, black, black, black, black
    },

    [NUMPAD] = {
        black, black, black, black, black,
        black, black, black, black, black,
        black, black, black, black, black,
        black, black, black, black, black,
        black, black, black, black, black,
        black, black, black, black,
        black, black, black, black, black, black, black,

        black, black, black, black, black,
        black, dblue, cyeen, dblue, dblue,
        cyeen, yelow, yelow, yelow, cyeen,
        dblue, yelow, yelow, yelow, black,
        black, yelow, yelow, yelow, yelow,
        black, black, black, black,
        black, black, black, black, black, black, black
    },

    [GAMING] = {
        black, white, white, white, white,
        bluee, white, reddd, white, white,
        bluee, reddd, reddd, white, black,
        bluee, white, reddd, white, white,
        bluee, white, white, white, white,
        bluee, white, white, white,
        bluee, bluee, bluee, black, black, black, black,

        black, black, black, black, black,
        black, black, black, black, black,
        black, black, black, black, black,
        black, black, black, black, black,
        black, black, black, black, black,
        black, black, black, black,
        black, black, black, black, black, black, black
    },
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
