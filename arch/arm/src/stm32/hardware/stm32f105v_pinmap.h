/****************************************************************************
 * arch/arm/src/stm32/hardware/stm32f105v_pinmap.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __ARCH_ARM_SRC_STM32_HARDWARE_STM32F105V_PINMAP_H
#define __ARCH_ARM_SRC_STM32_HARDWARE_STM32F105V_PINMAP_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

#include "stm32_gpio.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Alternate Pin Functions: */

#define GPIO_ADC12_IN0_0        (GPIO_INPUT|GPIO_CNF_ANALOGIN|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN0)
#define GPIO_ADC12_IN1_0        (GPIO_INPUT|GPIO_CNF_ANALOGIN|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN1)
#define GPIO_ADC12_IN10_0       (GPIO_INPUT|GPIO_CNF_ANALOGIN|GPIO_MODE_INPUT|GPIO_PORTC|GPIO_PIN0)
#define GPIO_ADC12_IN11_0       (GPIO_INPUT|GPIO_CNF_ANALOGIN|GPIO_MODE_INPUT|GPIO_PORTC|GPIO_PIN1)
#define GPIO_ADC12_IN12_0       (GPIO_INPUT|GPIO_CNF_ANALOGIN|GPIO_MODE_INPUT|GPIO_PORTC|GPIO_PIN2)
#define GPIO_ADC12_IN13_0       (GPIO_INPUT|GPIO_CNF_ANALOGIN|GPIO_MODE_INPUT|GPIO_PORTC|GPIO_PIN3)
#define GPIO_ADC12_IN14_0       (GPIO_INPUT|GPIO_CNF_ANALOGIN|GPIO_MODE_INPUT|GPIO_PORTC|GPIO_PIN4)
#define GPIO_ADC12_IN15_0       (GPIO_INPUT|GPIO_CNF_ANALOGIN|GPIO_MODE_INPUT|GPIO_PORTC|GPIO_PIN5)
#define GPIO_ADC12_IN2_0        (GPIO_INPUT|GPIO_CNF_ANALOGIN|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN2)
#define GPIO_ADC12_IN3_0        (GPIO_INPUT|GPIO_CNF_ANALOGIN|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN3)
#define GPIO_ADC12_IN4_0        (GPIO_INPUT|GPIO_CNF_ANALOGIN|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN4)
#define GPIO_ADC12_IN5_0        (GPIO_INPUT|GPIO_CNF_ANALOGIN|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN5)
#define GPIO_ADC12_IN6_0        (GPIO_INPUT|GPIO_CNF_ANALOGIN|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN6)
#define GPIO_ADC12_IN7_0        (GPIO_INPUT|GPIO_CNF_ANALOGIN|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN7)
#define GPIO_ADC12_IN8_0        (GPIO_INPUT|GPIO_CNF_ANALOGIN|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN0)
#define GPIO_ADC12_IN9_0        (GPIO_INPUT|GPIO_CNF_ANALOGIN|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN1)

#if defined(CONFIG_STM32_CAN1_REMAP1)
#  define GPIO_CAN1_RX_0        (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN8)
#  define GPIO_CAN1_TX_0        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN9)
#elif defined(CONFIG_STM32_CAN1_REMAP2)
#  define GPIO_CAN1_RX_0        (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN0)
#  define GPIO_CAN1_TX_0        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTD|GPIO_PIN1)
#else
#  define GPIO_CAN1_RX_0        (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN11)
#  define GPIO_CAN1_TX_0        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN12)
#endif

#if defined(CONFIG_STM32_CAN2_REMAP)
#  define GPIO_CAN2_RX_0        (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN5)
#  define GPIO_CAN2_TX_0        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN6)
#else
#  define GPIO_CAN2_RX_0        (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN12)
#  define GPIO_CAN2_TX_0        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN13)
#endif

#if 0 /* Needs further investigation */
#define GPIO_DAC1_OUT1_0         (GPIO_INPUT|GPIO_CNF_ANALOGIN|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN4)
#define GPIO_DAC1_OUT2_0         (GPIO_INPUT|GPIO_CNF_ANALOGIN|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN5)
#endif

