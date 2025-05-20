NAME		=	rush-02

INCLUDES	=	includes

SRCS_DIR	=	srcs

SRCS		=	main.c \
				other.c \
				other.c \
				last.c

SRCS		:=	$(addprefix $(SRCS_DIR)/, $(SRCS))

OBJS		=	$(SRCS:.c=.o)

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror

# rule to make the object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

# compile and make the executable
$(NAME):
	$(CC) $(CFLAGS) $(OBJS) -I $(INCLUDES) -o $(NAME)

# clean object files
clean:
	rm -f $(OBJS)

# clean object files and executable
fclean: clean
	rm -f $(NAME)

# tells the Makefile that these targets are commands and not files
.PHONY: all clean fclean