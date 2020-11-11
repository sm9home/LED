CC = arm-linux-gnueabi-gcc
AR = arm-linux-gnueabi-ar

all: libMyPeri.a ledtest	

libMyPeri.a: led.o	
		$(AR) rc libMyPeri.a led.o

led.o: led.h led.c		
		$(CC) led.c -o led.o -c

ledtest: led.h ledtest.c libMyPeri.a	
		$(CC) ledtest.c -o ledtest -l MyPeri -L.
		scp ledtest ecube@192.168.0.223:/home/ecube

clean:	
		rm *.o -rf	
		rm *.a -rf	
		rm ledtest -rf
