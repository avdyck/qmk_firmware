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

#define LTHUMB1      MT(MOD_LCTL, KC_SPACE)
#define LTHUMB2      KC_LALT
#define LTHUMB3      KC_LGUI
#define LTHUMB4      MO(MDIA)

#define RTHUMB1      KC_LSFT
#define RTHUMB2      MO(SYM)
#define RTHUMB3      KC_LGUI
#define RTHUMB4      TG(NUM)

#define ESCAP        MO(NAV)
#define SJIFT        KC_LSFT
#define ENTR         KC_ENTER
#define SHIFTTHUMB   RTHUMB1
#define SPACETHUMB   LTHUMB1

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
#define QOU_Q     KC_W
#define QOU_W     KC_L
#define QOU_E     KC_H
#define QOU_R     KC_M
#define QOU_T     KC_F
#define QOU_Y     KC_Q
#define QOU_U     KC_B
#define QOU_I     KC_U
#define QOU_O     KC_O
#define QOU_P     KC_Y

#define QOU_A     KC_C
#define QOU_S     KC_R
#define QOU_D     KC_N
#define QOU_F     KC_T
#define QOU_G     KC_K
#define QOU_H     KC_J
#define QOU_J     KC_S
#define QOU_K     KC_E
#define QOU_L     KC_A
#define QOU_SCLN  KC_I

#define QOU_Z     KC_Z
#define QOU_X     KC_X
#define QOU_C     KC_P
#define QOU_V     KC_D
#define QOU_B     KC_V
#define QOU_N     KC_COLN
#define QOU_M     KC_G
#define QOU_COMM  KC_COMM
#define QOU_DOT   KC_DOT
#define QOU_SLSH  KC_SLSH

// symbols
#define SYM_Q     KC_GRV
#define SYM_A     KC_BSLS
#define SYM_Z     KC_NO

#define SYM_W     KC_LBRC
#define SYM_S     KC_LPRN
#define SYM_X     KC_LCBR

#define SYM_E     KC_RBRC
#define SYM_D     KC_RPRN
#define SYM_C     KC_RCBR

#define SYM_R     KC_EXLM
#define SYM_F     KC_COLN
#define SYM_V     KC_SCLN

#define SYM_T     KC_PERC
#define SYM_G     KC_PIPE
#define SYM_B     KC_CIRC

#define SYM_Y     KC_HASH
#define SYM_H     KC_AMPR
#define SYM_N     KC_DLR

#define SYM_U     KC_QUES
#define SYM_J     KC_EQL
#define SYM_M     KC_TILD

#define SYM_I     KC_MINS
#define SYM_K     KC_LT
#define SYM_COMM  KC_ASTR

#define SYM_O     KC_PLUS
#define SYM_L     KC_GT
#define SYM_DOT   KC_DOT

#define SYM_P     KC_QUOT
#define SYM_SCLN  KC_DQUO
#define SYM_SLSH  KC_SLSH

// combos (Comb Left/Right C(ontrol)/A(lt)/S(hift)/G(ui)
#define CombLC QOU_F
#define CombLA QOU_D
#define CombLS QOU_S
#define CombLG QOU_A

#define CombRC QOU_J
#define CombRA QOU_K
#define CombRS QOU_L
#define CombRG QOU_SCLN

bool process_custom_shift_keys(uint16_t keycode, keyrecord_t *record);
