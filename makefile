horseRace: main.o horse.o track.o
	g++ -g main.o horse.o track.o -o horseRace

main.o: main.cpp track.h
	g++ -g -c main.cpp

horse.o: horse.h horse.cpp
	g++ -g -c horse.cpp

track.o: track.h horse.h track.cpp
	g++ -g -c track.cpp

clean:
	rm horseRace
	rm *.o

run: horseRace
	./horseRace

debug: horseRace
	gdb horseRace
