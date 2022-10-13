#pragma once

#include QMK_KEYBOARD_H

enum LAYERS {
    QWERTY,
    QOUPY,
    SYM,
    NAV,
    MDIA,
    NUM,
    GMNG
};

#define LTHUMB1      KC_LSFT
#define LTHUMB2      MO(SYM)
#define LTHUMB3      KC_LALT
#define LTHUMB4      MO(MDIA)

#define RTHUMB1      MT(MOD_LCTL, KC_SPACE)
#define RTHUMB2      KC_LALT
#define RTHUMB3      KC_LGUI
#define RTHUMB4      TG(NUM)

#define ESCAP        MO(NAV)
#define SJIFT        KC_LSFT
#define SHIFTTHUMB   LTHUMB1
#define SPACETHUMB   RTHUMB1

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

// qoupy bindings
#define QOU_Q     KC_Q
#define QOU_W     KC_W
#define QOU_E     KC_L
#define QOU_R     KC_D
#define QOU_T     KC_B
#define QOU_Y     KC_F
#define QOU_U     KC_M
#define QOU_I     KC_U
#define QOU_O     KC_O
#define QOU_P     KC_Y

#define QOU_A     KC_C
#define QOU_S     KC_S
#define QOU_D     KC_R
#define QOU_F     KC_T
#define QOU_G     KC_G
#define QOU_H     KC_P
#define QOU_J     KC_N
#define QOU_K     KC_E
#define QOU_L     KC_A
#define QOU_SCLN  KC_I

#define QOU_Z     KC_Z
#define QOU_X     KC_X
#define QOU_C     KC_J
#define QOU_V     KC_K
#define QOU_B     KC_V
#define QOU_N     KC_SCLN
#define QOU_M     KC_H
#define QOU_COMM  KC_COMM
#define QOU_DOT   KC_DOT
#define QOU_SLSH  KC_SLSH

// symbols
#define SYM_Q     KC_DQUO
#define SYM_A     KC_BSLS
#define SYM_Z     KC_QUOT

#define SYM_W     KC_LBRC
#define SYM_S     KC_LPRN
#define SYM_X     KC_LCBR

#define SYM_E     KC_RBRC
#define SYM_D     KC_RPRN
#define SYM_C     KC_RCBR

#define SYM_R     KC_COLN
#define SYM_F     KC_SCLN
#define SYM_V     KC_GRV

#define SYM_T     KC_HASH
#define SYM_G     KC_CIRC
#define SYM_B     KC_DLR

#define SYM_Y     KC_PERC
#define SYM_H     KC_PIPE
#define SYM_N     KC_AMPR

#define SYM_U     KC_NO
#define SYM_J     KC_EQL
#define SYM_M     KC_TILD

#define SYM_I     KC_MINS
#define SYM_K     KC_LT
#define SYM_COMM  KC_ASTR

#define SYM_O     KC_PLUS
#define SYM_L     KC_GT
#define SYM_DOT   KC_DOT

#define SYM_P     KC_EXLM
#define SYM_SCLN  KC_QUES
#define SYM_SLSH  KC_SLSH

// combos (Comb Left/Right C(ontrol)/A(lt)/S(hift)/G(ui)
#define CombLC KC_F
#define CombLA KC_D
#define CombLS KC_S
#define CombLG KC_A

#define CombRC KC_J
#define CombRA KC_K
#define CombRS KC_L
#define CombRG KC_QUOT

bool process_custom_shift_keys(uint16_t keycode, keyrecord_t *record);
