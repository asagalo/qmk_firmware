// this is the style you want to emulate.
// This is the canonical layout file for the Quantum project. If you want to add another keyboard,

#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QW 0
#define _RS 1
#define _LW 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
   *  [q],   [w],   [e],     [r],     [t]            ||        [y],     [u],     [i],    [o],      [p]
   *  [a],   [s],   [d],     [f],     [g]            ||        [h],     [j],     [k],    [l],      [ç]
   *  [z],   [x],   [c],     [v],     [b]            ||        [n],     [m],     [,],    [.],      [~]
   *  [Esc], [Tab], [Super], [Shift], [bksp], [Ctrl] || [Alt], [Space], [Raise], [PgUp], [PgDown], [Enter]
   */
  [_QW] = LAYOUT( /* Qwerty */
    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
    KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN,
    KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_QUOT,
    KC_ESC, KC_TAB, KC_LGUI, KC_LSFT, KC_BSPC, KC_LCTL, KC_LALT, KC_SPC, MO(_RS), KC_PGUP, KC_PGDN, KC_ENT
  ),

  /*
   *  ['],     [-],    [?],     [[],     []]            ||        [Home],   [7],     [8], [9], [*]
   *  [\],     [=],    [Up],    [(],     [)]            ||        [End],    [4],     [5], [6], [+]
   *  [;],     [Left], [Down],  [Right], [´]            ||        [Delete], [1],     [2], [3], [,]
   *  [Lower], [Tab],  [Super], [Shift], [bksp], [Ctrl] || [Alt], [Space],  [Raise], [/], [0], [.]
   */
  [_RS] = LAYOUT( /* [> RAISE <] */
    KC_GRV, KC_MINS, LSFT(KC_INT1), KC_RBRC, KC_BSLS, KC_HOME, KC_7, KC_8, KC_9, KC_ASTR,
    KC_NUBS, KC_EQL, KC_UP, KC_LPRN, KC_RPRN, KC_END, KC_4, KC_5, KC_6, KC_PLUS,
    KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT, KC_LBRC, KC_DEL, KC_1, KC_2, KC_3, KC_COMM,
    TG(_LW), KC_TAB, KC_LGUI, KC_LSFT, KC_BSPC, KC_LCTL, KC_LALT, KC_SPC, KC_TRNS, KC_PSLS, KC_0, KC_DOT
  ),
  /*
   *  [Vol +],  [Mute],    [Play],  [Pause], [P. Scr]       ||        [Copy],  [F7],     [F8],      [F9],      [F10]
   *  [Vol -],  [M. Menu], [Up],    [Prev],  [Next]         ||        [Cut],   [F2],     [F5],      [F6],      [F11]
   *  [Insert], [Left],    [Down],  [Right], [Reset]        ||        [Paste], [F1],     [F2],      [F3],      [F12]
   *  [Esc],    [Tab],     [Super], [Shift], [bksp], [Ctrl] || [Alt], [Space], [Qwerty], [C. Lock], [S. Lock], [Enter]
   */
  [_LW] = LAYOUT( /* [> LOWER <] */
    KC_VOLU, KC_MUTE, KC_MPLY, KC_PAUS, KC_PSCR, KC_COPY, KC_F7, KC_F8, KC_F9, KC_F10,
    KC_VOLD, KC_APP, KC_UP, KC_MPRV, KC_MNXT, KC_CUT, KC_F4, KC_F5, KC_F6, KC_F11,
    KC_INS, KC_LEFT, KC_DOWN, KC_RGHT, RESET, KC_PSTE, KC_F1, KC_F2, KC_F3, KC_F12,
    KC_ESC, KC_TAB, KC_LGUI, KC_LSFT, KC_BSPC, KC_LCTL, KC_LALT, KC_SPC, TO(_QW), KC_CAPS, KC_SLCK, KC_ENT
  ),
};
