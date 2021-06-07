#ifndef INC_CIRCLE_HH_
#define INC_CIRCLE_HH_

#include <StageObj.hh>
#include "Stage.hh"

class Circle:public Stage{
	int r;
	int x;
private:
	Circle(int r);
	bool DrawCircle(int x, int y);
};

#endif
