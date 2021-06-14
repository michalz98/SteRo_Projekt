#ifndef INC_CIRCLE_H_
#define INC_CIRCLE_H_

#include <Stage.hh>

class Circle:public Stage{
	int r;
public:
	Circle(int r);
	void drawCircle(int x, int y);
};

#endif
