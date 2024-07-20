INCLUDES_DIR = includes
SRCS_DIR = srcs
SRCS = $(SRCS_DIR)/ft_putchar.c \
       $(SRCS_DIR)/ft_swap.c \
       $(SRCS_DIR)/ft_putstr.c \
       $(SRCS_DIR)/ft_strlen.c \
       $(SRCS_DIR)/ft_strcmp.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Building $(NAME)"
	ar rc $(NAME) $(OBJS)
	@echo "Done."

%.o: %.c
	@echo "Compiling $<"
	@$(CC) $(CFLAGS) -I $(INCLUDES_DIR) -c $< -o $@

clean:
	@echo "Cleaning objects"
	@rm -f $(OBJS)

fclean: clean
	@echo "Cleaning $(NAME)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
