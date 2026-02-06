#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

class Horse{
	private:
		int number;
		int position;
		int trackLength;

	public:
		Horse();
		void init(int number, int trackLength);
		void advance();
		void printLane();
		bool isWinner();
};


#endif
