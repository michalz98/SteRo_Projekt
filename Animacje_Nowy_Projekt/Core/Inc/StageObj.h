/*
 * StageObj.h
 *
 *  Created on: May 24, 2021
 *      Author: michal
 */

#ifndef INC_STAGEOBJ_H_
#define INC_STAGEOBJ_H_

#include "Circle.h"
#include <Rectangle.h>
#include <vector>

class StageObj{
public:
	int r1, r2, rb, w1, w2, l1, l2, vxb, vyb;
	int x1, x2, x3, x4, xb;
	int y1,y2 ,y3 ,y4, yb;
	int rw1, rw2, rw3, rw4;
	std::vector<int> x_axis;
	std::vector<int> y_axis;
	Circle *cir1;
	Circle *cir2;
	Circle *ball;
	Circle *wave1;
	Circle *wave2;
	Circle *wave3;
	Circle *wave4;

	Rectangle *rec1;
	Rectangle *rec2;
	StageObj();
	bool initFig();
	~StageObj();

};

static StageObj *stgobj;

#endif /* INC_STAGEOBJ_H_ */
