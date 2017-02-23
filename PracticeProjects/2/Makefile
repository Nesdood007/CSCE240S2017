#Makefile for Array List Practice Project
CC = g++
CCFLAG = -Wall -g
EXEC = exec.out
OUTPUT = output.txt
all: main.o LinkedList.o
	$(CC) $(CCFLAG) -o $(EXEC) main.o LinkedList.o

main.o: main.C
	$(CC) $(CCFLAG) -c main.C

LinkedList.o: LinkedList.C LinkedList.h
	$(CC) $(CCFLAG) -c LinkedList.C
#Helpful Rules for Automating Things
clean:
	rm -rf *.o *.gch $(EXEC)
run:
	./$(EXEC)
out:
	./$(EXEC) > output.txt
