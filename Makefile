NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
LIB_SRCS = ft_printf.c SRCS/ft_putchar.c  SRCS/ft_putnbr.c SRCS/ft_putnbr_base.c  SRCS/ft_putstr.c  SRCS/ft_strlen.c SRCS/ft_putlonglong_base.c SRCS/ft_intlen.c
LIB_OBJS = $(LIB_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(LIB_OBJS)
	ar rcs $(NAME) $(LIB_OBJS)

clean:
	$(RM) $(LIB_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re