#include "ledmap.h"
#include "keydefs.h"

#define white {0,0,255}
#define reddd {249,228,255}
#define black {0,0,0}
#define dblue {255,141,180}
#define bluee {141,255,233}
#define green {85,203,158}
#define cyeen {105,255,255}
#define yelow {31,255,255}
#define purpl {169,120,255}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [QWERTY] = {
        black, white, white, black, black,
        black, bluee, bluee, bluee, black,
        black, bluee, bluee, bluee, dblue,
        black, bluee, bluee, bluee, white,
        black, bluee, bluee, bluee, green,
        black, bluee, bluee, bluee,
        black, white, white, white, white, black, white,

        black, white, white, black, black,
        black, bluee, white, white, black,
        black, bluee, bluee, white, dblue,
        black, bluee, bluee, white, white,
        black, bluee, bluee, bluee, reddd,
        black, bluee, bluee, bluee,
        black, white, white, white, white, black, white
    },

    [QOUPY] = {
        black, white, white, black, black,
        black, dblue, dblue, dblue, black,
        black, dblue, dblue, dblue, dblue,
        black, dblue, dblue, dblue, white,
        black, dblue, dblue, dblue, green,
        black, dblue, dblue, dblue,
        black, white, white, white, white, black, white,

        black, white, white, black, black,
        black, dblue, white, white, black,
        black, dblue, dblue, white, dblue,
        black, dblue, dblue, white, white,
        black, dblue, dblue, dblue, purpl,
        black, dblue, dblue, dblue,
        black, white, white, reddd, white, black, white
    },

    [SYM] = {
        black, black, black, black, black,
        black, black, green, black, black,
        black, green, green, green, black,
        black, green, green, green, black,
        black, green, green, green, black,
        black, green, green, green,
        black, black, black, black, black, black, black,

        black, black, black, black, black,
        black, black, green, black, black,
        black, green, green, green, black,
        black, green, green, green, black,
        black, green, green, green, black,
        black, green, green, green,
        black, black, black, black, black, black, black
    },

    [NAV] = {
        black, black, black, black, black,
        black, black, black, black, black,
        black, purpl, purpl, purpl, black,
        black, purpl, purpl, purpl, black,
        black, purpl, purpl, purpl, black,
        black, purpl, purpl, purpl,
        black, black, black, black, black, black, black,

        black, black, black, black, black,
        black, black, black, black, black,
        black, bluee, reddd, black, black,
        black, bluee, reddd, black, black,
        black, bluee, reddd, black, black,
        black, bluee, reddd, black,
        black, black, black, black, black, black, black
    },

    [FUN] = {
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

    [MDIA] = {
        reddd, black, black, black, black,
        black, reddd, purpl, reddd, black,
        black, purpl, purpl, purpl, black,
        black, reddd, purpl, reddd, black,
        black, black, black, black, black,
        black, black, black, black,
        black, black, black, black, black, black, black,

        black, black, black, black, black,
        black, dblue, cyeen, dblue, dblue,
        cyeen, yelow, yelow, yelow, black,
        dblue, yelow, yelow, yelow, cyeen,
        black, yelow, yelow, yelow, yelow,
        black, black, black, black,
        black, black, black, black, black, black, black
    },

    [GMNG] = {
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
  if (lay <= GMNG) {
    set_layer_color(lay);
  } else if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
    rgb_matrix_set_color_all(0, 0, 0);
  }
}
