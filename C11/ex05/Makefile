NAME = do-op

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = main.c ma_queue.c ft_putnbr.c ft_atoi.c

OBJS = $(SRCS:.c=.o)

HEADERS = lib.h

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
