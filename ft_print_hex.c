/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:52:00 by ale-tron          #+#    #+#             */
/*   Updated: 2023/10/26 11:52:05 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_hex(unsigned int num)
{
	int		count;
	char	hex;

	count = 1;
	if (num >= 16)
		count += ft_print_hex(num / 16);
	if (num % 16 > 9)
		hex = num % 16 - 10 + 'a';
	if (num % 16 < 10)
		hex = num % 16 + '0';
	write(1, &hex, 1);
	return (count);
}
