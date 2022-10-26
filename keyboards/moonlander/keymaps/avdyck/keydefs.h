#pragma once

#include QMK_KEYBOARD_H

enum LAYERS {
    QWERTY,
    QOUPY,
    SYM,
    NAV,
    FUN,
    MDIA,
    GMNG
};

#define LTHUMB1      KC_LSFT
#define LTHUMB2      MO(SYM)
#define LTHUMB3      KC_NO
#define LTHUMB4      MO(MDIA)

#define RTHUMB1      KC_SPACE
#define RTHUMB2      MO(NAV)
#define RTHUMB3      MO(FUN)
#define RTHUMB4      TG(MDIA)

#define TABBB        KC_NO
#define ESCAP        KC_TAB
#define SJIFT        KC_NO
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

#define M1(x)  MT(MOD_LGUI, (x))
#define M2(x)  MT(MOD_LALT, (x))
#define M3(x)  MT(MOD_LSFT, (x))
#define M4(x)  MT(MOD_LCTL, (x))

#define QW_Q     KC_Q
#define QW_W     KC_W
#define QW_E     KC_E
#define QW_R     KC_R
#define QW_T     KC_T
#define QW_Y     KC_Y
#define QW_U     KC_U
#define QW_I     KC_I
#define QW_O     KC_O
#define QW_P     KC_P

#define QW_A     KC_A
#define QW_S     M2(KC_S)
#define QW_D     M3(KC_D)
#define QW_F     M4(KC_F)
#define QW_G     KC_G
#define QW_H     KC_H
#define QW_J     M4(KC_J)
#define QW_K     M3(KC_K)
#define QW_L     M2(KC_L)
#define QW_SCLN  KC_QUOT

#define QW_Z     M1(KC_Z)
#define QW_X     KC_X
#define QW_C     KC_C
#define QW_V     KC_V
#define QW_B     KC_B
#define QW_N     KC_N
#define QW_M     KC_M
#define QW_COMM  KC_COMM
#define QW_DOT   KC_DOT
#define QW_SLSH  M1(KC_SLSH)


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
#define SYM_Q     KC_3
#define SYM_W     KC_2
#define SYM_E     KC_1
#define SYM_R     KC_0
#define SYM_T     KC_4
#define SYM_Y     KC_9
#define SYM_U     KC_5
#define SYM_I     KC_6
#define SYM_O     KC_7
#define SYM_P     KC_8

#define SYM_A     KC_LCBR
#define SYM_S     KC_LBRC
#define SYM_D     KC_LT
#define SYM_F     KC_LPRN
#define SYM_G     KC_PIPE
#define SYM_H     KC_AMPR
#define SYM_J     KC_RPRN
#define SYM_K     KC_GT
#define SYM_L     KC_RBRC
#define SYM_SCLN  KC_RCBR

#define SYM_Z     KC_BSLS
#define SYM_X     KC_EXLM
#define SYM_C     KC_PLUS
#define SYM_V     KC_MINS
#define SYM_B     KC_CIRC
#define SYM_N     KC_DLR
#define SYM_M     KC_EQL
#define SYM_COMM  KC_ASTR
#define SYM_DOT   KC_DOT
#define SYM_SLSH  KC_SLSH
