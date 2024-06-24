#include QMK_KEYBOARD_H
//#include "keymap_german.h"

#define _MAG    0
#define _QWERTY 1
#define _LOWER  2
#define _RAISE  3
#define _DIA  4

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
                                       KC_OCAG,KC_NO  ,                         KC_NO ,KC_APP
    ),

    [_QWERTY] = LAYOUT_5x6(
        KC_GRV , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_EQL ,
        KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_RBRC,
        KC_LBRC, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
       KC_OLALT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_ORALT,
                       KC_OLCTL,KC_ORGUI,                                                       KC_ORGUI,KC_ORCTL,
                                       KC_OLSFT,OSL(_LOWER),                    KC_SPC ,KC_ORSFT,
                                       KC_ESC ,KC_RAISE,                      KC_RAISE,OSL(_LOWER),
                                        KC_OCAG,KC_NO  ,                         KC_NO ,KC_APP
    ),

    [_LOWER] = LAYOUT_5x6(
        _______,KC_F11 ,KC_F12 ,KC_F13 ,KC_F14 ,KC_F15 ,                  KC_F16 ,KC_F17 ,KC_F18 ,KC_F19 ,KC_F20 ,_______,
        _______,DE_GRAD, KC_AT ,KC_HASH,KC_PERC,KC_GRV ,                  KC_SLSH,KC_7   , KC_8  , KC_9  ,KC_PMNS,_______,
        _______,KC_PIPE,KC_LBRC,KC_LCBR,KC_LPRN,KC_AMPR,                  KC_ASTR,KC_4   , KC_5  , KC_6  ,KC_PLUS,_______,
        _______,KC_CIRC,KC_RBRC,KC_RCBR,KC_RPRN,KC_DLR,                   KC_0   ,KC_1   , KC_2  , KC_3  ,KC_EQL ,_______,
                        _______,_______,                                                  _______,_______,
                                        _______,_______,                  KC_ENT ,_______,
                                        KC_TAB ,_______,                  _______,_______,
                                        _______,_______,                  _______,_______
    ),

    [_RAISE] = LAYOUT_5x6(
        QK_BOOT,_______,_______  ,_______,_______ ,_______,                  KC_QWER,KC_MAG  ,_______,RGB_VAI,RGB_SAI,QK_BOOT,
        _______,KC_BSPC,C(KC_BSPC),C(KC_DEL),KC_DEL,KC_ESC,                  KC_BSLS, DE_UE  , DE_OE ,_______,_______,RGB_TOG,
        _______,KC_LEFT,KC_DOWN  ,KC_UP  ,KC_RIGHT,KC_TAB ,                  _______, DE_AE  ,DE_EURO,KC_EXLM,KC_QUES,RGB_MOD,
        _______,KC_HOME,KC_PGDN  ,KC_PGUP,KC_END  ,KC_INS ,                  _______,KC_COLN ,KC_TILD,KC_SCLN,DE_SS  ,RGB_HUI,
                        _______  ,_______,                                                    _______,_______,
                                          _______ ,_______,                  _______,_______,
                                          _______ ,_______,                  _______,_______,
                                          _______ ,_______,                  _______,_______
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
                        _______,_______,                                                   _______,_______,
                                        _______,_______,                  _______,_______,
                                        _______,_______,                  _______,_______,
                                        _______,_______,                  _______,_______
 */
};

#ifdef OLED_ENABLE
#include <stdio.h>
//#include "oled_display.h"
#include "oled_driver.h"

