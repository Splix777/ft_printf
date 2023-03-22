#include "ft_printf.h"

int	ft_print_ptr(unsigned long ptr)
{
	int		i;
	
	i = 0;
	if (ptr == 0)
		return (ft_print_str("(nil)"));
	if (ptr < 16)
		i += ft_print_str("0x");
	if (ptr >= 16)
		i += ft_print_ptr(ptr / 16);
	i += ft_print_hex(ptr % 16, 0);
	return 	(i);
}
