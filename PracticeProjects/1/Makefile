#Makefile for Array List Practice Project
CC = g++
CCFLAG = -Wall -g
EXEC = exec.out
OUTPUT = output.txt
all: main.o ArrayList.o
	$(CC) $(CCFLAG) -o $(EXEC) main.o ArrayList.o

main.o: main.C
	$(CC) $(CCFLAG) -c main.C

ArrayList.o: ArrayList.C ArrayList.h
	$(CC) $(CCFLAG) -c ArrayList.C ArrayList.h
#Helpful Rules for Automating Things
clean:
	rm -rf *.o $(EXEC)
run:
	./$(EXEC)
out:
	./$(EXEC) > output.txt
