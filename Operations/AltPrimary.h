/*
 * AltPrimary.h
 *
 *  Created on: Sep 27, 2016
 *      Author: oturt
 */

#ifndef ALTPRIMARY_H_
#define ALTPRIMARY_H_


#include "../decSERVO.h"
#include "../Move/sMove.h"

void newsafe(){
// S2
	sMove(s2_close, SAFE, s2_away, SAFE );
	sMove(s2_clock, SAFE, s2_cclock, SAFE);
	sMove(s2_place, SAFE);
	/*
// S3
	sMove(s3_fold1, SAFE, s3_fold2, SAFE);
	sMove(s3_upplace, SAFE);
// S4
	sMove(s4_roll, SAFE);
// S5
	sMove(s5_hold, SAFE);
	sMove(s5_away, SAFE, s5_close, SAFE);

//	sMove
//	<< UPDATE THIS

//S6
	sMove(s6_fold1, SAFE, s6_fold2, SAFE);
  	sMove(s6_upplace, SAFE);
  	*/

}



/*
void dAF(ServoMod s1)
{
	sMove(FAST, s1, s1.vSafe() + 30);
	wait(1500);
	sMove(FAST, s1, SAFE);
	wait(1500);
}

void testoperation()
{
//	sMove(FAST, rclift, SAFE);

//	sMove(INSTANT, s0_base, STAGE2);
	sMove(FAST, s0_base, STAGE2);

	sMove(FAST, rclift, 318, 275, 140, 307, 304);

//	sMove();
	sMove(FAST, rs0, s0_base.vVal(2) + 10, 298, 285, 170, 307, 200 );

}
*/
	/*
	sMove(SLOW, s5_upplace, 102);
	sMove(SLOW, s5_upplace, 512);
	sMove(SLOW, s5_upplace, 102);
	sMove(SLOW, s5_upplace, 512);
*/






/*
	dAF(s0_base);
	dAF(s0_lift1);
	dAF(s0_lift2);
	dAF(s0_pitch);
	dAF(s0_yaw);
	dAF(s0_roll);
*/
/*

	mov_eq(rs0, 160, 80, 100, 130, 100, 90);
	wait(2000);
	mov(s0_base, s0_base.vVal(1));
	wait(2000);
	mov(s0_base, s0_base.vVal(2));
	wait(2000);
	mov(s0_base, s0_base.vVal(3));
	wait(2000);
	mov(s0_base, s0_base.vVal(4));
	wait(2000);
	mov(s0_base, s0_base.vVal(5));
	wait(2000);
	mov(s0_base, s0_base.vVal(6));
	wait(2000);
	mov(s0_base, s0_base.vVal(7));
	wait(2000);
	*/




#endif /* ALTPRIMARY_H_ */
