// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_keycodes {
    KC_COMMIT = SAFE_RANGE,
    KC_CHILL,
    KC_GEM,
    KC_GITHUB
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │   │   │   │   │
     * |___|___|___|___|
     */
    [0] = LAYOUT(
        KC_COMMIT,   KC_CHILL,   KC_GEM,   KC_GITHUB
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case KC_COMMIT:
                // Mengetik "git commit -m "
                SEND_STRING("./scripts/commit.sh" SS_TAP(X_ENTER));
                break;
            case KC_CHILL:
                // Buka Spotify (Contoh shortcut Windows: Win+R lalu ketik spotify)
                SEND_STRING("./scripts/commit.sh" SS_TAP(X_ENTER));
                break;
            case KC_GEM:
               
                SEND_STRING("./scripts/gem.sh" SS_TAP(X_ENTER));
                break;
            case KC_GITHUB:
              
                SEND_STRING("./scripts/gem.sh" SS_TAP(X_ENTER));
                break;
        }
    }
    return true;
};
