#include QMK_KEYBOARD_H
//#include "keymap_german.h"

#define _NEO_1 1
#define _LOWER 2
#define _RAISE 3
#define _NEO_3 4
#define _NEO_4 5
#define _NEO_D 6
#define _MAG   0
#define _DIA   7


#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

//#define NEO_4 LT(_NEO_4, TG(_NEO_4)
// 2 Tap will toggle this layer hold the key for single use
#define NEO_4 MO(_NEO_4)

#define NEO_3 MO(_NEO_3)
#define NEO_DIA OSL(_NEO_D)
/*
enum unicode_names {
  UE,
  AE,
  OE,
  SS,
  ue,
  ae,
  oe,
  ss,
  euro
};

const uint32_t PROGMEM unicode_map[] = {
  [UE] = 0x00dc,
  [AE] = 0x00c4,
  [OE] = 0x00d6,
  [SS] = 0x1e9e,
  [ue] = 0x00fc,
  [ae] = 0x00e4,
  [oe] = 0x00f6,
  [ss] = 0x00df,
  [euro] = 0x20ac
};

#define DE_UE XP(ue,UE)
#define DE_AE XP(ae,AE)
#define DE_OE XP(oe,OE)
#define DE_SS XP(ss,SS)
#define DE_EURO X(euro)
*/

#define DE_UE RALT(KC_Y)
#define DE_AE RALT(KC_Q)
#define DE_OE RALT(KC_P)
#define DE_SS RALT(KC_S)
#define DE_EURO RALT(KC_5)

#define MLALT LALT_T(KC_LBRC)
#define MRALT LALT_T(KC_RBRC)

#define SNEO3 LT(_NEO_3, KC_SPC)
#define ENEO3 LT(_NEO_3, KC_ENT)

#define SNEO4 LT(_NEO_4, KC_ESC)
#define ENEO4 LT(_NEO_4, KC_ESC)

#define MLALT2 OSL(_DIA)

#define MRALT2 LALT_T(KC_SLSH)
/*
 *
 *
#define NEO_E LT(NEO_4,KC_E)
#define NEO_N LT(NEO_4,KC_N)
#define NEO_A LT(NEO_3,KC_A)
#define NEO_R LT(NEO_3,KC_R)
#define NEO_I LCTL_T(KC_I)
#define NEO_T RCTL_T(KC_T)
#define NEO_U LALT_T(KC_U)
#define NEO_D RALT_T(KC_D)

        KC_ESC , NEO_U , NEO_I , NEO_A , NEO_E , KC_O  ,                         KC_S  , NEO_N , NEO_R , NEO_T, NEO_D , KC_Y ,
 */

