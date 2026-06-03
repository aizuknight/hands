// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_Q,   KC_L,   KC_U,   KC_COMM,    KC_DOT,                                 KC_F,           KC_W,   KC_R,   KC_Y,   KC_P,
        KC_E,   KC_I,   KC_A,   KC_O,       KC_MINS,                                KC_K,           KC_T,   KC_N,   KC_S,   KC_H,
        KC_Z,   KC_X,   KC_C,   KC_V,       KC_SCLN,                                KC_G,           KC_D,   KC_M,   KC_J,   KC_B,
                                MO(1),      SFT_T(KC_SPC),  KC_LGUI,    KC_LALT,    CTL_T(KC_ENT),  MO(2)
    ),
    [1] = LAYOUT(
        _______,    _______,    KC_ASTR,    KC_CIRC,    KC_PERC,                            KC_PIPE,    KC_AMPR,    KC_UP,      _______,    _______,
        KC_4,       KC_3,       KC_2,       KC_1,       KC_0,                               KC_SLSH,    KC_LEFT,    KC_DOWN,    KC_RIGHT,   _______,
        KC_9,       KC_8,       KC_7,       KC_6,       KC_5,                               KC_HASH,    KC_DLR,     _______,    _______,    _______,
                                            _______,    _______,    _______,    _______,    _______,    _______
    ),
    [2] = LAYOUT(
        _______,    _______,    KC_PLUS,    KC_TILD,    KC_BSLS,                            KC_LCBR,    KC_LBRC,    KC_RBRC,    _______,    _______,
        _______,    _______,    KC_LT,      KC_GT,      KC_TAB,                             KC_RCBR,    KC_LPRN,    KC_RPRN,    _______,    _______,
        _______,    _______,    _______,    KC_QUOT,    KC_DQT,                             KC_EXLM,    KC_QUES,    _______,    _______,    _______,
                                            _______,    _______,    _______,    _______,    _______,    _______
    )
};

const key_override_t unds_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_UNDS);
const key_override_t bspc_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_BSPC);
const key_override_t eql_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_MINS, KC_EQL);
const key_override_t coln_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_SCLN, KC_COLN);

const key_override_t *key_overrides[] = {
	&unds_key_override,
    &bspc_key_override,
    &eql_key_override,
    &coln_key_override,    
};