#if defined(CONFIG_STM32_I2C1_REMAP)
#  define GPIO_I2C1_SCL_0       (GPIO_ALT|GPIO_CNF_AFOD|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN8)
#  define GPIO_I2C1_SDA_0       (GPIO_ALT|GPIO_CNF_AFOD|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN9)
#else
#  define GPIO_I2C1_SCL_0       (GPIO_ALT|GPIO_CNF_AFOD|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN6)
#  define GPIO_I2C1_SDA_0       (GPIO_ALT|GPIO_CNF_AFOD|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN7)
#endif
#define GPIO_I2C1_SMBA_0        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN5)

#define GPIO_I2C2_SCL_0         (GPIO_ALT|GPIO_CNF_AFOD|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN10)
#define GPIO_I2C2_SDA_0         (GPIO_ALT|GPIO_CNF_AFOD|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN11)
#define GPIO_I2C2_SMBA_0        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN12)
#define GPIO_I2S2_CK_0          (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN13)
#define GPIO_I2S2_MCK_0         (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTC|GPIO_PIN6)
#define GPIO_I2S2_WS_0          (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN12)

#define GPIO_I2S3_CK_0          (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN3)
#define GPIO_I2S3_MCK_0         (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTC|GPIO_PIN7)
#define GPIO_I2S3_SD_0          (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN5)
#define GPIO_I2S3_WS_0          (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN15)

#define GPIO_MCO_0              (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN8)

#define GPIO_OTGFS_DM_0         (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN11)
#define GPIO_OTGFS_DP_0         (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN12)
#define GPIO_OTGFS_ID_0         (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN10)
#define GPIO_OTGFS_SOF_0        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN8)
#define GPIO_OTGFS_VBUS_0       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN9)

#if defined(CONFIG_STM32_SPI1_REMAP)
#  define GPIO_SPI1_NSS_0       (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN15)
#  define GPIO_SPI1_SCK_0       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN3)
#  define GPIO_SPI1_MISO_0      (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN4)
#  define GPIO_SPI1_MOSI_0      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN5)
#else
#  define GPIO_SPI1_NSS_0       (GPIO_INPUT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN4)
#  define GPIO_SPI1_SCK_0       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN5)
#  define GPIO_SPI1_MISO_0      (GPIO_INPUT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN6)
#  define GPIO_SPI1_MOSI_0      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN7)
#endif

#define GPIO_SPI2_NSS_0         (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN12)
#define GPIO_SPI2_SCK_0         (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN13)
#define GPIO_SPI2_MISO_0        (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN14)
#define GPIO_SPI2_MOSI_0        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN15)

#if defined(CONFIG_STM32_SPI3_REMAP)
#  define GPIO_SPI3_NSS_0       (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN4)
#  define GPIO_SPI3_SCK_0       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTC|GPIO_PIN10)
#  define GPIO_SPI3_MISO_0      (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTC|GPIO_PIN11)
#  define GPIO_SPI3_MOSI_0      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTC|GPIO_PIN12)
#else
#  define GPIO_SPI3_NSS_0       (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN15)
#  define GPIO_SPI3_SCK_0       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN3)
#  define GPIO_SPI3_MISO_0      (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN4)
#  define GPIO_SPI3_MOSI_0      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN5)
#endif

#if 0 /* Needs further investigation */
#define GPIO_TAMPER_RTC_0       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTC|GPIO_PIN13)
#endif

