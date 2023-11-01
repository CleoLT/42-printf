/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:39:21 by ale-tron          #+#    #+#             */
/*   Updated: 2023/11/01 20:12:11 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_int(int nb)
{
	int		count;
	char	temp;

	count = 1;
	if (nb == INT_MIN)
	{
		if (write(1, "-2147483648", 11) == -1)
			return (-1);
		return (11);
	}
	if (nb < 0)
	{
		nb = -nb;
		if (write(1, "-", 1) == -1)
			return (-1);
		count += 1;
	}
	if (nb >= 10)
	{
		count += ft_print_int(nb / 10);
	}
	temp = nb % 10 + '0';
	if (write(1, &temp, 1) == -1)
		return (-1);
	return (count);
}
