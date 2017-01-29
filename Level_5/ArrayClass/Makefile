CC=clang++
CFLAGS=-Wall -pedantic -g -std=c++11 -c
POINT=../PointClass
SHAPE=../ShapeClass
EXCEPTIONS=../

Arraymain: Arraymain.o Array.o $(POINT)/Point.o $(SHAPE)/Shape.o $(EXCEPTIONS)/Exceptions.o
	$(CC) Arraymain.o Array.o $(POINT)/Point.o $(SHAPE)/Shape.o $(EXCEPTIONS)/Exceptions.o -o Arraymain.out
	
Arraymain.o: Arraymain.cpp
	$(CC) $(CFLAGS) Arraymain.cpp

Array.o: Array.cpp
	$(CC) $(CFLAGS) Array.cpp

$(POINT)/Point.o: $(POINT)/Point.cpp
	$(CC) $(CFLAGS) $(POINT)/Point.cpp -o $(POINT)/Point.o

$(SHAPE)/Shape.o: $(SHAPE)/Shape.cpp
	$(CC) $(CFLAGS) $(SHAPE)/Shape.cpp -o $(SHAPE)/Shape.o

$(EXCEPTIONS)/Exceptions.o: $(EXCEPTIONS)/Exceptions.cpp
	$(CC) $(CFLAGS) $(EXCEPTIONS)/Exceptions.cpp -o $(EXCEPTIONS)/Exceptions.o
	
clean:
	rm -rf *.o *.out