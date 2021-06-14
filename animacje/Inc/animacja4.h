/*
 * animacja4.h
 *
 *  Created on: 14 cze 2021
 *      Author: michal
 */

#ifndef INC_ANIMACJA4_H_
#define INC_ANIMACJA4_H_

#include "Stage.h"

struct data{
    double R = 40;
    double r = 15;
    double d = 60;
    int p = 120, q = 170;
}hip;

void hipocycloid(int step);

#endif /* INC_ANIMACJA4_H_ */
