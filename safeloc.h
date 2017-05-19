/*
 * safeloc.h
 *
 *  Created on: Sep 21, 2016
 *      Author: oturt
 */

#ifndef SAFELOC_H_
#define SAFELOC_H_

static int ordersafe = 0;

void config(ServoMod &x)
{
	x.config();
	pServo[x.vPin()] = &x;
    pExist[x.vPin()] = 1;
    pOrder[ordersafe] = &x;
    ordersafe++;
}
void config(){};

// NOTE THE ORDER MATTERS!!!

void safeloc()
{
	config(s2_clock);
	config(s2_place);
	config(s2_cclock);
}



#endif /* SAFELOC_H_ */
