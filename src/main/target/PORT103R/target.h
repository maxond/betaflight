/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "103R"

#define LED0    PB3 // PB3 (LED)
#define LED1    PB4 // PB4 (LED)
#define LED2    PD2 // PD2 (LED) - Labelled LED4

#define BEEPER      PA12 // PA12 (Beeper)

#define BARO_XCLR_GPIO   GPIOC
#define BARO_XCLR_PIN    PC13
#define BARO_EOC_GPIO    GPIOC
#define BARO_EOC_PIN     PC14
#define BARO_APB2_PERIPHERALS RCC_APB2Periph_GPIOC

#define INVERTER    PB2 // PB2 (BOOT1) abused as inverter select GPIO
#define INVERTER_USART USART2

#define USE_SPI
#define USE_SPI_DEVICE_2

#define PORT103R_SPI_INSTANCE     SPI2
#define PORT103R_SPI_CS_PIN       PB12

// We either have this 16mbit flash chip on SPI or the MPU6500 acc/gyro depending on board revision:
#define M25P16_CS_PIN         PORT103R_SPI_CS_PIN
#define M25P16_SPI_INSTANCE   PORT103R_SPI_INSTANCE

#define MPU6000_CS_PIN        PORT103R_SPI_CS_PIN
#define MPU6000_SPI_INSTANCE  PORT103R_SPI_INSTANCE

#define MPU6500_CS_PIN        PORT103R_SPI_CS_PIN
#define MPU6500_SPI_INSTANCE  PORT103R_SPI_INSTANCE

#define GYRO
#define USE_FAKE_GYRO
//#define USE_GYRO_L3G4200D
//#define USE_GYRO_L3GD20
//#define USE_GYRO_MPU3050
#define USE_GYRO_MPU6050
#define USE_GYRO_SPI_MPU6000
#define USE_GYRO_SPI_MPU6500

#define ACC
#define USE_FAKE_ACC
//#define USE_ACC_ADXL345
//#define USE_ACC_BMA280
//#define USE_ACC_MMA8452
#define USE_ACC_MPU6050
#define USE_ACC_SPI_MPU6000
#define USE_ACC_SPI_MPU6500

#define BARO
#define USE_BARO_MS5611
#define USE_BARO_BMP085
#define USE_BARO_BMP280

#define MAG
#define USE_MAG_HMC5883
#define USE_MAG_AK8975

#define USE_FLASHFS
#define USE_FLASHTOOLS
#define USE_FLASH_M25P16

#define SONAR
#define SONAR_TRIGGER_PIN       PB0
#define SONAR_ECHO_PIN          PB1
#define SONAR_TRIGGER_PIN_PWM   PB8
#define SONAR_ECHO_PIN_PWM      PB9

#define DISPLAY

#define USE_UART1
#define USE_UART2
#define USE_SOFTSERIAL1
#define USE_SOFTSERIAL2
#define SERIAL_PORT_COUNT 4

#define SOFTSERIAL_1_TIMER TIM3
#define SOFTSERIAL_1_TIMER_RX_HARDWARE 4 // PWM 5
#define SOFTSERIAL_1_TIMER_TX_HARDWARE 5 // PWM 6
#define SOFTSERIAL_2_TIMER TIM3
#define SOFTSERIAL_2_TIMER_RX_HARDWARE 6 // PWM 7
#define SOFTSERIAL_2_TIMER_TX_HARDWARE 7 // PWM 8

#define USE_I2C
#define I2C_DEVICE (I2CDEV_2)

// #define SOFT_I2C // enable to test software i2c
// #define SOFT_I2C_PB1011 // If SOFT_I2C is enabled above, need to define pinout as well (I2C1 = PB67, I2C2 = PB1011)
// #define SOFT_I2C_PB67

#define USE_ADC
#define CURRENT_METER_ADC_PIN   PB1
#define VBAT_ADC_PIN            PA4
#define RSSI_ADC_PIN            PA1
#define EXTERNAL1_ADC_PIN       PA5

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

// IO - stm32f103RCT6 in 64pin package
#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD (BIT(0)|BIT(1)|BIT(2))


#define USED_TIMERS     (TIM_N(1) | TIM_N(2) | TIM_N(3) | TIM_N(4))


