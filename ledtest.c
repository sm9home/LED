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
	sleep(2);
	ledLibExit();
}
