
enum LAYERS {
    QWERTY,
    SYMBOLS,
    NAV,
    FUNCTIONS,
    MEDIA,
    NUMPAD,
    GAMING
};

enum keys {
    CUSTOM_1 = SAFE_RANGE,
    CUSTOM_2
};

#define ________     KC_TRANSPARENT
#define LTHUMB       CUSTOM_1
#define RTHUMB       CUSTOM_2
#define ESCAP        MO(NAV)
#define ZOOMIN       LCTL(KC_PLUS)
#define ZOOMOUT      LCTL(KC_MINUS)
#define ZOOMNTR      LCTL(KC_0)
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

// combos (Comb Left/Right C(ontrol)/A(lt)/S(hift)/G(ui)
#define CombLC KC_F
#define CombLA KC_D
#define CombLS KC_S
#define CombLG KC_A

#define CombRC KC_J
#define CombRA KC_K
#define CombRS KC_L
#define CombRG KC_SCOLON

#define SYM_Q     KC_CIRC
#define SYM_W     KC_MINS
#define SYM_E     KC_TILD
#define SYM_R     KC_PLUS
#define SYM_T     KC_PERC
#define SYM_Y     KC_HASH
#define SYM_U     KC_LBRC
#define SYM_I     KC_QUOT
#define SYM_O     KC_RBRC
#define SYM_P     KC_DLR

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
#define SYM_B     KC_NO
#define SYM_N     KC_NO
#define SYM_M     KC_LCBR
#define SYM_COMM  KC_GRV
#define SYM_DOT   KC_RCBR
#define SYM_SLSH  KC_NO

uint16_t realcode(uint16_t keycode) {
  switch (keycode) {
    case LTHUMB: return KC_ESCAPE;
    case RTHUMB: return KC_SPACE;
    default:     return keycode;
  }
}

uint16_t sl(uint16_t keycode) {
  switch (keycode) {
    case KC_Q:   return SYM_Q;
    case KC_W:   return SYM_W;
    case KC_E:   return SYM_E;
    case KC_R:   return SYM_R;
    case KC_T:   return SYM_T;
    case KC_Y:   return SYM_Y;
    case KC_U:   return SYM_U;
    case KC_I:   return SYM_I;
    case KC_O:   return SYM_O;
    case KC_P:   return SYM_P;
    case KC_A:   return SYM_A;
    case KC_S:   return SYM_S;
    case KC_D:   return SYM_D;
    case KC_F:   return SYM_F;
    case KC_G:   return SYM_G;
    case KC_H:   return SYM_H;
    case KC_J:   return SYM_J;
    case KC_K:   return SYM_K;
    case KC_L:   return SYM_L;
    case KC_SCLN:return SYM_SCLN;
    case KC_Z:   return SYM_Z;
    case KC_X:   return SYM_X;
    case KC_C:   return SYM_C;
    case KC_V:   return SYM_V;
    case KC_B:   return SYM_B;
    case KC_N:   return SYM_N;
    case KC_M:   return SYM_M;
    case KC_COMM:return SYM_COMM;
    case KC_DOT: return SYM_DOT;
    case KC_SLSH:return SYM_SLSH;
    default:     return keycode;
  }
}

