/* Copyright 2021 Basic I/O Instruments (Scott Wei)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "../../../ble.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
    [0] = LAYOUT(
                            KC_F1,      KC_F2,     KC_UP,   KC_PGUP,    \
        KC_NUM,   KC_PSLS,   KC_PAST,    KC_PMNS,   KC_DOWN, KC_PGDN,   \
        KC_P7,    KC_P8,      KC_P9,                                    \
        KC_P4,    KC_P5,      KC_P6,      KC_PPLS,                      \
        KC_P1,    KC_P2,      KC_P3,                                    \
        KC_P0,                KC_PDOT,    KC_PENT),

    [1] = LAYOUT(
                                  _______,      _______,  _______, _______,     \
        _______,      _______,    _______,      _______,  _______, _______,     \
        _______,      _______,    _______,                                      \
        _______,      _______,    _______,      _______,                        \
        _______,      _______,    _______,                                      \
        _______,                  _______,      _______),

    [2] = LAYOUT(
                                  _______,      _______,  _______, _______,     \
        _______,      _______,    _______,      _______,  _______, _______,     \
        _______,      _______,    _______,                                      \
        _______,      _______,    _______,      _______,                        \
        _______,      _______,    _______,                                      \
        _______,                  _______,      _______),

    [3] = LAYOUT(
                                  _______,      _______,  _______, _______,     \
        _______,      _______,    _______,      _______,  _______, _______,     \
        _______,      _______,    _______,                                      \
        _______,      _______,    _______,      _______,                        \
        _______,      _______,    _______,                                      \
        _______,                  _______,      _______),
    // clang-format on
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_F21:
            if (record->event.pressed) {
                module_reset();
            }
        default:
            return true;
    }
}