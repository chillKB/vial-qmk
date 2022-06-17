/* Copyright 2020 Koichi Katano
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

enum unicode_names {
    ALPHA,
    BETA,
    GAMMA,
    GAMMA_UC,
    DELTA,
    DELTA_UC,
    EPSILON,
    ZETA,
    ETA,
    THETA,
    THETA_UC,
    IOTA,
    KAPPA,
    LAMBDA,
    LAMBDA_UC,
    MU,
    NU,
    XI,
    XI_UC,
    PI,
    PI_UC,
    RHO,
    SIMGA,
    SIGMA_UC,
    TAU,
    UPSILON,
    PHI,
    PHI_UC,
    CHI,
    PSI,
    PSI_UC,
    OMEGA,
    OMEGA_UC
};

const uint32_t PROGMEM unicode_map[] = {
    [ALPHA] = 0x03B1,
    [BETA] = 0x03B2,
    [GAMMA] = 0x03B3,
    [GAMMA_UC] = 0x0393,
    [DELTA] = 0x03B4,
    [DELTA_UC] = 0x0394,
    [EPSILON] = 0x03B5,
    [EPSILON_LUNATE] = 0x03F5,
    [ZETA] = 0x03B6,
    [ETA] = 0x03B7,
    [THETA] = 0x03B8,
    [THETA_UC] = 0x0398,
    [IOTA] = 0x03B9,
    [KAPPA] = 0x03BA,
    [LAMBDA] = 0x03BB,
    [LAMBDA_UC] = 0x039B,
    [MU] = 0x03BC,
    [NU] = 0x03BD,
    [XI] = 0x03BE,
    [XI_UC] = 0x039E,
    [PI] = 0x03C0,
    [PI_UC] = 0x03A0,
    [RHO] = 0x03C1,
    [SIMGA] = 0x03C3,
    [SIGMA_UC] = 0x03A3,
    [TAU] = 0x03C4,
    [UPSILON] = 0x03C5,
    [PHI] = 0x03C6,
    [PHI_UC] = 0x03A8,
    [CHI] = 0x03C7,
    [PSI] = 0x03C8,
    [PSI_UC] = 0x03A8,
    [OMEGA] = 0x03C9,
    [OMEGA_UC] = 0x03A9,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_60_ansi_split_bs_rshift(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSPC,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,                   KC_ENT,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, MO(2),
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                                      KC_APP, KC_RALT, MO(1),    KC_RCTL
    ),
    [1] = LAYOUT_60_ansi_split_bs_rshift(
        UC_MOD,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, X(ALPHA), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        _______, _______, _______,                            _______,                                     _______, _______, _______, _______
    ),
    [2] = LAYOUT_60_ansi_split_bs_rshift(
        KC_SLEP,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, KC_INS, KC_DEL,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_SCRL, KC_PAUS, KC_UP,   _______,          _______,
        _______, KC_VOLD, KC_VOLU, KC_MUTE, KC_EJCT, _______, _______, _______, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT,                   _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, KC_END,  KC_PGDN, KC_DOWN,          _______, _______,
        _______, _______, RESET,                              _______,                                     _______, KC_STOP, _______, _______
    ),
    [3] = LAYOUT_60_ansi_split_bs_rshift(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        _______, _______, _______,                            _______,                                     _______, _______, _______, _______
    )
};
