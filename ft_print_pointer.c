/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:52:49 by ale-tron          #+#    #+#             */
/*   Updated: 2023/10/26 11:52:54 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int ft_long_hex(unsigned long num)
{
    int     count;
    char    hex;

    count = 1;
    if (num >= 16)
        count += ft_long_hex(num / 16);
    if (num % 16 > 9)
        hex = num % 16 - 10 + 'a';
    if (num % 16 < 10)
        hex = num % 16 + '0';
    write(1, &hex, 1);
    return (count);
}

int	ft_print_pointer(unsigned long address)
{
	int	count;

	if (!address)
	{
		write(1, "0x0", 3);
		return (3);
	}
	write(1, "0x", 2);
	count = 2;
	count += ft_long_hex(address);
	return (count);
}
