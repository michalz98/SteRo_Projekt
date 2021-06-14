/*
 * animacja3.cpp
 *
 *  Created on: 13 cze 2021
 *      Author: michal
 */

#include "animacja3.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ball(int step, bool flag)
{
	if(!flag){
		stgobj->ball = new Circle(stgobj->xb, stgobj->yb, stgobj->rb);
	}

	flag = 1;

	stgobj->ball->drawCircle(stgobj->xb, stgobj->yb);



	if(stgobj->xb == stgobj->rb){
		stgobj->vxb = 1;
	}
	if(stgobj->xb == 239 - stgobj->rb){
		stgobj->vxb = -1;
	}

	if(stgobj->yb == stgobj->rb){
		stgobj->vyb = 1;
	}
	if(stgobj->yb == 319 - stgobj->rb){
		stgobj->vyb = -1;
	}

	stgobj->xb = stgobj->xb + step * stgobj->vxb;
	stgobj->yb = stgobj->yb + step * stgobj->vyb;
}

