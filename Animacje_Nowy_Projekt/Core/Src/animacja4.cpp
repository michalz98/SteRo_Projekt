/*
 * animacja4.cpp
 *
 *  Created on: 14 cze 2021
 *      Author: michal
 */
#include <cmath>
#include "animacja4.h"
#include <stdio.h>

void hipocycloid(int step, Stage* stage)
{
    double fi = step*hip.r/hip.R;
    double psi = step + fi;
    int x = (int)(((hip.R+hip.r)*cos(fi))+hip.d*cos(psi)+hip.p);
    int y = (int)(hip.q - ((hip.R+hip.r)*sin(fi))-hip.d*sin(psi));
    stage->p[x][y] = 1;
    //printf("%d\r\n",stage->p[x][y]);
}
