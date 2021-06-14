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
	int width;
	int length;
private:
	Rectangle(int w, int l);
	void drawRec(int x, int y, bool wypel);
};



#endif /* INC_RECTANGLE_HH_ */
