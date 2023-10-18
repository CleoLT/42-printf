#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	printf("%d\n", ft_printf("Holiii"));	
	printf("%d\n", printf("Holiii"));

	printf("%d\n", ft_printf("Holiii%%%%"));
	printf("%d\n", printf("Holiii%%%%"));

    printf("%d\n", ft_printf("Holiii%%"));
    printf("%d\n", printf("Holiii%%"));

    printf("%d\n", ft_printf("Holiii %c mi argumento es t", 't'));
	printf("%d\n", printf("Holiii %c mi argumento es t", 't'));

	printf("%d\n", ft_printf("%s mi argumento es string", "string\0string"));
    printf("%d\n", printf("%s mi argumento es string", "string\0string"));


	return (0);
}
