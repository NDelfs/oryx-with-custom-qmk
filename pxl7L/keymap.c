#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
};



#define DUAL_FUNC_0 LT(12, KC_M)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_PSCR,                                        DUAL_FUNC_0,    KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    CW_TOGG,        KC_Q,           KC_W,           LT(2, KC_E),    KC_R,           KC_T,           KC_TRANSPARENT,                                 LGUI(LCTL(KC_LEFT)),KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_BSPC,        KC_A,           LT(1, KC_S),    MT(MOD_LSFT, KC_D),MT(MOD_RALT, KC_F),KC_G,           KC_MS_JIGGLER_TOGGLE,                                                                LGUI(LCTL(KC_RIGHT)),KC_H,           MT(MOD_RALT, KC_J),MT(MOD_RSFT, KC_K),LT(1, KC_L),    KC_SCLN,        KC_QUOTE,       
    KC_LEFT_SHIFT,  MT(MOD_LCTL, KC_Z),KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         MT(MOD_RCTL, KC_SLASH),KC_RIGHT_SHIFT, 
    KC_LEFT_CTRL,   KC_HYPR,        KC_MEH,         KC_ENTER,       KC_LEFT_ALT,    KC_F7,                                                                                                          KC_ESCAPE,      KC_BSPC,        KC_LEFT,        KC_UP,          KC_DOWN,        KC_RIGHT,       
    KC_SPACE,       KC_TAB,         MT(MOD_LGUI, KC_F5),                KC_F10,         KC_DELETE,      KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LABK,        KC_RABK,        KC_GRAVE,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_SLASH,    KC_NUM,         
    KC_TRANSPARENT, KC_EXLM,        KC_TILD,        KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_EQUAL,       KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_ASTERISK, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_MINUS,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_PERC,        KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_MINUS,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_UNDS,                                        KC_AMPR,        KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_PLUS,     KC_TRANSPARENT, 
    DM_PLY1,        DM_REC1,        KC_TRANSPARENT, KC_TRANSPARENT, DM_RSTP,        KC_TRANSPARENT,                                                                                                 KC_AUDIO_MUTE,  KC_KP_0,        KC_KP_DOT,      KC_COMMA,       KC_EQUAL,       KC_TRANSPARENT, 
    KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_PLAY_PAUSE,                KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PAGE_UP,     KC_TRANSPARENT, KC_TRANSPARENT, RGB_TOG,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, TOGGLE_LAYER_COLOR,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_HOME,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_END,         RGB_SLD,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_PGDN,        KC_TRANSPARENT, KC_TRANSPARENT, RGB_MODE_FORWARD,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


const uint16_t PROGMEM combo0[] = { KC_1, KC_Q, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_W, KC_2, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_3, LT(2, KC_E), COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_4, KC_R, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_5, KC_T, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_6, KC_Y, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_7, KC_U, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_8, KC_I, COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_9, KC_O, COMBO_END};
const uint16_t PROGMEM combo9[] = { KC_0, KC_P, COMBO_END};
const uint16_t PROGMEM combo10[] = { KC_1, KC_A, COMBO_END};
const uint16_t PROGMEM combo11[] = { KC_2, KC_W, COMBO_END};
const uint16_t PROGMEM combo12[] = { KC_BSPC, KC_A, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_F1),
    COMBO(combo1, KC_F2),
    COMBO(combo2, KC_F3),
    COMBO(combo3, KC_F4),
    COMBO(combo4, KC_F5),
    COMBO(combo5, KC_F6),
    COMBO(combo6, KC_F7),
    COMBO(combo7, KC_F8),
    COMBO(combo8, KC_F9),
    COMBO(combo9, KC_F10),
    COMBO(combo10, KC_F11),
    COMBO(combo11, KC_F12),
    COMBO(combo12, KC_CAPS),
};



extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {28,244,245}, {28,244,245}, {139,79,234}, {172,224,218}, {172,224,218}, {139,137,237}, {139,137,237}, {139,137,237}, {172,224,218}, {0,0,4}, {139,137,237}, {139,137,237}, {74,255,206}, {139,137,237}, {0,0,4}, {139,137,237}, {0,245,245}, {172,224,218}, {139,137,237}, {139,117,137}, {139,137,237}, {139,137,237}, {172,224,218}, {139,137,237}, {172,224,218}, {139,137,237}, {139,137,237}, {139,137,237}, {139,137,237}, {28,244,245}, {139,137,237}, {28,244,245}, {139,117,137}, {139,117,137}, {139,137,237}, {139,137,237}, {139,137,237}, {139,137,237}, {139,137,237}, {172,224,218}, {139,137,237}, {139,137,237}, {139,137,237}, {139,137,237}, {172,224,218}, {139,137,237}, {139,137,237}, {139,137,237}, {74,255,206}, {139,137,237}, {139,137,237}, {139,137,237}, {139,137,237}, {172,224,218}, {139,137,237}, {139,137,237}, {139,137,237}, {139,137,237}, {172,224,218}, {139,137,237}, {139,137,237}, {139,137,237}, {139,137,237}, {139,137,237}, {139,137,237}, {28,244,245}, {28,244,245}, {28,244,245}, {139,117,137}, {139,79,234}, {139,137,237}, {139,137,237} },

    [1] = { {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {0,245,245}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {0,245,245}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {0,245,245}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {28,244,245}, {28,244,245}, {28,244,245}, {74,255,206}, {28,244,245}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {74,255,206}, {28,244,245}, {28,244,245}, {74,255,206}, {28,244,245} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {28,244,245}, {28,244,245}, {28,244,245}, {28,244,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,244,76}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,244,76}, {0,245,245}, {0,245,245}, {0,244,76}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,244,76}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_PAUSE);
        } else {
          unregister_code16(KC_PAUSE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_PAUSE));
        } else {
          unregister_code16(LCTL(KC_PAUSE));
        }  
      }  
      return false;
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

