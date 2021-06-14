/*
 * Rectangle.cpp
 *
 *  Created on: May 24, 2021
 *      Author: michal
 */

#include "Rectangle.hh"

Rectangle::Rectangle(int w, int l)
{
	this->width = w;
	this->length = l;
}


void Rectangle::drawRec(int x, int y, bool wypel)
{
	int x1 = x - this->width/2;
	int x2 = x + this->width/2;
	int y1 = y - this->length/2;
	int y2 = y + this->length/2;

    for(int i=x1; i<=x2; i++)
    {
    	if(i > 0 && i < 240)
    	{
			p[i][y1]=1;
			p[i][y2]=1;
			if(wypel)
			{
				for(int j=y1; j<=y2; j++)
				{
					p[i][j]=1;
				}
			}
    	}
    }

    for(int i=y1; i<=y2; i++)
    {
    	if(i > 0 && i < 320)
    	{
			p[x1][i]=1;
			p[x2][i]=1;
    	}
    }
}
