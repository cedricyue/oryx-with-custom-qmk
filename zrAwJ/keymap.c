#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
};



enum tap_dance_codes {
  DANCE_0,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_SCRL,        KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_CAPS,                                        KC_MEDIA_PREV_TRACK,KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_AUDIO_VOL_UP,                                KC_MEDIA_NEXT_TRACK,KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_ESCAPE,      
    LT(2,KC_GRAVE), MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LSFT, KC_D),MT(MOD_LCTL, KC_F),KC_G,           KC_AUDIO_VOL_DOWN,                                                                TD(DANCE_0),    KC_H,           MT(MOD_RCTL, KC_J),MT(MOD_RSFT, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RGUI, KC_SCLN),KC_QUOTE,       
    KC_LEFT_SHIFT,  LT(1,KC_Z),     KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         LT(1,KC_SLASH), KC_RIGHT_SHIFT, 
    MO(3),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0,                                                                                                     LCTL(LSFT(KC_UP)),MO(2),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_BSPC,        KC_ENTER,       KC_SPACE,                       KC_BSPC,        KC_ENTER,       KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_AMPR,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PLUS,        KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_BSLS,        
    KC_TRANSPARENT, KC_HASH,        KC_EXLM,        KC_LPRN,        KC_RPRN,        KC_GRAVE,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_EQUAL,       KC_4,           KC_5,           KC_6,           KC_MINUS,       KC_DLR,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_TILD,                                        KC_UNDS,        KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_PERC,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_0,           KC_KP_DOT,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_BSPC,        KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_1,     
    KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_PAGE_UP,     KC_TRANSPARENT, KC_BRIGHTNESS_UP,                                KC_TRANSPARENT, LALT(LGUI(KC_LEFT)),LALT(LGUI(KC_DOWN)),LALT(LGUI(KC_UP)),LALT(LGUI(KC_RIGHT)),KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_PGDN,        KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,                                                                KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_2,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    LGUI(LCTL(LSFT(KC_Z))),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_MODE_FORWARD,                                                                                                RGB_TOG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    RGB_VAD,        RGB_VAI,        TOGGLE_LAYER_COLOR,                RGB_SLD,        RGB_HUD,        RGB_HUI
  ),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_UP)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_RCTL(SS_RGUI(SS_TAP(X_MEDIA_EJECT))));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_6)));
    }
    break;

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case DOUBLE_TAP: register_code16(KC_MEDIA_PLAY_PAUSE); break;
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case DOUBLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
};
