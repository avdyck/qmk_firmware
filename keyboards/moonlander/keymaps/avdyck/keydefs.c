#include "keydefs.h"

const custom_shift_key_t custom_shift_keys[] = {
  {KC_DOT,  KC_AT},
  {KC_COMM, KC_UNDS},
  {SYM_Q,   KC_4},
  {SYM_W,   KC_0},
  {SYM_E,   KC_1},
  {SYM_R,   KC_2},
  {SYM_T,   KC_3},
  {SYM_Y,   KC_7},
  {SYM_U,   KC_6},
  {SYM_I,   KC_5},
  {SYM_O,   KC_9},
  {SYM_P,   KC_8},
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

static uint16_t registered_keycode = KC_NO;

void release_custom_shifted(void) {
  if (registered_keycode != KC_NO) {
    unregister_code16(registered_keycode);
    registered_keycode = KC_NO;
  }
}

bool press_custom_shifted(uint16_t keycode) {
  // release previous
  release_custom_shifted();

  // check if shifted in the first place
  const uint8_t mods = get_mods();
  if (!((mods | get_weak_mods()) & MOD_MASK_SHIFT)) {
    return true;
  }

  for (int i = 0; i < NUM_CUSTOM_SHIFT_KEYS; ++i) {
    if (keycode == custom_shift_keys[i].keycode) {
      del_mods(MOD_MASK_SHIFT);
      del_weak_mods(MOD_MASK_SHIFT);
      registered_keycode = custom_shift_keys[i].shifted_keycode;
      register_code16(registered_keycode);
      set_mods(mods);
      return false;
    }
  }

  return true;
}
