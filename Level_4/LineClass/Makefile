CC=clang++
CFLAGS=-Wall -pedantic -g -std=c++11
POINT=../PointClass

Linemain: Line.o Linemain.o $(POINT)/Point.o
	$(CC) $(CFLAGS) Line.o Linemain.o $(POINT)/Point.o -o Linemain.out

Line.o: Line.cpp
	$(CC) -c $(CFLAGS) Line.cpp

Linemain.o: Linemain.cpp
	$(CC) -c $(CFLAGS) Linemain.cpp

$(POINT)/Point.o: $(POINT)/Point.cpp
	$(CC) -c $(CFLAGS) $(POINT)/Point.cpp -o $(POINT)/Point.o

clean:
	rm -rf *.out *.o

