// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

enum shark_codes {
    MOTIVATE_ME = SAFE_RANGE, // drinkmotivation: Shift+Alt+M
    SONG_OTD,                 // email: Shift+Super+W
    GIT_PUSH,                 // git push: Alt+Super+P
    AI_PLS                    // gemini: Alt+Super+G
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ A │ B │ C │ D │
     * |___|___|___|___|
     */
    [0] = LAYOUT(
        MOTIVATE_ME,   SONG_OTD,   GIT_PUSH,   AI_PLS
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            
            case MOTIVATE_ME:
                tap_code16(S(A(KC_M)));
                return false; 
            
            case SONG_OTD:
                tap_code16(S(G(KC_W)));
                return false;
            
            case GIT_PUSH:
                tap_code16(A(G(KC_P)));
                return false;
            
            case AI_PLS:
                tap_code16(A(G(KC_G)));
                return false;
            
            default:
                break;
        }
    }
    return true; 
}
