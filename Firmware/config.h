#pragma once

// Encoder resolution (how many pulses per detent)
#define ENCODER_RESOLUTION 4

// Enable Via dynamic keymaps
#define DYNAMIC_KEYMAP_LAYER_COUNT 4

// I2C pins for potential OLED use later (D4=SDA, D5=SCL)
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP4
#define I2C1_SCL_PIN GP5
