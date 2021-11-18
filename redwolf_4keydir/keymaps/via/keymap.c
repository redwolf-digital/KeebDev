// Copyright 2021 redwolf-digital (@redwolf-digital)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [0] = LAYOUT(
        KC_1,    KC_2,
        KC_Z,    KC_X
    ),
    [1] = LAYOUT(
        KC_TRNS,    KC_TRNS,
        KC_TRNS,    KC_TRNS
    ),
    [2] = LAYOUT(
        KC_TRNS,    KC_TRNS,
        KC_TRNS,    KC_TRNS
    ),
    [3] = LAYOUT(
        KC_TRNS,    KC_TRNS,
        KC_TRNS,    KC_TRNS
    )
};
