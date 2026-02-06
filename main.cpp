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
	h.printLane();
}
