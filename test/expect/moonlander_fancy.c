/* ┌───────┬─────┬─────┬─────┬─────┬─────┬───────┐ ┌───────┬─────┬─────┬─────┬─────┬─────┬───────┐
 * │  EQL  │  1  │  2  │  3  │  4  │  5  │ LEFT  │ │ RGHT  │  6  │  7  │  8  │  9  │  0  │ MINS  │
 * ├───────┼─────┼─────┼─────┼─────┼─────┼───────┤ ├───────┼─────┼─────┼─────┼─────┼─────┼───────┤
 * │  DEL  │  Q  │  W  │  E  │  R  │  T  │TG(SYMB│ │TG(SYMB│  Y  │  U  │  I  │  O  │  P  │ BSLS  │
 * ├───────┼─────┼─────┼─────┼─────┼─────┼───────┤ ├───────┼─────┼─────┼─────┼─────┼─────┼───────┤
 * │ BSPC  │  A  │  S  │  D  │  F  │  G  │ HYPR  │ │  MEH  │  H  │  J  │  K  │  L  │LT(MD│LGUI_T(│
 * ├───────┼─────┼─────┼─────┼─────┼─────┼───────┘ └───────┼─────┼─────┼─────┼─────┼─────┼───────┤
 * │ LSFT  │LCTL_│  X  │  C  │  V  │  B  │                 │  N  │  M  │COMM │ DOT │RCTL_│ RSFT  │
 * ├───────┼─────┼─────┼─────┼─────┼─────┘                 └─────┼─────┼─────┼─────┼─────┼───────┤
 * │LT(SYMB│WEBUS│A(KC_│LEFT │RGHT │                             │ UP  │DOWN │LBRC │RBRC │MO(SYMB│
 * └───────┴─────┴─────┴─────┴─────┘                             └─────┴─────┴─────┴─────┴───────┘
 *                               ┌───────────────┐ ┌───────────────┐
 *                               │LALT_T(KC_APP) │ │RCTL_T(KC_ESC) │
 *                       ┌───────┼───────┬───────┤ ├───────┬───────┼───────┐
 *                       │  SPC  │ BSPC  │ LGUI  │ │ LALT  │  TAB  │  ENT  │
 *                       └───────┴───────┴───────┘ └───────┴───────┴───────┘
 *                                                                      generated by [keymapviz] */
/* ┌───────┬─────┬─────┬─────┬─────┬─────┬───────┐ ┌───────┬─────┬─────┬─────┬─────┬─────┬───────┐
 * │ VRSN  │ F1  │ F2  │ F3  │ F4  │ F5  │       │ │       │ F6  │ F7  │ F8  │ F9  │ F10 │  F11  │
 * ├───────┼─────┼─────┼─────┼─────┼─────┼───────┤ ├───────┼─────┼─────┼─────┼─────┼─────┼───────┤
 * │       │EXLM │ AT  │LCBR │RCBR │PIPE │       │ │       │ UP  │  7  │  8  │  9  │ASTR │  F12  │
 * ├───────┼─────┼─────┼─────┼─────┼─────┼───────┤ ├───────┼─────┼─────┼─────┼─────┼─────┼───────┤
 * │       │HASH │ DLR │LPRN │RPRN │ GRV │       │ │       │DOWN │  4  │  5  │  6  │PLUS │       │
 * ├───────┼─────┼─────┼─────┼─────┼─────┼───────┘ └───────┼─────┼─────┼─────┼─────┼─────┼───────┤
 * │       │PERC │CIRC │LBRC │RBRC │TILD │                 │AMPR │  1  │  2  │  3  │BSLS │       │
 * ├───────┼─────┼─────┼─────┼─────┼─────┘                 └─────┼─────┼─────┼─────┼─────┼───────┤
 * │EEP_RST│     │     │     │     │                             │     │ DOT │  0  │ EQL │       │
 * └───────┴─────┴─────┴─────┴─────┘                             └─────┴─────┴─────┴─────┴───────┘
 *                               ┌───────────────┐ ┌───────────────┐
 *                               │    RGB_VAI    │ │    RGB_TOG    │
 *                       ┌───────┼───────┬───────┤ ├───────┬───────┼───────┐
 *                       │RGB_HUD│RGB_VAD│RGB_HUI│ │TOGGLE_│       │       │
 *                       └───────┴───────┴───────┘ └───────┴───────┴───────┘
 *                                                                      generated by [keymapviz] */
/* ┌───────┬─────┬─────┬─────┬─────┬─────┬───────┐ ┌───────┬─────┬─────┬─────┬─────┬─────┬───────┐
 * │LED_LEV│     │     │     │     │     │       │ │       │     │     │     │     │     │ RESET │
 * ├───────┼─────┼─────┼─────┼─────┼─────┼───────┤ ├───────┼─────┼─────┼─────┼─────┼─────┼───────┤
 * │       │     │     │MS_U │     │     │       │ │       │     │     │     │     │     │       │
 * ├───────┼─────┼─────┼─────┼─────┼─────┼───────┤ ├───────┼─────┼─────┼─────┼─────┼─────┼───────┤
 * │       │     │MS_L │MS_D │MS_R │     │       │ │       │     │     │     │     │     │ MPLY  │
 * ├───────┼─────┼─────┼─────┼─────┼─────┼───────┘ └───────┼─────┼─────┼─────┼─────┼─────┼───────┤
 * │       │     │     │     │     │     │                 │     │     │MPRV │MNXT │     │       │
 * ├───────┼─────┼─────┼─────┼─────┼─────┘                 └─────┼─────┼─────┼─────┼─────┼───────┤
 * │       │     │     │BTN1 │BTN2 │                             │VOLU │VOLD │MUTE │     │       │
 * └───────┴─────┴─────┴─────┴─────┘                             └─────┴─────┴─────┴─────┴───────┘
 *                               ┌───────────────┐ ┌───────────────┐
 *                               │               │ │               │
 *                       ┌───────┼───────┬───────┤ ├───────┬───────┼───────┐
 *                       │       │       │       │ │       │       │       │
 *                       └───────┴───────┴───────┘ └───────┴───────┴───────┘
 *                                                                      generated by [keymapviz] */