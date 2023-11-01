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
	printf("%d\n\n", printf("Holiii %c mi argumento es t", 't'));

	ft_printf("string\n");
	printf("%d\n", ft_printf("%s mi argumento es string", "string\0string"));
    printf("%d\n", printf("%s mi argumento es string", "string\0string"));
//	printf("%d\n", printf("%s mi argumento es NULL", NULL));
	printf("%d\n", ft_printf("%s mi argumento es NULL", NULL));

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

	printf("\nHEXADECIMAL\n");
    printf("%d\n", ft_printf("%X mi argumento es 186 en decimal  ", 186));
    printf("%d\n", printf("%X mi argumento es 186 en decimal  ", 186));
    printf("%d\n", ft_printf("%X mi argumento es 456123 en decimal  ", 456123));
    printf("%d\n", printf("%X mi argumento es 456123 en decimal  ", 456123));

	printf("\npointer\n");
	void *pt = "holis";
	printf("%d\n", ft_printf("mi puntero es %p  ", pt));
    printf("%d\n", printf("mi puntero es %p  ", pt));
    printf("%d\n", ft_printf("mi puntero es %p  ", NULL));
    printf("%d\n", printf("mi puntero es %p  ", NULL));

	printf("mi puntero en decimal es %lu\n", (unsigned long int)pt);
	printf("conversion al hexadecimal %lx\n", (unsigned long int)pt);

	printf("\ndecimal\n");
    printf("%d\n", ft_printf("%d mi argumento es 0 en decimal  ", 0));
    printf("%d\n", printf("%d mi argumento es 0 en decimal  ", 0));
    printf("%d\n", ft_printf("%d mi argumento es INT_MAX en decimal  ", INT_MAX));
    printf("%d\n", printf("%d mi argumento es INT_MAX en decimal  ", INT_MAX));	
	printf("%d\n", ft_printf("%d mi argumento es INT_MIN en decimal  ", INT_MIN));
    printf("%d\n", printf("%d mi argumento es INT_MIN en decimal  ", INT_MIN));  
	printf("%d\n", ft_printf("%d mi argumento es -2147483 en decimal  ", -2147483));
    printf("%d\n", printf("%d mi argumento es -2147483 en decimal  ", -2147483));
	printf("%d\n", ft_printf("%d mi argumento es -10 en decimal  ", -10));
    printf("%d\n", printf("%d mi argumento es -10 en decimal  ", -10));

printf("\n%%i\n");
    printf("%d\n", ft_printf("%i mi argumento es 0 en decimal  ", 0));
    printf("%d\n", printf("%i mi argumento es 0 en decimal  ", 0));
    printf("%d\n", ft_printf("%i mi argumento es INT_MAX en decimal  ", INT_MAX));
    printf("%d\n", printf("%i mi argumento es INT_MAX en decimal  ", INT_MAX));  
    printf("%d\n", ft_printf("%i mi argumento es INT_MIN en decimal  ", INT_MIN));
    printf("%d\n", printf("%i mi argumento es INT_MIN en decimal  ", INT_MIN));
    printf("%d\n", ft_printf("%i mi argumento es -2147483 en decimal  ", -2147483));
    printf("%d\n", printf("%i mi argumento es -2147483 en decimal  ", -2147483));

printf("\nunsigned\n");
    printf("%d\n", ft_printf("%u mi argumento es 0 en decimal  ", 0));
    printf("%d\n", printf("%u mi argumento es 0 en decimal  ", 0));
    printf("%d\n", ft_printf("%u mi argumento es UINT_MAX en decimal  ", INT_MAX));
    printf("%d\n", printf("%u mi argumento es UINT_MAX en decimal  ", INT_MAX));
    printf("%d\n", ft_printf("%u mi argumento es 2147483 en decimal  ", 2147483));
    printf("%d\n", printf("%u mi argumento es 2147483 en decimal  ", 2147483));


	printf("\nrandom\n");
//	printf("%d\n", ft_printf("Holiii %f", "df"));	
//	printf("%d\n", printf("Holiii %f", "df"));
ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	return (0);
}
