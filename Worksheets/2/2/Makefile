CC = g++
CCFLAGS = -g -Wall
EXEC = exec
exec: main.o prob.o
	$(CC) $(CCFLAG) -o $(EXEC) main.o prob.o
main.o: main.C
	$(CC) $(CCFLAG) -c main.C
prob.o: prob.C prob.h
	$(CC) $(CCFLAG) -c prob.C

clear:
	rm -rf *.o
run:
	./$(EXEC)
