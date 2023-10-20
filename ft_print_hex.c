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
