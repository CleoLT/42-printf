#include "ft_printf.h"

static int	ft_select_format(va_list args, const char format)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_print_char(va_arg(args, int));
	return (count);
}

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
			if (ft_strchr("cspdiuxX", str[i]))
				count += ft_select_format(args, str[i]);
			else if (str[i] == '%')
				count += ft_print_char('%');
		}
		else
			count += ft_print_char(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
