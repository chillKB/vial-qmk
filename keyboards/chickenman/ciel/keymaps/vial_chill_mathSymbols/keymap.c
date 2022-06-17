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
    EPSILON_LUNATE,
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
    SIGMA,
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
    [ALPHA] = 0x03B1,           // α
    [BETA] = 0x03B2,            // β
    [GAMMA] = 0x03B3,           // γ
    [GAMMA_UC] = 0x0393,        // Γ
    [DELTA] = 0x03B4,           // δ
    [DELTA_UC] = 0x0394,        // Δ
    [EPSILON] = 0x03B5,         // ε
    [EPSILON_LUNATE] = 0x03F5,  // ϵ
    [ZETA] = 0x03B6,            // ζ
    [ETA] = 0x03B7,             // η
    [THETA] = 0x03B8,           // θ
    [THETA_UC] = 0x0398,        // Θ
    [IOTA] = 0x03B9,            // ι
    [KAPPA] = 0x03BA,           // κ
    [LAMBDA] = 0x03BB,          // λ
    [LAMBDA_UC] = 0x039B,       // Λ
    [MU] = 0x03BC,              // μ
    [NU] = 0x03BD,              // ν
    [XI] = 0x03BE,              // ξ
    [XI_UC] = 0x039E,           // Ξ
    [PI] = 0x03C0,              // π
    [PI_UC] = 0x03A0,           // Π
    [RHO] = 0x03C1,             // ρ
    [SIGMA] = 0x03C3,           // σ
    [SIGMA_UC] = 0x03A3,        // Σ
    [TAU] = 0x03C4,             // τ
    [UPSILON] = 0x03C5,         // υ
    [PHI] = 0x03C6,             // φ
    [PHI_UC] = 0x03A6,          // Φ
    [CHI] = 0x03C7,             // χ
    [PSI] = 0x03C8,             // ψ
    [PSI_UC] = 0x03A8,          // Ψ
    [OMEGA] = 0x03C9,           // ω
    [OMEGA_UC] = 0x03A9,        // Ω
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
        _______, XP(THETA,THETA_UC), XP(OMEGA,OMEGA_UC), XP(EPSILON,EPSILON_LUNATE), X(RHO), X(TAU), XP(PSI,PSI_UC), X(UPSILON), X(IOTA), _______, XP(PI,PI_UC), _______, _______,          _______,
        _______, X(ALPHA), XP(SIGMA,SIGMA_UC), XP(DELTA,DELTA_UC), XP(PHI,PHI_UC), XP(GAMMA,GAMMA_UC), X(ETA), _______, X(KAPPA), XP(LAMBDA,LAMBDA_UC), _______, _______,                   _______,
        _______,          X(ZETA), XP(XI,XI_UC), X(CHI), X(NU), X(BETA), _______, X(MU), _______, _______, _______,          _______, _______,
        _______, _______, _______,                            _______,                                     _______, _______, _______, _______
    ),
    [2] = LAYOUT_60_ansi_split_bs_rshift(
        KC_SLEP,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, KC_INS, KC_DEL,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_SCRL, KC_PAUS, KC_UP,   _______,          _______,
        _______, KC_VOLD, KC_VOLU, KC_MUTE, KC_EJCT, _______, _______, _______, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT,                   _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, KC_END,  KC_PGDN, KC_DOWN,          _______, _______,
        _______, _______, _______,                            _______,                                     _______, KC_STOP, _______, _______
    ),
    [3] = LAYOUT_60_ansi_split_bs_rshift(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                   _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        _______, _______, _______,                            _______,                                     _______, _______, _______, _______
    )
};
