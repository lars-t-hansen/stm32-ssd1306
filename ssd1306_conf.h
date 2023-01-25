/* Sample configuration file, copy this into your project.  The library will include it
 * and let itself be configured by it.
 */

#ifndef INC_SSD1306_CONF_H_
#define INC_SSD1306_CONF_H_

// Your hardware device
#define STM32L4

// Your communication channel
#define SSD1306_USE_I2C
#define SSD1306_I2C_PORT hi2c1
#define SSD1306_I2C_ADDR (0x3C << 1)

// Your screen parameters
#define SSD1306_WIDTH 128
#define SSD1306_HEIGHT 32

// Fonts you want
//#define SSD1306_INCLUDE_FONT_6x8
#define SSD1306_INCLUDE_FONT_7x10
//#define SSD1306_INCLUDE_FONT_11x18
//#define SSD1306_INCLUDE_FONT_16x26
//#define SSD1306_INCLUDE_FONT_16x24

// Define this if you want a bunch of drawing primitives, otherwise it's text only
//#define SSD1306_GRAPHICS

#endif /* INC_SSD1306_CONF_H_ */
