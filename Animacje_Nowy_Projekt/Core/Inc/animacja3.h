/*
 * animacja3.h
 *
 *  Created on: 13 cze 2021
 *      Author: michal
 */

#ifndef INC_ANIMACJA3_H_
#define INC_ANIMACJA3_H_

#include "StageObj.h"
#include "Circle.h"

/**
 * step - przemieszczenie się piłki
 * flag - do kontroli wywołania. 0 - pierwsze wywołanie animacji.
 */

void ball(int step, bool flag, Stage* stage, StageObj* stgobj);



#endif /* INC_ANIMACJA3_H_ */
