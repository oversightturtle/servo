/*
 * wait.h
 *
 *  Created on: Nov 6, 2016
 *      Author: oturt
 */

#ifndef WAIT_H_
#define WAIT_H_

#include "Arduino.h"

unsigned long wait_ptime = 0;
unsigned long wait_crtime = 0;


void wait(int x)
{
  do{wait_crtime = millis();} while (wait_crtime - wait_ptime <= x);
  wait_ptime = wait_crtime;
}



#endif /* WAIT_H_ */
