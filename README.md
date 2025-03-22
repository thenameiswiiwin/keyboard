# Lily58 Custom Keyboard Configuration

## Overview

This repository contains my personal QMK firmware configuration for the Lily58 split ergonomic keyboard. The Lily58 is a 58-key split keyboard with a 6×4+4 column-staggered layout, designed for ergonomic typing and programming.

### Features

- **Custom Keymap**: Optimized layout for developers with intuitive access to symbols and navigation
- **Advanced Tap Dance**: Multi-function keys for increased efficiency without additional layers
- **OLED Support**: Custom OLED displays showing active layer and typing information
- **Ergonomic Design**: Split layout minimizes wrist strain during extended typing sessions

## Layout

The keymap is organized into four layers:

1. **QWERTY**: Base typing layer with standard layout and strategic modifier placement
2. **LOWER**: Numbers, navigation, and frequently used IDE shortcuts
3. **RAISE**: Symbols, brackets, and special characters for coding
4. **ADJUST**: Function keys, media controls, and keyboard settings

### Layer Visualization

**QWERTY Layer**

```
╭──────┬──────┬──────┬──────┬──────┬──────╮                ╭──────┬──────┬──────┬──────┬──────┬──────╮
│      │      │      │      │      │      │                │      │      │      │      │      │      │
├──────┼──────┼──────┼──────┼──────┼──────┤                ├──────┼──────┼──────┼──────┼──────┼──────┤
│  TAB │   Q  │   W  │   E  │   R  │   T  │                │   Y  │   U  │   I  │   O  │   P  │   -  │
├──────┼──────┼──────┼──────┼──────┼──────┤                ├──────┼──────┼──────┼──────┼──────┼──────┤
│ SHIFT│   A  │   S  │   D  │   F  │   G  │                │   H  │   J  │   K  │   L  │   '  │   ;  │
├──────┼──────┼──────┼──────┼──────┼──────┼──────╮  ╭──────┼──────┼──────┼──────┼──────┼──────┼──────┤
│  ALT │   Z  │   X  │   C  │   V  │   B  │      │  │      │   N  │   M  │  TD1 │  TD2 │   /  │ ENTER│
╰──────┴──────┴──────┼──────┼──────┼──────┼──────┤  ├──────┼──────┼──────┼──────┼──────┴──────┴──────╯
                     │      │  GUI │LOWER │ SPACE│  │ CTRL │RAISE │ BSPC │      │
                     ╰──────┴──────┴──────┴──────╯  ╰──────┴──────┴──────┴──────╯
```

## Special Features

### Tap Dance Keys

This keymap uses QMK's tap dance feature to enable multi-function keys:

- `TD1`: Single tap = `,` | Double tap = `<`
- `TD2`: Single tap = `.` | Double tap = `>`

### OLED Configuration

The OLED displays show:

- Active layer indicator
- Logo on the master side
- Key press visualization
- WPM counter

## Installation

### Prerequisites

- [QMK Firmware](https://qmk.fm/)
- [QMK MSYS](https://msys.qmk.fm/) (Windows) or QMK environment (macOS/Linux)

### Steps

1. Clone the QMK firmware repository:

   ```bash
   git clone https://github.com/qmk/qmk_firmware.git
   cd qmk_firmware
   ```

2. Copy the custom files to your QMK directory:

   ```bash
   # Create your keymap directory if it doesn't exist
   mkdir -p keyboards/lily58/keymaps/thenameiswiiwin

   # Copy files from this repository
   cp -r path/to/this/repo/keymaps/thenameiswiiwin/* keyboards/lily58/keymaps/thenameiswiiwin/
   ```

3. Compile the firmware:

   ```bash
   qmk compile -kb lily58 -km thenameiswiiwin
   ```

4. Flash the firmware to your keyboard:
   ```bash
   qmk flash -kb lily58 -km thenameiswiiwin
   ```

## Customization

### Modifying Keymap

Edit the `keymap.c` file to change your key layout. The file is organized by layers, with each layer defined in the `keymaps[][]` array.

### Tap Dance Configuration

Modify the `dance.c` file to change or add tap dance definitions.

### OLED Display

Customize the OLED display by editing the `oled.c` file.

## Build Tips

- Ensure both halves of the keyboard are connected when flashing
- Reset the keyboard before flashing (press reset button or defined reset key)
- If you encounter issues with OLED, ensure the OLED drivers are properly enabled in `rules.mk`

## Hardware

This configuration is designed for the Lily58 Pro with:

- Elite-C or Pro Micro controllers
- 128x32 OLED displays
- RGB underglow (optional)
- Hot-swap sockets for MX-style switches

## Resources

- [Lily58 GitHub Repository](https://github.com/kata0510/Lily58)
- [QMK Documentation](https://docs.qmk.fm/)
- [QMK Configurator](https://config.qmk.fm/)
- [Keyboard Layout Editor](http://www.keyboard-layout-editor.com/)

---

_"Life is too short for bad keyboards."_