static const char PROGMEM nix_logo[] = {
0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0xe0, 0xe7, 0xff, 0xff, 0xfe, 0xfc, 0xf0, 0xe0, 0xe1, 0xe3,
0xef, 0xff, 0xff, 0xfc, 0xfc, 0xfe, 0xbf, 0x1f, 0x07, 0x00, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00,
0x60, 0xf0, 0xf0, 0xf1, 0xf1, 0xf1, 0xf1, 0xf9, 0xff, 0xff, 0x9f, 0x07, 0x01, 0x01, 0x01, 0x01,
0x01, 0x01, 0x01, 0x01, 0x07, 0x9f, 0xff, 0xfe, 0xfc, 0xff, 0xff, 0xff, 0xf3, 0xf0, 0xf0, 0x60,
0x00, 0x00, 0x00, 0x1c, 0x3f, 0x3f, 0x0f, 0x03, 0x87, 0xdf, 0xff, 0xfe, 0xf8, 0xf8, 0xf8, 0x78,
0x78, 0x78, 0x78, 0xf8, 0xfe, 0xff, 0xff, 0xff, 0x79, 0x78, 0x78, 0x38, 0x18, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x0f, 0x0f, 0x07, 0x03, 0x03, 0x0f, 0x0f, 0x0f,
0x0c, 0x08, 0x00, 0x00, 0x03, 0x07, 0x0f, 0x0f, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    };

static void render_logo(void) {
    oled_write_raw_P(nix_logo, sizeof(nix_logo));
}



bool            shift_held = false;
/* KEYBOARD PET START */

/* settings */
#    define MIN_WALK_SPEED      10
#    define MIN_RUN_SPEED       40

/* advanced settings */
#    define ANIM_FRAME_DURATION 200  // how long each frame lasts in ms
#    define ANIM_SIZE           96   // number of bytes in array. If you change sprites, minimize for adequate firmware size. max is 1024

/* timers */
uint32_t anim_timer = 0;
uint32_t anim_sleep = 0;

/* current frame */
uint8_t current_frame = 0;

/* status variables */
int   current_wpm = 0;
led_t led_usb_state;

bool isBarking = false;
bool isSneaking = false;
bool isJumping  = false;
bool showedJump = true;

