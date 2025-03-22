#pragma once

// Define the left side as the master side
#define MASTER_LEFT

// RGB lighting configuration
#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 27
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17

// Tap and hold configuration
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD
#undef TAPPING_TERM
#define TAPPING_TERM 240
#define RETRO_TAPPING

// Mouse key settings for improved responsiveness
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 5
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 16
#undef MOUSEKEY_MOVE_DELTA
#define MOUSEKEY_MOVE_DELTA 1
#undef MOUSEKEY_INITIAL_SPEED
#define MOUSEKEY_INITIAL_SPEED 1
#undef MOUSEKEY_DECELERATED_SPEED
#define MOUSEKEY_DECELERATED_SPEED 12
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 22
#define USB_SUSPEND_WAKEUP_DELAY 0

// Mouse key wheel settings for smooth scroll
#undef MOUSEKEY_WHEEL_INTERVAL
#define MOUSEKEY_WHEEL_INTERVAL 83
#undef MOUSEKEY_WHEEL_MAX_SPEED
#define MOUSEKEY_WHEEL_MAX_SPEED 3
