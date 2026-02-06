# include <iostream>
# include "horse.h"
# include <random>

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

Horse::Horse(){
	Horse::number = 0;
	Horse::position = 0;
	Horse::trackLength = 15;
}

void Horse::init(int number, int trackLength){
	Horse::number = number;
	Horse::position = 0;
	Horse::trackLength = trackLength;
}

void Horse::advance(){
	int coin = dist(rd);
	Horse::position += coin;
}

void Horse::printLane(){
	for (int pos = 0; pos < Horse::trackLength; pos++){
		if (pos == Horse::position){
			std::cout << Horse::number;
		}
		else{ 
			std::cout << ".";
		}
	}
	std::cout << std::endl;
}

bool Horse::isWinner(){
	int result = false;
	if (Horse::position = Horse::trackLength){
		result = true;
	}
	return result;
}
