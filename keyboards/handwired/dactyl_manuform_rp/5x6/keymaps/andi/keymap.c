#include QMK_KEYBOARD_H
//#include "keymap_german.h"

#define _MAG    0
#define _QWERTY 1
#define _LOWER  2
#define _RAISE  3

#define KC_RAISE MO(_RAISE)
#define KC_RAISO OSL(_RAISE)

#define KC_LOWER MO(_LOWER)

#define DE_UE RALT(KC_Y)
#define DE_AE RALT(KC_Q)
#define DE_OE RALT(KC_P)
#define DE_SS RALT(KC_S)
#define DE_GRAD RALT(KC_COLN)
#define DE_EURO RALT(KC_5)

#define KC_MAG DF(_MAG)
#define KC_QWER DF(_QWERTY)
#define KC_OLCTL OSM(MOD_LCTL)
#define KC_ORCTL OSM(MOD_RCTL)

#define KC_OLSFT OSM(MOD_LSFT)
#define KC_ORSFT OSM(MOD_RSFT)

#define KC_OLALT OSM(MOD_LALT)
#define KC_ORALT OSM(MOD_RALT)

#define KC_OLGUI OSM(MOD_LGUI)
#define KC_ORGUI OSM(MOD_RGUI)

#define KC_OCAG OSM(MOD_LCTL|MOD_LALT|MOD_LGUI)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_MAG] = LAYOUT_5x6(
        KC_CUT , KC_F1 , KC_F2 ,LGUI_T(KC_F3),KC_F4, KC_F5 ,                     KC_F6 , KC_F7 ,RGUI_T(KC_F8),RALT_T(KC_F9),KC_F10,KC_PSCR,
        KC_CAPS, KC_V  , KC_P  , KC_L  , KC_C  , KC_F  ,                         KC_K  , KC_U  , KC_O  , KC_Y , KC_J ,KC_FIND,
        KC_PSTE, KC_R  , KC_T  , KC_N  , KC_S  , KC_D  ,                        KC_QUOT, KC_A  , KC_E  , KC_I , KC_H ,KC_F21 ,
       KC_OLALT, KC_Z  , KC_B  , KC_M  , KC_G  , KC_W  ,                         KC_X  ,KC_DOT ,KC_MINS,KC_COMM,KC_Q ,KC_OLALT,
                       KC_OLCTL,KC_OLGUI,                                                       KC_ORGUI,KC_ORCTL,
                                       KC_OLSFT,OSL(_LOWER),                    KC_SPC ,KC_ORSFT,
                                       KC_ESC  ,KC_RAISO,                      KC_RAISE,OSL(_LOWER),
                                       KC_OCAG ,                                        KC_APP
    ),

    [_QWERTY] = LAYOUT_5x6(
        KC_GRV , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_EQL ,
        KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_RBRC,
        KC_LBRC, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
       KC_OLALT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_ORALT,
                       KC_OLCTL,KC_ORGUI,                                                       KC_ORGUI,KC_ORCTL,
                                       KC_OLSFT,OSL(_LOWER),                    KC_SPC ,KC_ORSFT,
                                        KC_ESC ,KC_RAISE,                      KC_RAISE,OSL(_LOWER),
                                        KC_OCAG,                                        KC_APP
    ),

    [_LOWER] = LAYOUT_5x6(
        _______,KC_F11 ,KC_F12 ,KC_F13 ,KC_F14 ,KC_F15 ,                  KC_F16 ,KC_F17 ,KC_F18 ,KC_F19 ,KC_F20 ,_______,
        _______,DE_GRAD, KC_AT ,KC_HASH,KC_PERC,KC_GRV ,                  KC_SLSH,KC_7   , KC_8  , KC_9  ,KC_PMNS,_______,
        _______,KC_PIPE,KC_LBRC,KC_LCBR,KC_LPRN,KC_AMPR,                  KC_ASTR,KC_4   , KC_5  , KC_6  ,KC_PLUS,_______,
        _______,KC_CIRC,KC_RBRC,KC_RCBR,KC_RPRN,KC_DLR,                   KC_0   ,KC_1   , KC_2  , KC_3  ,KC_EQL ,_______,
                        _______,_______,                                                  _______,_______,
                                        _______,_______,                  KC_ENT ,_______,
                                        KC_TAB ,_______,                  _______,_______,
                                        _______,                                  _______
    ),

    [_RAISE] = LAYOUT_5x6(
        QK_BOOT,_______,_______  ,_______,_______ ,_______,                  KC_QWER,KC_MAG  ,_______,RGB_VAI,RGB_SAI,QK_BOOT,
        _______,KC_BSPC,C(KC_BSPC),C(KC_DEL),KC_DEL,KC_INS,                  KC_BSLS, DE_UE  , DE_OE ,_______,_______,RGB_TOG,
        _______,KC_LEFT,KC_DOWN  ,KC_UP  ,KC_RIGHT,KC_ESC ,                  _______, DE_AE  ,DE_EURO,KC_EXLM,DE_SS  ,RGB_MOD,
        _______,KC_HOME,KC_PGDOWN,KC_PGUP,KC_END  ,KC_TAB ,                  _______,KC_COLN ,KC_TILD,KC_SCLN,KC_QUES,RGB_HUI,
                        _______  ,_______,                                                    _______,_______,
                                          _______ ,_______,                  _______,_______,
                                          _______ ,_______,                  _______,_______,
                                          _______ ,                                  _______
    ),

/*
         KC_SYSTEM_POWER,
         KC_MUTE,KC_VOLU,KC_VOLD,KC_RGHT,_______,                        _______,KC_SELECT,KC_MENU,KC_HELP,_______,
          _______,,_______,      _______,KC_MPRV,KC_MPLY,KC_MNXT,
          _______,KC_MPRV,KC_MSTP,KC_MPLY,KC_MNXT,_______,                        _______,KC_CALCULATOR,KC_EXECUTE,_______,_______,_______,
 KC_PSLS num /
 KC_PAST Num *
 KC_NLCK
 KC_SLCK
 KC_PCMM num ,
 KC_KP_DOT num .
 KC_PAUSE
        _______,_______,_______,_______,_______,_______,                  _______, _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                  _______, _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                  _______, _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                  _______, _______,_______,_______,_______,_______,
                                 _______,_______,                                                                      _______,_______,
                                           _______,_______,          _______,_______,
                                           _______,_______,          _______,_______,
                                           _______,                                   _______,
 */
};
