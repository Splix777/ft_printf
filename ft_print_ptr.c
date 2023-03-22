#include "ft_printf.h"

int	ft_print_ptr(unsigned long ptr)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	if (ptr == 0)
		return (ft_print_str("(nil)"));
	if (ptr < 16)
		i += ft_print_str("0x");
	if (ptr >= 16)
		i += ft_print_ptr(ptr / 16);
	i += ft_print_char(hex[ptr % 16]);
	return 	(i);
}
