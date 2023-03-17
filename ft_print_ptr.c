#include "ft_printf.h"

int	ft_print_ptr(unsigned long ptr)
{
	int	count;
	char	*hex;

	hex = "0123456789abcdef";
	count = 0;
	if (ptr == 0)
		return (ft_print_str("(nil)"));
	if (ptr < 16)
		count += ft_print_str("0x");
	if (ptr >= 16)
		count += ft_print_ptr(ptr / 16);
	count += ft_print_char(hex[ptr % 16]);
	return (count);
}
