CC=clang++
CFLAGS=-Wall -pedantic -g -std=c++11
POINT=../PointClass
LINE=../LineClass

Circlemain: Circle.o Circlemain.o Point.o Line.o
	$(CC) $(CFLAGS) Circle.o Circlemain.o Point.o Line.o -o Circlemain.out

Circle.o: Circle.cpp
	$(CC) -c $(CFLAGS) Circle.cpp

Circlemain.o: Circlemain.cpp
	$(CC) -c $(CFLAGS) Circlemain.cpp

Point.o: $(POINT)/Point.cpp
	$(CC) -c $(CFLAGS) $(POINT)/Point.cpp

Line.o: $(LINE)/Line.cpp
	$(CC) -c $(CFLAGS) $(LINE)/Line.cpp

clean:
	rm -rf *.out *.o
