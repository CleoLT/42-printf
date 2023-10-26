NAME = libftprintf.a

LIBFTNAME = libft.a

LIBFTDIR = ./libft

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c ft_print_char.c ft_print_string.c ft_print_hex.c ft_print_pointer.c ft_print_int.c ft_print_unsigned.c

OBJS = $(SRCS:.c=.o)



RM = rm -f

all: $(NAME)

makelibft:
		make -C $(LIBFTDIR)
		cp $(LIBFTDIR)/$(LIBFTNAME) .
		mv $(LIBFTNAME) $(NAME)

$(NAME): makelibft $(OBJS)
		ar -r $(NAME) $(OBJS)

clean: 
		$(RM) $(OBJS)
		cd $(LIBFTDIR) && make clean

fclean: clean
		$(RM) $(NAME)
		cd $(LIBFTDIR) && make fclean

re: fclean all
