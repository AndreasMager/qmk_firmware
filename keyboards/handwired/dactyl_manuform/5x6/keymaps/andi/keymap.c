#include QMK_KEYBOARD_H
//#include "keymap_german.h"

#define _LOWER 2
#define _RAISE 3
#define _NEO_3 4
#define _NEO_4 5
#define _MAG   0
#define _DIA   7

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

#define NEO_4 MO(_NEO_4)

#define DE_UE RALT(KC_Y)
#define DE_AE RALT(KC_Q)
#define DE_OE RALT(KC_P)
#define DE_SS RALT(KC_S)
#define DE_GRAD RALT(KC_COLN)
#define DE_EURO RALT(KC_5)

#define MLALT LALT_T(KC_LBRC)
#define MRALT LALT_T(KC_RBRC)

#define SNEO3 LT(_LOWER, KC_SPC)
#define ENEO3 LT(_LOWER, KC_ENT)

#define LNEO4 MO(_NEO_4)
#define RNEO4 MO(_NEO_4)

#define DIA   OSL(_DIA)

#define MRALT2 LALT_T()
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
/*
const uint16_t PROGMEM layer4_combo[] = {LNEO4, RNEO4, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
  COMBO(layer4_combo, TG(_NEO_4))
};
 *
 */



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

    [_MAG] = LAYOUT_5x6(
        KC_CUT , KC_F1 ,LALT_T(KC_F2),LGUI_T(KC_F3),LCTL_T(KC_F4), KC_F5 ,       KC_F6 ,RCTL_T(KC_F7),RGUI_T(KC_F8),LALT_T(KC_F9),KC_F10,KC_PSCR,
        KC_COPY, KC_V  , KC_P  , KC_L  , KC_C  , KC_F  ,                         KC_K  , KC_U  , KC_O  , KC_Y , KC_J ,KC_FIND,
        KC_PSTE, KC_R  , KC_T  , KC_N  , KC_S  , KC_D  ,                        KC_QUOT, KC_A  , KC_E  , KC_I , KC_H ,KC_NO,
        KC_UNDO, KC_Z  , KC_B  , KC_M  , KC_G  , KC_W  ,                         KC_X  ,KC_DOT ,KC_MINS,KC_COMM,KC_Q ,KC_AGIN,
                         OSM(MOD_LCTL) , OSM(MOD_LALT),                                KC_CAPS, KC_APP,
                                         OSM(MOD_LSFT),OSL(_LOWER),              KC_SPC, DIA  ,
                                         KC_ESC ,LNEO4  ,                        RNEO4 ,KC_TAB,
                                         OSM(MOD_LGUI),KC_NO  ,                        KC_NO ,KC_NO
    ),

    [_DIA] = LAYOUT_5x6(
        _______,_______,_______,_______,_______,_______,                  _______, _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                  KC_BSLS, DE_UE  , DE_OE ,_______,_______,_______,
        _______,_______,_______,_______,DE_SS  ,KC_DLR ,                  _______, DE_AE  ,DE_EURO,KC_EXLM,_______,_______,
        _______,_______,KC_SLSH,_______,DE_GRAD,KC_TILD,                  _______, KC_COLN,_______,KC_SCLN,KC_QUES,_______,
                                     _______,_______,                   _______,_______,
                                           _______,_______,          _______,_______,
                                           _______,_______,          _______,_______,
                                           _______,_______,          _______,_______

    ),

    [_LOWER] = LAYOUT_5x6(
        _______,KC_F11, KC_F12 ,KC_F13 ,KC_F14 ,KC_F15 ,                  KC_F16 ,KC_F17 ,KC_F18 ,KC_F19 ,KC_F20 ,_______,
        _______,_______, KC_AT ,KC_HASH,KC_PERC,_______,                  KC_SLSH,KC_7   , KC_8  , KC_9  ,KC_PMNS,_______,
        _______,KC_PIPE,KC_AMPR,KC_LCBR,KC_LPRN,KC_LBRC,                  KC_ASTR,KC_4   , KC_5  , KC_6  ,KC_PLUS,_______,
        _______,KC_CIRC,KC_GRV ,KC_RCBR,KC_RPRN,KC_RBRC,                  KC_0   ,KC_1   , KC_2  , KC_3  ,KC_EQL ,_______,
                                            _______,_______,                    _______,_______,
                                                _______,_______,            KC_ENT ,_______,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______
    ),


   [_RAISE] = LAYOUT_5x6(
          _______,_______,_______,_______,_______,_______,                  _______, _______,_______,_______,_______,KC_SYSTEM_POWER,
          _______,KC_MUTE,KC_VOLU,KC_VOLD,KC_RGHT,_______,                        _______,KC_CUT,KC_SELECT,KC_MENU,KC_HELP,_______,
          _______,KC_WWW_BACK,KC_WWW_STOP,KC_WWW_REFRESH,KC_WWW_FORWARD,_______,      _______,KC_MPRV,KC_MPLY,KC_MNXT,_______,_______,
          _______,KC_MPRV,KC_MSTP,KC_MPLY,KC_MNXT,_______,                        _______,KC_CALCULATOR,KC_EXECUTE,_______,_______,_______,
                                                  _______,_______,            _______,_______,
                                                  _______,_______,            _______,_______,
                                                  _______,_______,            _______,_______,
                                                  _______,_______,            _______,_______
    ),

  /* NEO_4: Cursor & Numpad
   */
  [_NEO_4] = LAYOUT_5x6(
        QK_BOOT,_______,_______  ,_______,_______ ,_______ ,                  _______, _______,_______,RGB_VAI,RGB_SAI,QK_BOOT,
        _______,KC_BSPC,KC_ESC   ,KC_INS ,KC_DEL  ,_______ ,                  _______, _______,_______,_______,_______,RGB_TOG,
        _______,KC_LEFT,KC_DOWN  ,KC_UP  ,KC_RIGHT,_______ ,                  _______,KC_WWW_BACK,KC_WWW_FAVORITES,KC_WWW_REFRESH,KC_WWW_FORWARD,RGB_MOD,
        _______,KC_HOME,KC_PGDOWN,KC_PGUP,KC_END  ,_______ ,                  _______, _______,_______,_______,_______,RGB_HUI,
                                            _______,_______,                    _______,_______,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______,
                                                _______,_______,            _______,_______
  ),


