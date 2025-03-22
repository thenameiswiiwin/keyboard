#ifdef OLED_ENABLE

// Initialize OLED rotation based on keyboard master/slave state
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // Flips the display 180 degrees if offhand
  }
  return rotation;
}

// Functions for reading and displaying information on the OLED screen
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// OLED task to update display content
void oled_task_user(void) {
  if (is_keyboard_master()) {
    // Display layer state and keylog information on OLED
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
  } else {
    // Display logo when not the master keyboard
    oled_write(read_logo(), false);
  }
}

// Process the keycode for logging, called during key press
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    // Log keypress to OLED
    set_keylog(keycode, record);
#endif
  }
  return true;
}

#endif // OLED_ENABLE
