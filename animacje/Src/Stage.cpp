/*
 * Stage.c
 *
 *  Created on: May 24, 2021
 *      Author: michal
 */

#include "Stage.hh"



bool Stage::clear(){
	for(int i = 0; i < 240; i++){
		for(int j = 0; j < 320; j++){
			p[i][j] = 0;
		}
	}
}
