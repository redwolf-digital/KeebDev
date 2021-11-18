// Copyright 2021 redwolf-digital (@redwolf-digital)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x0000
#define DEVICE_VER   0x0001
#define MANUFACTURER redwolf-digital
#define PRODUCT      redwolf_4keydir

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 2

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
//#define MATRIX_ROW_PINS { D0, D5 }
//#define MATRIX_COL_PINS { F1, F0, B0 }
#define DIRECT_PINS { \
    { E6, D7}, \
    { B5, B4}  \
}
#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
#define SOFT_SERIAL_PIN D0  // or D1, D2, D3, E6


#define RGB_DI_PIN C6
#ifdef RGB_DI_PIN
	#define RGBLED_NUM 4
	#define RGBLIGHT_LED_MAP { 3, 2, 1, 0 }
	
	#define RGBLIGHT_HUE_STEP 8
	#define RGBLIGHT_SAT_STEP 8
	#define RGBLIGHT_VAL_STEP 8
/* The maximum brightness level */
	#define RGBLIGHT_LIMIT_VAL 255
/* If defined, the RGB lighting will be switched off when the host goes to sleep */
	#define RGBLIGHT_SLEEP 
/*== all animations enable ==*/
	#define RGBLIGHT_ANIMATIONS
#endif

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5


/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE


/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION


