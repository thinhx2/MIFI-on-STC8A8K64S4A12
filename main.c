/*
MIFI project
author:tiejiang

*/
#include "stc8.h"


void delayms(unsigned int m)
     {
	  int  a, b;

	 for(a=0;a<5000;a++)
	 for(b=0;b<m;b++);
	   
	 }



main()
{

while(1)
{
  P55=0;
  delayms(50);
  P55=1;
  delayms(50);

}
}

