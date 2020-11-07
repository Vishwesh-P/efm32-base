#ifndef HAL_CONFIG_BOARD_H
#define HAL_CONFIG_BOARD_H

#include "em_device.h"
#include "hal-config-types.h"

// This file is auto-generated by Hardware Configurator in Simplicity Studio.
// Any content between $[ and ]$ will be replaced whenever the file is regenerated.
// Content outside these regions will be preserved.

// $[ACMP0]
// [ACMP0]$

// $[ACMP1]
// [ACMP1]$

// $[ACMP2]
// [ACMP2]$

// $[ACMP3]
// [ACMP3]$

// $[ADC0]
// [ADC0]$

// $[ADC1]
// [ADC1]$

// $[BTL_BUTTON]

#define BSP_BTL_BUTTON_PIN                            (8U)
#define BSP_BTL_BUTTON_PORT                           (gpioPortC)

// [BTL_BUTTON]$

// $[BUTTON]
#define BSP_BUTTON_PRESENT                            (1)

#define BSP_BUTTON0_PIN                               (8U)
#define BSP_BUTTON0_PORT                              (gpioPortC)

#define BSP_BUTTON1_PIN                               (9U)
#define BSP_BUTTON1_PORT                              (gpioPortC)

#define BSP_BUTTON_COUNT                              (2U)
#define BSP_BUTTON_INIT                               { { BSP_BUTTON0_PORT, BSP_BUTTON0_PIN }, { BSP_BUTTON1_PORT, BSP_BUTTON1_PIN } }
#define BSP_BUTTON_GPIO_DOUT                          (HAL_GPIO_DOUT_LOW)
#define BSP_BUTTON_GPIO_MODE                          (HAL_GPIO_MODE_INPUT)
// [BUTTON]$

// $[CAN0]
// [CAN0]$

// $[CAN1]
// [CAN1]$

// $[CMU]
#define BSP_CLK_HFXO_PRESENT                          (1)
#define BSP_CLK_HFXO_FREQ                             (50000000UL)
#define BSP_CLK_HFXO_INIT                              CMU_HFXOINIT_DEFAULT
#define BSP_CLK_HFXO_CTUNE                            (132)
#define BSP_CLK_LFXO_PRESENT                          (1)
#define BSP_CLK_LFXO_INIT                              CMU_LFXOINIT_DEFAULT
#define BSP_CLK_LFXO_FREQ                             (32768U)
#define BSP_CLK_LFXO_CTUNE                            (70U)
// [CMU]$

// $[CSEN]
// [CSEN]$

// $[DCDC]
#define BSP_DCDC_PRESENT                              (1)

#define BSP_DCDC_INIT                                  EMU_DCDCINIT_DEFAULT
// [DCDC]$

// $[EBI]
// [EBI]$

// $[EMU]
// [EMU]$

// $[ETH]
// [ETH]$

// $[EXTFLASH]
// [EXTFLASH]$

// $[GPIO]
#define PORTIO_GPIO_SWV_PIN                           (2U)
#define PORTIO_GPIO_SWV_PORT                          (gpioPortF)
#define PORTIO_GPIO_SWV_LOC                           (0U)

#define BSP_TRACE_SWO_PIN                             (2U)
#define BSP_TRACE_SWO_PORT                            (gpioPortF)
#define BSP_TRACE_SWO_LOC                             (0U)

// [GPIO]$

// $[I2C0]
#define PORTIO_I2C0_SCL_PIN                           (1U)
#define PORTIO_I2C0_SCL_PORT                          (gpioPortC)
#define PORTIO_I2C0_SCL_LOC                           (4U)

#define PORTIO_I2C0_SDA_PIN                           (0U)
#define PORTIO_I2C0_SDA_PORT                          (gpioPortC)
#define PORTIO_I2C0_SDA_LOC                           (4U)

#define BSP_I2C0_SCL_PIN                              (1U)
#define BSP_I2C0_SCL_PORT                             (gpioPortC)
#define BSP_I2C0_SCL_LOC                              (4U)

#define BSP_I2C0_SDA_PIN                              (0U)
#define BSP_I2C0_SDA_PORT                             (gpioPortC)
#define BSP_I2C0_SDA_LOC                              (4U)

// [I2C0]$

