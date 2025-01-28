CC = gcc
CFLAGS = -Wall
OBJ = main.o voter.o admin.o utility.o
BIN = voting_system

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

main.o: src/main.c src/voter.h
	$(CC) $(CFLAGS) -c src/main.c

voter.o: src/voter.c src/voter.h
	$(CC) $(CFLAGS) -c src/voter.c

admin.o: src/admin.c src/voter.h
	$(CC) $(CFLAGS) -c src/admin.c

utility.o: src/utility.c src/voter.h
	$(CC) $(CFLAGS) -c src/utility.c

clean:
	rm -f *.o $(BIN)
