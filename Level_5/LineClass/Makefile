CC=clang++
CFLAGS=-Wall -pedantic -g -std=c++11
POINT=../PointClass
SHAPE=../ShapeClass

Linemain: Line.o Linemain.o $(POINT)/Point.o
	$(CC) $(CFLAGS) Line.o Linemain.o $(POINT)/Point.o $(SHAPE)/Shape.o -o Linemain.out

Line.o: Line.cpp
	$(CC) -c $(CFLAGS) Line.cpp -o Line.o

Linemain.o: Linemain.cpp
	$(CC) -c $(CFLAGS) Linemain.cpp -o Linemain.o

$(POINT)/Point.o: $(POINT)/Point.cpp
	$(CC) -c $(CFLAGS) $(POINT)/Point.cpp -o $(POINT)/Point.o

$(SHAPE)/Shape.o: $(SHAPE)/Shape.cpp
	$(CC) -c $(CFLAGS) $(POINT)/Point.cpp -o $(SHAPE)/Shape.o

clean:
	rm -rf *.out *.o