/*
 KC_PSLS num /
 KC_PAST Num *
 KC_NLCK
 KC_SLCK
 KC_PCMM num ,
 KC_KP_DOT num .
 KC_PAUSE
 ,,,,
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

#ifdef OLED_ENABLE
#include <stdio.h>
//#include "oled_display.h"
#include "oled_driver.h"

uint8_t oledState = 0;

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };
    oled_write_P(qmk_logo, false);
}

bool render_status(void) {
    if (oledState == 0) {
        // Clear OLED
        oled_clear();
    } else if (oledState == 1) {
        // Display Logo
        render_logo();
    } else if (oledState == 2) {
        if (timer_read() < 5000) {
            // Display Logo 5 sec
            return false;
        }

        // Clear OLED
        oled_clear();
    }

    // for Keyboard Scan rate Up hack
    //   3 =  428 scan/sec
    //   4 =  808 scan/sec
    //   5 = 1141 scan/sec
    //   8 = 1970 scan/sec
    //  10 = 2400 scan/sec
    //  30 = 4565 scan/sec
    //  50 = 5346 scan/sec
    // 100 = 6120 scan/sec
    // 200 = 6575 scan/sec
    if (oledState < 10) {
        ++oledState;
        return false;
    }

    oledState = 3;

    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _MAG:
            oled_write_P(PSTR("Default\n"), false);
            break;
        case _DIA:
            oled_write_P(PSTR("Dia\n"), false);
            break;
        case _NEO_4:
            oled_write_P(PSTR("Com\n"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("Sign\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("[NUM]") : PSTR("[   ]"), led_state.num_lock);
    oled_write_P(led_state.caps_lock ? PSTR("[CAP]") : PSTR("[   ]"), led_state.caps_lock);
    oled_write_P(led_state.scroll_lock ? PSTR("[SCR]") : PSTR("[   ]"), led_state.scroll_lock);
    oled_write_P(PSTR("\n"), false);

#ifdef DEBUG_MATRIX_SCAN_RATE
    char str[24] = "";
    sprintf(str, "Scan rate:%5ld/sec", get_matrix_scan_rate());
    oled_write(str, false);
#endif

    return false;
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) {
        return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
    }

    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_status();  // Renders the current keyboard state (layer, lock, caps, scroll, etc)
    } else {
        render_logo();  // Renders a static logo
        oled_scroll_left();  // Turns on scrolling
    }
    return false;
}
#endif
