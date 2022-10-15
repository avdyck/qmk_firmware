#pragma once

#include QMK_KEYBOARD_H

enum LAYERS {
    QWERTY,
    QOUPY,
    SYM,
    NAV,
    MDIA,
    GMNG
};

#define LTHUMB1      KC_LSFT
#define LTHUMB2      MO(SYM)
#define LTHUMB3      KC_LALT
#define LTHUMB4      MO(MDIA)

#define RTHUMB1      KC_SPACE
#define RTHUMB2      MO(NAV)
#define RTHUMB3      KC_LGUI
#define RTHUMB4      TG(SYM)

#define TABBB        KC_DEL
#define ESCAP        KC_TAB
#define SJIFT        KC_LCTL
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

// qwerty bindings
#define  QW_Q     KC_Q
#define  QW_A     MT(MOD_LGUI, KC_A)
#define  QW_Z     KC_Z

#define  QW_W     KC_W
#define  QW_S     MT(MOD_LSFT, KC_S)
#define  QW_X     KC_X

#define  QW_E     KC_E
#define  QW_D     MT(MOD_LALT, KC_D)
#define  QW_C     KC_C

#define  QW_R     KC_R
#define  QW_F     MT(MOD_LCTL, KC_F)
#define  QW_V     KC_V

#define  QW_T     KC_T
#define  QW_G     KC_G
#define  QW_B     KC_B

#define  QW_Y     KC_Y
#define  QW_H     KC_H
#define  QW_N     KC_N

#define  QW_U     KC_U
#define  QW_J     MT(MOD_RCTL, KC_J)
#define  QW_M     KC_M

#define  QW_I     KC_I
#define  QW_K     MT(MOD_RALT, KC_K)
#define  QW_COMM  KC_COMM

#define  QW_O     KC_O
#define  QW_L     MT(MOD_RSFT, KC_L)
#define  QW_DOT   KC_DOT

#define  QW_P     KC_P
#define  QW_SCLN  MT(MOD_RGUI, KC_SCLN)
#define  QW_SLSH  KC_SLSH

// nav bindings
#define  NV_F9     KC_F9
#define  NV_F6     MT(MOD_RSFT, KC_F6)
#define  NV_F3     KC_F3

#define  NV_F8     KC_F8
#define  NV_F5     MT(MOD_RALT, KC_F5)
#define  NV_F2     KC_F2

#define  NV_F7     KC_F7
#define  NV_F4     MT(MOD_RCTL, KC_F4)
#define  NV_F1     KC_F1

#define  NV_F10    KC_F10
#define  NV_F11    KC_F11
#define  NV_F12    KC_F12

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
#define SYM_Q     KC_NO
#define SYM_A     KC_EXLM
#define SYM_Z     KC_NO

#define SYM_W     KC_MINS
#define SYM_S     KC_LT
#define SYM_X     KC_ASTR

#define SYM_E     KC_TILD
#define SYM_D     KC_EQL
#define SYM_C     KC_NO

#define SYM_R     KC_PLUS
#define SYM_F     KC_GT
#define SYM_V     KC_SLSH

#define SYM_T     KC_PERC
#define SYM_G     KC_PIPE
#define SYM_B     KC_CIRC

#define SYM_Y     KC_HASH
#define SYM_H     KC_AMPR
#define SYM_N     KC_DLR

#define SYM_U     KC_LBRC
#define SYM_J     KC_LPRN
#define SYM_M     KC_LCBR

#define SYM_I     KC_QUOT
#define SYM_K     KC_DQUO
#define SYM_COMM  KC_GRV

#define SYM_O     KC_RBRC
#define SYM_L     KC_RPRN
#define SYM_DOT   KC_RCBR

#define SYM_P     KC_NO
#define SYM_SCLN  KC_BSLS
#define SYM_SLSH  KC_NO

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
