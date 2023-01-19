/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:48:41 by lvignoli          #+#    #+#             */
/*   Updated: 2023/01/19 19:17:55 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

char	*ft_strrchr(const char	*s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *) &s[i]);
	while (i-- >= 0)
	{
		if (s[i] == c)
			return ((char *) &s[i]);
	}
	return (NULL);
}
