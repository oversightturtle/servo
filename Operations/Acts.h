/*
 * General.h
 *
 *  Created on: Sep 30, 2016
 *      Author: oturt
 */

#ifndef ACTS_H_
#define ACTS_H_

void act19();
void act22();
void act25();
void act26();
void act27();
void act28();
void act29();

void act30();
void act33();
void act36();
void act40();
void act45();
/*
void act130();
void act133();
void act136();
*/

void sx_safe();
void sx_pre();
void sx_half();
void sx_full();
void sx_down();
void sx_low();

void commit(int counter){
	switch (counter){

	case 19: act19(); break; // 
	case 22: act22(); break;
	case 25: act25(); break; // 
	case 26: act26(); break; //
	case 27: act27(); break; //
	case 29: act29(); break; //
	case 30: act30(); break; // 
	case 33: act33(); break; // 
	case 36: act36(); break; // 
	case 40: act40(); break; // 
	case 45: act45(); break; // 
	/*
	case 130: act130(); break; // 
	case 133: act133(); break; // 
	case 136: act136(); break; // 
	*/
	}
}

void act19(){
	sMove (INSTANT, s2_close, OPEN, s2_away, OPEN);
	sMove (INSTANT, s2_clock, OPEN, s2_cclock, OPEN);
	sMove (INSTANT, s2_place, OPEN);
}

void sx_safe(){sMove(INSTANT, sx_0, 200, sx_1, 380, sx_2, 280, sx_3, 400, sx_4, 280);}
void sx_place(){sMove(SMOOTH, sx_0, 225, sx_1, 325, sx_2, 170, sx_3, 170);}
void sx_full(){sMove(SMOOTH, sx_0, 265, sx_1, 265, sx_2, 230, sx_3, 220);}
//void sx_down(){sMove();}
/*
void sx_pre() {sMove(INSTANT, sx_0, 225, sx_1, 325, sx_2, 260, sx_3, 250);}
void sx_half(){sMove(INSTANT, sx_0, 278, sx_1, 265, sx_2, 215, sx_3, 245);}
//void sx_full(){sMove(SXSPD, sx_0, 313, sx_1, 222, sx_2, 180, sx_3, 210);}
//void sx_full(){sMove(INSTANT, sx_0, 318, ##326## sx_1, 228, sx_2, 300, sx_3, 350);}
void sx_full(){sMove(SMOOTH, sx_0, 325, sx_1, 225, sx_2, 290, sx_3, 350);}
void sx_down(){sMove(INSTANT, sx_0, 310, sx_1, 226, sx_2, 293, sx_3, 400);}
void sx_low() {sMove(INSTANT, sx_0, 380, sx_1, 166, sx_2, 121, sx_3, 300);}
void sx_place(){sMove(SMOOTH, sx_0, 318, sx_1, 226, sx_2, 102, sx_3, 110);}
*/
// sx0 318 ;sx1 226 ;sx2 102 ;sx3 110

// 1 180 ;3 420


void act22(){
   	sx_safe();

//20
	sMove (INSTANT, s2_place, CLOSE);
	wait(2000);
	sMove (SMOOTH, s2_clock, 180 , s2_cclock, 385);
	wait(2000);
	sx_place();
	wait(2000);
    sMove(SMOOTH, s2_clock, CLOSE, s2_cclock, CLOSE, sx_0, 320, sx_1, 220, sx_2, 290, sx_3, 350);
	wait(1000);
}

void act25(){

	act22();

//24
    sMove (INSTANT, s2_away, CLOSE, s2_close, CLOSE);
	wait(750);
	sMove (INSTANT, s2_away, OPEN, s2_close, OPEN);
	wait(750);
	sMove (INSTANT, s2_away, CLOSE, s2_close, CLOSE);
	wait(750);
	sMove (INSTANT, s2_away, OPEN, s2_close, OPEN);
//28
    sx_full();
    sx_safe();
    /*
	sMove (SMOOTH, s2_clock, 180 , s2_cclock, 385);
	sMove (SMOOTH, sx_0, 225, sx_1, 325, sx_2, 200,sx_3, 150);
	sx_place();
	sMove (INSTANT, s2_clock, OPEN, s2_cclock, OPEN);
	sx_full();
*/
	//	sx_down();
	    /*
	     * 	sMove (INSTANT, s2_clock, 350, s2_cclock, 200);
		sx_half();
		sx_pre();
		sx_safe();
		*/
	//25
}

void act26(){
	sMove (INSTANT, s2_clock, OPEN, s2_cclock, OPEN);
	// s2_place >> 102 close
}
void act27(){
	sMove (INSTANT, s2_place, 160);
}

void act29(){
	sMove(s2_close, SAFE, s2_away, SAFE);
	sMove(s2_clock, SAFE, s2_cclock, SAFE);
	sMove(s2_place, SAFE);

	sMove(INSTANT, s3_upplace, OPEN);
	sMove(INSTANT, s3_fold1, OPEN, s3_fold2, OPEN);
}

void act30(){
	sMove(INSTANT, s3_upplace, CLOSE);
}

void act33(){
	sMove(s3_fold1, SAFE, s3_fold2, SAFE);
}

void act36(){
	for(int iii = 0; iii != 3; iii++){
		sMove(INSTANT, s3_fold1, CLOSE, s3_fold2, CLOSE);
		wait(1000);
		sMove(INSTANT, s3_fold1, SAFE, s3_fold2, SAFE);
		wait(1000);
	}
	sMove(INSTANT, s3_fold1, OPEN, s3_fold2, OPEN);
	wait(2000);
	sMove(INSTANT, s3_upplace, OPEN);
}

void act40(){
	sMove(INSTANT, s4_far, OPEN, s4_close, OPEN);

	sMove(INSTANT, s3_fold1, SAFE, s3_fold2, SAFE);
}

void act45(){
	sMove(INSTANT, s4_close, CLOSE, s4_far, CLOSE);
}

/*
void act129(){
act29();
}

void act130(){
act30();
}

void act133(){
act33();
}

void act136(){
act36();
}
*/
#endif /* ACTS_H_ */
