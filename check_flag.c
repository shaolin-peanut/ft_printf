#include "ft_printf.h"
#include <stdio.h>

int	check_flag(t_info *tab, char *string, int i)
{
	if (string[i] == 'd' || string[i] == 'i')
		return (print_int(tab));
	else if (string[i] == 'c')
		return (print_char(tab));
	else if (string[i] == 's')
		return (print_string(tab));
	else if (string[i] == 'p')
		printf("%p", va_arg(tab->args, void *));
	else if (string[i] == 'u')
		printf("%u", va_arg(tab->args, unsigned int));
	else if (string[i] == 'x')
		printf("%x", va_arg(tab->args, unsigned int));
	else if (string[i] == '%')
		write(1, "%", 1);
	return (i);
}

