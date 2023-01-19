/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:20:46 by lvignoli          #+#    #+#             */
/*   Updated: 2023/01/19 20:00:47 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	i = 0;
	subs = (char *) malloc(sizeof(*s) * (len + 1));
	if (!subs)
		return (NULL);
	while (start-- > 0 && *s)
		s++;
	while (*s && i < len)
		subs[i++] = *(s++);
	subs[i] = 0;
	return (subs);
}
