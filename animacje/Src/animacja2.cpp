/*
 * animacja2.cpp
 *
 *  Created on: 13 cze 2021
 *      Author: michal
 */

#include "animacja2.h"

void tekst(int y, bool state, Stage* stage)
{
	if (y == 0)
	{
		t.x1 = 115;
		t.x2 = 125;
	}
    // ----------------------- S --------------------------

    if(state = 1)
    {
    	if( y >= 0 && y < 5) {
        	drawLine(t.x1,y,t.x2,y,stage);
            t.x1 = t.x1 - 4;
            t.x2 = t.x2 + 4;
        }

        if( y >= 5 && y < 10) {
        	drawLine(t.x1,y,t.x2,y, stage);
            t.x1 = t.x1 - 2;
            t.x2 = t.x2 + 2;
        }

        if( y >= 10  && y < 15) {
        	drawLine(t.x1,y,t.x1 + 35,y,stage);
        	drawLine(t.x2 - 35,y,t.x2,y,stage);
            t.x1 = t.x1 - 2;
            t.x2 = t.x2 + 2;
        }

        if( y >= 15 && y < 20) {
        	drawLine(t.x1,y,t.x1 + 35,y,stage);
        	drawLine(t.x2 - 35,y,t.x2,y,stage);
        }

        if( y >= 20 && y < 25) {
        	drawLine(t.x1,y,t.x1 + 35,y,stage);
        }

        if( y >= 25 && y < 30) {
        	drawLine(t.x1,y,t.x1 + 35,y,stage);
            if(y%2 == 0)  t.x1 = t.x1 + 1;
        }

        if( y >= 30 && y < 47) {
        	drawLine(t.x1,y,t.x1 + 35,y,stage);
        	t.x1 = t.x1 + 3;
        }

        if( y >= 47 && y < 52) {
        	drawLine(t.x1,y,t.x1 + 35,y,stage);
            if(y%2 == 0)  t.x1 = t.x1 + 1;
        }

        if( y >= 52 && y < 55) {
        	drawLine(t.x1,y,t.x1 + 35,y,stage);
        }

        if (y == 55){
        	t.x2 = t.x1 - 58;
        }
        if( y >= 55 && y < 60) {
        	drawLine(t.x1,y,t.x1 + 35,y,stage);
        	drawLine(t.x2,y,t.x2 + 35,y,stage);
        }

        if( y >= 60 && y < 65) {
        	drawLine(t.x1,y,t.x1 + 35,y,stage);
        	drawLine(t.x2,y,t.x2 + 35,y,stage);
        	t.x1 = t.x1 - 2;
            t.x2 = t.x2 + 2;
        }

        if( y >= 65 && y < 70) {
        	drawLine(t.x2,y,t.x1+35,y,stage);
        	t.x1 = t.x1 - 2;
        	t.x2 = t.x2 + 2;
        }

        if( y >= 70 && y < 75) {
        	drawLine(t.x2,y,t.x1+35,y,stage);
        	t.x1 = t.x1 - 4;
        	t.x2 = t.x2 + 4;
        }

        // -------------------------- T -----------------------------

        if ( y == 90){
        	t.x1 = 75;
        	t.x2 = 165;
        }
        if( y >= 100 && y < 120) {
        	drawLine(t.x1,y,t.x2,y,stage);
        }

        if(y == 120){
        	t.x1 = 110;
        	t.x2 = 130;
        }
        if( y >= 120 && y < 180) {
        	drawLine(t.x1,y,t.x2,y,stage);
        }

        // -------------------------- M -----------------------------

        if(y == 190){
        	t.x1 = 75;
        	t.x2 = 165;
        	t.x3 = 75;
        	t.x4 = 165;
        }

        if( y >= 200 && y < 235) {
        	drawLine(t.x1,y,t.x1 + 20,y,stage);
        	drawLine(t.x2 - 20,y,t.x2,y,stage);
        	drawLine(t.x3,y,t.x3 + 20,y,stage);
        	drawLine(t.x4 - 20,y,t.x4,y,stage);
            if(y%2 == 0)
            {
            	t.x3 = t.x3 + 2;
            	t.x4 = t.x4 - 2;
            }
        }

        if( y >= 235 && y < 280) {
        	drawLine(t.x1,y,t.x1 + 20,y,stage);
        	drawLine(t.x2 - 20,y,t.x2,y,stage);
        }

        y = y + 1;
    }

    if (y == 319)
    {
    	state = 1;
    	y = 0;
    }

}



