#ifndef INC_CIRCLE_H_
#define INC_CIRCLE_H_

#include <Stage.h>
#include <StageObj.h>

class Circle{
public:
	int r;
	Circle(int r);
	void drawCircle(int x, int y, Stage* stage);
};

#endif
