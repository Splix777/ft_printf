#include "ft_printf.h"

static int	ft_case(const char *input, void *arg)
{
	int	i;

	i = 0;
	if (*input == 'c')
		i += ft_print_char((int)arg);
	else if (*input == 's')
		i += ft_print_str((char *)arg);
	else if (*input == 'p')
		i += ft_print_ptr((void *)arg);
	else if (*input == 'd' || *input == 'i')
		i += ft_print_int((int)arg);
	else if (*input == 'u')
		i+= ft_print_uint((unsigned int)arg);
	else if (*input == 'x')
		i += ft_print_hex((unsigned int)arg, 0);
	else if (*input == 'X')
		i += ft_print_hex((unsigned int)arg, 1);
	else if (*input == '%')
		i += ft_print_char('%');
	return (i);
}

int	ft_printf(const char *input, ...)
{
	va_list	ap;
	int	i;

	i = 0;
	va_start(ap, input);
	while (*input)
	{
		if (*input == '%' && *(input + 1) != '\0')
		{
			i += ft_case(input, va_arg(ap, void *));
			input++;
		}
		else
			i += ft_print_char(*input);
		input++;
	}
	va_end(ap);
	return (i);
}

int main(void)
{
	ft_printf("%s", "Hello World!");
	return (0);	
}