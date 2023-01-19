/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:46:40 by lvignoli          #+#    #+#             */
/*   Updated: 2023/01/19 12:25:41 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

char	*ft_strchr(const char *src, int a)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (src[i] == a)
			return ((char *)&src[i]);
		i++;
	}
	if (a == '\0')
		return ((char *)&src[i]);
	return (NULL);
}
