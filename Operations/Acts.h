/*
 * General.h
 *
 *  Created on: Sep 30, 2016
 *      Author: oturt
 */

#ifndef ACTS_H_
#define ACTS_H_

void act19();
void act20();
void act25();
void act26();
void act27();
void act29();
/*
void act30();
void act33();
void act36();
void act40();
void act45();
void act130();
void act133();
void act136();
*/

void commit(int counter){
	switch (counter){

	case 19: act19(); break; // 
	case 20: act20(); break; // 
	case 25: act25(); break; // 
	case 26: act26(); break; //
	case 27: act27(); break; //
	case 29: act29(); break; //
	/*
	case 30: act30(); break; // 
	case 33: act33(); break; // 
	case 36: act36(); break; // 
	case 40: act40(); break; // 
	case 45: act45(); break; // 
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

void act20(){
	sMove (INSTANT, s2_place, CLOSE);
	sMove (INSTANT, s2_clock, CLOSE, s2_cclock, CLOSE);
}

void act25(){
	for (int iii = 0; iii != 3; iii++){
		sMove (INSTANT, s2_away, CLOSE, s2_close, CLOSE);
		wait(2000);
		sMove (INSTANT, s2_away, OPEN, s2_close, OPEN);
		wait(2000);
	}
	sMove (INSTANT, s2_clock, SAFE, s2_cclock, SAFE);
}

void act26(){
	sMove (INSTANT, s2_clock, OPEN, s2_cclock, OPEN);
	// s2_place >> 102 close
	sMove (INSTANT, s2_place, 115);

}

void act27(){
	sMove (INSTANT, s2_place, 135);
}

void act29(){
	sMove(s2_close, SAFE, s2_away, SAFE);
	sMove(s2_clock, SAFE, s2_cclock, SAFE);
	sMove(s2_place, SAFE);

//	sMove(INSTANT, s3_fold1, OPEN, s3_fold2, OPEN);
}
/*
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
    	sMove(s3_fold1, SAFE, s3_fold2, SAFE);

	sMove(INSTANT, s4_roll, OPEN);
}

void act45(){
	sMove(INSTANT, s4_roll, CLOSE);
}

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
