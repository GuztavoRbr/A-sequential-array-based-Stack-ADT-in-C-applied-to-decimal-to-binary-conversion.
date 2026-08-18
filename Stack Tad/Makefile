CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = programa

OBJS = main.o stack.o item.o

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.c stack.h item.h
	$(CC) $(CFLAGS) -c main.c

stack.o: stack.c stack.h item.h
	$(CC) $(CFLAGS) -c stack.c

item.o: item.c item.h
	$(CC) $(CFLAGS) -c item.c

clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: clean