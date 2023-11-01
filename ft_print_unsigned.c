
#include "ft_printf.h"

int	ft_print_unsigned(unsigned int nb)
{
	int		count;
	char	temp;

	count = 1;
	if (nb >= 10)
		count += ft_print_unsigned(nb /10);
	temp = nb % 10 + '0';
	write(1, &temp, 1);
	return (count);
}
