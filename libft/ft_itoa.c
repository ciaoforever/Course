/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:41:07 by lvignoli          #+#    #+#             */
/*   Updated: 2023/01/23 18:45:49 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	cint(int a)
{
	int	i;

	i = 0;
	if (a < 0)
	{
		i++;
		a = -a;
	}
	while (a > 0)
	{
		a = a / 10;
		i++;
	}
	return (i);
}

int	ft_sign(int a)
{
	if (a >= 0)
		return (0);
	else
		return (1);
}

char	*control(int a)
{
	if (a == 0)
		return (ft_strdup("0"));
	else if (a == -2147483648)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

char	*ft_itoa(int a)
{
	int		i;
	char	*s;
	int		sign;

	if (a == 0 || a == -2147483648)
		return (control(a));
	i = cint(a);
	sign = ft_sign(a);
	if (a < 0)
		a = -a;
	s = malloc((i + 1) * sizeof(char));
	if (!s)
		return (NULL);
	s[i] = '\0';
	while (i-- > 0)
	{	
		if (sign == 1 && i == 0)
		{
			s[0] = '-';
			return (s);
		}
		s[i] = a % 10 + 48;
		a = a / 10;
	}
	return (s);
}