// $[I2C1]
#define PORTIO_I2C1_SCL_PIN                           (5U)
#define PORTIO_I2C1_SCL_PORT                          (gpioPortC)
#define PORTIO_I2C1_SCL_LOC                           (0U)

#define PORTIO_I2C1_SDA_PIN                           (4U)
#define PORTIO_I2C1_SDA_PORT                          (gpioPortC)
#define PORTIO_I2C1_SDA_LOC                           (0U)

#define BSP_I2C1_SCL_PIN                              (5U)
#define BSP_I2C1_SCL_PORT                             (gpioPortC)
#define BSP_I2C1_SCL_LOC                              (0U)

#define BSP_I2C1_SDA_PIN                              (4U)
#define BSP_I2C1_SDA_PORT                             (gpioPortC)
#define BSP_I2C1_SDA_LOC                              (0U)

// [I2C1]$

// $[I2C2]
#define PORTIO_I2C2_SCL_PIN                           (5U)
#define PORTIO_I2C2_SCL_PORT                          (gpioPortI)
#define PORTIO_I2C2_SCL_LOC                           (7U)

#define PORTIO_I2C2_SDA_PIN                           (4U)
#define PORTIO_I2C2_SDA_PORT                          (gpioPortI)
#define PORTIO_I2C2_SDA_LOC                           (7U)

#define BSP_I2C2_SCL_PIN                              (5U)
#define BSP_I2C2_SCL_PORT                             (gpioPortI)
#define BSP_I2C2_SCL_LOC                              (7U)

#define BSP_I2C2_SDA_PIN                              (4U)
#define BSP_I2C2_SDA_PORT                             (gpioPortI)
#define BSP_I2C2_SDA_LOC                              (7U)

// [I2C2]$

// $[I2CSENSOR]

#define BSP_I2CSENSOR_ENABLE_PIN                      (3U)
#define BSP_I2CSENSOR_ENABLE_PORT                     (gpioPortB)

#define BSP_I2CSENSOR_PERIPHERAL                      (HAL_I2C_PORT_I2C2)
#define BSP_I2CSENSOR_SCL_PIN                         (5U)
#define BSP_I2CSENSOR_SCL_PORT                        (gpioPortI)
#define BSP_I2CSENSOR_SCL_LOC                         (7U)

#define BSP_I2CSENSOR_SDA_PIN                         (4U)
#define BSP_I2CSENSOR_SDA_PORT                        (gpioPortI)
#define BSP_I2CSENSOR_SDA_LOC                         (7U)

// [I2CSENSOR]$

// $[IDAC0]
// [IDAC0]$

// $[IOEXP]
// [IOEXP]$

// $[LCD]
// [LCD]$

// $[LED]
#define BSP_LED_PRESENT                               (1)

#define BSP_LED0_PIN                                  (10U)
#define BSP_LED0_PORT                                 (gpioPortH)

#define BSP_LED1_PIN                                  (13U)
#define BSP_LED1_PORT                                 (gpioPortH)

#define BSP_LED_COUNT                                 (2U)
#define BSP_LED_INIT                                  { { BSP_LED0_PORT, BSP_LED0_PIN }, { BSP_LED1_PORT, BSP_LED1_PIN } }
#define BSP_LED_POLARITY                              (0)
// [LED]$

// $[LESENSE]
// [LESENSE]$

// $[LETIMER0]
// [LETIMER0]$

// $[LETIMER1]
// [LETIMER1]$

// $[LEUART0]
// [LEUART0]$

// $[LEUART1]
// [LEUART1]$

// $[LFXO]
// [LFXO]$

// $[PCNT0]
// [PCNT0]$

// $[PCNT1]
// [PCNT1]$

// $[PCNT2]
// [PCNT2]$

// $[PORTIO]
// [PORTIO]$

// $[PRS]
#define PORTIO_PRS_CH11_PIN                           (11U)
#define PORTIO_PRS_CH11_PORT                          (gpioPortA)
#define PORTIO_PRS_CH11_LOC                           (0U)

// [PRS]$

// $[QSPI0]
// [QSPI0]$

// $[SDIO]
// [SDIO]$

// $[SERIAL]
#define BSP_SERIAL_APP_PORT                           (HAL_SERIAL_PORT_USART4)
#define BSP_SERIAL_APP_TX_PIN                         (4U)
#define BSP_SERIAL_APP_TX_PORT                        (gpioPortH)
#define BSP_SERIAL_APP_TX_LOC                         (4U)

