#include "ft_printf.h"

int	ft_print_string(const char *str)
{
	int	count;

	count = ft_strlen(str);
	write(1, str, count);
	return (count);
}
