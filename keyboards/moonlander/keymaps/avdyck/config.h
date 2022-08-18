/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define IGNORE_MOD_TAP_INTERRUPT
#undef TAPPING_TERM

// very small tapping term combined with retro tapping such that thumb keys can be used for both combos and layers
#define RETRO_TAPPING
#define TAPPING_TERM 35
#define COMBO_TERM TAPPING_TERM
#define COMBO_MUST_HOLD_MODS // if a combo triggers a modifier, only trigger when the combo is held
#define COMBO_HOLD_TERM 0  // how long at lef one of the combo keys must be held to trigger

#undef RGB_DISABLE_TIMEOUT
#define RGB_DISABLE_TIMEOUT 300000

#define USB_SUSPEND_WAKEUP_DELAY 0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 5

#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 1

#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 1

#undef MOUSEKEY_WHEEL_INTERVAL
#define MOUSEKEY_WHEEL_INTERVAL 50

#undef MOUSEKEY_WHEEL_MAX_SPEED
#define MOUSEKEY_WHEEL_MAX_SPEED 1

#undef MOUSEKEY_WHEEL_TIME_TO_MAX
#define MOUSEKEY_WHEEL_TIME_TO_MAX 1

#define RGB_MATRIX_STARTUP_SPD 60
