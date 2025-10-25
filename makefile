CC = gcc
CFLAG = -wall -g
OBJS = main.o reverse.o traverse.o

main: $(OBJS)
	$(CC) $(CFLAGS) -o main $(OBJS)
main.o: main.c functions.h
	$(CC) $(CFLAGS) -c main.c
reverse.o: reverse.c functions.h
	$(CC) $(CFLAGS) -c reverse.c

traverse.o: traverse.c functions.h
	$(CC) $(CFLAGS) -c traverse.c
