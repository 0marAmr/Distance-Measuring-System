#include "HAL/LCD/lcd.h"
#include "HAL/Sensors/HC-SR04-Ultrasonic/hc-sr04_ultrasonic.h"
#include <util/delay.h>
#include <avr/interrupt.h>

int main(){
	uint16 distance;

	/*enable global interrupt flag*/
	sei();

	/*Initialize devices*/
	LCD_init();
	Ultrasonic_init();

	LCD_displayString("Distance =    ");

	while(1){

		/*read the distance*/
		distance = Ultrasonic_readDistance();

		/*Display the distance*/
		LCD_moveCursor(0, 11);
		LCD_intgerToString(distance);

		/*Units correction*/
		if(distance<10){
			LCD_moveCursor(0, 12);
			LCD_displayString(" cm   ");
		}
		/*Tenth correction*/
		else if(distance<100){
			LCD_moveCursor(0, 13);
			LCD_displayString(" cm  ");
		}
		else{
			LCD_displayString("cm");
		}
	}
}
