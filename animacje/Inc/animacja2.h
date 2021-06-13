/*
 * adnimacja2.h
 *
 *  Created on: 13 cze 2021
 *      Author: michal
 */

#ifndef INC_ANIMACJA2_H_
#define INC_ANIMACJA2_H_

#include "Line.h"

/**
 *  y - obsługiwane przez funkcję zwiększane od 0 do 319 o jeden co wywołanie.
 *  state - 0 by rysować, po wyrysowaniu zmieniane na 1 by można było wyczyścić
 *  scene i rysowac ponownie
 */

struct text{
	int x1, x2, x3, x4;
}t;

void tekst(int y, bool state);




#endif /* INC_ANIMACJA2_H_ */
