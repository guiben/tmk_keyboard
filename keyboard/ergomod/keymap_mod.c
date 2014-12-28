#include "keymap_common.h"

/*
 * Ergomod Layout
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: Default layer
     * ,------------------------------------.          ,------------------------------------.
     * | ~    | 1  | 2  | 3  | 4  | 5  | 6  |          |7   | 8  | 9  | 0  | -  | =  |  "   |
     * |------------------------------------|          |------------------------------------|
     * | {    | Q  | W  | E  | R  | T  | Fn |          |Esc | Y  | U  | I  | O  | P  |  }   |
     * |------------------------------------|          |------------------------------------|
     * | Ctrl | A  | S  | D  | F  | G  | Tab|          | |  | H  | J  | K  | L  | :  | Ctrl |
     * |------------------------------------'          '------------------------------------|
     * | Shift| Z  | X  | C  | V  | B  |                    | N  | M  | <  | >  | ?  | Shift|
     * |-------------------------------| ,-----.   ,------. |-------------------------------|
     * | Alt  | Ins| Hom| PgU| End| Gui| |Bspc |   |Space | |Gui |Left| Up |Righ|Del | AltG |
     * `-------------------------------' |-----|   |------| `-------------------------------'
     *                  | PgD|           |Shift|   |Return|           |Down|
     *                  `----'           |-----|   |------|           `----'
     *                                   | L1  |   | L2   |
     *                                   |-----|   |------|
     *                                   | L0  |   | L0   |
     *                                   `-----'   `------'
     */
    KEYMAP_ERGO(
        GRV,    1, 2, 3, 4, 5, 6,     BSPC,               SPC,  7,    8,    9,    0,    MINS, EQL,   QUOT, \
        LBRC,   Q, W, E, R, T, FN0,   LSHIFT,             ENT,  ESC,  Y,    U,    I,    O,    P,     RBRC, \
        LCTRL,  A, S, D, F, G, TAB,   FN1,                FN2,  BSLS, H,    J,    K,    L,    SCLN,  RCTRL, \
        LSHIFT, Z, X, C, V, B,        FN0,                FN0,        N,    M,    COMM, DOT,  SLSH,  RSHIFT, \
        LALT,   INS, HOME, PGUP, END, LGUI,                           RGUI, LEFT, UP,   RIGHT,DELETE,RALT, \
                           PGDN,                                                  DOWN \
    ),
    /* 1: Functions layer
     * ,------------------------------------.          ,------------------------------------.
     * |      | F1 | F2 | F3 | F4 | F5 | F6 |          |F7  | F8 | F9 |F10 | F11| F12|      |
     * |------------------------------------|          |------------------------------------|
     * |      |    |    |    |    |    |    |          |Powr|Slep|Wake|    |    |Prnt|      |
     * |------------------------------------|          |------------------------------------|
     * | Ctrl |    |    |    |    |    |    |          |    |    |    |    |Lock|    | Ctrl |
     * |------------------------------------'          '------------------------------------|
     * | Shift|    |    |    |    |    |                    |    |    |    |    |    | Shift|
     * |-------------------------------| ,-----.   ,------. |-------------------------------|
     * | Alt  |Prev|Stop|+Vol|Play|    | |Bspc |   |Space | |    |    |    |    |Next| Alt  |
     * `-------------------------------' |-----|   |------| `-------------------------------'
     *                  |-Vol|           |Shift|   |Return|           |    |
     *                  `----'           |-----|   |------|           `----'
     *                                   | L1  |   | L2   |
     *                                   |-----|   |------|
     *                                   | L0  |   | L0   |
     *                                   `-----'   `------'
     */
    KEYMAP_ERGO(
        TRNS, F1, F2, F3, F4, F5, F6, BSPC,                   SPC, F7, F8, F9, F10, F11, F12, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, LSHIFT,      ENT, PWR, SLEP, WAKE, TRNS, TRNS, PSCR, TRNS, \
        LCTRL, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, FN1,         FN2, TRNS, TRNS, TRNS, TRNS, SLCK, TRNS, RCTRL, \
        LSHIFT, TRNS, TRNS, TRNS, TRNS, TRNS,      FN0,        FN0,       TRNS, TRNS, TRNS, TRNS, TRNS, RSHIFT, \
        LALT, MPRV, MSTP, VOLU, MPLY, TRNS,                TRNS, TRNS, TRNS, TRNS, MNXT, RALT, \
                          VOLD,                                        TRNS \
    ),
    /* 2: Mouse layer
     * ,------------------------------------.          ,------------------------------------.
     * |      |    |    |    |    |    |    |          |    |    |    |    |    |    |      |
     * |------------------------------------|          |------------------------------------|
     * |      |    |    |    |    |    |    |          |    |    |    |    |    |    |      |
     * |------------------------------------|          |------------------------------------|
     * |      |    |    |    |    |    |    |          |    |    |    |    |    |    |      |
     * |------------------------------------'          '------------------------------------|
     * |      |    |    |    |    |    |                    |    |    |    |    |    |      |
     * |-------------------------------| ,-----.   ,------. |-------------------------------|
     * |      |    |MwL |MwU |MwR |    | |Mb3  |   |Mb1   | |    |McL |McU |McR |    |      |
     * `-------------------------------' |-----|   |------| `-------------------------------'
     *                  |MwD |           |Mb4  |   |Mb2   |           |McD |
     *                  `----'           |-----|   |------|           `----'
     *                                   | L1  |   | L2   |
     *                                   |-----|   |------|
     *                                   | L0  |   | L0   |
     *                                   `-----'   `------'
     */
    KEYMAP_ERGO(
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,   BTN3,    BTN1,  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,   BTN4,    BTN2,  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,   FN1,    FN2,  TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,        FN0,    FN0,       TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, WH_L, WH_U, WH_R, TRNS,                           TRNS, MS_L, MS_U, MS_R, TRNS, TRNS, \
                       WH_D,                                              MS_D \
    ),
};

/*
 * Fn action definition
 */
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_SET_CLEAR(0),
    [1] = ACTION_LAYER_MOMENTARY(1),
    [2] = ACTION_LAYER_TOGGLE(2)
};
