CFLAGS=-std=c99 -Wall -pedantic -g
BIN=project
CC=gcc
RM=rm -f

ALL: scanner.o 
	$(CC) $(CFLAGS) -o $(BIN) scanner.o 

clean:
	$(RM) *.o $(BIN)
