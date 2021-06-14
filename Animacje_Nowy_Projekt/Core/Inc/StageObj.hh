/*
 * StageObj.h
 *
 *  Created on: May 24, 2021
 *      Author: michal
 */

#ifndef INC_STAGEOBJ_HH_
#define INC_STAGEOBJ_HH_

#include "Circle.hh"
#include "Rectangle.hh"
#include <vector>

class StageObj
{
public:
	int r1, r2, w1, w2, l1, l2;
	int x1, x2, x3, x4;
	int y1,y2 ,y3 ,y4;
	std::vector<int> x_axis;
	std::vector<int> y_axis;
	Circle *cir1;
	Circle *cir2;
	Rectangle *rec1;
	Rectangle *rec2;
public:
	StageObj();
	~StageObj();
	bool initFig();
};

static StageObj *stgobj;

#endif /* INC_STAGEOBJ_HH_ */
