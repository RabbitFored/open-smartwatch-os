#pragma once

// --- WAVESHARE 1.46" ESP32-S3 QSPI PROFILE ---
#define OSW_HW_WAVESHARE_S3

// 1. Core Display Pins (QSPI)
#define OSW_DISPLAY_WIDTH 412
#define OSW_DISPLAY_HEIGHT 412
#define OSW_HW_PIN_DISP_CS 21
#define OSW_HW_PIN_DISP_SCK 40
#define OSW_HW_PIN_DISP_MOSI 46 // D0
#define OSW_HW_PIN_DISP_MISO 45 // D1
#define OSW_HW_PIN_DISP_D2 42
#define OSW_HW_PIN_DISP_D3 41
#define OSW_HW_PIN_DISP_BL 5

// 2. I2C Nervous System
#define OSW_HW_PIN_I2C_SDA 11
#define OSW_HW_PIN_I2C_SCL 10

// 3. Sensor Addresses
#define OSW_HW_I2C_RTC_ADDR 0x51      // PCF85063
#define OSW_HW_I2C_IMU_ADDR 0x6B      // QMI8658
#define OSW_HW_I2C_TOUCH_ADDR 0x7E    // CST816D
#define OSW_HW_I2C_EXPANDER_ADDR 0x20 // TCA9554

// 4. Power & Buttons
#define OSW_HW_PIN_BTN1 0 // Boot button acts as main input
#define OSW_HW_PIN_BAT_ADC 4
#define OSW_HW_PIN_BAT_LATCH 7