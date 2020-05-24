#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x6060
#define DEVICE_VER 0x0001
#define MANUFACTURER wvauclain
#define PRODUCT m1
#define DESCRIPTION a macro pad

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 6

/* key matrix pins */
#define MATRIX_ROW_PINS \
    { D1, D0, D4, C6 }
#define MATRIX_COL_PINS \
    { D7, E6, B4, B5, B6, B2 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* LED pins on microcontroller */
#define LED0 B0
#define LED1 D5

#endif