#define BSP_SERIAL_APP_RX_PIN                         (5U)
#define BSP_SERIAL_APP_RX_PORT                        (gpioPortH)
#define BSP_SERIAL_APP_RX_LOC                         (4U)

#define BSP_SERIAL_APP_CTS_PIN                        (8U)
#define BSP_SERIAL_APP_CTS_PORT                       (gpioPortH)
#define BSP_SERIAL_APP_CTS_LOC                        (4U)

#define BSP_SERIAL_APP_RTS_PIN                        (9U)
#define BSP_SERIAL_APP_RTS_PORT                       (gpioPortH)
#define BSP_SERIAL_APP_RTS_LOC                        (4U)

// [SERIAL]$

// $[SPIDISPLAY]

#define BSP_SPIDISPLAY_CS_PIN                         (14U)
#define BSP_SPIDISPLAY_CS_PORT                        (gpioPortC)

#define BSP_SPIDISPLAY_ENABLE_PIN                     (9U)
#define BSP_SPIDISPLAY_ENABLE_PORT                    (gpioPortA)

#define BSP_SPIDISPLAY_EXTCOMIN_PIN                   (11U)
#define BSP_SPIDISPLAY_EXTCOMIN_PORT                  (gpioPortA)
#define BSP_SPIDISPLAY_EXTCOMIN_LOC                   (0U)

#define BSP_SPIDISPLAY_DISPLAY                        (HAL_DISPLAY_SHARP_LS013B7DH06)
#define BSP_SPIDISPLAY_USART                          (HAL_SPI_PORT_USART1)
#define BSP_SPIDISPLAY_EXTCOMIN_CHANNEL               (11)
#define BSP_SPIDISPLAY_MOSI_PIN                       (14U)
#define BSP_SPIDISPLAY_MOSI_PORT                      (gpioPortA)
#define BSP_SPIDISPLAY_MOSI_LOC                       (6U)

#define BSP_SPIDISPLAY_CLK_PIN                        (15U)
#define BSP_SPIDISPLAY_CLK_PORT                       (gpioPortC)
#define BSP_SPIDISPLAY_CLK_LOC                        (3U)

// [SPIDISPLAY]$

// $[SPINCP]
// [SPINCP]$

// $[TIMER0]
// [TIMER0]$

// $[TIMER1]
// [TIMER1]$

// $[TIMER2]
// [TIMER2]$

// $[TIMER3]
// [TIMER3]$

// $[TIMER4]
// [TIMER4]$

// $[TIMER5]
// [TIMER5]$

// $[TIMER6]
// [TIMER6]$

// $[UART0]
// [UART0]$

// $[UART1]
// [UART1]$

// $[UARTNCP]
// [UARTNCP]$

// $[USART0]
// [USART0]$

// $[USART1]
#define PORTIO_USART1_CLK_PIN                         (15U)
#define PORTIO_USART1_CLK_PORT                        (gpioPortC)
#define PORTIO_USART1_CLK_LOC                         (3U)

#define PORTIO_USART1_CS_PIN                          (14U)
#define PORTIO_USART1_CS_PORT                         (gpioPortC)
#define PORTIO_USART1_CS_LOC                          (3U)

#define PORTIO_USART1_TX_PIN                          (14U)
#define PORTIO_USART1_TX_PORT                         (gpioPortA)
#define PORTIO_USART1_TX_LOC                          (6U)

#define BSP_USART1_MOSI_PIN                           (14U)
#define BSP_USART1_MOSI_PORT                          (gpioPortA)
#define BSP_USART1_MOSI_LOC                           (6U)

#define BSP_USART1_CLK_PIN                            (15U)
#define BSP_USART1_CLK_PORT                           (gpioPortC)
#define BSP_USART1_CLK_LOC                            (3U)

#define BSP_USART1_CS_PIN                             (14U)
#define BSP_USART1_CS_PORT                            (gpioPortC)
#define BSP_USART1_CS_LOC                             (3U)

// [USART1]$

// $[USART2]
// [USART2]$

// $[USART3]
#define PORTIO_USART3_CLK_PIN                         (14U)
#define PORTIO_USART3_CLK_PORT                        (gpioPortI)
#define PORTIO_USART3_CLK_LOC                         (5U)

#define PORTIO_USART3_CS_PIN                          (15U)
#define PORTIO_USART3_CS_PORT                         (gpioPortI)
#define PORTIO_USART3_CS_LOC                          (5U)

