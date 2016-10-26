/*
 * config.h
 *
 *  Created on: 2016/10/23
 *      Author: kerikun11
 */

#ifndef CONFIG_H_
#define CONFIG_H_

/*
 * PA0	Motor IN1 L		TIM2_CH1				HAL
 * PA1	Motor IN2 L		TIM2_CH2				HAL
 * PA2	Motor IN1 R		TIM2_CH3				HAL
 * PA3	Motor IN2 R		TIM2_CH4				HAL
 * PA4	MPU6500 nCS		SPI1_NSS				mbed
 * PA5	MPU6500 SCK		SPI1_SCK				mbed
 * PA6	MPU6500 nMISO	SPI1_MISO				mbed
 * PA7	MPU6500 MOSI	SPI1_MOSI				mbed
 * PA8	NC
 * PA9	UART TX			UART1_TX				mbed
 * PA10	UART RX			UART1_RX				mbed
 * PA11	NC
 * PA12	NC
 * PA13	ST-Link SWDIO	SWDIO
 * PA14	ST-Link SWCLK	SWCLK
 * PA15	NC
 *
 * PB0	Button									mbed
 * PB1	Battery Voltage	ADC1_IN8 / ADC2_IN8		mbed
 * PB2	NC
 * PB3	ST-Link SWO		SWO
 * PB4	Encoder L A		TIM3_CH1				HAL
 * PB5	Encoder L B		TIM3_CH2				HAL
 * PB6	Encoder R A		TIM4_CH1				HAL
 * PB7	Encoder R B		TIM4_CH2				HAL
 * PB8	NC
 * PB9	Speaker			TIM11_CH1				mbed (change mbed timer)
 * PB10	NC
 * PB11	NC
 * PB12	NC
 * PB13	NC
 * PB14	IR LED SL FR	TIM1_CH2N				mbed
 * PB15	IR LED SL FR	TIM1_CH3N				mbed
 *
 * PC0	IR Receiver SL	ADC1_IN10				HAL
 * PC1	IR Receiver FL	ADC1_IN11				HAL
 * PC2	IR Receiver FR	ADC1_IN12				HAL
 * PC3	IR Receiver SR	ADC1_IN13				HAL
 * PC4	MPU6500 Int
 * PC5	LED1
 * PC6	LED2
 * PC7	LED3
 * PC8	LED4
 * PC9	NC
 * PC10	NC
 * PC11	NC
 * PC12	NC
 * PC13	NC
 * PC14	NC
 * PC15	NC
 *
 * P
 */

#define BATTERY_PIN			PB_1

#define ENCODER_L_TIMER		TIM3
#define ENCODER_R_TIMER		TIM4

//#define MOTOR_L_CTRL1_PIN	PA_0
//#define MOTOR_L_CTRL2_PIN	PA_1
//#define MOTOR_R_CTRL1_PIN	PA_2
//#define MOTOR_R_CTRL2_PIN	PA_3

// Modify PeripheralPins.c PWM Pin using Timer11
#define BUZZER_PIN			PB_9

#define BUTTON_PIN			PB_0

#define LED1_PIN			PC_5
#define LED2_PIN			PC_6
#define LED3_PIN			PC_7
#define LED4_PIN			PC_8

#define MPU6500_MOSI_PIN	PA_7
#define MPU6500_MISO_PIN	PA_6
#define MPU6500_SCLK_PIN	PA_5
#define MPU6500_SSEL_PIN	PA_4

#define IR_LED_SL_FR_PIN	PB_14
#define IR_LED_SR_FL_PIN	PB_15

#endif /* CONFIG_H_ */