#if defined(CONFIG_STM32_TIM1_FULL_REMAP)
#  define GPIO_TIM1_ETR_0       (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTE|GPIO_PIN7)
#  define GPIO_TIM1_CH1IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTE|GPIO_PIN9)
#  define GPIO_TIM1_CH1OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTE|GPIO_PIN9)
#  define GPIO_TIM1_CH2IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTE|GPIO_PIN11)
#  define GPIO_TIM1_CH2OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTE|GPIO_PIN11)
#  define GPIO_TIM1_CH3IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTE|GPIO_PIN13)
#  define GPIO_TIM1_CH3OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTE|GPIO_PIN13)
#  define GPIO_TIM1_CH4IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTE|GPIO_PIN14)
#  define GPIO_TIM1_CH4OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTE|GPIO_PIN14)
#  define GPIO_TIM1_BKIN_0      (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTE|GPIO_PIN15)
#  define GPIO_TIM1_CH1NOUT_0   (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTE|GPIO_PIN8)
#  define GPIO_TIM1_CH2NOUT_0   (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTE|GPIO_PIN10)
#  define GPIO_TIM1_CH3NOUT_0   (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTE|GPIO_PIN12)
#elif defined(CONFIG_STM32_TIM1_PARTIAL_REMAP)
#  define GPIO_TIM1_ETR_0       (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN12)
#  define GPIO_TIM1_CH1IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN8)
#  define GPIO_TIM1_CH1OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN8)
#  define GPIO_TIM1_CH2IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN9)
#  define GPIO_TIM1_CH2OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN9)
#  define GPIO_TIM1_CH3IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN10)
#  define GPIO_TIM1_CH3OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN10)
#  define GPIO_TIM1_CH4IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN11)
#  define GPIO_TIM1_CH4OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN11)
#  define GPIO_TIM1_BKIN_0      (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN6)
#  define GPIO_TIM1_CH1NOUT_0   (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN7)
#  define GPIO_TIM1_CH2NOUT_0   (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN0)
#  define GPIO_TIM1_CH3NOUT_0   (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN1)
#else
#  define GPIO_TIM1_ETR_0       (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN12)
#  define GPIO_TIM1_CH1IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN8)
#  define GPIO_TIM1_CH1OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN8)
#  define GPIO_TIM1_CH2IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN9)
#  define GPIO_TIM1_CH2OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN9)
#  define GPIO_TIM1_CH3IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN10)
#  define GPIO_TIM1_CH3OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN10)
#  define GPIO_TIM1_CH4IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN11)
#  define GPIO_TIM1_CH4OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN11)
#  define GPIO_TIM1_BKIN_0      (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN12)
#  define GPIO_TIM1_CH1NOUT_0   (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN13)
#  define GPIO_TIM1_CH2NOUT_0   (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN14)
#  define GPIO_TIM1_CH3NOUT_0   (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN15)
#endif

#if defined(CONFIG_STM32_TIM2_FULL_REMAP)
#  define GPIO_TIM2_ETR_0       (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN15)
#  define GPIO_TIM2_CH1IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN15)
#  define GPIO_TIM2_CH1OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN15)
#  define GPIO_TIM2_CH2IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN3)
#  define GPIO_TIM2_CH2OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN3)
#  define GPIO_TIM2_CH3IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN10)
#  define GPIO_TIM2_CH3OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN10)
#  define GPIO_TIM2_CH4IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN11)
#  define GPIO_TIM2_CH4OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN11)
#elif defined(CONFIG_STM32_TIM2_PARTIAL_REMAP_1)
#  define GPIO_TIM2_ETR_0       (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN15)
#  define GPIO_TIM2_CH1IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN15)
#  define GPIO_TIM2_CH1OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN15)
#  define GPIO_TIM2_CH2IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN3)
#  define GPIO_TIM2_CH2OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN3)
#  define GPIO_TIM2_CH3IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN2)
#  define GPIO_TIM2_CH3OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN2)
#  define GPIO_TIM2_CH4IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN3)
#  define GPIO_TIM2_CH4OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN3)
#elif defined(CONFIG_STM32_TIM2_PARTIAL_REMAP_2)
#  define GPIO_TIM2_ETR_0       (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN0)
#  define GPIO_TIM2_CH1IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN0)
#  define GPIO_TIM2_CH1OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN0)
#  define GPIO_TIM2_CH2IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN1)
#  define GPIO_TIM2_CH2OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN1)
#  define GPIO_TIM2_CH3IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN10)
#  define GPIO_TIM2_CH3OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN10)
#  define GPIO_TIM2_CH4IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN11)
#  define GPIO_TIM2_CH4OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN11)
#else
#  define GPIO_TIM2_ETR_0       (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN0)
#  define GPIO_TIM2_CH1IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN0)
#  define GPIO_TIM2_CH1OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN0)
#  define GPIO_TIM2_CH2IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN1)
#  define GPIO_TIM2_CH2OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN1)
#  define GPIO_TIM2_CH3IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN2)
#  define GPIO_TIM2_CH3OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN2)
#  define GPIO_TIM2_CH4IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN3)
#  define GPIO_TIM2_CH4OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN3)
#endif

