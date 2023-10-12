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



	return (0);
}
