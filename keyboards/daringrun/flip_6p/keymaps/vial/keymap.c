#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS]= { 
  /* 0: defuault */
  [0]=LAYOUT(
    // A       B        C        D         E       F         G       H         I       J        K       L          M         N        O         P
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,   KC_BSLS, KC_BSPC,   KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS, 
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,            KC_ENT,             KC_P4,   KC_P5,   KC_P6,   
    KC_LSFT, KC_BSLS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,            KC_RSFT,  MO(1),    KC_P1,   KC_P2,   KC_P3,   KC_PENT,
    KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,                                                                           MO(1),    KC_RWIN,  KC_RCTL,           KC_P0,   KC_PDOT
  ),

  [1] = LAYOUT(
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,    KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,     KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, KC_MSEL, KC_VOLD, KC_VOLU,  KC_MUTE, KC_MSTP, KC_MPRV, KC_MPLY, KC_MNXT,   KC_MAIL, KC_WHOM, KC_CALC, KC_WSCH, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, RGB_TOG, RGB_MOD, RGB_RMOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI,   RGB_VAD, XXXXXXX, XXXXXXX,          XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, 
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, MKC_MACOS, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, MKC_LG,  XXXXXXX, XXXXXXX,                                                                            XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX
  ),

  [2] = LAYOUT(
    EE_CLR,  KC_1,     KC_2,      KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,  KC_9,     KC_0,      KC_MINS,   KC_EQL,   KC_BSLS,  KC_BSPC, KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS, 
    KC_TAB,  KC_Q,     KC_W,      KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,  KC_O,     KC_P,      KC_LBRC,   KC_RBRC,  KC_BSLS,           KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
    KC_CAPS, KC_A,     KC_S,      KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,  KC_L,     KC_SCLN,   KC_QUOT,             KC_ENT,            KC_P4,   KC_P5,   KC_P6,   
    KC_LSFT, KC_BSLS,  KC_Z,      KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,  KC_COMM,  KC_DOT,    KC_SLSH,             KC_RSFT,  MO(3),   KC_P1,   KC_P2,   KC_P3,   KC_PENT,
    KC_LCTL, MKC_LOPT, MKC_LCOMM, KC_SPC,                                                                       MKC_RCOMM, MKC_ROPT, KC_RCTL,          KC_P0,   KC_PDOT
  ),

  [3] = LAYOUT(
    KC_GRV,  KC_BRID, KC_BRIU, MKC_MCTL, MKC_LPAD, RGB_VAD, RGB_VAI, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX, 
    XXXXXXX, KC_F1,   KC_F2,   KC_F3,    KC_F4,    KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX,          XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, RGB_TOG, RGB_MOD, RGB_RMOD, RGB_HUI,  RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, XXXXXXX, XXXXXXX,          XXXXXXX,          XXXXXXX,XXXXXXX, XXXXXXX,  
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, MKC_WIN, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX, 
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                                                           XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX
  )
};

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
    // Key Matrix to LED Index
	// 0       1        2       3        4        5        6       7       8       9       10       11       12        13        14         
    {  0,      1,       2,      3,       4,       5,       6,      7,      8,      9, }   //K614
}, {
    // LED Index to Physical Position
    //   0          1           2           3           4            5          6           7            8            9           10           11           12            13            14        
    { 0,  0 }, { 17, 0 },  { 34,  0 }, { 51,  0 }, { 68,  0 }, { 85,  0 }, { 102,  0 }, { 119, 0  }, { 136,  0 }, { 153, 0  } 
  }, {
    // LED Index to Flag
	//  0  1  2  3  4  5  6  7  8  9 10  11  12 13, 14  
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4
} };
#endif