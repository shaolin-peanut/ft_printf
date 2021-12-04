/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbars <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:50:28 by sbars             #+#    #+#             */
/*   Updated: 2021/12/01 18:34:41 by sbars            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "check_flag.c"
#include "ft_printf.h"

static t_info	*initialize(t_info *tab)
{
	tab->tlen = 0;
	return (tab);
}

int	ft_printf(const char *string, ...)
{
	t_info	*info;
	char	*str;
	int		i;

	i = -1;
	str = (char *) string;
	info = (t_info *) malloc(sizeof(t_info) * ft_strlen((char *) string));
	if (!info)
		return (i);
	info = initialize(info);

	va_start(info->args, string);
	while (str[++i])
	{
		if (str[i] != '%')
			info->tlen += write(1, &str[i], 1);
		else
			i += check_flag(info, str, i + 1);
	}
	va_end(info->args);
	free(info);
	return (info->tlen);
}

/*int	main(void)
{
	int i;
	char	c;

	i = 4621;
	c = 'X';
	ft_printf("Hello%dvoila%c j'existe moi", i, c);
	return (0);
}*/