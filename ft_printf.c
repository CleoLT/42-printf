/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:54:06 by ale-tron          #+#    #+#             */
/*   Updated: 2023/11/01 19:34:09 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_select_format(va_list args, const char format)
{
	int	count;

	count = 0;
	if (format == '%')
		count += ft_print_char('%');
	if (format == 'c')
		count += ft_print_char(va_arg(args, int));
	if (format == 's')
		count += ft_print_string(va_arg(args, char *));
	if (format == 'x' || format == 'X')
		count += ft_print_hex(va_arg(args, unsigned int), format);
	if (format == 'p')
		count += ft_print_pointer(va_arg(args, unsigned long));
	if (format == 'd' || format == 'i')
		count += ft_print_int(va_arg(args, int));
	if (format == 'u')
		count += ft_print_unsigned(va_arg(args, unsigned int));
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;
	int		error;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i ++;
			if (ft_strchr("cspdiuxX%", str[i]))
			{
				error = ft_select_format(args, str[i]);
				if (error == -1)
					return (-1);
				count += error;
			}	
		}
		else if (ft_print_char(str[i]) == -1)
			return (-1);
		else
			count ++;
	i++;
	}
	va_end(args);
	return (count);
}
