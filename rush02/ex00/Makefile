NAME=rush-02
CC=cc
CFLAGS=-Wall -Wextra -Werror
SOURCES=$(wildcard src/*.c)
OBJECTS=$(SOURCES:.c=.o)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

all: $(NAME)

.PHONY: all clean fclean re
