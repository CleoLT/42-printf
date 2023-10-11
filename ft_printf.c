#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;
	
	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i ++;
			if (str[i] == '%')
				count += ft_print_char('%');
		}
		else
			count += ft_print_char(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