#define PORTIO_USART3_RX_PIN                          (13U)
#define PORTIO_USART3_RX_PORT                         (gpioPortI)
#define PORTIO_USART3_RX_LOC                          (5U)

#define PORTIO_USART3_TX_PIN                          (12U)
#define PORTIO_USART3_TX_PORT                         (gpioPortI)
#define PORTIO_USART3_TX_LOC                          (5U)

#define BSP_USART3_MOSI_PIN                           (12U)
#define BSP_USART3_MOSI_PORT                          (gpioPortI)
#define BSP_USART3_MOSI_LOC                           (5U)

#define BSP_USART3_MISO_PIN                           (13U)
#define BSP_USART3_MISO_PORT                          (gpioPortI)
#define BSP_USART3_MISO_LOC                           (5U)

#define BSP_USART3_CLK_PIN                            (14U)
#define BSP_USART3_CLK_PORT                           (gpioPortI)
#define BSP_USART3_CLK_LOC                            (5U)

#define BSP_USART3_CS_PIN                             (15U)
#define BSP_USART3_CS_PORT                            (gpioPortI)
#define BSP_USART3_CS_LOC                             (5U)

// [USART3]$

// $[USART4]
#define PORTIO_USART4_CTS_PIN                         (8U)
#define PORTIO_USART4_CTS_PORT                        (gpioPortH)
#define PORTIO_USART4_CTS_LOC                         (4U)

#define PORTIO_USART4_RTS_PIN                         (9U)
#define PORTIO_USART4_RTS_PORT                        (gpioPortH)
#define PORTIO_USART4_RTS_LOC                         (4U)

#define PORTIO_USART4_RX_PIN                          (5U)
#define PORTIO_USART4_RX_PORT                         (gpioPortH)
#define PORTIO_USART4_RX_LOC                          (4U)

#define PORTIO_USART4_TX_PIN                          (4U)
#define PORTIO_USART4_TX_PORT                         (gpioPortH)
#define PORTIO_USART4_TX_LOC                          (4U)

#define BSP_USART4_TX_PIN                             (4U)
#define BSP_USART4_TX_PORT                            (gpioPortH)
#define BSP_USART4_TX_LOC                             (4U)

#define BSP_USART4_RX_PIN                             (5U)
#define BSP_USART4_RX_PORT                            (gpioPortH)
#define BSP_USART4_RX_LOC                             (4U)

#define BSP_USART4_CTS_PIN                            (8U)
#define BSP_USART4_CTS_PORT                           (gpioPortH)
#define BSP_USART4_CTS_LOC                            (4U)

#define BSP_USART4_RTS_PIN                            (9U)
#define BSP_USART4_RTS_PORT                           (gpioPortH)
#define BSP_USART4_RTS_LOC                            (4U)

// [USART4]$

// $[USART5]
#define PORTIO_USART5_RX_PIN                          (9U)
#define PORTIO_USART5_RX_PORT                         (gpioPortE)
#define PORTIO_USART5_RX_LOC                          (0U)

#define PORTIO_USART5_TX_PIN                          (8U)
#define PORTIO_USART5_TX_PORT                         (gpioPortE)
#define PORTIO_USART5_TX_LOC                          (0U)

#define BSP_USART5_TX_PIN                             (8U)
#define BSP_USART5_TX_PORT                            (gpioPortE)
#define BSP_USART5_TX_LOC                             (0U)

#define BSP_USART5_RX_PIN                             (9U)
#define BSP_USART5_RX_PORT                            (gpioPortE)
#define BSP_USART5_RX_LOC                             (0U)

// [USART5]$

// $[USB]
// [USB]$

// $[VCOM]

#define BSP_VCOM_ENABLE_PIN                           (1U)
#define BSP_VCOM_ENABLE_PORT                          (gpioPortE)

// [VCOM]$

// $[VDAC0]
// [VDAC0]$

// $[WDOG]
// [WDOG]$

// $[WTIMER0]
// [WTIMER0]$

// $[WTIMER1]
// [WTIMER1]$

// $[WTIMER2]
// [WTIMER2]$

// $[WTIMER3]
// [WTIMER3]$

#if defined(_SILICON_LABS_MODULE)
#include "sl_module.h"
#endif

#endif /* HAL_CONFIG_BOARD_H */