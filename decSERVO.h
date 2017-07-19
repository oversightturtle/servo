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

BipolarServo s2_clock	(STAGE2VALUE + 1, 102, /*375*/ 320, 500);
BipolarServo s2_place	(STAGE2VALUE + 2, 102, 375, 375);
BipolarServo s2_cclock	(STAGE2VALUE + 3, 482, /*239*/ 230, 102);

#define LSERV 16
BipolarServo s2_close		(LSERV, 130, 475, 475); // 500
BipolarServo s2_away		(LSERV + 1, 478, 130, 130);

#define HSERV 5
BipolarServo sx_0       (HSERV, 200, 200, 200);
BipolarServo sx_1       (HSERV + 1, 380, 380, 380);
BipolarServo sx_2       (HSERV + 2, 280, 280, 280);
BipolarServo sx_3       (HSERV + 3, 400, 400, 400);
BipolarServo sx_4		(14, 280, 280, 280);

#define STAGE3VALUE 9
BipolarServo s3_upplace		(STAGE3VALUE, 108, 330, 330);
BipolarServo s3_fold1		(STAGE3VALUE + 1, 140, 250, 450);
BipolarServo s3_fold2		(STAGE3VALUE + 2, 480, 340, 200);

#define STAGE4VALUE 12
BipolarServo s4_close   (STAGE4VALUE + 1, 102, 460, 460);
BipolarServo s4_far     (STAGE4VALUE, 512,  108, 108);

// 19 close PRE 460 open 108
//18 close PRE 108 open 505 

//#define STAGE4VALUE 7
// BipolarServo s4_roll	(STAGE4VALUE, 500, 284, 106);

/*
#define STAGE5VALUE 8
//BipolarServo s5_lift	(STAGE5VALUE, 0, 0, 0); // EDIT THIS <<
BipolarServo s5_hold	(STAGE5VALUE + 1, 480, 350, 300); // EDIT THIS <<
				
#define STAGE6VALUE 1016
BipolarServo s6_upplace		(STAGE6VALUE, 512, 307, 307);
BipolarServo s6_fold1		(STAGE6VALUE + 1, 102, 330, 375);
BipolarServo s6_fold2		(STAGE6VALUE + 2, 512, 284, 239);
*/


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
