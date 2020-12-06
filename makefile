CC=gcc

all: mybank.o main.o 
	$(CC) -Wall -o Bank.out main.o mybank.o 


mybank.o: mybank.c mybank.h
	$(CC) -Wall -c mybank.c  -o mybank.o

main.o: main.c mybank.h
	$(CC) -Wall -c main.c -o main.o



.PHONY:	clean all

clean: 
	rm -f *.o *.out