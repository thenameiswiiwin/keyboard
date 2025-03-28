#pragma once

#define MASTER_LEFT
#define OLED_DRIVER_ENABLE

// tapping toggle for my layers
#define TAPPING_TOGGLE 2

// choose IS_LEFT or IS_RIGHT for compilation and flash firmware
// #define IS_LEFT 1
#define IS_RIGHT 1

// logo glitch
#define WITH_GLITCH
// boot sequence
#define WITH_BOOT

// custom transport for displaying on both side
#define SPLIT_TRANSACTION_IDS_USER USER_SYNC_A

//vital
#define VIAL_KEYBOARD_UID {0xA8, 0xA3, 0x38, 0xB6, 0x1F, 0x6D, 0x86, 0x25}

// custom font
#ifdef OLED_FONT_H
#    undef OLED_FONT_H
#endif
#define OLED_FONT_H "font.c"
#undef OLED_FONT_END
#define OLED_FONT_END 125

// more space
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define NO_ACTION_ONESHOT
#define DISABLE_LEADER

// ???
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

// small layer state
#define LAYER_STATE_8BIT

// no debug or trace
#ifndef NO_DEBUG
#    define NO_DEBUG
#endif
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#    define NO_PRINT
#endif
