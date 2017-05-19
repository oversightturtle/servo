/*
 * decPINS.h
 *
 *  Created on: Sep 21, 2016
 *      Author: oturt
 */

#ifndef DECSERVO_H_
#define DECSERVO_H_

//#include "ServoClass/StageServo.h"

#include "pospoint.h"
//#include "ServoClass/StageServo.h"

#define pin_safelight1 33
#define pin_safelight2 31

#define pin_s0_vac  47
#define pin_s0_safe 46

//>> SAFELOK



//CRITICAL DO NOT PUT ANYTHING ON PIN 2


// 102 ==>> 500 ms pulse ==>> 0 degrees

// 512 ==>> 2500 ms pulse ==>> 180 degrees

#define STAGE2VALUE 0

// BipolarServo ServoName(PINVAL, CLOSEVAL, SAFEvAL, OPEN); 
//BipolarServo s2_big	(STAGE2VALUE, 102, 375, 493);

BipolarServo s2_clock	(STAGE2VALUE + 1, 102, /*375*/ 290, 500);
BipolarServo s2_place	(STAGE2VALUE + 2, 102, 375, 375);
BipolarServo s2_cclock	(STAGE2VALUE + 3, 490, /*239*/ 260, 102);
/*

#define STAGE3VALUE 4
BipolarServo s3_upplace		(STAGE3VALUE, 108, 330, 330);
BipolarServo s3_fold1		(STAGE3VALUE + 1, 140, 250, 450);
BipolarServo s3_fold2		(STAGE3VALUE + 2, 480, 340, 200);

#define STAGE4VALUE 7
BipolarServo s4_roll	(STAGE4VALUE, 500, 284, 106);

#define STAGE5VALUE 8
//BipolarServo s5_lift	(STAGE5VALUE, 0, 0, 0); // EDIT THIS <<
BipolarServo s5_hold	(STAGE5VALUE + 1, 480, 350, 300); // EDIT THIS <<
				
#define STAGE6VALUE 1016
BipolarServo s6_upplace		(STAGE6VALUE, 512, 307, 307);
BipolarServo s6_fold1		(STAGE6VALUE + 1, 102, 330, 375);
BipolarServo s6_fold2		(STAGE6VALUE + 2, 512, 284, 239);
*/
#define LSERV 16
BipolarServo s2_close		(LSERV, 120, 490, 490); // 500
BipolarServo s2_away		(LSERV + 1, 478, 130, 130);

// #define LSERV2 18
// BipolarServo s5_close		(LSERV2, 110, 110, 500 /*openup*/);
// BipolarServo s5_away		(LSERV2 + 1, 500, 500 ,160 /*openup*/ );
//
//define LSERV2 18
//BipolarServo s5_close		(LSERV2, 500, 190, 150 /*openup*/);
//BipolarServo s5_away		(LSERV2 + 1, 190, 450 ,490 /*openup*/ );

// 120 - 480 dist

// BipolarServo s2_big2	(15, 493, 375, 102)

//ServoMod testservo(2, 307);


#endif /* DECSERVO_H_ */
