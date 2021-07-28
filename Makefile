#This file must be named Makefile
#Comments start with #
FLAGS = -pedantic-errors -std=c++11


printArray.o: printArray.cpp headers.h
	g++ $(FLAGS) -c printArray.cpp

printBoard.o: printBoard.cpp headers.h
	g++ $(FLAGS) -c printBoard.cpp

compInitBoard.o: compInitBoard.cpp headers.h
	g++ $(FLAGS) -c compInitBoard.cpp

playerInitBoard.o: playerInitBoard.cpp printBoard.cpp headers.h
	g++ $(FLAGS) -c playerInitBoard.cpp

playerAttack.o: playerAttack.cpp headers.h
	g++ $(FLAGS) -c playerAttack.cpp

compAttack.o: compAttack.cpp headers.h
	g++ $(FLAGS) -c compAttack.cpp

statusBoard.o: statusBoard.cpp headers.h
	g++ $(FLAGS) -c statusBoard.cpp

saveAndLoadGame.o: saveAndLoadGame.cpp headers.h
	g++ $(FLAGS) -c saveAndLoadGame.cpp

singlePlayer.o: singlePlayer.cpp headers.h
	g++ $(FLAGS) -c singlePlayer.cpp

doublePlayer.o: doublePlayer.cpp headers.h
	g++ $(FLAGS) -c doublePlayer.cpp

main.o: main.cpp headers.h
	g++ $(FLAGS) -c main.cpp

run: printArray.o printBoard.o compInitBoard.o playerInitBoard.o playerAttack.o \
	compAttack.o statusBoard.o saveAndLoadGame.o singlePlayer.o doublePlayer.o main.o
	g++ $(FLAGS) printArray.o printBoard.o compInitBoard.o playerInitBoard.o playerAttack.o\
	 compAttack.o statusBoard.o saveAndLoadGame.o singlePlayer.o doublePlayer.o main.o -o run

clean:
	rm -f *.o *.txt run

.PHONY: clean
