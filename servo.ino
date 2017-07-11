#include "Arduino.h"
#include "wait.h"
#include "conTLC.h"
#include "ServoClass/BipolarServo.h"
#include "ServoClass/ServoMod.h"
#include "ServoClass/StageServo.h"
#include "Move/enum.h"
#include "Move/sMove.h"
#include "Move/MovSpeed.h"
#include "Move/decMovSpeed.h"
#include "decSERVO.h"
#include "safeloc.h"
#include "func.h" // inc vac
#include "pospoint.h"
#include "Operations/AltPrimary.h"
#include "Operations/Acts.h"

// update decSRVO

int order;
int pin;
int xpos;
int pin2;
int xpos2;

#define pinPICKUP A0

#define IDLE_LIGHT 30
#define CONTLC_LIGHT 33
#define CON_LIGHT 33

void ioff(){
	digitalWrite(IDLE_LIGHT, LOW);
}

void ion(){
	digitalWrite(IDLE_LIGHT, HIGH);
}

void con(){
	digitalWrite(CON_LIGHT, HIGH);
}
void coff(){
	digitalWrite(CON_LIGHT, LOW);
}

void setup()
{	init_pospoint(); // sync and declares position pins


// *** JOINT DECLRATIONS

	init_pospoint(); // sync and declares position pins
	tlc_initServos(); // init servo in the TLC library
	pinMode(13, OUTPUT);
	pinMode(IDLE_LIGHT, OUTPUT);
  pinMode(CON_LIGHT, OUTPUT);
	digitalWrite(IDLE_LIGHT, HIGH);
  digitalWrite(CON_LIGHT, LOW);
	Serial.begin(9600);

}


void loop()
{
// read and exec order
	while (Serial.available()>0)
	{
		order = Serial.parseInt();
		pin = Serial.parseInt();
		xpos = Serial.parseInt();
		pin2 = Serial.parseInt();
		xpos2 = Serial.parseInt();

		if (order == 0) {
		// 0 ORDER MEANS OPERATIONAL
			ioff();
				commit(pin);
			ion();
		}
		else if (order == 1) {
			tlc_directSetServo(pin, xpos);
			Tlc.update();
			wait(100);
		}
		else if (order == 2) {
			tlc_directSetServo( pin,  xpos);
			tlc_directSetServo( pin2, xpos2);
			Tlc.update();
			wait(100);
		}
     else if (order == 5){
    	ioff();
        for (int iii = 0; iii != 10; iii++){
        	int a;
            a = analogRead(pinPICKUP);
   //         Serial.println(a);
            if (a >= 102) {a = 0;} else {a = 1;}
            Serial.print(a);
            delay(50);
        }
        ion();
     	}
		else if (order == 10){
			tlc_directSetServo( pin, xpos);
		}
		else if (order == 11){
			Tlc.update();
		}
        else if (order == 55){
        	delay(1000);
            for (int iii = 0; iii != 10; iii++){
                Serial.print('0');
                delay(50);
            }
        }

		else if (order == 99){
			ioff();
			newsafe();
			ion();
		}
		else if (order == 98){
			ioff();
			safeloc();
			wait(1000);
			ion();
			con();
		}
	}
} // void loop




