#include QMK_KEYBOARD_H

// Layer definitions
enum layer_number {
  _QWERTY = 0,
  _LOWER,
  _RAISE,
  _ADJUST,
};

// Tap dance action codes
enum tap_dance_codes {
  DANCE_1,
  DANCE_2,
};

// Keymap definition
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // _QWERTY layer
  [_QWERTY] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                 XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX,      XXXXXXX, XXXXXXX,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                    KC_Y,    KC_U,    KC_I,        KC_O,         KC_P,    KC_MINS,
    KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                    KC_H,    KC_J,    KC_K,        KC_L,         KC_QUOT, KC_SCLN,
    KC_LALT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, XXXXXXX,  XXXXXXX, KC_N,    KC_M,    TD(DANCE_2), TD(DANCE_1),  KC_SLSH,  KC_ENT,
                       XXXXXXX, KC_LGUI, MO(_LOWER), KC_SPC, KC_RCTRL,  MO(_RAISE), KC_BSPC, XXXXXXX
  ),

  // _RAISE layer
  [_RAISE] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_TILD, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, XXXXXXX,                   KC_EQL,  KC_LT,   KC_GT,   KC_PLUS, KC_PIPE, KC_BSLS,
    KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_RGHT,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             XXXXXXX, XXXXXXX, KC_ESC,  KC_SPC,  XXXXXXX, XXXXXXX, KC_BSPC, XXXXXXX
  ),

  // _LOWER layer
  [_LOWER] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
    XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX,                   KC_H,    KC_J,    KC_K,    KC_L,    KC_B,    KC_W,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_RCTRL, XXXXXXX, KC_BSPC, XXXXXXX
  ),

  // _ADJUST layer
  [_ADJU
