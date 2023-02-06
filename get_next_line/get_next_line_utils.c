/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <lvignoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:59:17 by lvignoli          #+#    #+#             */
/*   Updated: 2023/02/06 17:42:39 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*join;

	if (!s1)
		return (NULL);
	i = 0;
	j = 0;
	join = (char *) malloc(sizeof(*join) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!join)
		return (NULL);
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		join[i] = s2[j];
		i++;
		j++;
	}
	join[i] = 0;
	return (join);
}

char	*ft_strchr(const char *src, int a)
{
	int	i;

	i = 0;
	while (src[i])
	{
		if (src[i] == (unsigned char) a)
			return ((char *)&src[i]);
		i++;
	}
	if (a == '\0')
		return ((char *)&src[i]);
	return (NULL);
}