/* logic */
static void render_luna(int LUNA_X, int LUNA_Y) {
    /* Sit */
    static const char PROGMEM sit[2][ANIM_SIZE] = {/* 'sit1', 32x22px */
                                                   {
                                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x1c, 0x02, 0x05, 0x02, 0x24, 0x04, 0x04, 0x02, 0xa9, 0x1e, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x10, 0x08, 0x68, 0x10, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0x82, 0x7c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x0c, 0x10, 0x10, 0x20, 0x20, 0x20, 0x28, 0x3e, 0x1c, 0x20, 0x20, 0x3e, 0x0f, 0x11, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                   },

                                                   /* 'sit2', 32x22px */
                                                   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x1c, 0x02, 0x05, 0x02, 0x24, 0x04, 0x04, 0x02, 0xa9, 0x1e, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x90, 0x08, 0x18, 0x60, 0x10, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x0e, 0x82, 0x7c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x0c, 0x10, 0x10, 0x20, 0x20, 0x20, 0x28, 0x3e, 0x1c, 0x20, 0x20, 0x3e, 0x0f, 0x11, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}};

    /* Walk */
    static const char PROGMEM walk[2][ANIM_SIZE] = {/* 'walk1', 32x22px */
                                                    {
                                                        0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x10, 0x90, 0x90, 0x90, 0xa0, 0xc0, 0x80, 0x80, 0x80, 0x70, 0x08, 0x14, 0x08, 0x90, 0x10, 0x10, 0x08, 0xa4, 0x78, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x08, 0xfc, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x18, 0xea, 0x10, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1c, 0x20, 0x20, 0x3c, 0x0f, 0x11, 0x1f, 0x03, 0x06, 0x18, 0x20, 0x20, 0x3c, 0x0c, 0x12, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                    },

                                                    /* 'walk2', 32x22px */
                                                    {
                                                        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x10, 0x28, 0x10, 0x20, 0x20, 0x20, 0x10, 0x48, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x20, 0xf8, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x30, 0xd5, 0x20, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x20, 0x30, 0x0c, 0x02, 0x05, 0x09, 0x12, 0x1e, 0x02, 0x1c, 0x14, 0x08, 0x10, 0x20, 0x2c, 0x32, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                    }};

    /* Run */
    static const char PROGMEM run[2][ANIM_SIZE] = {/* 'run1', 32x22px */
                                                   {
                                                       0x00, 0x00, 0x00, 0x00, 0xe0, 0x10, 0x08, 0x08, 0xc8, 0xb0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x40, 0x3c, 0x14, 0x04, 0x08, 0x90, 0x18, 0x04, 0x08, 0xb0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0xc4, 0xa4, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc8, 0x58, 0x28, 0x2a, 0x10, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x09, 0x04, 0x04, 0x04, 0x04, 0x02, 0x03, 0x02, 0x01, 0x01, 0x02, 0x02, 0x04, 0x08, 0x10, 0x26, 0x2b, 0x32, 0x04, 0x05, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                   },

                                                   /* 'run2', 32x22px */
                                                   {
                                                       0x00, 0x00, 0x00, 0xe0, 0x10, 0x10, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x78, 0x28, 0x08, 0x10, 0x20, 0x30, 0x08, 0x10, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x10, 0x11, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0xb0, 0x50, 0x55, 0x20, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0c, 0x10, 0x20, 0x28, 0x37, 0x02, 0x1e, 0x20, 0x20, 0x18, 0x0c, 0x14, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                   }};

    /* Bark */
    static const char PROGMEM bark[2][ANIM_SIZE] = {/* 'bark1', 32x22px */
                                                    {
                                                        0x00, 0xc0, 0x20, 0x10, 0xd0, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x3c, 0x14, 0x04, 0x08, 0x90, 0x18, 0x04, 0x08, 0xb0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x10, 0x11, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc8, 0x48, 0x28, 0x2a, 0x10, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0c, 0x10, 0x20, 0x28, 0x37, 0x02, 0x02, 0x04, 0x08, 0x10, 0x26, 0x2b, 0x32, 0x04, 0x05, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                    },

                                                    /* 'bark2', 32x22px */
                                                    {
                                                        0x00, 0xe0, 0x10, 0x10, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x40, 0x2c, 0x14, 0x04, 0x08, 0x90, 0x18, 0x04, 0x08, 0xb0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x10, 0x11, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x48, 0x28, 0x2a, 0x10, 0x0f, 0x20, 0x4a, 0x09, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0c, 0x10, 0x20, 0x28, 0x37, 0x02, 0x02, 0x04, 0x08, 0x10, 0x26, 0x2b, 0x32, 0x04, 0x05, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                    }};

    /* Sneak */
    static const char PROGMEM sneak[2][ANIM_SIZE] = {/* 'sneak1', 32x22px */
                                                     {
                                                         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x40, 0x40, 0x80, 0x00, 0x80, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x21, 0xf0, 0x04, 0x02, 0x02, 0x02, 0x02, 0x03, 0x02, 0x02, 0x04, 0x04, 0x04, 0x03, 0x01, 0x00, 0x00, 0x09, 0x01, 0x80, 0x80, 0xab, 0x04, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1c, 0x20, 0x20, 0x3c, 0x0f, 0x11, 0x1f, 0x02, 0x06, 0x18, 0x20, 0x20, 0x38, 0x08, 0x10, 0x18, 0x04, 0x04, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00,
                                                     },

                                                     /* 'sneak2', 32x22px */
                                                     {
                                                         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xa0, 0x20, 0x40, 0x80, 0xc0, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x41, 0xf0, 0x04, 0x02, 0x02, 0x02, 0x03, 0x02, 0x02, 0x02, 0x04, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x40, 0x40, 0x55, 0x82, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x20, 0x30, 0x0c, 0x02, 0x05, 0x09, 0x12, 0x1e, 0x04, 0x18, 0x10, 0x08, 0x10, 0x20, 0x28, 0x34, 0x06, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                     }};

    /* animation */
    void animate_luna(void) {
        /* jump */
        if (isJumping || !showedJump) {
            /* clear */
            oled_set_cursor(LUNA_X, LUNA_Y + 2);
            oled_write("     ", false);

            oled_set_cursor(LUNA_X, LUNA_Y - 1);

            showedJump = true;
        } else {
            /* clear */
            oled_set_cursor(LUNA_X, LUNA_Y - 1);
            oled_write("     ", false);

            oled_set_cursor(LUNA_X, LUNA_Y);
        }

        /* switch frame */
        current_frame = (current_frame + 1) % 2;

        /* current status */
        if (isBarking || led_usb_state.caps_lock) {
            oled_write_raw_P(bark[abs(1 - current_frame)], ANIM_SIZE);

        } else if (isSneaking) {
            oled_write_raw_P(sneak[abs(1 - current_frame)], ANIM_SIZE);

        } else if (current_wpm <= MIN_WALK_SPEED) {
            oled_write_raw_P(sit[abs(1 - current_frame)], ANIM_SIZE);

        } else if (current_wpm <= MIN_RUN_SPEED) {
            oled_write_raw_P(walk[abs(1 - current_frame)], ANIM_SIZE);

        } else {
            oled_write_raw_P(run[abs(1 - current_frame)], ANIM_SIZE);
        }
    }

    /* animation timer */
    if (timer_elapsed32(anim_timer) > ANIM_FRAME_DURATION) {
        anim_timer = timer_read32();
        animate_luna();
    }


}

