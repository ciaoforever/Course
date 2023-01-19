/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:40:34 by lvignoli          #+#    #+#             */
/*   Updated: 2023/01/19 12:38:31 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j])
		{
			if (!little[j + 1])
				return ((char *) &big[i]);
			j++;
		}
		i++;
	}
	return (0);
}
