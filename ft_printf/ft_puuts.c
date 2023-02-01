/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puuts.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <lvignoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:56:33 by lvignoli          #+#    #+#             */
/*   Updated: 2023/02/01 19:04:44 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_puutnbr(int n, int *written)
{
	int	a;

	if (n == -2147483648)
		*written += write(1, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			n = n * (-1);
			*written += write(1, "-", 1);
		}
		a = n % 10;
		n = n / 10;
		if (n > 0)
			ft_puutnbr(n, written);
		a += 48;
		*written += write(1, &a, 1);
	}
}

int	ft_u_puutnbr(unsigned int n)
{
	unsigned int	a;
	static int		written;

	written = 0;
	a = n % 10;
	n = n / 10;
	if (n > 0)
		ft_u_puutnbr(n);
	a += 48;
	written += write(1, &a, 1);
	return (written);
}

int	ft_puutchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_puutstr(char *s)
{
	if (!s)
		return (write(1, "(null)", 6));
	return (write(1, s, ft_strlen(s)));
}
