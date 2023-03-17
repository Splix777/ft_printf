#include "ft_printf.h"

static void ft_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
        {
                write(1, &str[i], 1);
                i++;
        }

}

int	ft_print_str(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_print("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
