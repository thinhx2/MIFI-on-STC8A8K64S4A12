#include "stc8.h"
#include "delay_fun.h"


void delayms(unsigned int m){
	int  a, b;
	for(a=0;a<5000;a++)
	for(b=0;b<m;b++);
}

//ÑÓÊ±10*nÎ¢Ãë  
void delay_10us(unsigned int n)  
{  
    unsigned int i=0;  
    char j=0;  
    for(i=0;i<n;i++)  
        for(j=0;j<2;j++);  
} 
	