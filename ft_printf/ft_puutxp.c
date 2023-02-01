/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puutxp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <lvignoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:59:34 by lvignoli          #+#    #+#             */
/*   Updated: 2023/02/01 17:35:21 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_x_putnbr(unsigned long long nb)
{
	int				a;
	char			*base;
	static int		written;

	base = "0123456789abcdef";
	a = nb % 16;
	nb = nb / 16;
	if (nb > 0)
	{
		ft_putnbr(nb);
	}
	written += write(1, &base[a], 1);
	return (written);
}

