CC=clang++
CFLAGS=-Wall -pedantic -g -std=c++11
POINT=../PointClass
LINE=../LineClass

Circlemain: Circle.o Circlemain.o $(POINT)/Point.o $(LINE)/Line.o
	$(CC) $(CFLAGS) Circle.o Circlemain.o $(POINT)/Point.o $(LINE)/Line.o -o Circlemain.out

Circle.o: Circle.cpp
	$(CC) -c $(CFLAGS) Circle.cpp

Circlemain.o: Circlemain.cpp
	$(CC) -c $(CFLAGS) Circlemain.cpp

$(POINT)/Point.o: $(POINT)/Point.cpp
	$(CC) -c $(CFLAGS) $(POINT)/Point.cpp -o $(POINT)/Point.o

$(LINE)/Line.o: $(LINE)/Line.cpp
	$(CC) -c $(CFLAGS) $(LINE)/Line.cpp -o $(LINE)/Line.o

clean:
	rm -rf *.out *.o
