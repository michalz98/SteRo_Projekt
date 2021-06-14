/*
 * StageObj.c
 *
 *  Created on: May 24, 2021
 *      Author: michal
 */

#include <StageObj.hh>

StageObj::StageObj()
{
	this->x1 = -1;
	this->x2 = -1;
	this->x3 = -1;
	this->x4 = -1;

	this->y1 = -1;
	this->y2 = -1;
	this->y3 = -1;
	this->y4 = -1;

	this->r1 = 0;
	this->r2 = 0;
	this->w1 = 0;
	this->w2 = 0;
	this->l1 = 0;
	this->l2 = 0;

	this->x_axis = {1,0};
	this->y_axis = {0,1};

}

bool StageObj::initFig()
{
	this->cir1 = new Circle(this->r1);
	this->cir2 = new Circle(this->r2);
	this->rec1 = new Rectangle(this->w1, this->l1);
	this->rec2 = new Rectangle(this->w2, this->l2);
}
