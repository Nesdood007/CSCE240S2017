#Makefile for Project2
CC = g++
CCFLAGS = -g -Wall -w

exec: main.o xArray.o
	$(CC) $(CCFLAG) -o test main.o xArray.o
main.o: main.C
	$(CC) $(CCFLAG) -c main.C
xArray.o: xArray.C xArray.h
	$(CC) $(CCFLAG) -c xArray.C

clean:
	rm -rf *.o test
