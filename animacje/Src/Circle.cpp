/*
 * Circle.c
 *
 *  Created on: May 24, 2021
 *      Author: michal
 */
#include <Circle.h>

Circle::Circle(int r)
{
	this->r = r;
}


void Circle::drawCircle(int x, int y, Stage* stage)
{
    int d = 1 - this->r;
    int x_t, y_t;
    x_t = 0;
    y_t = r;

    for(int i = 1; x_t < y_t; i++)
    {
        if(d < 0)
        {
            x_t++;
            d += 2*x_t+3;
        }
        else
        {
            x_t++;
            y_t--;
            d +=  2*(x_t - y_t)+5;
        }
        if (x_t+x > 0 && x_t+x < 240 && y_t+y > 0 && y_t+y < 320)
        	stage->p[x_t+x][y_t+y] = 1;
        if (x_t+x > 0 && x_t+x < 240 && -y_t+y > 0 && -y_t+y < 320)
        	stage->p[x_t+x][-y_t+y] = 1;
        if (-x_t+x > 0 && -x_t+x < 240 && y_t+y > 0 && y_t+y < 320)
        	stage->p[-x_t+x][y_t+y] = 1;
        if (-x_t+x > 0 && -x_t+x < 240 && -y_t+y > 0 && -y_t+y < 320)
        	stage->p[-x_t+x][-y_t+y] = 1;
        if (x_t+x > 0 && x_t+x < 320 && y_t+y > 0 && y_t+y < 240)
        	p[y_t+x][x_t+y] = 1;
        if (-x_t+x > 0 && -x_t+x < 320 && y_t+y > 0 && y_t+y < 240)
        	stage->p[y_t+x][-x_t+y] = 1;
        if (x_t+x > 0 && x_t+x < 320 && -y_t+y > 0 && -y_t+y < 240)
        	stage->p[-y_t+x][x_t+y] = 1;
        if (-x_t+x > 0 && -x_t+x < 320 && -y_t+y > 0 && -y_t+y < 240)
        	stage->p[-y_t+x][-x_t+y] = 1;
    }
}
