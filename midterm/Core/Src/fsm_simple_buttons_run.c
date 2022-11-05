/*
 * fsm_simple_buttons_run.c
 *
 *  Created on: Nov 6, 2022
 *      Author: HP
 */
#include "fsm_simple_buttons_run.h"

void fsm_simple_buttons_run(){
	if (isButton1Pressed() == 1) {
			counter = 0;
			Display7SEG(counter);

		}
		if (isButton2Pressed() == 1) {
			counter++;
			if(counter > 9) counter = 0;
			Display7SEG(counter);
		}
		if (isButton3Pressed() == 1) {
			counter--;
			if(counter < 0) counter = 9;
			Display7SEG(counter);
		}
}
