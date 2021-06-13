/*
 * Line.cpp
 *
 *  Created on: 13 cze 2021
 *      Author: michal
 */

#include <Line.h>

void drawLine(int x1, int y1, int x2, int y2)
{
	int x;
	    int y;
	    float pom1, pom2; //wykorzystywane przy rysowaniu linii na ukos, do  okreslenia skali roznic do siebie
	    if(x1==x2)
	    {
	        for(int i=y1; i<=y2; i++)
	        {
	            stage->p[x1][i]=1;
	        }
	        return;
	    }
	    else if(y1==y2)
	    {
	        for(int i=x1; i<=x2; i++)
	        {
	        	stage->p[i][y1]=1;
	        }
	        return;
	    }
	    else
	    {
	        x=x2-x1;
	        y=y2-y1;
	        if(x>y)
	        {
	            pom1=(float)y/x;
	            for(int i=0; i<=x; i++)
	            {
	                pom2=pom1*i;
	                if(pom2<((float)((int)pom2)+0.5))
	                {
	                	stage->p[x1+i][y1+(int)pom2]=1;
	                }
	                else
	                {
	                	stage->p[x1+i][y1+(int)pom2+1]=1;
	                }
	            }
	        }
	        else if(x<y)
	        {
	            pom1=(float)x/y;
	            for(int i=0; i<=y; i++)
	            {
	                pom2=pom1*i;
	                if(pom2<((float)((int)pom2)+0.5))
	                {
	                	stage->p[x1+(int)pom2][y1+i]=1;
	                }
	                else
	                {
	                	stage->p[x1+(int)pom2+1][y1+i]=1;
	                }
	            }
	        }
	        else
	        {
	            for(int i=0; i<=x;i++)
	            {
	            	stage->p[x1+i][y1+i]=1;
	            }
	            return;
	        }
	    }
}
