#include QMK_KEYBOARD_H
#include "version.h"
#include "keydefs.h"
#include "g/keymap_combo.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [QWERTY] = LAYOUT_moonlander(
    KC_DELETE,  KC_4,      KC_0,      KC_1,      KC_2,      KC_3,      ________,              ________,  KC_7,      KC_6,         KC_5,       KC_9,       KC_8,       ________,
    KC_TAB,     KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      LCTL(KC_INSERT),       TG(5),     KC_Y,      KC_U,         KC_I,       KC_O,       KC_P,       KC_BSPACE,
    ESCAP,      KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      LSFT(KC_INSERT),       KC_INSERT, KC_H,      KC_J,         KC_K,       KC_L,       KC_SCOLON,  KC_ENTER,
    KC_LSHIFT,  KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,                                        KC_N,      KC_M,         KC_COMMA,   KC_DOT,     KC_SLASH,   KC_GRAVE,
    ________,   ________,   ________, MO(MEDIA), ________,  KC_PSCREEN,                                  TG(NUMPAD),MO(FUNCTIONS),________,   ________,   ________,   ________,
                                                 LTHUMB,    ________,  ________,              ________,  ________,  RTHUMB
  ),
  [SYMBOLS] = LAYOUT_moonlander(
    ________,   ________,  ________,  ________,  ________,  ________,  ________,              ________,  ________,  ________,     ________,   ________,   ________,   ________,
    ________,   KC_CIRC,   KC_MINUS,  KC_TILDE,  KC_PLUS,   KC_ASTR,   ________,              ________,  KC_PERC,   KC_LBRC,      KC_QUOTE,   KC_RBRC,    KC_DLR,     ________,
    ________,   KC_EXLM,   KC_UNDS,   KC_EQUAL,  KC_AT,     KC_PIPE,   ________,              ________,  KC_AMPR,   KC_LPRN,      KC_DQUO,    KC_RPRN,    KC_BSLASH,  ________,
    ________,   KC_4,      KC_0,      KC_1,      KC_2,      KC_3,                                        KC_7,      KC_6,         KC_5,       KC_9,       KC_8,       ________,
    ________,   ________,  ________,  ________,  ________,  ________,                                    ________,  ________,     ________,   ________,   ________,   ________,
                                                 ________,  ________,  ________,              ________,  ________,  ________
  ),
  [NAV] = LAYOUT_moonlander(
    ________,   ________,  ________,  ________,  ________,  ________,  ________,              ________,  ________,  ________,     ________,   ________,   ________,   ________,
    ________,   ________,  ________,  ________,  ________,  ________,  ________,              ________,  ________,  KC_HOME,      KC_END,     ________,   ________,   ________,
    ________,   KC_LGUI,   KC_LSFT,   KC_LALT,   KC_LCTL,   ________,  ________,              ________,  KC_LEFT,   KC_DOWN,      KC_UP,      KC_RIGHT,   ________,   ________,
    ________,   ________,  ZOOMOUT,   ZOOMNTR,   ZOOMIN,    ________,                                    CG_LEFT,   KC_PGUP,      KC_PGDOWN,  CG_RIGHT,   ________,   ________,
    ________,   ________,  ________,  ________,  ________,  ________,                                    ________,  ________,     ________,   ________,   ________,   ________,
                                                 ________,  ________,  ________,              ________,  ________,  ________
  ),
  [FUNCTIONS] = LAYOUT_moonlander(
    ________,   ________,  ________,  ________,  ________,  ________,  ________,              ________,  ________,  ________,     ________,   ________,   ________,   ________,
    ________,   ________,  ________,  ________,  ________,  ________,  ________,              ________,  KC_F10,    KC_F7,        KC_F8,      KC_F9,      ________,   ________,
    ________,   KC_LGUI,   KC_LSFT,   KC_LALT,   KC_LCTL,   ________,  ________,              ________,  KC_F11,    KC_F4,        KC_F5,      KC_F6,      ________,   ________,
    ________,   ________,  ________,  ________,  ________,  ________,                                    KC_F12,    KC_F1,        KC_F2,      KC_F3,      ________,   ________,
    ________,   ________,  ________,  ________,  ________,  ________,                                    ________,  ________,     ________,   ________,   ________,   ________,
                                                 ________,  ________,  ________,              ________,  ________,  ________
  ),
  [MEDIA] = LAYOUT_moonlander(
    RESET,      ________,  ________,  ________,  ________,  ________,  ________,              ________,  ________,  ________,     ________,   ________,   ________,   ________,
    ________,   ________,  BL_DEC,    M_UP,      BL_INC,    ________,  ________,              ________,  ________,  ________,     ________,   ________,   ________,   ________,
    ________,   ________,  M_PREV,    M_PLAY,    M_NEXT,    ________,  ________,              ________,  ________,  ________,     ________,   ________,   ________,   ________,
    ________,   ________,  B_DOWN,    M_DOWN,    B_UP,      ________,                                    ________,  ________,     ________,   ________,   ________,   ________,
    ________,   ________,  ________,  ________,  ________,  ________,                                    ________,  ________,     ________,   ________,   ________,   ________,
                                                 ________,  ________,  ________,              ________,  ________,  ________
  ),
  [NUMPAD] = LAYOUT_moonlander(
    ________,   ________,  ________,  ________,  ________,  ________,  ________,              ________,  ________,  ________,     KC_KP_SLASH,KC_KP_ASTERISK,________,________,
    ________,   ________,  ________,  ________,  ________,  ________,  ________,              ________,  ________,  KC_KP_7,      KC_KP_8,    KC_KP_9,    KC_KP_MINUS,________,
    ________,   ________,  ________,  ________,  ________,  ________,  ________,              ________,  ________,  KC_KP_4,      KC_KP_5,    KC_KP_6,    KC_KP_PLUS, ________,
    ________,   ________,  ________,  ________,  ________,  ________,                                    ________,  KC_KP_1,      KC_KP_2,    KC_KP_3,    KC_KP_ENTER,________,
    ________,   ________,  ________,  ________,  ________,  ________,                                    ________,  KC_KP_0,      ________,   KC_KP_DOT,  KC_KP_ENTER,________,
                                                 ________,  ________,  ________,                         ________,  ________,     ________
  ),
  [GAMING] = LAYOUT_moonlander(
    ________,   KC_4,      KC_0,      KC_1,      KC_2,      KC_3,      ________,              ________,  ________,  ________,     ________,   ________,   ________,   ________,
    KC_TAB,     KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      ________,              ________,  KC_Y,      KC_U,         KC_I,       KC_O,       KC_P,       ________,
    KC_ESCAPE,  KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      ________,              ________,  KC_H,      KC_J,         KC_K,       KC_L,       KC_SCOLON,  ________,
    KC_LSHIFT,  KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,                                        KC_N,      KC_M,         KC_COMMA,   KC_DOT,     KC_SLASH,   ________,
    KC_LCTRL,   KC_LGUI,   ________,  KC_LALT,   KC_SPACE,  ________,                                    ________,  ________,     ________,   ________,   ________,   ________,
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

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // instantly switch layers
        // case ESCAP:
        //     return 0;
        // fast switch layers + make sure combos still work
        case LTHUMB:
            return COMBO_TERM;
        // prevent hold misfires
        default:
            return TAPPING_TERM;
    }
}

