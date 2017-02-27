#Exam Review 2
CC = g++
CCFLAG = -Wall -g
EXEC = exec.out
OUT = output.txt

all: main.o class.o
	$(CC) $(CCFLAG) -o $(OUT)

main.o: main.C
	$(CC) $(CCFLAG) -c main.C

class.o: class.C class.h
	$(CC) $(CCFLAG) -c class.C

clean:
	rm -rf *.o $(EXEC)

out: ./$(EXEC) > $(OUT)
