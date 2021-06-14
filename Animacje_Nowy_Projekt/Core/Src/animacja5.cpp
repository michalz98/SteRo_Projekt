/*
 * animacja5.cpp
 *
 *  Created on: 14 cze 2021
 *      Author: michal
 */

#include "animacja5.h"

void circles(int step, Stage* stage, StageObj* stgobj)
{
	int x = 120, y= 160;

	if(step%30 = 0 && stgobj->rw1 == 0){
		stgobj->rw1 == 1;
	}
	if(step%60 = 0 && stgobj->rw1 == 0){
		stgobj->rw2 == 1;
	}
	if(step%90 = 0 && stgobj->rw1 == 0){
		stgobj->rw3 == 1;
	}
	if(step%120 = 0 && stgobj->rw1 == 0){
		stgobj->rw4 == 1;
	}

	stgobj->wave1->drawCircle(x, y, stage);
	stgobj->wave2->drawCircle(x, y, stage);
	stgobj->wave3->drawCircle(x, y, stage);
	stgobj->wave4->drawCircle(x, y, stage);


	if( stgobj->rw1 != 0){
		stgobj->rw1 += step;
	}

	if( stgobj->rw1 != 0){
		stgobj->rw1 += step;
	}

	if( stgobj->rw1 != 0){
		stgobj->rw1 += step;
	}

	if( stgobj->rw1 != 0){
		stgobj->rw1 += step;
	}

	if( stgobj->rw1 > 115){
		stgobj->rw1 = 0;
	}

	if( stgobj->rw2 > 115){
		stgobj->rw2 = 0;
	}

	if( stgobj->rw3 > 115){
		stgobj->rw3 = 0;
	}

	if( stgobj->rw4 > 115){
		stgobj->rw4 = 0;
	}
}

