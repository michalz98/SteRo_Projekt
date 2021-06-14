/*
 * Stage.c
 *
 *  Created on: May 24, 2021
 *      Author: michal
 */

#include <Stage.h>
#include <stdio.h>
#include "stm32f429i_discovery_lcd.h"



bool Stage::clear(){
	for(int i = 0; i < 240; i++){
		for(int j = 0; j < 320; j++){
			p[i][j] = 0;
		}
	}
}


void Stage::sendData()
{
	//printf("c\r\n");
	for(int i=0; i<240;i++)
		for(int j=0; j<320; j++)
		{
			if(p[i][j]==1)
			{
				  BSP_LCD_SetTextColor(LCD_COLOR_WHITE);
				  BSP_LCD_DrawRect(i,j,1,1);
				  //printf("p %d %d\r\n",i,j);
			}
		}
	//printf("k\r\n");
}


//void Stage::sendData()
//{
//	printf("c\r\n");
//	for(int i=0; i<240;i++)
//	{
//		for(int j=0; j<320; j++)
//		{
//			if(p[i][j])
//			{
//				  BSP_LCD_SetTextColor(LCD_COLOR_WHITE);
//				  BSP_LCD_DrawRect(i,j,1,1);
//				  printf("1 ");
//			}
//			else
//				printf("0 ");
//		}
//		printf("\r\n");
//	}
//	printf("k\r\n");
//}
