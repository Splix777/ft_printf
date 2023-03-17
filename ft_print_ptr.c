#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	int				count;
	unsigned long	str;
	char 			*hex;

	hex = "0123456789abcdef";
	count = 0;
	str = (unsigned long)ptr;
	if (ptr == NULL)
		return (ft_print_str("(null)"));
	count += ft_print_str("0x");
	if (str == 0)
		return (ft_print_char('0'));
	if (str >= 16)
		count += ft_print_ptr(str / 16);
	count += ft_print_char(hex[str % 16]);
	return (count);
}
