/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* Vial-specific definitions. */
#define VIAL_KEYBOARD_UID {0xC5, 0xA0, 0x98, 0xD4, 0x2F, 0xE1, 0x1A, 0x7B}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 13 }

/* Unicode Modes
 *
 * Defines input modes to be used for unicode inputs. UC_WINC is for WinCompose on
 * Windows. Keycodes UC_MOD and UC_RMOD cycle through these modes and UC_M_XX assigns
 * a specific mode.
 *
 * The unicode key is the key used by the OS to trigger unicode input.
 */
#define UNICODE_SELECTED_MODES UC_WINC, UC_MAC, UC_LNX
#define UNICODE_KEY_WINC KC_F13
// #define UNICODE_KEY_MAC KC_LALT
// #define UNICODE_KEY_LNX LCTL(LSFT(KC_U))
