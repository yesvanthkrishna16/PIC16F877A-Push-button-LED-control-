#include<pic.h>
void main()
{
	TRISB=0XFE;
	RB0=0;
	while(1)
	{
		if(RB1==1)
		{
			RB0=1;
		}
		else
		{
			RB0=0;
		}
	}
}