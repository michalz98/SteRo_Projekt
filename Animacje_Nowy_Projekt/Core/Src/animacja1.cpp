/*
 * animacja1.cpp
 *
 *  Created on: 12 cze 2021
 *      Author: michal
 */

#include <animacja1.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//void  figFall(int step, Stage* stage, StageObj* stgobj)
//{
//	srand (time(NULL));
//
//
//
//	if (!stgobj->r1) stgobj->r1 = rand() % 30 + 40;
//	if (!stgobj->r2) stgobj->r2 = rand() % 30 + 20;
//	if (!stgobj->w1) stgobj->w1 = rand() % 150 + 50;
//	if (!stgobj->w2) stgobj->w2 = rand() % 100 + 30;
//	if (!stgobj->l1) stgobj->l1 = rand() % 70 + 25;
//	if (!stgobj->l2) stgobj->l2 = rand() % 100 + 20;
//
//	if(stgobj->x1 < 0) stgobj->x1 = rand() % 240 + 1;
//	if(stgobj->x2 < 0) stgobj->x2 = rand() % 240 + 1;
//	if(stgobj->x3 < 0) stgobj->x3 = rand() % 240 + 1;
//	if(stgobj->x4 < 0) stgobj->x4 = rand() % 240 + 1;
//	stgobj->y1 = -stgobj->r1 + 1;
//	stgobj->y2 = -stgobj->r2 + 1;
//	stgobj->y3 = -stgobj->l1 + 1;
//	stgobj->y4 = -stgobj->l2 + 1;
//
//	stgobj->initFig();
//
//	stgobj->cir1->drawCircle(stgobj->x1, stgobj->y1, stage);
//	stgobj->cir2->drawCircle(stgobj->x2, stgobj->y2, stage);
//	stgobj->rec1->drawRec(stgobj->x3, stgobj->y3, 0, stage);
//	stgobj->rec2->drawRec(stgobj->x4, stgobj->y4, 0, stage);
//
//	stgobj->y1 = stgobj->y1 + (step + 1);
//	stgobj->y2 = stgobj->y2 + (step);
//	stgobj->y3 = stgobj->y1 + (step + 2);
//	stgobj->y4 = stgobj->y1 + (step + 3);
//
//	if(stgobj->y1 > 320 + stgobj->r1)
//	{
//		stgobj->x1 = -1;
//		stgobj->y1 = -1;
//		stgobj->r1 = 0;
//	}
//
//	if(stgobj->y2 > 320 + stgobj->r2)
//	{
//		stgobj->x2 = -1;
//		stgobj->y2 = -1;
//		stgobj->r2 = 0;
//	}
//
//	if(stgobj->y3 > 320 + stgobj->l1)
//	{
//		stgobj->x3 = -1;
//		stgobj->y3 = -1;
//		stgobj->l1 = 0;
//	}
//
//	if(stgobj->y4 > 320 + stgobj->l2)
//	{
//		stgobj->x4 = -1;
//		stgobj->y4 = -1;
//		stgobj->l2 = 0;
//	}
//
//}
