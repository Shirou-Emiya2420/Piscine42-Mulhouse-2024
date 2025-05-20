NAME		=	rush-02

INCLUDES	=	./

SRCS_DIR	=	./

SRCS		=	main.c \
				ft_atoi.c \
				ft_getnb.c \
				ft_print.c \
				ft_putstr.c \
				ft_strdup.c

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