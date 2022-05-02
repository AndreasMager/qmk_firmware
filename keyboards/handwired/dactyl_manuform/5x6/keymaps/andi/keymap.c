#include QMK_KEYBOARD_H
//#include "keymap_german.h"

#define _NEO_1 0
#define _LOWER 1
#define _RAISE 2
#define _NEO_3 3
#define _NEO_4 4
#define _NEO_D 5

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

//#define NEO_4 LT(_NEO_4, TG(_NEO_4)
// 2 Tap will toggle this layer hold the key for single use
#define NEO_4 MO(_NEO_4)

#define NEO_3 MO(_NEO_3)
#define NEO_DIA OSL(_NEO_D)

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
/*
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
#define COMBO_COUNT 1

const uint16_t PROGMEM layer4_combo[] = {NEO_4, NEO_4, COMBO_END};
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
        KC_ESC , KC_U  , KC_I  , KC_A  , KC_E  , KC_O  ,                         KC_S  , KC_N  , KC_R  , KC_T , KC_D , KC_Y ,
        KC_LALT,KC_LBRC,KC_RBRC,NEO_DIA, KC_P  , KC_Z  ,                         KC_B  , KC_M  ,KC_COMM,KC_DOT, KC_J ,KC_LALT,
                         KC_BSPC,KC_DEL,                                                        KC_SLSH, RAISE,
                                         KC_LSFT,KC_ENT,                         KC_SPC,KC_RSFT,
                                         KC_LGUI,NEO_3 ,                         NEO_3 ,KC_RGUI,
                                         KC_LCTL,NEO_4 ,                         NEO_4 ,KC_RCTL
    ),

    [_LOWER] = LAYOUT_5x6(
        KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                        KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,
        _______,_______,_______,_______,_______,KC_LBRC,                        KC_RBRC, KC_P7 , KC_P8 , KC_P9 ,_______,KC_PLUS,
        _______,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LPRN,                        KC_RPRN, KC_P4 , KC_P5 , KC_P6 ,KC_MINS,KC_PIPE,
        _______,_______,_______,_______,_______,_______,                        _______, KC_P1 , KC_P2 , KC_P3 ,KC_EQL ,KC_UNDS,
                                                _______,KC_PSCR,            _______, KC_P0,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______
    ),


   [_RAISE] = LAYOUT_5x6(
          KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
          _______,_______,_______,_______,_______,KC_LBRC,                        KC_RBRC,_______,KC_NLCK,KC_INS ,KC_SLCK,KC_MUTE,
          _______,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,KC_LPRN,                        KC_RPRN,KC_MPRV,KC_MPLY,KC_MNXT,_______,KC_VOLU,
          _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,KC_VOLD,
                                                  _______,_______,            KC_EQL ,_______,
                                                  _______,_______,            _______,_______,
                                                  _______,_______,            _______,_______,
                                                  _______,_______,            _______,_______
    ),

  /* NEO_4: Cursor & Numpad
   */
  [_NEO_4] = LAYOUT_5x6(
        _______,_______,_______  ,_______  ,_______ ,_______  ,                  _______, KC_TAB,KC_PSLS,KC_PAST,KC_PMNS,_______,
        _______,KC_PGUP,KC_BSPACE,KC_UP    ,KC_DEL  ,KC_PGDOWN,                  KC_RBRC, KC_P7 , KC_P8 , KC_P9 ,KC_PLUS,_______,
        _______,KC_HOME,KC_LEFT  ,KC_DOWN  ,KC_RIGHT,KC_END   ,                  KC_RPRN, KC_P4 , KC_P5 , KC_P6 ,KC_PCMM,KC_KP_DOT,
        _______,KC_ESC ,KC_TAB   ,KC_INSERT,KC_ENTER,KC_UNDO  ,                  _______, KC_P1 , KC_P2 , KC_P3 ,KC_SCLN,_______,
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
