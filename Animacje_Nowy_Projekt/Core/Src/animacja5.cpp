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

	if(step%20 == 0 && stgobj->rw1 == 0){
		stgobj->rw1 = 1;
	}
	if(step%40 == 0 && stgobj->rw2 == 0){
		stgobj->rw2 = 1;
	}
	if(step%80 == 0 && stgobj->rw3 == 0){
		stgobj->rw3 = 1;
	}
	if(step%100 == 0 && stgobj->rw4 == 0){
		stgobj->rw4 = 1;
	}
	stgobj->wave1 = new Circle(stgobj->rw1);
	stgobj->wave2 = new Circle(stgobj->rw2);
	stgobj->wave3 = new Circle(stgobj->rw3);
	stgobj->wave4 = new Circle(stgobj->rw4);

	stgobj->wave1->drawCircle(x, y, stage);
	stgobj->wave2->drawCircle(x, y, stage);
	stgobj->wave3->drawCircle(x, y, stage);
	stgobj->wave4->drawCircle(x, y, stage);


	if( stgobj->rw1 != 0){
		stgobj->rw1 += 2;
	}

	if( stgobj->rw2 != 0){
		stgobj->rw2 += 2;
	}

	if( stgobj->rw3 != 0){
		stgobj->rw3 += 2;
	}

	if( stgobj->rw4 != 0){
		stgobj->rw4 += 2;
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

	delete stgobj->wave1;
	delete stgobj->wave2;
	delete stgobj->wave3;
	delete stgobj->wave4;
}

