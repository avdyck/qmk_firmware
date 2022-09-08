#pragma once

#include QMK_KEYBOARD_H

enum LAYERS {
    QWERTY,
    BLMK,
    SYM,
    NAV,
    MDIA,
    NUM,
    GMNG
};

#define ESCAP        LT(NAV, KC_NO)

#define LTHUMB1      KC_LSFT
#define LTHUMB2      MO(SYM)
#define LTHUMB3      KC_NO
#define LTHUMB4      MO(MDIA)

#define RTHUMB1      KC_SPACE
#define RTHUMB2      MO(NAV)
#define RTHUMB3      KC_NO
#define RTHUMB4      TG(NUM)

#define M_PREV       KC_MEDIA_PREV_TRACK
#define M_NEXT       KC_MEDIA_NEXT_TRACK
#define M_PLAY       KC_MEDIA_PLAY_PAUSE
#define M_UP         KC_AUDIO_VOL_UP
#define M_DOWN       KC_AUDIO_VOL_DOWN
#define B_UP         KC_BRIGHTNESS_UP
#define B_DOWN       KC_BRIGHTNESS_DOWN
#define CG_LEFT      C(G(KC_LEFT))
#define CG_RIGHT     C(G(KC_RIGHT))
#define MAC_REC1     DYN_REC_START1
#define MAC_STOP     DYN_REC_STOP
#define MAC_PLAY1    DYN_MACRO_PLAY1

#define SYM_Q     KC_NO
#define SYM_W     KC_MINS
#define SYM_E     KC_TILD
#define SYM_R     KC_PLUS
#define SYM_T     KC_PERC
#define SYM_Y     KC_HASH
#define SYM_U     KC_LBRC
#define SYM_I     KC_QUOT
#define SYM_O     KC_RBRC
#define SYM_P     KC_NO

#define SYM_A     KC_EXLM
#define SYM_S     KC_LT
#define SYM_D     KC_EQL
#define SYM_F     KC_GT
#define SYM_G     KC_PIPE
#define SYM_H     KC_AMPR
#define SYM_J     KC_LPRN
#define SYM_K     KC_DQUO
#define SYM_L     KC_RPRN
#define SYM_SCLN  KC_BSLS

#define SYM_Z     KC_NO
#define SYM_X     KC_ASTR
#define SYM_C     KC_NO
#define SYM_V     KC_SLSH
#define SYM_B     KC_CIRC
#define SYM_N     KC_DLR
#define SYM_M     KC_LCBR
#define SYM_COMM  KC_GRV
#define SYM_DOT   KC_RCBR
#define SYM_SLSH  KC_SCLN

// combos (Comb Left/Right C(ontrol)/A(lt)/S(hift)/G(ui)
#define CombLC KC_F
#define CombLA KC_D
#define CombLG KC_S
#define CombLS KC_A

#define CombRC KC_J
#define CombRA KC_K
#define CombRG KC_L
#define CombRS KC_SCLN

bool process_custom_shift_keys(uint16_t keycode, keyrecord_t *record);