const uint16_t PROGMEM layer4_combo[] = {SNEO4, ENEO4, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
  COMBO(layer4_combo, TG(_NEO_4))
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
   [_QWERTY] = LAYOUT_5x6(
        KC_GRV , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_EQL ,
        KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_RBRC,
        KC_LBRC, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
        KC_LALT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_LALT,
                         KC_BSPC,KC_DEL,                                                        KC_ESC, NEO_3,
                                           KC_LSFT,KC_ENT,                         KC_SPC ,KC_RSFT,
                                         KC_LGUI,NEO_4 ,                         NEO_4  ,KC_RGUI,
                                         KC_LCTL,KC_CAPS,                        KC_CAPS,KC_RCTL
    ),KC_QUOT,
*/
    [_NEO_1] = LAYOUT_5x6(
        KC_GRV , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9 , KC_0 ,KC_EQL ,
        KC_TAB , KC_X  , KC_V  , KC_L  , KC_C  , KC_W  ,                         KC_K  , KC_H  , KC_G  , KC_F , KC_Q ,KC_SCLN,
        KC_ESC , KC_U  , KC_I  , KC_A  , KC_E  , KC_O  ,                         KC_S  , KC_N  , KC_R  , KC_T , KC_D ,KC_SLSH,
        MLALT  ,KC_QUOT,LALT_T(KC_Y),LGUI_T(NEO_DIA),LCTL_T(KC_P), KC_Z  ,                         KC_B  ,RCTL_T(KC_M),RGUI_T(KC_COMM),LALT_T(KC_DOT), KC_J ,MRALT  ,
                         DF(_MAG),_______,                                                    _______, RAISE,
                                         KC_LSFT,ENEO3  ,                        SNEO3  ,KC_RSFT,
                                         KC_LGUI,ENEO4  ,                        SNEO4  ,KC_RGUI,
                                         KC_BSPC,KC_LCTL,                        KC_RCTL,KC_DEL
    ),


    [_MAG] = LAYOUT_5x6(
        KC_GRV , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9 , KC_0 ,KC_EQL ,
        KC_TAB , KC_V  , KC_P  , KC_L  , KC_C  , KC_F  ,                         KC_K  , KC_U  , KC_O  , KC_Y , KC_J ,KC_SCLN,
        KC_ESC , KC_R  , KC_T  , KC_N  , KC_S  , KC_D  ,                        KC_QUOT, KC_A  , KC_E  , KC_I , KC_H ,KC_BSPC,
        MLALT2 , KC_Z  ,LALT_T(KC_B),LGUI_T(KC_M),LCTL_T(KC_G), KC_W  ,                         KC_X  ,RCTL_T(KC_COMM),RGUI_T(KC_DOT),LALT_T(KC_MINS),KC_Q ,MRALT2 ,
                         DF(_NEO_1),_______,                                                    _______, RAISE,
                                         KC_LSFT,ENEO3  ,                        SNEO3  ,KC_RSFT,
                                         KC_LGUI,ENEO4  ,                        SNEO4  ,KC_RGUI,
                                         KC_BSPC,KC_LCTL,                        KC_RCTL,KC_DEL
    ),

    [_DIA] = LAYOUT_5x6(

        _______,_______,_______,_______,_______,_______,                  _______, _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                  _______, DE_UE  , DE_OE ,_______,_______,_______,
        _______,_______,_______,_______,DE_SS  ,_______,                  _______, DE_AE  ,DE_EURO,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                  _______, _______,_______,_______,_______,_______,
                                       _______,_______,                 _______,_______,
                                           _______,_______,          _______,_______,
                                           _______,_______,          _______,_______,
                                           _______,_______,          _______,_______

    ),

    [_LOWER] = LAYOUT_5x6(
        _______,_______,_______,_______,_______,_______,                  _______, _______,_______,_______,_______,_______,
        _______,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                  KC_EQL , KC_P7  , KC_P8 , KC_P9 ,KC_PLUS,_______,
        _______,KC_PIPE,KC_AMPR,KC_LCBR,KC_LPRN,KC_LBRC,                  KC_ASTR, KC_P4  , KC_P5 , KC_P6 ,KC_TILD,_______,
        _______,KC_CIRC,KC_BSPC,KC_RCBR,KC_RPRN,KC_RBRC,                  KC_0   , KC_P1  , KC_P2 , KC_P3 ,KC_GRV ,_______,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______
    ),


   [_RAISE] = LAYOUT_5x6(
          KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
          _______,_______,_______,_______,_______,_______,                        _______,_______,KC_NLCK,KC_INS ,KC_SLCK,KC_MUTE,
          _______,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,_______,                        _______,KC_MPRV,KC_MPLY,KC_MNXT,_______,KC_VOLU,
          _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,KC_VOLD,
                                                  _______,_______,            _______,_______,
                                                  _______,_______,            _______,_______,
                                                  _______,_______,            _______,_______,
                                                  _______,_______,            _______,_______
    ),

  /* NEO_4: Cursor & Numpad
   */
  [_NEO_4] = LAYOUT_5x6(
        _______,_______,KC_KB_VOLUME_DOWN,KC_KB_VOLUME_UP,_______ ,_______ ,                  _______, _______,KC_PSLS,KC_PAST,KC_PMNS,_______,
        _______,KC_BSPC,KC_UNDO          ,KC_AGIN        ,KC_DEL  ,_______ ,                  _______, _______ , KC_P8 , KC_P9 ,KC_PLUS,_______,
        _______,KC_LEFT,KC_DOWN          , KC_UP         ,KC_RIGHT,_______ ,                  _______, _______ , KC_P5 , KC_P6 ,KC_PCMM,KC_KP_DOT,
        _______,KC_HOME,KC_PGDOWN        , KC_PGUP       ,KC_END  ,_______ ,                  _______, _______ , KC_P2 , KC_P3 ,KC_SCLN,_______,
                                                _______,KC_PSCR,            _______,_______,
                                                _______,_______,            KC_0   ,_______,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______
  ),

  [_NEO_3] = LAYOUT_5x6(

        _______,_______,_______,_______,_______,_______,                  _______,_______,_______,_______,_______,_______,
        _______,_______,KC_UNDS,KC_LBRC,KC_RBRC,KC_CIRC,                  KC_EXLM,KC_LT  ,KC_GT  ,KC_EQL ,KC_AMPR,_______,
        _______,KC_BSLS,KC_SLSH,KC_LCBR,KC_RCBR,KC_ASTR,                  KC_QUES,KC_LPRN,KC_RPRN,KC_MINS,KC_COLN,KC_AT,
        _______,KC_HASH,KC_DLR ,KC_PIPE,KC_TILD,KC_GRV ,                  KC_PLUS,KC_PERC,KC_DQUO,KC_QUOT,KC_SCLN,_______,
                                                 _______,_______,            _______,_______,
                                                 _______,_______,            _______,_______,
                                                 _______,_______,            _______,_______,
                                                 _______,_______,            _______,_______
          ),

  [_NEO_D] = LAYOUT_5x6(

        _______,_______,_______,_______,_______,_______,                  _______, _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                  _______, _______,_______,_______,_______,_______,
        _______,DE_UE  ,_______,DE_AE  ,DE_EURO,DE_OE  ,                  DE_SS  , _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                  _______, _______,_______,_______,_______,_______,
                                      _______,_______,                 _______,_______,
                                           _______,_______,          _______,_______,
                                           _______,_______,          _______,_______,
                                           _______,_______,          _______,_______

          )
/*
 *
   NEO_4: Cursor & Numpad
  /
  [_NEO_4] = LAYOUT_5x6(
        _______,_______,_______  ,_______ ,_______ ,_______ ,                  _______, KC_TAB,KC_PSLS,KC_PAST,KC_PMNS,_______,
        _______,KC_BSPC,KC_UNDO  ,KC_AGIN ,KC_DEL  ,_______ ,                  KC_RBRC, KC_P7 , KC_P8 , KC_P9 ,KC_PLUS,_______,
        _______,KC_LEFT,KC_DOWN  , KC_UP  ,KC_RIGHT,_______ ,                  KC_RPRN, KC_P4 , KC_P5 , KC_P6 ,KC_PCMM,KC_KP_DOT,
        _______,KC_HOME,KC_PGDOWN,KC_PGUP ,KC_END  ,_______ ,                  _______, KC_P1 , KC_P2 , KC_P3 ,KC_SCLN,_______,
                                                _______,KC_PSCR,            _______,_______,
                                                _______,_______,            KC_0   ,_______,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______
  ),
    [_NEO_3] = LAYOUT_5x6(

        _______,_______,_______,_______,_______,_______,                  _______, _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                  _______, _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                  _______, _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                  _______, _______,_______,_______,_______,_______,
                                       _______,_______,                 _______,_______,
                                           _______,_______,          _______,_______,
                                           _______,_______,          _______,_______,
                                           _______,_______,          _______,_______

          )

 */
};
