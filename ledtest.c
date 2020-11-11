#include <stdio.h>
#include "led.h"
int main (void)
{
	ledLibInit();
	
	ledLibRaw(0xFF);
	sleep(1);
	ledLibRaw(0xAA);
	sleep(1);
	ledLibRaw(0x55);
	sleep(1);
	ledLibRaw(0x0);
	int i=0;
	for (i=0; i<8; i++)
	{
		ledLibOnOff(i, 1);
		sleep(1);
		ledLibOnOff(1, 0);
		sleep(1);
	}
	sleep(2);
	ledLibExit();
	
	return 0;
}
