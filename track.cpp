#include <iostream>
#include "track.h"

Track::Track(){
	for (int i = 0; i < NUM_HORSES; i++){
		horses[i].init(i, TRACK_LENGTH);
    }
}

void Track::start(){
	bool keepGoing = true;

	while (keepGoing){
		for (int i = 0; i < NUM_HORSES; i++){
			horses[i].advance();
			horses[i].printLane();

			if (horses[i].isWinner()){
				keepGoing = false;
				std::cout << "Horse " << i << " wins!" << std::endl;		
			}	
		}
		std::cout << "Press Enter for the next flip..." << std::endl;
		std::cin.get();
	}
}
