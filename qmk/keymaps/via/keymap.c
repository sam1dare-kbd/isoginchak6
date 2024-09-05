// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ A │ B │ C │
     * ├───┼───┼───┤
     * │ D │ E │ F │
     * └───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_A,    KC_B,    KC_C,
        MO(1),    MO(2),          KC_F
    ),
    [1] = LAYOUT(
        KC_1,    KC_2,    KC_3,
        KC_4,    KC_5,          KC_6
    ),
    [2] = LAYOUT(
        KC_7,    KC_8,    KC_9,
        KC_0,    KC_1,          KC_2
    ),
    [3] = LAYOUT(
        KC_A,    KC_B,    KC_C,
        KC_D,    KC_E,          KC_F
    )
};
