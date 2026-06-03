// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_japanese.h" 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        JP_Q,   JP_W,   JP_E,   JP_R,	    JP_T,				    JP_Y,           JP_U,   JP_I,	JP_O,	    JP_P,
        JP_A,   JP_S,   JP_D,   JP_F,       JP_G,				    JP_H,           JP_J,   JP_K,	JP_L,	    JP_MINS,
        JP_Z,   JP_X,   JP_C,   JP_V,       JP_B,				    JP_N,           JP_M,   JP_COMM,	JP_DOT,	    JP_SCLN,
                                MO(1),      SFT_T(KC_SPC),  KC_LGUI,    KC_LALT,    CTL_T(KC_ENT),  MO(2)
    ),
    [1] = LAYOUT(
        _______,    _______,    JP_ASTR,    JP_CIRC,    JP_PERC,                            JP_PIPE,    JP_AMPR,    KC_UP,      _______,    _______,
        JP_4,       JP_3,       JP_2,       JP_1,       JP_0,                               JP_SLSH,    KC_LEFT,    KC_DOWN,    KC_RIGHT,   JP_MHEN,
        JP_9,       JP_8,       JP_7,       JP_6,       JP_5,                               JP_HASH,    JP_DLR,     JP_AT,	_______,    _______,
                                            _______,    _______,    _______,    _______,    _______,    _______
    ),
    [2] = LAYOUT(
        _______,    _______,	JP_PLUS,    JP_TILD,    JP_BSLS,                            JP_LCBR,    JP_LBRC,    JP_RBRC,    _______,    _______,
        JP_HENK,    JP_GRV,	JP_LABK,    JP_RABK,    KC_TAB,                             JP_RCBR,    JP_LPRN,    JP_RPRN,    _______,    _______,
        _______,    _______,    _______,    JP_QUOT,    JP_DQUO,                            JP_EXLM,    JP_QUES,    _______,    _______,    _______,
                                            _______,    KC_ESC,	    _______,	_______,    _______,    _______
    )
};

const key_override_t unds_key_override = ko_make_basic(MOD_MASK_SHIFT, JP_COMM, JP_UNDS);
const key_override_t bspc_key_override = ko_make_basic(MOD_MASK_SHIFT, JP_DOT, KC_BSPC);
const key_override_t coln_key_override = ko_make_basic(MOD_MASK_SHIFT, JP_SCLN, JP_COLN);

const key_override_t *key_overrides[] = {
    &unds_key_override,
    &bspc_key_override,
    &coln_key_override,
};

