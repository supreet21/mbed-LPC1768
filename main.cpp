#include "mbed.h"

DigitalOut led1(LED1);
DigitalOut led2(LED2);
DigitalOut led3(LED3);
DigitalOut led4(LED4);
DigitalOut gr_led(p5);
DigitalOut led5(p18);

int main() {
    while(1) {
        led1 = 1;
        wait(0.2);
        led1 = 0;
       
        
        led2 = 1;
        wait(0.2);
        led2 = 0;
        
        
        led3 = 1;
        wait(0.2);
        led3 = 0;
     
        
        led4 = 1;
        wait(0.2);
        led4 = 0;
        
        gr_led = 0;
        wait(0.2);
        gr_led = 1;
        
        led5 = 0;
        wait(0.2);
        led5 = 1;
    }
}
