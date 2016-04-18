Lab07: main.o
	g++ -g -Wall -std=c++11 main.o -o Lab07

main.o: main.cpp LinkedList.h Node.h
	g++ -g -Wall -std=c++11 -c main.cpp

clean:
	rm *.o
