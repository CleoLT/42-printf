#include <stdio.h>
#include <limits.h>
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
    printf("%d\n\n", printf("%s mi argumento es string", "string\0string"));

	void *pt = "holis";
	printf("%d\n", ft_printf("mi puntero es %p  ", pt));
    printf("%d\n", printf("mi puntero es %p  ", pt));
	printf("mi puntero en decimal es %lu\n", (unsigned long)pt);
	printf("conversion al hexadecimal %lx\n", (unsigned long)pt);
	printf("\nhexadecimal\n");
printf("%d\n", ft_printf("%x mi argumento es 186 en decimal  ", 186));
    printf("%d\n", printf("%x mi argumento es 186 en decimal  ", 186));
	printf("%d\n", ft_printf("%x mi argumento es 456123 en decimal  ", 456123));
    printf("%d\n", printf("%x mi argumento es 456123 en decimal  ", 456123));
	 printf("%d\n", ft_printf("%x mi argumento es 0 en decimal  ", 0));
    printf("%d\n", printf("%x mi argumento es 0 en decimal  ", 0));
    printf("%d\n", ft_printf("%x mi argumento es 16 en decimal  ", 16));
    printf("%d\n", printf("%x mi argumento es 16 en decimal  ", 16));
	printf("%d\n", ft_printf("%x mi argumento es UINT_MAX en decimal  ", UINT_MAX));	
	printf("%d\n", printf("%x mi argumento es UINT_MAX en decimal  ", UINT_MAX));


	return (0);
}
