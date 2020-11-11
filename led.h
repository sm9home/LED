#ifndef _LED_LIBRARY_H_
#define _LED_LIBRARY_H_

int ledLibInit(void); 													 // 이 라이브러리는 LED를 켜기 전에 반드시 한번 불러주어야 한다.
int ledLibOnOff(int ledNumber, int onOff);			    //이 함수는 ledNumber에는 0~7을 넣으면, 그에 해당하는 led를 켜거나 끄거나 해준다
int ledLibStatus(void);													// 이 함수를 호출하면 현재 led 상태가 어떤지 확인해 준다. 만약 모든 led가 켜져 있으면 0xff를 리턴하고, 만약 모든 led가 꺼져 있으면 0x00을 리턴한다. 만약 0xAA 가 리턴되면, (10101010) -> led는 4개만 켜져 있는 것이다.
int ledLibExit(void);														// 이 함수를 호출하면 led를 전부 끄고 driver를 close 한다.
int ledLibRaw(char ledwannabe);									//이 함수를 호출하면 ledwannabe에 맞게 8개의 led를 전부 제어한다. 예를 들어 ledLibRaw(0x80); 1개만 켜진다.
int LedLibBlink(int ledNumber, int nth, int msec); 				//1~8까지의 led를 하나 골라서 n번 깜빡이는데, 주기가 msec이다.


#define LED_DRV_NODE		"/dev/periled"
#endif