#if defined(CONFIG_STM32_TIM3_FULL_REMAP)
#  define GPIO_TIM3_CH1IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTC|GPIO_PIN6)
#  define GPIO_TIM3_CH1OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTC|GPIO_PIN6)
#  define GPIO_TIM3_CH2IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTC|GPIO_PIN7)
#  define GPIO_TIM3_CH2OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTC|GPIO_PIN7)
#  define GPIO_TIM3_CH3IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTC|GPIO_PIN8)
#  define GPIO_TIM3_CH3OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTC|GPIO_PIN8)
#  define GPIO_TIM3_CH4IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTC|GPIO_PIN9)
#  define GPIO_TIM3_CH4OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTC|GPIO_PIN9)
#elif defined(CONFIG_STM32_TIM3_PARTIAL_REMAP)
#  define GPIO_TIM3_CH1IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN4)
#  define GPIO_TIM3_CH1OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN4)
#  define GPIO_TIM3_CH2IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN5)
#  define GPIO_TIM3_CH2OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN5)
#  define GPIO_TIM3_CH3IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN0)
#  define GPIO_TIM3_CH3OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN0)
#  define GPIO_TIM3_CH4IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN1)
#  define GPIO_TIM3_CH4OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN1)
#else
#  define GPIO_TIM3_CH1IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN6)
#  define GPIO_TIM3_CH1OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN6)
#  define GPIO_TIM3_CH2IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN7)
#  define GPIO_TIM3_CH2OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN7)
#  define GPIO_TIM3_CH3IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN0)
#  define GPIO_TIM3_CH3OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN0)
#  define GPIO_TIM3_CH4IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN1)
#  define GPIO_TIM3_CH4OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN1)
#endif
#define GPIO_TIM3_ETR_0         (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN2)

#if defined(CONFIG_STM32_TIM4_REMAP)
#  define GPIO_TIM4_CH1IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN12)
#  define GPIO_TIM4_CH1OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTD|GPIO_PIN12)
#  define GPIO_TIM4_CH2IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN13)
#  define GPIO_TIM4_CH2OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTD|GPIO_PIN13)
#  define GPIO_TIM4_CH3IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN14)
#  define GPIO_TIM4_CH3OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTD|GPIO_PIN14)
#  define GPIO_TIM4_CH4IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN15)
#  define GPIO_TIM4_CH4OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTD|GPIO_PIN15)
#else
#  define GPIO_TIM4_CH1IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN6)
#  define GPIO_TIM4_CH1OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN6)
#  define GPIO_TIM4_CH2IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN7)
#  define GPIO_TIM4_CH2OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN7)
#  define GPIO_TIM4_CH3IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN8)
#  define GPIO_TIM4_CH3OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN8)
#  define GPIO_TIM4_CH4IN_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN9)
#  define GPIO_TIM4_CH4OUT_0    (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN9)
#endif
#define GPIO_TIM4_ETR_0         (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTE|GPIO_PIN0)

#define GPIO_TIM5_CH1IN_0       (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN0)
#define GPIO_TIM5_CH1OUT_0      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN0)
#define GPIO_TIM5_CH2IN_0       (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN1)
#define GPIO_TIM5_CH2OUT_0      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN1)
#define GPIO_TIM5_CH3IN_0       (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN2)
#define GPIO_TIM5_CH3OUT_0      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN2)
#define GPIO_TIM5_CH4IN_0       (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN3)
#define GPIO_TIM5_CH4OUT_0      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN3)

