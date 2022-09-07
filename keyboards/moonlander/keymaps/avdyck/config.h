/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#undef TAPPING_TERM

#define PERMISSIVE_HOLD
#define TAPPING_TERM 175
#define TAPPING_TERM_PER_KEY
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD       /* C-Down F-down F-up -> always C-F even if within tapping term. */

// oneshot mods (shift)
#define ONESHOT_TAP_TOGGLE 3     /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 500      /* Time (in ms) before the one shot key is released */

#undef RGB_DISABLE_TIMEOUT
#define RGB_DISABLE_TIMEOUT 300000

#define USB_SUSPEND_WAKEUP_DELAY 0

#define RGB_MATRIX_STARTUP_SPD 60
