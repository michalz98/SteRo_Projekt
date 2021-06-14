/*
 * animacja4.cpp
 *
 *  Created on: 14 cze 2021
 *      Author: michal
 */
#include <cmath>
#include "animacja4.h"

void hipocycloid(int R, int r, int d, int step)
{
    double fi = step*hip.r/hip.R;
    double psi = step + fi;
    int x = (int)(((hip.R+hip.r)*cos(fi))+hip.d*cos(psi)+hip.p);
    int y = (int)(q - ((hip.R+hip.r)*sin(fi))-hip.d*sin(psi));
    stage->p[x,y] = 1;;
}
