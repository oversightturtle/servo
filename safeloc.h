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

	config(s2_close);
	config(s2_away);
	// s1 s2
	config(sx_0);
	config(sx_1);
	config(sx_2);
	config(sx_3);

	config(s3_upplace);
	config(s3_fold1);
	config(s3_fold2);

    config(s4_far);
    config(s4_close);
}



#endif /* SAFELOC_H_ */
