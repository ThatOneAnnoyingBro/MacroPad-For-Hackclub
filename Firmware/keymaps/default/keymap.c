#include QMK_KEYBOARD_H

// -------------------------------------------------------
// Layers
// -------------------------------------------------------
enum layers {
    _BASE = 0,
    _FN1,
    _FN2,
    _FN3,
};

// -------------------------------------------------------
// Keymaps
// SW1=D6, SW2=D7, SW3=D8, SW4=D9, SW5=D10
// All keys remappable via Via app
// -------------------------------------------------------
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_MPLY,   KC_MUTE,   KC_VOLD,   KC_VOLU,   KC_MSTP
    ),
    [_FN1] = LAYOUT(
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
    [_FN2] = LAYOUT(
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
    [_FN3] = LAYOUT(
        KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS
    ),
};

// -------------------------------------------------------
// Encoder callbacks
// Encoder 0 (D0/D1): Volume Up / Down
// Encoder 1 (D2/D3): Scroll Up / Down
// -------------------------------------------------------
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] = {
        ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
        ENCODER_CCW_CW(KC_WH_D, KC_WH_U),
    },
    [_FN1] = {
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
    },
    [_FN2] = {
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
    },
    [_FN3] = {
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
        ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
    },
};
#endif
