// added per https://github.com/qmk/qmk_firmware/issues/21137

enum myCombos {
    ESC_COMBO,
    TAB_COMBO,
    COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM esc_combo[] = {KC_W, KC_Q, COMBO_END};
const uint16_t PROGMEM tab_combo[] = {KC_A, KC_R, COMBO_END};

combo_t key_combos[] = {
    [ESC_COMBO] = COMBO(esc_combo, KC_ESC),
    [TAB_COMBO] = COMBO(tab_combo, KC_TAB)
};