#define QUEUE_MASK 4
#define QUEUE_CAPACITY 1 << QUEUE_MASK

typedef struct {
  uint16_t keycode;
  uint16_t time;
  bool pressed;
} key_event;

typedef struct {
  uint8_t front;
  uint8_t size;
  key_event elems[QUEUE_CAPACITY];
} event_queue_t;

static event_queue_t event_queue;

static bool handle(key_event *event) {
  uint16_t realcode = event->keycode;
  if (event->keycode == LTHUMB) {
    realcode = KC_ESCAPE;
  }
  if (event->keycode == RTHUMB) {
    realcode = KC_SPACE;
  }
  if (event->pressed) {
    register_code(realcode);
  } else {
    unregister_code(realcode);
  }
  return true;
}

static bool handle_front(bool stop_at_custom) {
  uint8_t index = event_queue.front;
  key_event *event = &event_queue.elems[index];
  if (stop_at_custom && (event->keycode == LTHUMB || event->keycode == RTHUMB)) return false;
  event_queue.front = (index + 1) & QUEUE_MASK;
  event_queue.size--;
  return handle(event);
}

static void empty_the_queue(bool stop_at_custom) {
  while (event_queue.size && handle_front(stop_at_custom)) {
    // do nothing
  }
}

static void register_key_event(uint16_t keycode, keyrecord_t *record) {
  uint8_t index = (event_queue.front + event_queue.size) & QUEUE_MASK;
  event_queue.size++;
  event_queue.elems[index] = (key_event) { keycode, record->event.time, record->event.pressed };
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  bool just_press_da_button = false;
  if (keycode == LTHUMB || keycode == RTHUMB) {
    just_press_da_button = !record->event.pressed;

    if (just_press_da_button) {
      // release -> definitely within tap range cause hold would have been handled
      if (keycode == LTHUMB) {
        layer_off(SYMBOLS);
      } else {
        unregister_mods(MOD_LSFT);
      }
    }
  } else {
    just_press_da_button = event_queue.size == 0;
  }

  if (just_press_da_button) {
    empty_the_queue(false);
    return true;
  }
  // shit's whack yo
  register_key_event(keycode, record);
  return false;
}

void matrix_scan_user(void) { // The very important timer.
  if (event_queue.size) {
    uint8_t index = event_queue.front;
    key_event *event = &event_queue.elems[index];
    if (timer_elapsed(event->time) > 100) {
      // remove da front
      event_queue.front = (index + 1) & QUEUE_MASK;
      event_queue.size--;
      // activate correct mod/layer
      if (event->keycode == LTHUMB) {
        layer_on(SYMBOLS);
      } else {
        register_mods(MOD_LSFT);
      }
      // empty da queue until next custom
      empty_the_queue(true);
    }
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
        black, green, green, yelow, black,
        black, green, green, yelow, black,
        black, green, green, yelow, black,
        black, green, green, yelow, black,
        black, green, green, yelow,
        black, black, black, black, black, black, black,

        black, black, black, black, black,
        black, green, green, yelow, black,
        black, green, green, yelow, black,
        black, green, green, yelow, black,
        black, green, green, yelow, black,
        black, green, green, yelow,
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
