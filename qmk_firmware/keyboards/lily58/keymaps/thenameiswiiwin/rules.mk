BOOTMAGIC_ENABLE = lite
OLED_ENABLE = yes
TAP_DANCE_ENABLE = yes
SLEEP_LED_ENABLE = no

# If you want to change the display of OLED, you need to modify here
SRC +=  ./lib/rgb_state_reader.c \
        ./lib/layer_state_reader.c \
        ./lib/logo_reader.c \
        ./lib/keylogger.c \
        # ./lib/mode_icon_reader.c \
        # ./lib/host_led_state_reader.c \
        # ./lib/timelogger.c
