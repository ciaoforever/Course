/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puutxp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <lvignoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:59:34 by lvignoli          #+#    #+#             */
/*   Updated: 2023/02/02 12:44:26 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_x_puutnbr(char c, unsigned int nb)
{
	int				a;
	char			*base;
	static int		written;

	written = 0;
	a = nb % 16;
	nb = nb / 16;
	if (nb > 0)
		ft_x_puutnbr(c, nb);
	if (c == 'x')
		base = "0123456789abcdef";
	if (c == 'X')
		base = "0123456789ABCDEF";
	written += write(1, &base[a], 1);
	return (written);
}

int	ft_p_puutnbr(char c, unsigned long long nb)
{
	int				a;
	char			*base;
	static int		written;

	written = 0;
	a = nb % 16;
	nb = nb / 16;
	if (c == 'p')
	{
		c = 'x';
		write(1, "0x", 2);
	}
	if (nb > 0)
		ft_p_puutnbr(c, nb);
	base = "0123456789abcdef";
	written += write(1, &base[a], 1);
	return (written);
}
