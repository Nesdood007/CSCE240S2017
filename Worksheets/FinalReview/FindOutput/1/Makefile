#Exam Review 3
CC = g++
CCFLAG = -Wall -g
EXEC = exec.out
OUT = output.txt

all: main.o A.o
	$(CC) $(CCFLAG) -o $(OUT)

main.o: main.C
	$(CC) $(CCFLAG) -c main.C

A.o: A.C A.h
	$(CC) $(CCFLAG) -c A.C

clean:
	rm -rf *.o $(EXEC)

out: ./$(EXEC) > $(OUT)
