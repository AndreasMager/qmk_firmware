/*
Copyright 2020 Jan Christoph Ebersbach

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

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 6

// left half pro-mirco
#define MATRIX_COL_PINS { GP4, GP5, GP6, GP7, GP8, GP9 }
#define MATRIX_ROW_PINS { GP27, GP26, GP18, GP20, GP19, GP10 }

// // right half adafruit feather
// #define MATRIX_COL_PINS { F1, F0, B1, B2, B3, D2 }
// #define MATRIX_ROW_PINS { D6, B7, B6, B5, D7, C6 }

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW


#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U


#define DEBOUNCE 7
//
//#define BOOTMAGIC_LITE_ROW 0
//#define BOOTMAGIC_LITE_COLUMN 0

//#define BOOTMAGIC_LITE_ROW_RIGHT 6
//#define BOOTMAGIC_LITE_COLUMN_RIGHT 5

// WS2812 RGB LED strip input and number of LEDs
// #define RGB_DI_PIN D3
// #define RGBLED_NUM 12

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
// #define BACKLIGHT_LEVELS 3
