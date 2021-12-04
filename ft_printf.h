#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "libft/libft.h"
/*#include "libft/ft_putnbr_fd.c"
#include "libft/ft_putstr_fd.c"
#include "libft/ft_putchar_fd.c"
#include "libft/ft_strlen.c"
#include "print_char.c"
#include "print_int.c"*/
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_info
{
	va_list args;
	int		tlen;
} t_info;

int	ft_printf(const char *string, ...);
int	check_flag(t_info *tab, char *, int);
int	print_int(t_info *tab);
int	print_char(t_info *tab);
int	print_string(t_info *tab);
int	int_len(int num);
/*static t_info	*initialize(t_info *tab);*/

#endif