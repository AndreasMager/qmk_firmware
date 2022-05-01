#include QMK_KEYBOARD_H

#define _NEO_1 0
#define _LOWER 1
#define _RAISE 2
#define _NEO_3 3
#define _NEO_4 4

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

//#define NEO_4 LT(_NEO_4, TG(_NEO_4)
// One Tap will toggle this layer hold the key for single use
#define NEO_4 TT(_NEO_4)

#define NEO_3 MO(_NEO_3)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*    [_QWERTY] = LAYOUT_5x6(
        KC_GRV , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_EQL ,
        KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_RBRC,
        KC_LBRC, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
        KC_LALT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_LALT,
                         KC_BSPC,KC_DEL,                                                        KC_ESC, NEO_3,
                                         KC_LSFT,KC_ENT,                         KC_SPC ,KC_RSFT,
                                         KC_LGUI,NEO_4 ,                         NEO_4  ,KC_RGUI,
                                         KC_LCTL,KC_CAPS,                        KC_CAPS,KC_RCTL
    ),
*/
    [_NEO_1] = LAYOUT_5x6(
        KC_GRV , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9 , KC_0 ,KC_EQL ,
        KC_TAB , KC_X  , KC_V  , KC_L  , KC_C  , KC_W  ,                         KC_K  , KC_H  , KC_G  , KC_F , KC_Q ,KC_SCLN,
        KC_ESC_, KC_U  , KC_I  , KC_A  , KC_E  , KC_O  ,                         KC_S  , KC_R  , KC_T  , KC_D , KC_Y ,KC_QUOT,
        KC_LALT,KC_LBRC,KC_RBRC, KC_Ä  , KC_P  , KC_Z  ,                         KC_B  , KC_M  ,KC_COMM,KC_DOT, KC_J ,KC_LALT,
                         KC_BSPC,KC_DEL,                                                        KC_SLSH, NEO_3,
                                         KC_LSFT,KC_ENT,                         KC_SPC ,KC_RSFT,
                                         KC_LGUI,NEO_4 ,                         NEO_4  ,KC_RGUI,
                                         KC_LCTL,KC_CAPS,                        KC_CAPS,KC_RCTL
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
        _______,_______,_______  ,_______  ,_______ ,_______  ,                  _______, KC_TAB,KC_KP_SLASH,KC_ASTR,KC_KP_MINUS,_______,
        _______,KC_PGUP,KC_BSPACE,KC_UP    ,KC_DEL  ,KC_PGDOWN,                  KC_RBRC, KC_P7 , KC_P8     , KC_P9 ,KC_PLUS    ,_______,
        _______,KC_HOME,KC_LEFT  ,KC_DOWN  ,KC_RIGHT,KC_END   ,                  KC_RPRN, KC_P4 , KC_P5     , KC_P6 ,KC_KP_COMMA,KC_KP_DOT,
        _______,KC_ESC ,KC_TAB   ,KC_INSERT,KC_ENTER,KC_UNDO  ,                  _______, KC_P1 , KC_P2     , KC_P3 ,KC_SCLN ,_______,
                                                _______,KC_PSCR,            _______,_______,
                                                _______,_______,            KC_0   ,_______,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______

  ),

  [_NEO_3] = LAYOUT_5x6(

        _______,_______,_______  ,_______  ,_______ ,_______  ,                  _______, _______,_______,_______,_______,_______,
        _______,KC_UNDS,KC_LBRC  ,KC_RBRC  ,_______ ,_______  ,                  _______, _______,_______,_______,_______,_______,
        KC_SLSH,_______,KC_LCBR  ,KC_RCBR  ,_______ ,_______  ,                  _______, _______,_______,_______,_______,_______,
        _______,_______,_______  ,_______  ,_______ ,_______  ,                  _______, _______,_______,_______,_______,_______,
                                                 _______,_______,            _______,_______,
                                                 _______,_______,            _______,_______,
                                                 _______,_______,            _______,_______,
                                                 _______,_______,            _______,_______


          )

/*
 *
 *
 */
};
