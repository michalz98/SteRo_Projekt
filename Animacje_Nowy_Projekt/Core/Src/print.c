/*
 * print.c
 *
 *  Created on: Jun 14, 2021
 *      Author: kapi2
 */
#include "main.h"

UART_HandleTypeDef huart1;

int _write(int file, char* ptr, int len){
	//HAL_UART_Transmit(&huart1,  reinterpret_cast<uint8_t*>(ptr), len, 50);
	HAL_UART_Transmit(&huart1,(uint8_t*)((void*)(ptr)), len, 50);
	return len;
}
