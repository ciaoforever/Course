/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <lvignoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:20:46 by lvignoli          #+#    #+#             */
/*   Updated: 2023/01/27 15:29:39 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	if (len > ft_strlen(s))
		len = ft_strlen(s);
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
