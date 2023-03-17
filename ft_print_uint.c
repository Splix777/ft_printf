#include "ft_printf.h"

int	ft_print_uint(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
		i += ft_print_uint(n / 10);
	i += ft_print_char(n % 10 +'0');
	return (i);
}
