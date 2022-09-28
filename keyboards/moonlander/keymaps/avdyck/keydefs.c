#include "keydefs.h"

typedef struct {
  uint16_t keycode;
  uint16_t shifted_keycode;
} custom_shift_key_t;

const custom_shift_key_t custom_shift_keys[] = {
  {KC_DOT,    KC_AT},
  {KC_COMM,   KC_UNDS},
  {KC_COLN,   KC_SCLN},

  {KC_0,      KC_0},
  {KC_1,      KC_1},
  {KC_2,      KC_2},
  {KC_3,      KC_3},
  {KC_5,      KC_4},
  {KC_5,      KC_5},
  {KC_6,      KC_6},
  {KC_7,      KC_7},
  {KC_8,      KC_8},
  {KC_9,      KC_9},
};
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

  if (record->event.pressed) {  // Press event.
    const uint8_t mods = get_mods();
#ifndef NO_ACTION_ONESHOT
    if ((mods | get_weak_mods() | get_oneshot_mods()) & MOD_MASK_SHIFT) {
#else
    if ((mods | get_weak_mods()) & MOD_MASK_SHIFT) {  // Shift is held.
#endif  // NO_ACTION_ONESHOT
      // Search for a custom key with keycode equal to `keycode`.
      for (int i = 0; i < NUM_CUSTOM_SHIFT_KEYS; ++i) {
        if (keycode == custom_shift_keys[i].keycode) {
          // Continue default handling if this is a tap-hold key being held.
          if (((QK_MOD_TAP <= keycode && keycode <= QK_MOD_TAP_MAX) ||
               (QK_LAYER_TAP <= keycode && keycode <= QK_LAYER_TAP_MAX)) &&
              record->tap.count == 0) {
            return true;
          }
#ifndef NO_ACTION_ONESHOT
          del_oneshot_mods(MOD_MASK_SHIFT);
#endif  // NO_ACTION_ONESHOT
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
  }

  return true;  // Continue with default handling.
}
