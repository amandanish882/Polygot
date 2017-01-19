CC=clang++
CFLAGS=-Wall -pedantic -g -std=c++11 -c

Arraymain: Arraymain.o Array.o Point.o
	$(CC) Arraymain.o Array.o Point.o -o Arraymain.out

Array: PointArray.o Array.o Point.o
	$(CC) PointArray.o Array.o Point.o -o Arraymain.out

Heap: PointHeap.o Point.o
	$(CC) PointHeap.o Point.o -o Heap.out

PointMain: PointMain.o Point.o
	$(CC) PointMain.o Point.o -o PointMain.out

Arraymain.o: Arraymain.cpp
	$(CC) $(CFLAGS) Arraymain.cpp

PointArray.o: PointArray.cpp
	$(CC) $(CFLAGS) PointArray.cpp

Array.o: Array.cpp
	$(CC) $(CFLAGS) Array.cpp

Point.o: Point.cpp
	$(CC) $(CFLAGS) Point.cpp

PointHeap.o: PointHeap.cpp
	$(CC) $(CFLAGS) PointHeap.cpp

PointMain.o: Pointmain.cpp
	$(CC) $(CFLAGS) Pointmain.cpp
	
clean:
	rm -rf *.o *.out


#	$(CC) PointArray.cpp Array.cpp Point.cpp -Wall -pedantic -std=c++11 -g -o Arraymain.out

