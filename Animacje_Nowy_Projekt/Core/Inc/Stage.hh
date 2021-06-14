#ifndef INC_STAGE_HH_
#define INC_STAGE_HH_

//#include <vector>
#include "stm32f429i_discovery_lcd.h"

class Stage{
public:
	bool p[240][320];
	
	void display();
private:
	void clear();
	void commsclear(); 	//czyszczenie obrazka (UART)
	void comms(); 		//przekazywanie informacji przez UARTA
};

static Stage *stage;

#endif