#if 0 /* Needs further investigation */
#define GPIO_TRACECK_0          (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTE|GPIO_PIN2)
#define GPIO_TRACED0_0          (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTE|GPIO_PIN3)
#define GPIO_TRACED1_0          (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTE|GPIO_PIN4)
#define GPIO_TRACED2_0          (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTE|GPIO_PIN5)
#define GPIO_TRACED3_0          (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTE|GPIO_PIN6)
#if defined(CONFIG_STM32_TRACESWO_REMAP)
#  define GPIO_TRACESWO_0       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN3)
#endif
#endif

#define GPIO_USART1_CTS_0       (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN11)
#define GPIO_USART1_RTS_0       (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN12)
#define GPIO_USART1_CK_0        (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN8)
#if defined(CONFIG_STM32_USART1_REMAP)
#  define GPIO_USART1_TX_0      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN6)
#  define GPIO_USART1_RX_0      (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN7)
#else
#  define GPIO_USART1_TX_0      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN9)
#  define GPIO_USART1_RX_0      (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN10)
#endif

#if defined(CONFIG_STM32_USART2_REMAP)
#  define GPIO_USART2_CTS_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN3)
#  define GPIO_USART2_RTS_0     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTD|GPIO_PIN4)
#  define GPIO_USART2_TX_0      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTD|GPIO_PIN5)
#  define GPIO_USART2_RX_0      (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN6)
#  define GPIO_USART2_CK_0      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTD|GPIO_PIN7)
#else
#  define GPIO_USART2_CTS_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN0)
#  define GPIO_USART2_RTS_0     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN1)
#  define GPIO_USART2_TX_0      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN2)
#  define GPIO_USART2_RX_0      (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTA|GPIO_PIN3)
#  define GPIO_USART2_CK_0      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN4)
#endif

#if defined(CONFIG_STM32_USART3_FULL_REMAP)
#  define GPIO_USART3_TX_0      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTD|GPIO_PIN8)
#  define GPIO_USART3_RX_0      (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN9)
#  define GPIO_USART3_CK_0      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTD|GPIO_PIN10)
#  define GPIO_USART3_CTS_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN11)
#  define GPIO_USART3_RTS_0     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTD|GPIO_PIN12)
#elif defined(CONFIG_STM32_USART3_PARTIAL_REMAP)
#  define GPIO_USART3_TX_0      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTC|GPIO_PIN10)
#  define GPIO_USART3_RX_0      (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTC|GPIO_PIN11)
#  define GPIO_USART3_CK_0      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTC|GPIO_PIN12)
#  define GPIO_USART3_CTS_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN13)
#  define GPIO_USART3_RTS_0     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN14)
#else
#  define GPIO_USART3_TX_0      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN10)
#  define GPIO_USART3_RX_0      (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN11)
#  define GPIO_USART3_CK_0      (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN12)
#  define GPIO_USART3_CTS_0     (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTB|GPIO_PIN13)
#  define GPIO_USART3_RTS_0     (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN14)
#endif

#define GPIO_UART4_RX_0         (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTC|GPIO_PIN11)
#define GPIO_UART4_TX_0         (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTC|GPIO_PIN10)

#define GPIO_UART5_RX_0         (GPIO_INPUT|GPIO_CNF_INFLOAT|GPIO_MODE_INPUT|GPIO_PORTD|GPIO_PIN2)
#define GPIO_UART5_TX_0         (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTC|GPIO_PIN12)

#define GPIO_WKUP_0             (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN0)

/* Some GPIOs are accessible only as remapped, alternate functions */

#if 0 /* Needs further investigation */
#define GPIO_PA13_0             (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN13)
#define GPIO_PA14_0             (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN14)
#define GPIO_PA15_0             (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTA|GPIO_PIN15)
#define GPIO_PB3_0              (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN3)
#define GPIO_PB4_0              (GPIO_ALT|GPIO_CNF_AFPP|GPIO_MODE_2MHz|GPIO_PORTB|GPIO_PIN4)
#endif

#endif /* __ARCH_ARM_SRC_STM32_HARDWARE_STM32F105V_PINMAP_H */
