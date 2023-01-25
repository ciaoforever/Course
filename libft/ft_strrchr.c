/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:48:41 by lvignoli          #+#    #+#             */
/*   Updated: 2023/01/20 14:37:52 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char	*s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *) &s[i]);
	while (i-- > 0)
	{
		if (s[i] == (unsigned char) c)
			return ((char *) &s[i]);
	}
	return (NULL);
}
