#ifndef TRACK_H_EXISTS
#define TRACK_H_EXISTS

#include "horse.h"

class Track {
	private:
    		const static int NUM_HORSES = 5;
    		const static int TRACK_LENGTH = 15;
    		Horse horses[NUM_HORSES];

	public:
    		Track();
   		 void start();
};



#endif
