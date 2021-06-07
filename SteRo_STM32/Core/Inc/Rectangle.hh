/*
 * Rectangle.hh
 *
 *  Created on: May 24, 2021
 *      Author: michal
 */
#include <vector>
#include <StageObj.hh>

#ifndef INC_RECTANGLE_HH_
#define INC_RECTANGLE_HH_

class Rectangle{
	int width;
	int length;
	vector<int> x_axis;
	vector<int> y_axis;
private:
	bool recDraw(int x, int y, int angle);
};




#endif /* INC_RECTANGLE_HH_ */
