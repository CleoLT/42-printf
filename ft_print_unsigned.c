/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:38:49 by ale-tron          #+#    #+#             */
/*   Updated: 2023/11/01 18:12:36 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_unsigned(unsigned int nb)
{
	int		count;
	char	temp;

	count = 1;
	if (nb >= 10)
		count += ft_print_unsigned(nb / 10);
	temp = nb % 10 + '0';
	if (write(1, &temp, 1) == -1)
		return (-1);
	return (count);
}
