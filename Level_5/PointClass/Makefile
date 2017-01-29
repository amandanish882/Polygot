CC=clang++
CFLAGS=-Wall -pedantic -g -std=c++11 -c

Heap: PointHeap.o Point.o
	$(CC) PointHeap.o Point.o -o Heap.out

PointMain: PointMain.o Point.o ../ShapeClass/Shape.o
	$(CC) PointMain.o Point.o ../ShapeClass/Shape.o -o PointMain.out

PointInheritance: PointInheritance.o Point.o ../ShapeClass/Shape.o
	$(CC) PointInheritance.o Point.o ../ShapeClass/Shape.o -o PointInheritance.out

PointInheritance.o: PointInheritance.cpp
	$(CC) $(CFLAGS) PointInheritance.cpp -o PointInheritance.o

Point.o: Point.cpp
	$(CC) $(CFLAGS) Point.cpp -o Point.o

PointHeap.o: PointHeap.cpp
	$(CC) $(CFLAGS) PointHeap.cpp -o PointHeap.o

PointMain.o: Pointmain.cpp
	$(CC) $(CFLAGS) Pointmain.cpp -o PointMain.o

../ShapeClass/Shape.o: ../ShapeClass/Shape.cpp
	$(CC) $(CFLAGS) ../ShapeClass/Shape.cpp -o ../ShapeClass/Shape.o


	
clean:	
	rm -rf *.o *.out