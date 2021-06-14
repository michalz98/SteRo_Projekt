/*
 * Stage.c
 *
 *  Created on: May 24, 2021
 *      Author: michal
 */

#include <stdio.h>
#include <Stage.hh>



void Stage::clear(){
	for(int i = 0; i < 240; i++){
		for(int j = 0; j < 320; j++){
			p[i][j] = 0;
		}
	}
	commsclear();
}

void Stage::comms()
{
	for(int i=0; i<240; i++)
	{
		for(int j =0; j<320; j++)
		{
			if(p[i][j])
			{
				printf("p %d %d\r\n", i, j);
			}
		}
	}

}

void Stage::commsclear()
{
	printf("c\r\n");
}

void Stage::display()
{
	  BSP_LCD_Clear(LCD_COLOR_WHITE);
	for(int i=0; i<240; i++)
	{
		for(int j =0; j<320; j++)
		{
			if(p[i][j])
			{

				printf("p %d %d\r\n", i, j);
			}
		}
	}
	printf("k\r\n");
}
