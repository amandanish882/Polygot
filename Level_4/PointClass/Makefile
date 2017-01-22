CC=clang++
CFLAGS=-Wall -pedantic -g -std=c++11 -c

Heap: PointHeap.o Point.o
	$(CC) PointHeap.o Point.o -o Heap.out

PointMain: PointMain.o Point.o
	$(CC) PointMain.o Point.o -o PointMain.out

Point.o: Point.cpp
	$(CC) $(CFLAGS) Point.cpp

PointHeap.o: PointHeap.cpp
	$(CC) $(CFLAGS) PointHeap.cpp

PointMain.o: Pointmain.cpp
	$(CC) $(CFLAGS) Pointmain.cpp
	
clean:
	rm -rf *.o *.out