/* KEYBOARD PET END */

static void print_logo_narrow(void) {
    render_logo();

    /* wpm counter */
    uint8_t n = current_wpm;
    char    wpm_str[4];
    oled_set_cursor(0, 14);
    wpm_str[3] = '\0';
    wpm_str[2] = '0' + n % 10;
    wpm_str[1] = '0' + (n /= 10) % 10;
    wpm_str[0] = '0' + n / 10;
    oled_write(wpm_str, false);

    oled_set_cursor(0, 15);
    oled_write(" wpm", false);
}

static void print_status_narrow(void) {
    render_logo();

    oled_set_cursor(0, 5);

    switch (get_highest_layer(default_layer_state)) {
        case _MAG:
            oled_write("BEAKL", false);
            break;
        case _QWERTY:
            oled_write("QWRTY", false);
            break;
        default:
            oled_write("UNDEF", false);
    }

    oled_set_cursor(0, 7);

    /* Print current layer */
    oled_write("LAYER", false);

    oled_set_cursor(0, 9);
    char    state[6];

    if (layer_state_is(_RAISE))
        state[0] = 'C';
    else
        state[0] = ' ';

    if (layer_state_is(_LOWER))
        state[1] = 'L';
    else
        state[1] = ' ';

    if (layer_state_is(_DIA))
        state[2] = 'D';
    else
        state[2] = ' ';


    uint8_t mods = get_oneshot_mods() | get_mods();
    if ((mods & MOD_MASK_ALT) != 0)
        state[3] = 'A';
    else
        state[3] = ' ';

    if ((mods & MOD_MASK_GUI) != 0)
        state[4] = 'G';
    else
        state[4] = ' ';

    state[5] = '\0';

    oled_write(state, false);


    if ((mods & MOD_MASK_CTRL) != 0)
        isSneaking = true;
    else
        isSneaking = false;

    if ((mods & MOD_MASK_SHIFT) != 0)
        isBarking = true;
    else
        isBarking = false;

    render_luna(0, 13);
}


oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_270; }

bool oled_task_user(void) {
    /* KEYBOARD PET VARIABLES START */

    current_wpm   = get_current_wpm();
    led_usb_state = host_keyboard_led_state();

    /* KEYBOARD PET VARIABLES END */

    if (is_keyboard_master()) {
    /* this fixes the screen on and off bug */
        if (current_wpm > 0) {
            //oled_on();
            anim_sleep = timer_read32();
            print_status_narrow();
        } else if (timer_elapsed32(anim_sleep) < OLED_TIMEOUT) {
            print_status_narrow();
        } else {
            oled_off();
        }
    } else {
        print_logo_narrow();
    }
    return false;
}

#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    switch (keycode) {
        case KC_SPC:
            if (record->event.pressed) {
                isJumping  = true;
                showedJump = false;
            } else {
                isJumping = false;
            }
            break;
    }
    return true;
}
