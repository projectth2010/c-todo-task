CC = gcc
CFLAGS = -Wall -Iinclude
LDFLAGS = -lcivetweb -lpthread

SRC = src/main.c src/todo.c src/handlers.c
OBJ = $(SRC:.c=.o)

all: restful_todo

restful_todo: $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

clean:
	rm -f $(OBJ) restful_todo
