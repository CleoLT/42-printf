/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:52:49 by ale-tron          #+#    #+#             */
/*   Updated: 2023/11/03 08:09:08 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_long_hex(unsigned long num)
{
	int		count;
	int		hex;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (num >= 16)
		count = ft_long_hex(num / 16);
	if (count == -1)
		return (-1);
	hex = ft_print_char(base[num % 16]);
	return (count + hex);
}

int	ft_print_pointer(unsigned long address)
{
	int	count;

	if (!address)
	{
		if (write(1, "0x0", 3) == -1)
			return (-1);
		return (3);
	}
	if (write(1, "0x", 2) == -1)
		return (-1);
	count = 2;
	count += ft_long_hex(address);
	return (count);
}
