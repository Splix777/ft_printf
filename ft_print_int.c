#include "ft_printf.h"

int	ft_print_int(int n)
{
	int	i;

	i = 0;
	if (n = -2147483648)
	{
		write(1, &"-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		i += ft_print_char('-');
		n *= -1;
	}
	i += ft_print_uint(n);
	return (i);
}
