#include "keydefs.h"

typedef struct {
  uint16_t keycode;
  uint16_t shifted_keycode;
} custom_shift_key_t;

const custom_shift_key_t custom_shift_keys[] = {
  {KC_DOT,    KC_AT  },
  {KC_COMM,   KC_UNDS},
  {KC_COLN,   KC_SCLN},

  {SYM_Q,     SYM_Q  },
  {SYM_W,     SYM_W  },
  {SYM_E,     SYM_E  },
  {SYM_R,     SYM_R  },
  {SYM_T,     SYM_T  },
  {SYM_Y,     SYM_Y  },
  {SYM_U,     SYM_U  },
  {SYM_I,     SYM_I  },
  {SYM_O,     SYM_O  },
  {SYM_P,     SYM_P  },

  {SYM_A,     SYM_A   },
  {SYM_S,     SYM_S   },
  {SYM_D,     SYM_D   },
  {SYM_F,     SYM_F   },
  {SYM_G,     SYM_G   },
  {SYM_H,     SYM_H   },
  {SYM_J,     SYM_J   },
  {SYM_K,     SYM_K   },
  {SYM_L,     SYM_L   },
  {SYM_SCLN,  SYM_SCLN},

  {SYM_Z,     SYM_Z   },
  {SYM_X,     SYM_X   },
  {SYM_C,     SYM_C   },
  {SYM_V,     SYM_V   },
  {SYM_B,     SYM_B   },
  {SYM_N,     SYM_N   },
  {SYM_M,     SYM_M   },
  {SYM_COMM,  SYM_COMM},
  {SYM_DOT,   SYM_DOT },
  {SYM_SLSH,  SYM_SLSH},

  {KC_0,      KC_0},
  {KC_1,      KC_1},
  {KC_2,      KC_2},
  {KC_3,      KC_3},
  {KC_4,      KC_4},
  {KC_5,      KC_5},
  {KC_6,      KC_6},
  {KC_7,      KC_7},
  {KC_8,      KC_8},
  {KC_9,      KC_9},
};

uint16_t get_symbol_code(uint16_t keycode) {
  switch (keycode) {
    case KC_Q:   return SYM_Q;
    case KC_W:   return SYM_W;
    case KC_E:   return SYM_E;
    case KC_R:   return SYM_R;
    case KC_T:   return SYM_T;
    case KC_Y:   return SYM_Y;
    case KC_U:   return SYM_U;
    case KC_I:   return SYM_I;
    case KC_O:   return SYM_O;
    case KC_P:   return SYM_P;
    case KC_A:   return SYM_A;
    case KC_S:   return SYM_S;
    case KC_D:   return SYM_D;
    case KC_F:   return SYM_F;
    case KC_G:   return SYM_G;
    case KC_H:   return SYM_H;
    case KC_J:   return SYM_J;
    case KC_K:   return SYM_K;
    case KC_L:   return SYM_L;
    case KC_SCLN:return SYM_SCLN;
    case KC_Z:   return SYM_Z;
    case KC_X:   return SYM_X;
    case KC_C:   return SYM_C;
    case KC_V:   return SYM_V;
    case KC_B:   return SYM_B;
    case KC_N:   return SYM_N;
    case KC_M:   return SYM_M;
    case KC_COMM:return SYM_COMM;
    case KC_DOT: return SYM_DOT;
    case KC_SLSH:return SYM_SLSH;
    default:     return keycode;
  }
}
uint8_t NUM_CUSTOM_SHIFT_KEYS = sizeof(custom_shift_keys) / sizeof(custom_shift_key_t);

bool process_custom_shift_keys(uint16_t keycode, keyrecord_t *record) {
  static uint16_t registered_keycode = KC_NO;

  // If a custom shift key is registered, then this event is either
  // releasing it or manipulating another key at the same time. Either way,
  // we release the currently registered key.
  if (registered_keycode != KC_NO) {
    unregister_code16(registered_keycode);
    registered_keycode = KC_NO;
  }

  if (!record->event.pressed) {
    return true;
  }

  const uint8_t mods = get_mods();
  if ((mods | get_weak_mods()) & MOD_MASK_SHIFT) {  // Shift is held.
    // Search for a custom key with keycode equal to `keycode`.
    for (int i = 0; i < NUM_CUSTOM_SHIFT_KEYS; ++i) {
      if (keycode == custom_shift_keys[i].keycode) {
        // Continue default handling if this is a tap-hold key being held.
        if (((QK_MOD_TAP <= keycode && keycode <= QK_MOD_TAP_MAX) ||
             (QK_LAYER_TAP <= keycode && keycode <= QK_LAYER_TAP_MAX)) &&
            record->tap.count == 0) {
          return true;
        }
        del_mods(MOD_MASK_SHIFT);
        del_weak_mods(MOD_MASK_SHIFT);
        send_keyboard_report();
        registered_keycode = custom_shift_keys[i].shifted_keycode;
        register_code16(registered_keycode);
        set_mods(mods);  // Restore the mods.
        return false;
      }
    }
  }

  return true;  // Continue with default handling.
}





