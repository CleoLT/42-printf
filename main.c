#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	printf("%d\n", ft_printf("Holiii"));	
	printf("%d\n", printf("Holiii"));

	printf("%d\n", ft_printf("Holiii%v"));
 //   printf("%d\n", printf("Holiii%c"));

    printf("%d\n", ft_printf("Holiii%%"));
    printf("%d\n", printf("Holiii%%"));


	return (0);
}
