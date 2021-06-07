/*
 * Circle.c
 *
 *  Created on: May 24, 2021
 *      Author: michal
 */
#include <Circle.hh>



bool Circle::DrawCircle(int x, int y)
{
    int d = 1 - r;
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
        	p[x_t+x][y_t+y] = 1;
        if (x_t+x > 0 && x_t+x < 240 && -y_t+y > 0 && -y_t+y < 320)
        	p[x_t+x][-y_t+y] = 1;
        if (-x_t+x > 0 && -x_t+x < 240 && y_t+y > 0 && y_t+y < 320)
        	p[-x_t+x][y_t+y] = 1;
        if (-x_t+x > 0 && -x_t+x < 240 && -y_t+y > 0 && -y_t+y < 320)
        	p[-x_t+x][-y_t+y] = 1;
        if (x_t+x > 0 && x_t+x < 320 && y_t+y > 0 && y_t+y < 240)
        	p[y_t+x][x_t+y] = 1;
        if (-x_t+x > 0 && -x_t+x < 320 && y_t+y > 0 && y_t+y < 240)
        	p[y_t+x][-x_t+y] = 1;
        if (x_t+x > 0 && x_t+x < 320 && -y_t+y > 0 && -y_t+y < 240)
        	p[-y_t+x][x_t+y] = 1;
        if (-x_t+x > 0 && -x_t+x < 320 && -y_t+y > 0 && -y_t+y < 240)
        	p[-y_t+x][-x_t+y] = 1;
    }
}
