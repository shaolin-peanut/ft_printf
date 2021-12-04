#include "ft_printf.h"

int	int_len(int num)
{
	int	count;

	count = 1;
	while (num > 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

int	print_int(t_info *tab)
{
	int	num;

	num = va_arg(tab->args, int);
	ft_putnbr_fd(num, 1);
	tab->tlen += int_len(num);
	return (int_len(num));
}