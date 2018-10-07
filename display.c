#include "display.h"
#include "delay.h"
/****************************************************
fun: display write function
input param: none
output param: none
note: 
****************************************************/ 
void init(void){
	
}
/****************************************************
fun: display write function
input param: dat 发送的数据
output param: none
note: none
****************************************************/ 
void Send_data(u8 dat)
{
 u8 i;
	u8 a;
 for(i=0;i<8;i++)
  {
   CLK_L;
		a=dat & (0x01 << i);
   if(a!=0x00)  
			{DI_H;}
   else  
			{DI_L;} 
		 delay_us(Delay);
   CLK_H;	 
  }
  CLK_L;
}

/****************************************************
fun: display module init function
input param: none
output param: none
note: none
****************************************************/ 
void PT6965_Init(void)
{
    STB_H;
delay_us(Delay);
    STB_L;
	Send_data(0X01);//éè????ê??￡ê?×?μíá???￡o00-4??14??  01-5??13??  10-6??12??  11-7??11??
	
    STB_H;
delay_us(Delay);
    STB_L;
    Send_data(0X44); //?y3￡??ê?1ì?¨μ??·
	
	    STB_H;
delay_us(Delay);
    STB_L;
    Send_data(0X8f); //′ò?a??ê?
}

/****************************************************
fun: display module display function
input param: u8 data1
output param: none
note: add地址数据， data1要显示的数据
****************************************************/
void DIS_1668(u8 add,u8 data1)
{
	STB_H;
delay_us(Delay);
  STB_L;
	Send_data(add); 
	Send_data(data1);
}

/****************************************************
fun: display test function
input param: none
output param: none
note: none
****************************************************/
void SMG_Text(void)
{
    DIS_1668(0x00,0x1f);
		DIS_1668(0x01,0x00);
		DIS_1668(0x02,0x00);		
		delay_ms(1000);
		DIS_1668(0x00,0x00);
		DIS_1668(0x01,0x1f);
		DIS_1668(0x02,0x00);
		delay_ms(1000);
		DIS_1668(0x00,0x00);
		DIS_1668(0x01,0x00);
		DIS_1668(0x02,0x1f);
		delay_ms(1000);
		DIS_1668(0x00,0x00);
		DIS_1668(0x01,0x00);
		DIS_1668(0x02,0x00);
		delay_ms(500);
		DIS_1668(0x00,0xff);
		DIS_1668(0x01,0xff);
		DIS_1668(0x02,0xff);
		delay_ms(500);	
}
