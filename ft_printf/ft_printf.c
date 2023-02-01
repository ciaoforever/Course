/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <lvignoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 16:17:14 by lvignoli          #+#    #+#             */
/*   Updated: 2023/02/01 16:54:10 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "libftprintf.h"

int	ft_choose(va_list *lst, char c)
{
	int	written;

	written = 0;
	if (c == '%')
	{	
		write(1, "%", 1);
		written++;
	}
	else if (c == 'c')
		written += ft_puutchar(va_arg(*lst, int));
	else if (c == 's')
		written += ft_puutstr(va_arg(*lst, char *));
	//else if (c == 'p')
	else if (c == 'd' || c == 'i')
		written += ft_puutnbr(va_arg(*lst, int));
	else if (c == 'u')
		written += ft_u_puutnbr(va_arg(*lst, unsigned int));
	/*else if (c == 'x' || c == 'X')
	{
		
	}*/

	else
		written += write(1, "test", 4);
	return (written);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		written;
	va_list	lst;

	va_start(lst, str);
	i = 0;
	written = 0;
	while (str[i])
	{
		if (str[i] != '%')
		{
			written += write(1, &str[i], 1);
			i++;
		}
		else
		{
			i++;
			written += ft_choose(&lst, str[i]);
			i++;
		}
	}
	va_end(lst);
	return (written);
}

int	main()
{
	printf("\t%d\n", ft_printf("0123456789%d%d", 10, 111));
	printf("\t%d\n", ft_printf("0123456789%d%d", 10, 111));
	return (0);
}
