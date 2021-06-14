/*
 * Rectangle.hh
 *
 *  Created on: May 24, 2021
 *      Author: michal
 */
#include <Stage.hh>
#include <StageObj.hh>
//#include <vector>

#ifndef INC_RECTANGLE_HH_
#define INC_RECTANGLE_HH_

class Rectangle:public Stage{
	int width;
	int length;
public:
	Rectangle(int w, int l);
	void drawRec(int x, int y, bool wypel);
};



#endif /* INC_RECTANGLE_HH_ */
