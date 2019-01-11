/**
 * Copyright (c) 2013-2017 Husarion Sp. z o.o.
 * Distributed under the MIT license.
 * For full terms see the file LICENSE.md.
 */

DEFINE_PORT_IRQ(MYGPIO_SENS1_DIGIA_INT_ADC  ,   0, A,  2,  0, EXTI2_IRQn    )
DEFINE_PORT____(MYGPIO_SENS1_DIGIB          ,   1, G,  3, -1)
DEFINE_PORT____(MYGPIO_SENS1_DIGIC          ,   2, B,  8, -1)
DEFINE_PORT____(MYGPIO_SENS1_DIGID          ,   3, B,  9, -1)
DEFINE_PORT_IRQ(MYGPIO_SENS2_DIGIA_INT_ADC  ,   4, A,  6,  1, EXTI9_5_IRQn  )
DEFINE_PORT____(MYGPIO_SENS2_DIGIB          ,   5, C,  8, -1)
DEFINE_PORT____(MYGPIO_SENS2_DIGIC          ,   6, A,  8, -1)
DEFINE_PORT____(MYGPIO_SENS2_DIGID          ,   7, C,  9, -1)
DEFINE_PORT_IRQ(MYGPIO_SENS3_DIGIA_INT_ADC  ,   8, C,  4,  2, EXTI4_IRQn    )
DEFINE_PORT____(MYGPIO_SENS3_DIGIB          ,   9, G,  2, -1)
DEFINE_PORT____(MYGPIO_SENS3_DIGIC          ,  10, C, 12, -1)
DEFINE_PORT____(MYGPIO_SENS3_DIGID          ,  11, D,  2, -1)
DEFINE_PORT_IRQ(MYGPIO_SENS4_DIGIA_INT_ADC  ,  12, C,  5,  3, EXTI9_5_IRQn  )
DEFINE_PORT____(MYGPIO_SENS4_DIGIB          ,  13, D, 15, -1)
DEFINE_PORT____(MYGPIO_SENS4_DIGIC          ,  14, G, 14, -1)
DEFINE_PORT____(MYGPIO_SENS4_DIGID          ,  15, G,  9, -1)
DEFINE_PORT_IRQ(MYGPIO_SENS5_DIGIA_INT_ADC  ,  16, B,  0,  4, EXTI0_IRQn    )
DEFINE_PORT____(MYGPIO_SENS5_DIGIB          ,  17, D, 14, -1)
DEFINE_PORT____(MYGPIO_SENS5_DIGIC          ,  18, D, 13, -1)
DEFINE_PORT____(MYGPIO_SENS5_DIGID          ,  19, D, 12, -1)
DEFINE_PORT_IRQ(MYGPIO_SENS6_DIGIA_INT_ADC  ,  20, B,  1,  5, EXTI1_IRQn    )
DEFINE_PORT____(MYGPIO_SENS6_DIGIB          ,  21, D,  8, -1)
DEFINE_PORT____(MYGPIO_SENS6_DIGIC          ,  22, D, 10, -1)
DEFINE_PORT____(MYGPIO_SENS6_DIGID          ,  23, D,  9, -1)
DEFINE_PORT_IRQ(MYGPIO_EXT_PIN1             ,  24, F,  3,  6, EXTI3_IRQn    )
DEFINE_PORT_IRQ(MYGPIO_EXT_PIN2             ,  25, F, 10,  7, EXTI15_10_IRQn)
DEFINE_PORT____(MYGPIO_EXT_PIN3             ,  26, F,  4,  8)
DEFINE_PORT____(MYGPIO_EXT_PIN4             ,  27, F,  5,  9)
DEFINE_PORT____(MYGPIO_EXT_PIN5             ,  28, C,  0, 10)
DEFINE_PORT____(MYGPIO_EXT_PIN6_URX         ,  29, D,  6, -1)
DEFINE_PORT____(MYGPIO_EXT_PIN7_UTX         ,  30, D,  5, -1)
DEFINE_PORT____(MYGPIO_EXT_SPI_SCK          ,  31, B, 13, -1)
DEFINE_PORT____(MYGPIO_EXT_SPI_MISO         ,  32, C,  2, 11)
DEFINE_PORT____(MYGPIO_EXT_SPI_MOSI         ,  33, C,  3, 12)
DEFINE_PORT____(MYGPIO_EXT_I2C_SDA          ,  35, F,  0, -1)
DEFINE_PORT____(MYGPIO_EXT_I2C_SCL          ,  34, F,  1, -1)
DEFINE_PORT____(MYGPIO_RPI_SERIAL_TX        ,  36, A,  9, -1)
DEFINE_PORT____(MYGPIO_RPI_SERIAL_RX        ,  37, A, 10, -1)
DEFINE_PORT____(MYGPIO_RPI_CONSOLE          ,  38, G,  5, -1)
DEFINE_PORT____(MYGPIO_RPI_STATUS           ,  39, G,  6, -1)
DEFINE_PORT____(MYGPIO_RPI_BTN              ,  40, G,  7, -1)
DEFINE_PORT____(MYGPIO_FT_SERIAL_TX         ,  41, B, 10, -1)
DEFINE_PORT____(MYGPIO_FT_SERIAL_RX         ,  42, B, 11, -1)
DEFINE_PORT____(MYGPIO_FT_CBUS3             ,  43, D, 11, -1)
DEFINE_PORT____(MYGPIO_CAN_TX               ,  44, D,  1, -1)
DEFINE_PORT____(MYGPIO_CAN_RX               ,  45, D,  0, -1)
DEFINE_PORT____(MYGPIO_CAN_EN               ,  46, A, 15, -1)
DEFINE_PORT____(MYGPIO_SD_MOSI              ,  47, B,  5, -1)
DEFINE_PORT____(MYGPIO_SD_MISO              ,  48, C, 11, -1)
DEFINE_PORT____(MYGPIO_SD_CLK               ,  49, C, 10, -1)
DEFINE_PORT____(MYGPIO_SD_CS                ,  50, B,  3, -1)
DEFINE_PORT____(MYGPIO_SD_IN                ,  51, G, 15, -1)
DEFINE_PORT____(MYGPIO_SD_POWER_ON          ,  52, D,  7, -1)
DEFINE_PORT____(MYGPIO_USB_DM               ,  53, A, 11, -1)
DEFINE_PORT____(MYGPIO_USB_DP               ,  54, A, 12, -1)
DEFINE_PORT____(MYGPIO_USB_CHARGE           ,  55, E,  8, -1)
DEFINE_PORT____(MYGPIO_USB_CHARGE_IND       ,  56, E,  7, -1)
DEFINE_PORT____(MYGPIO_MOT12_SLEEP          ,  57, C, 13, -1)
DEFINE_PORT____(MYGPIO_MOT12_FAULT          ,  58, E,  0, -1)
DEFINE_PORT____(MYGPIO_MOT1_PWM             ,  59, F,  6, -1)
DEFINE_PORT____(MYGPIO_MOT1A_IN             ,  60, G, 10, -1)
DEFINE_PORT____(MYGPIO_MOT1B_IN             ,  61, G, 11, -1)
DEFINE_PORT____(MYGPIO_MOT1A_ENC            ,  62, A,  0, -1)
DEFINE_PORT____(MYGPIO_MOT1B_ENC            ,  63, A,  1, -1)
DEFINE_PORT____(MYGPIO_MOT2_PWM             ,  64, F,  7, -1)
DEFINE_PORT____(MYGPIO_MOT2A_IN             ,  65, D,  3, -1)
DEFINE_PORT____(MYGPIO_MOT2B_IN             ,  66, D,  4, -1)
DEFINE_PORT____(MYGPIO_MOT2A_ENC            ,  67, C,  6, -1)
DEFINE_PORT____(MYGPIO_MOT2B_ENC            ,  68, C,  7, -1)
DEFINE_PORT____(MYGPIO_MOT34_SLEEP          ,  69, C, 14, -1)
DEFINE_PORT____(MYGPIO_MOT34_FAULT          ,  70, E,  1, -1)
DEFINE_PORT____(MYGPIO_MOT3_PWM             ,  71, F,  8, -1)
DEFINE_PORT____(MYGPIO_MOT3A_IN             ,  72, C, 15, -1)
DEFINE_PORT____(MYGPIO_MOT3B_IN             ,  73, F,  2, -1)
DEFINE_PORT____(MYGPIO_MOT3A_ENC            ,  74, B,  4, -1)
DEFINE_PORT____(MYGPIO_MOT3B_ENC            ,  75, A,  7, -1)
DEFINE_PORT____(MYGPIO_MOT4_PWM             ,  76, F,  9, -1)
DEFINE_PORT____(MYGPIO_MOT4A_IN             ,  77, E,  5, -1)
DEFINE_PORT____(MYGPIO_MOT4B_IN             ,  78, E,  6, -1)
DEFINE_PORT____(MYGPIO_MOT4A_ENC            ,  79, B,  6, -1)
DEFINE_PORT____(MYGPIO_MOT4B_ENC            ,  80, B,  7, -1)
DEFINE_PORT____(MYGPIO_SERVO1_PWM           ,  81, E,  9, -1)
DEFINE_PORT____(MYGPIO_SERVO2_PWM           ,  82, E, 11, -1)
DEFINE_PORT____(MYGPIO_SERVO3_PWM           ,  83, E, 13, -1)
DEFINE_PORT____(MYGPIO_SERVO4_PWM           ,  84, E, 14, -1)
DEFINE_PORT____(MYGPIO_SERVO5_PWM           ,  85, B, 15, -1)
DEFINE_PORT____(MYGPIO_SERVO6_PWM           ,  86, B, 14, -1)
DEFINE_PORT____(MYGPIO_SERVO_POWER_ON       ,  87, E, 15, -1)
DEFINE_PORT____(MYGPIO_SERVO_ADC            ,  88, A,  3, 13)
DEFINE_PORT____(MYGPIO_SERVO_SEL1           ,  89, E, 10, -1)
DEFINE_PORT____(MYGPIO_SERVO_SEL2           ,  90, E, 12, -1)
DEFINE_PORT____(MYGPIO_SENS_POWER_ON        ,  91, G,  4, -1)
DEFINE_PORT____(MYGPIO_LED_1                ,  92, E,  2, -1)
DEFINE_PORT____(MYGPIO_LED_2                ,  93, E,  3, -1)
DEFINE_PORT____(MYGPIO_LED_3                ,  94, E,  4, -1)
DEFINE_PORT_IRQ(MYGPIO_BUTTON_1             ,  95, G, 12, -1, EXTI15_10_IRQn)
DEFINE_PORT_IRQ(MYGPIO_BUTTON_2             ,  96, G, 13, -1, EXTI15_10_IRQn)
DEFINE_PORT____(MYGPIO_BAT_MEAS             ,  97, A,  5, 14)
DEFINE_PORT____(MYGPIO_BOOT1                ,  98, B,  2, -1)
DEFINE_PORT____(MYGPIO_TEST_POINT_1         ,  99, G,  0, -1)
DEFINE_PORT____(MYGPIO_TEST_POINT_2         , 100, C,  1, -1)
DEFINE_PORT____(MYGPIO_TEST_POINT_4         , 101, F, 11, -1)
DEFINE_PORT____(MYGPIO_TEST_POINT_5         , 102, F, 12, -1)
DEFINE_PORT____(MYGPIO_TEST_POINT_6         , 103, F, 13, -1)
DEFINE_PORT____(MYGPIO_TEST_POINT_7         , 104, F, 14, -1)
DEFINE_PORT____(MYGPIO_TEST_POINT_8         , 105, F, 15, -1)
DEFINE_PORT____(MYGPIO_TEST_POINT_9         , 106, D, 11, -1)
DEFINE_PORT____(MYGPIO_TEST_POINT_10        , 107, B, 12, -1)
DEFINE_PORT____(MYGPIO_TEST_POINT_12        , 108, A,  4, -1)
DEFINE_PORT____(MYGPIO_TEST_POINT_13        , 109, G,  1, -1)

