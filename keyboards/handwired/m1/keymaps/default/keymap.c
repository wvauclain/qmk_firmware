#include "m1.h"

#define CGUI(kc) (QK_LCTL | QK_LGUI | (kc))
#define AGUI(kc) (QK_LALT | QK_LGUI | (kc))
#define SAGUI(kc) (QK_LSFT | QK_LALT | QK_LGUI | (kc))

enum m1_layers { DEFAULT, _SLASH, _DASH, _STAR, _NUM };

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[DEFAULT] = LAYOUT_m1( \
  MO(_SLASH), MO(_DASH), MO(_STAR), KC_VOLD, KC_VOLU, KC_MUTE, \
  LGUI(KC_7), LGUI(KC_8), LGUI(KC_9), TG(_NUM), KC_PSCR, LGUI(KC_B), \
  LGUI(KC_4), LGUI(KC_5), LGUI(KC_6), LGUI(KC_ESC), SGUI(KC_K), LGUI(KC_ENT), \
  LGUI(KC_1), LGUI(KC_2), LGUI(KC_3), SGUI(KC_H), SGUI(KC_J), SGUI(KC_L) \
),

[_SLASH] = LAYOUT_m1( \
  _______, _______, _______, _______, _______, RESET,   \
  SGUI(KC_7), SGUI(KC_8), SGUI(KC_9), _______, _______, _______, \
  SGUI(KC_4), SGUI(KC_5), SGUI(KC_6), _______, CGUI(KC_K), _______, \
  SGUI(KC_1), SGUI(KC_2), SGUI(KC_3), CGUI(KC_H), CGUI(KC_J), CGUI(KC_L)  \
),

[_DASH] = LAYOUT_m1( \
  _______, _______, _______, _______, _______, _______,   \
  _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, SAGUI(KC_K), _______, \
  _______, _______, _______, SAGUI(KC_H), SAGUI(KC_J), SAGUI(KC_L) \
),

[_STAR] = LAYOUT_m1( \
  _______, _______, _______, _______, _______, _______,   \
  _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, AGUI(KC_K), _______, \
  _______, _______, _______, AGUI(KC_H), AGUI(KC_J), AGUI(KC_L) \
),

[_NUM] = LAYOUT_m1( \
  _______, _______, _______, _______, _______, _______,   \
  KC_7, KC_8, KC_9, _______, _______, _______, \
  KC_4, KC_5, KC_6, _______, _______, _______, \
  KC_1, KC_2, KC_3, _______, _______, _______ \
),
};
// clang-format on

void matrix_init_user(void) {
    // Disable the builtin LEDs on startup (the pins are active low)
    writePin(LED0, true);
    writePin(LED1, true);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    bool numpad_state = state & (1 << _NUM);
    writePin(LED0, !numpad_state);
    writePin(LED1, !numpad_state);

    return state;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) { return true; }
