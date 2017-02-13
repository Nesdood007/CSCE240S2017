#Worksheet 3: Makefiles Galore!
CC = g++
CCFLAGS = -Wall -g
EXEC = exec.out
OUTPUT = output.txt
exec: main.C prob.o
	$(CC) $(CCFLAG) -o $(EXEC) main.o prob.o
main.o: main.C
	$(CC) $(CCFLAG) -c main.C
prob.o: prob.C prob.h
	$(CC) $(CCFLAG) -c prob.C

clear: 
	rm -rf *.o
run:
	./$(EXEC)
out: 
	./$(EXEC) > $(OUT)
	
