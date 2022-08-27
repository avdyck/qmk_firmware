
enum LAYERS {
    QWERTY,
    SYMBOLS,
    NAV,
    FUNCTIONS,
    MEDIA,
    NUMPAD,
    GAMING
};

#define ________     KC_TRANSPARENT
#define LTHUMB       LT(SYMBOLS,  KC_ESCAPE)
#define RTHUMB       MT(MOD_LSFT, KC_SPACE)
#define ESCAP        LT(NAV, KC_ESCAPE)
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
