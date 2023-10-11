NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c ft_print_char.c

OBJS = $(SRCS:.c=.o)

INCLUDE = ft_printf.h

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDE)
	ar -r $(NAME) $(OBJS)

clean: 
		$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
