#include "ft_printf.h"

int	print_string(t_info *tab)
{
	char	*string;
	
	string = va_arg(tab->args, char *);
	tab->tlen += ft_strlen(string);
	ft_putstr_fd(string, 1);
	return (ft_strlen(string));
}