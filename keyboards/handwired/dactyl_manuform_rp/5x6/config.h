/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_COL_PINS { GP4, GP5, GP6, GP7, GP8, GP9 }
#define MATRIX_ROW_PINS { GP27, GP26, GP18, GP20, GP19, GP10 }

#define DIODE_DIRECTION ROW2COL

// WS2812 RGB LED strip input and number of LEDs
#define RGB_DI_PIN GP28

//#define USE_SERIAL

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
// #define BACKLIGHT_LEVELS 3

/* Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

/* RGB settings. */
#define RGBLED_NUM 62
//#define SPLIT_TRANSPORT_MIRROR
#define RGB_MATRIX_LED_COUNT 62
/* RGB matrix support. */
#ifdef RGB_MATRIX_ENABLE
//#    define SPLIT_TRANSPORT_MIRROR
#define DRIVER_LED_TOTAL RGBLED_NUM
#define RGB_MATRIX_SPLIT { 31, 31 }
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 50
#define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_TRIGGER_ON_KEYDOWN
//#    define RGB_MATRIX_KEYRELEASES
#endif

#if defined(RGB_MATRIX_KEYPRESSES) || defined(RGB_MATRIX_KEYRELEASES)
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE
//#define ENABLE_LED_MATRIX_SOLID_REACTIVE_SIMPLE
//#define ENABLE_LED_MATRIX_SOLID_REACTIVE_NEXUS
  //#define ENABLE_LED_MATRIX_SOLID_SPLASH
  //#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE needs positions
#endif
