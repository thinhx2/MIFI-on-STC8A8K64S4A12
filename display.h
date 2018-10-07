#ifndef  __DISPLAY_H__
#define  __DISPLAY_H__

#define SMNumber  10000

//
//#define LED_GPIO_CLK   RCC_APB2Periph_GPIOB
//#define LED_PORT   	   GPIOB
//#define LED_PIN        GPIO_Pin_7|GPIO_Pin_5|GPIO_Pin_6

#define DI_H  P7=1
#define DI_L  P7=0

#define CLK_H  P5=1
#define CLK_L  P5=0

#define STB_H  P6=1
#define STB_L  P6=1


void init(void);
#endif