DEFINE_EXTI(MYGPIO_SENS5_DIGIA_INT_ADC) // 0
DEFINE_EXTI(MYGPIO_SENS6_DIGIA_INT_ADC) // 1
DEFINE_EXTI(MYGPIO_SENS1_DIGIA_INT_ADC) // 2
DEFINE_EXTI(MYGPIO_EXT_PIN1           ) // 3
DEFINE_EXTI(MYGPIO_SENS3_DIGIA_INT_ADC) // 4
DEFINE_EXTI(MYGPIO_SENS4_DIGIA_INT_ADC) // 5
DEFINE_EXTI(MYGPIO_SENS2_DIGIA_INT_ADC) // 6
DEFINE_EXTI(-1                        ) // 7
DEFINE_EXTI(-1                        ) // 8
DEFINE_EXTI(-1                        ) // 9
DEFINE_EXTI(MYGPIO_EXT_PIN2           ) // 10
DEFINE_EXTI(-1                        ) // 11
DEFINE_EXTI(MYGPIO_BUTTON_1           ) // 12
DEFINE_EXTI(MYGPIO_BUTTON_2           ) // 13
DEFINE_EXTI(-1                        ) // 14
DEFINE_EXTI(-1                        ) // 15

DEFINE_ADC(1,  2) //  0 ADC123_IN2  MYGPIO_SENS1_DIGIA_INT_ADC
DEFINE_ADC(1,  6) //  1 ADC12_IN6   MYGPIO_SENS2_DIGIA_INT_ADC
DEFINE_ADC(1, 14) //  2 ADC12_IN14  MYGPIO_SENS3_DIGIA_INT_ADC
DEFINE_ADC(2, 15) //  3 ADC12_IN15  MYGPIO_SENS4_DIGIA_INT_ADC
DEFINE_ADC(1,  8) //  4 ADC12_IN8   MYGPIO_SENS5_DIGIA_INT_ADC
DEFINE_ADC(2,  9) //  5 ADC12_IN9   MYGPIO_SENS6_DIGIA_INT_ADC
DEFINE_ADC(3,  9) //  6 ADC3_IN9    MYGPIO_EXT_PIN1           
DEFINE_ADC(3,  8) //  7 ADC3_IN8    MYGPIO_EXT_PIN2           
DEFINE_ADC(3, 14) //  8 ADC3_IN14   MYGPIO_EXT_PIN3           
DEFINE_ADC(3, 15) //  9 ADC3_IN15   MYGPIO_EXT_PIN4           
DEFINE_ADC(2, 10) // 10 ADC123_IN10 MYGPIO_EXT_PIN5           
DEFINE_ADC(3, 12) // 11 ADC123_IN12 MYGPIO_EXT_SPI_MISO       
DEFINE_ADC(1, 13) // 12 ADC123_IN13 MYGPIO_EXT_SPI_MOSI       
DEFINE_ADC(2,  3) // 13 ADC2_IN3    MYGPIO_SERVO_ADC          
DEFINE_ADC(2,  5) // 14 ADC2_IN5    MYGPIO_BAT_MEAS           
