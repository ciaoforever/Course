/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:55:39 by lvignoli          #+#    #+#             */
/*   Updated: 2023/01/24 18:17:54 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	firsttrim(char const *s1, char const *set)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	while (set[j])
	{
		if (s1[i] != set[j])
			j++;
		else
		{
			i++;
			j = 0;
		}
	}
	return (i);
}

size_t	endtrim(char const *s1, char const *set)
{
	size_t	j;
	size_t	i;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (set[j])
	{
		if (s1[i] != set[j])
			j++;
		else
		{
			i--;
			j = 0;
		}
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	char			*trs;

	trs = 0;
	start = firsttrim(s1, set);
	end = endtrim(s1, set);
	if (start > end)
		return (trs);
	trs = ft_substr(s1, start, (size_t)(end - start + 1));
	if (!trs)
		return (NULL);
	return (trs);
}
