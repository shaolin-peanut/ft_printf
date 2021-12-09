/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbars <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:23:42 by sbars             #+#    #+#             */
/*   Updated: 2021/12/09 13:04:51 by sbars            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_info
{
	va_list	args;
	int		tlen;
}	t_info;

// MAIN
int	ft_printf(const char *string, ...);
// CHECK FLAG AND CALL REQUIRED FUNCTION
int	check_flag(t_info *tab, char *string, int i);
// PRINTING
int	print_int(t_info *tab, char flag);
int	print_char(t_info *tab);
int	print_string(t_info *tab);
int	print_pointer(t_info *tab);
int	print_hex(t_info *tab);
int	print_lower_hex(t_info *tab);
// UTILS
int	int_len(int num);
int	ft_putuint(unsigned int n);
int	uint_len(unsigned int num);
int	rev_print(char *string);

#endif
