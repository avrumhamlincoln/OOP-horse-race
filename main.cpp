# include <iostream>
# include "horse.h"

void testHorse();

int main(){
	std::cout << "Hello World!" << std::endl;

	testHorse();
}

void testHorse(){
	Horse h;
	h.init(0, 15);
	bool keepGoing = true;
	while (keepGoing){
		h.advance();
		h.printLane();
		if (h.isWinner()){
			keepGoing = false;
		}
	}
	
}
