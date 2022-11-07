/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#undef TAPPING_TERM

#define PERMISSIVE_HOLD
#define TAPPING_TERM 125
#define LONG_TAPPING_TERM 200
#define TAPPING_TERM_PER_KEY
#define IGNORE_MOD_TAP_INTERRUPT
//#define TAPPING_FORCE_HOLD       /* C-Down F-down F-up -> always C-F even if within tapping term. */

#define COMBO_TERM 50
#define COMBO_TERM_PER_COMBO
#define COMBO_MUST_HOLD_MODS
#define COMBO_HOLD_TERM 100

#undef RGB_DISABLE_TIMEOUT
#define RGB_DISABLE_TIMEOUT 300000

#define USB_SUSPEND_WAKEUP_DELAY 0

#define LAYER_STATE_16BIT
#define RGB_MATRIX_STARTUP_SPD 60
