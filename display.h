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
#define STB_L  P6=0

void SMG_Init(void);
void Send_data(u8 dat);
void PT6965_Init(void);
void DIS_1668(u8 add,u8 data1);
void SMG_Text(void);

#endif