//this program is for control a LED with a push button
#include<pic.h>
__CONFIG(0x3f3a);//use this line before converting this code to hex code.
void main()
{
	TRISB=0XFE;//initilizing the port B
	RB0=0;//LED has been connected 
	while(1)
	{
		if(RB1==1)//RB1 push button connected
		{
			RB0=1;
		}
		else
		{
			RB0=0;
		}
	}
}
