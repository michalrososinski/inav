/*
 * This file is part of INAV.
 * ... (skrócone dla przejrzystości)
 */

#pragma once
#define USE_TARGET_CONFIG

#define TARGET_BOARD_IDENTIFIER "FRF4WM"
#define USBD_PRODUCT_STRING  "FLYINGRCF4WINGMINI_INA226"

#define LED0                    PA14  //Blue
#define LED1                    PA13  //Green

// *************** SPI1 IMU & OSD *******************
#define USE_SPI
#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PB4
#define SPI1_MOSI_PIN           PA7

#define USE_IMU_ICM42605
#define IMU_ICM42605_ALIGN      CW90_DEG_FLIP
#define ICM42605_SPI_BUS        BUS_SPI1
#define ICM42605_CS_PIN         PC14

// *************** I2C /Baro/Mag *********************
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB8
#define I2C1_SDA                PB7

// WYMUSZENIE STEROWNIKÓW I2C (Kluczowe dla INA226)
#define USE_I2C_DEVICES

#define USE_BARO
#define BARO_I2C_BUS            BUS_I2C1
#define USE_BARO_SPL06
#define USE_BARO_BMP280

#define USE_MAG
#define MAG_I2C_BUS             BUS_I2C1
#define USE_MAG_ALL

#define USE_RANGEFINDER
#define RANGEFINDER_I2C_BUS     BUS_I2C1
#define PITOT_I2C_BUS            BUS_I2C1
#define TEMPERATURE_I2C_BUS     BUS_I2C1

// *************** UART *****************************
#define USE_VCP
#define USE_UART1
#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PA10
#define USE_UART2
#define UART2_TX_PIN            PA2
#define UART2_RX_PIN            PA3
#define USE_UART4
#define UART4_TX_PIN            PA0
#define UART4_RX_PIN            PA1
#define USE_UART5
#define UART5_TX_PIN            PC12
#define UART5_RX_PIN            PD2
#define USE_SOFTSERIAL1
#define SOFTSERIAL_1_TX_PIN      PA2
#define SOFTSERIAL_1_RX_PIN      PA2

#define SERIAL_PORT_COUNT       6
#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_CRSF
#define SERIALRX_UART           SERIAL_PORT_USART1

// *************** ADC (Wyłączamy zbędne kanały analogowe) ***********
#define USE_ADC
#define ADC_INSTANCE                ADC1
#define ADC1_DMA_STREAM             DMA2_Stream4
#define ADC_CHANNEL_1_PIN           PC4
#define VBAT_ADC_CHANNEL            ADC_CHN_1

// *************** KONFIGURACJA INA226 ************************
#define USE_INA226
#define CURRENT_METER_INA226_I2C_BUS BUS_I2C1
#define VOLTAGE_METER_INA226_I2C_BUS BUS_I2C1

// *************** CZYSZCZENIE PAMIĘCI (Aby zmieścić INA226) *******
#undef USE_ADC_INTERNAL         // Wyłączamy wewnętrzny pomiar prądu procesora
#undef USE_LED_STRIP            // Wyłączamy paski LED (oszczędność flash)
#undef USE_BLACKBOX             // Wyłączamy czarną skrzynkę
#undef USE_OSD_PROFILES         // Wyłączamy profile OSD
#undef USE_OSD_STICK_EXTENDED_CONFIG
#undef USE_MENU                 // Wyłączamy CMS (Menu OSD) - DRZEWO KONFIGURACJI Z DRĄŻKÓW
#undef USE_VTX_SMARTAUDIO
#undef USE_VTX_TRAMP

// *************** OTHERS ************************
#define DEFAULT_FEATURES   (FEATURE_OSD | FEATURE_TELEMETRY | FEATURE_CURRENT_METER | FEATURE_VBAT | FEATURE_TX_PROF_SEL)
#define VBAT_SCALE_DEFAULT      2100
#define CURRENT_METER_SCALE     150

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         (BIT(2))

#define MAX_PWM_OUTPUT_PORTS    7
#define USE_SERIAL_4WAY_BLHELI_INTERFACE
