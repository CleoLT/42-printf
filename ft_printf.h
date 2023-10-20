#ifndef FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include "./libft/libft.h"
# define FT_PRINTF_H

int	ft_printf(const char *str, ...);	
int ft_print_char(int c);
int	ft_print_string(const char *src);
int	ft_print_hex(unsigned int num);

#endif
