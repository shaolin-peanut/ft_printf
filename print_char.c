#include "ft_printf.h"

int	print_char(t_info *tab)
{
	ft_putchar_fd(va_arg(tab->args, int), 1);
	tab->tlen++;
	return (1);
}