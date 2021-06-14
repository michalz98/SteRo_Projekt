/*
 * Rectangle.hh
 *
 *  Created on: May 24, 2021
 *      Author: michal
 */
#include <Stage.h>
#include <StageObj.h>
#include <vector>

#ifndef INC_RECTANGLE_HH_
#define INC_RECTANGLE_HH_

class Rectangle{
public:
	int width;
	int length;
	Rectangle(int w, int l);
	void drawRec(int x, int y, bool wypel, Stage* stage);
};



#endif /* INC_RECTANGLE_HH_ */
