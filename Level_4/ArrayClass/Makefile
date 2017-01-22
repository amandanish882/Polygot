CC=clang++
CFLAGS=-Wall -pedantic -g -std=c++11 -c
POINT=../PointClass

Arraymain: Arraymain.o Array.o $(POINT)/Point.o
	$(CC) Arraymain.o Array.o $(POINT)/Point.o -o Arraymain.out
	
Arraymain.o: Arraymain.cpp
	$(CC) $(CFLAGS) Arraymain.cpp

Array.o: Array.cpp
	$(CC) $(CFLAGS) Array.cpp

$(POINT)/Point.o: $(POINT)/Point.cpp
	$(CC) $(CFLAGS) $(POINT)/Point.cpp -o $(POINT)/Point.o
	
clean:
	rm -rf *.o *.out