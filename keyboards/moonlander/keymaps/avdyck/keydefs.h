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

#define LTHUMB0      KC_TAB
#define LTHUMB1      KC_LSFT
#define LTHUMB2      MO(SYM)
#define LTHUMB3      KC_NO
#define LTHUMB4      MO(MDIA)

#define RTHUMB0      KC_ENTER
#define RTHUMB1      KC_SPACE
#define RTHUMB2      MO(NAV)
#define RTHUMB3      KC_NO
#define RTHUMB4      TG(MDIA)

#define DELLL        KC_DEL
#define TABBB        KC_TAB
#define LSJIFT       KC_LSFT

#define BEKSPC       KC_BSPC
#define ENTR         KC_ENTER
#define RSJIFT       KC_RCTL

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

#define ML1(x)  MT(MOD_LGUI, (x))
#define MR1(x)  MT(MOD_RGUI, (x))
#define ML2(x)  MT(MOD_LALT, (x))
#define MR2(x)  MT(MOD_RALT, (x))
#define ML3(x)  MT(MOD_LSFT, (x))
#define MR3(x)  MT(MOD_RSFT, (x))
#define MR4(x)  MT(MOD_LCTL, (x))
#define ML4(x)  MT(MOD_RCTL, (x))

// qwerty bindings
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

#define QW_A     ML1(   KC_A)
#define QW_S     ML2(   KC_S)
#define QW_D     ML3(   KC_D)
#define QW_F     ML4(   KC_F)
#define QW_G            KC_G
#define QW_H            KC_H
#define QW_J     MR4(   KC_J)
#define QW_K     MR3(   KC_K)
#define QW_L     MR2(   KC_L)
#define QW_SCLN  MR1(KC_SCLN)

#define QW_Z        KC_Z
#define QW_X        KC_X
#define QW_C        KC_C
#define QW_V        KC_V
#define QW_B        KC_B
#define QW_N        KC_N
#define QW_M        KC_M
#define QW_COMM  KC_COMM
#define QW_DOT    KC_DOT
#define QW_SLSH  KC_SLSH

// nav bindings
#define NV_Q     KC_TRNS
#define NV_W     KC_F9
#define NV_E     KC_F8
#define NV_R     KC_F7
#define NV_T     KC_F10

#define NV_A     KC_TRNS
#define NV_S     ML2(KC_F6)
#define NV_D     ML3(KC_F5)
#define NV_F     ML4(KC_F4)
#define NV_G         KC_F11

#define NV_Z     KC_TRNS
#define NV_X     KC_F3
#define NV_C     KC_F2
#define NV_V     KC_F1
#define NV_B     KC_F12

// qoupy bindings
#define QOU_Q     KC_Z
#define QOU_W     KC_Y
#define QOU_E     KC_O
#define QOU_R     KC_U
#define QOU_T     KC_QUOT
#define QOU_Y     KC_P
#define QOU_U     KC_K
#define QOU_I     KC_H
#define QOU_O     KC_L
#define QOU_P     KC_J

#define QOU_TAB   KC_TRNS
#define QOU_A     ML1(KC_C)
#define QOU_S     ML2(KC_I)
#define QOU_D     ML3(KC_A)
#define QOU_F     ML4(KC_E)
#define QOU_G         KC_X
#define QOU_H         KC_G
#define QOU_J     MR4(KC_T)
#define QOU_K     MR3(KC_N)
#define QOU_L     MR2(KC_R)
#define QOU_SCLN  MR1(KC_S)
#define QOU_ENT   KC_Q

#define QOU_Z     KC_V
#define QOU_X     KC_COMM
#define QOU_C     KC_DOT
#define QOU_V     KC_SLSH
#define QOU_B     KC_SCLN
#define QOU_N     KC_B
#define QOU_M     KC_D
#define QOU_COMM  KC_F
#define QOU_DOT   KC_M
#define QOU_SLSH  KC_W

// symbols
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
#define SYM_COMM  KC_GRAVE
#define SYM_DOT   KC_RCBR
#define SYM_SLSH  KC_NO
