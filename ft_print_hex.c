/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:52:00 by ale-tron          #+#    #+#             */
/*   Updated: 2023/11/01 20:27:57 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_hex(unsigned int num, const char format)
{
	int		count;
	char	hex;

	count = 1;
	if (num >= 16)
		count += ft_print_hex(num / 16, format);
	if (num % 16 > 9)
		hex = num % 16 - 10 + format - 23;
	if (num % 16 < 10)
		hex = num % 16 + '0';
	if (write(1, &hex, 1) == -1)
		return (-1);
	return (count);
}
