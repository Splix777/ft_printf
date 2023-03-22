#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	printf("%s\n", "Testing 0");
	printf("%c\n", '0');
	printf("%s\n", 0);
	printf("%p\n", 0);
	printf("%d\n", 0);
	printf("%u\n", 0);
	printf("%x\n", 0);
	printf("%X\n", 0);
	printf("%%\n\n", 0);

	ft_printf("%c\n", '0');
	ft_printf("%s\n", 0);
	ft_printf("%p\n", 0);
	ft_printf("%d\n", 0);
	ft_printf("%u\n", 0);
	ft_printf("%x\n", 0);
	ft_printf("%X\n", 0);
	ft_printf("%%\n\n", 0);


	printf("%s\n", "Testing -2147483648");
	printf("%c\n", '-2147483648');
	printf("%s\n", "-2147483648");
	printf("%p\n", -2147483648);
	printf("%d\n", -2147483648);
	printf("%u\n", -2147483648);
	printf("%x\n", -2147483648);
	printf("%X\n", -2147483648);
	printf("%%\n\n", -2147483648);

	ft_printf("%c\n", '-2147483648');
	ft_printf("%s\n", "-2147483648");
	ft_printf("%p\n", -2147483648);
	ft_printf("%d\n", -2147483648);
	ft_printf("%u\n", -2147483648);
	ft_printf("%x\n", -2147483648);
	ft_printf("%X\n", -2147483648);
	ft_printf("%%\n\n", -2147483648);

	printf("%s\n", "Testing 1000");
	printf("%c\n", "1000");
	printf("%s\n", "100");
	printf("%p\n", "100");
	printf("%d\n", "100");
	printf("%u\n", "100");
	printf("%x\n", "100");
	printf("%X\n", "100");
	printf("%%\n\n", "100");

	ft_printf("%c\n", "1000");
	ft_printf("%s\n", "100");
	ft_printf("%p\n", "100");
	ft_printf("%d\n", "100");
	ft_printf("%u\n", "100");
	ft_printf("%x\n", "100");
	ft_printf("%X\n", "100");
	ft_printf("%%\n\n", "100");

	printf("%s\n", "Testing pointers");
	char *test = "Hello World!";
	printf("%c\n", test);
	printf("%s\n", test);
	printf("%p\n", test);
	printf("%d\n", test);
	printf("%u\n", test);
	printf("%x\n", test);
	printf("%X\n", test);
	printf("%%\n\n", test);

	ft_printf("%c\n", test);
	ft_printf("%s\n", test);
	ft_printf("%p\n", test);
	ft_printf("%d\n", test);
	ft_printf("%u\n", test);
	ft_printf("%x\n", test);
	ft_printf("%X\n", test);
	ft_printf("%%\n\n", test);


	return (0);
}
