#include "ft_printf.h"

int	ft_print_hex(unsigned int n, int upper)
{
	int	i;

	i = 0;
	if (n >= 16)
		i += ft_print_hex(n / 16, upper);
	if (n % 16 < 10)
		i += ft_print_char(n % 16 + '0');
	else if (upper)
		i += ft_print_char(n % 16 + 'A' - 10);
	else
		i += ft_print_char(n % 16 + 'a' - 10);
	return (i);
}
