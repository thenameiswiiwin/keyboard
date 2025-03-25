#pragma once

// layer name : must be 3 chars
#define LAYER_NAME_0 "HUY"
#define LAYER_NAME_1 "NUM"
#define LAYER_NAME_2 "SYM"

enum layer_number { _QWERTY = 0, _LOWER, _RAISE };

void render_gears(void);
void render_layer_frame(gui_state_t t);
void update_layer_frame(layer_state_t state);
