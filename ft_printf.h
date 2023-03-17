#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "./libft/libft.h"

int	ft_print_char(int c);
int	ft_printf(const char *input, ...);
int	ft_print_hex(unsigned int n, int upper);
int	ft_print_int(int n);
int	ft_print_ptr(unsigned long ptr);
int	ft_print_str(char *str);
int	ft_print_uint(unsigned int n);

#endif
