#ifndef INC_STAGE_H_
#define INC_STAGE_H_

#include <vector>

class Stage{
public:
	bool p[240][320];
	
	void comms(); //przekazywanie informacji przez UARTA
private:
	bool clear();
	void commsclear(); //czyszczenie obrazka (UART)
};

Stage *stage;

#endif
