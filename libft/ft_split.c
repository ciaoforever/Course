/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:28:58 by lvignoli          #+#    #+#             */
/*   Updated: 2023/01/23 17:10:54 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	count_words(char const	*s, char c)
{
	int	i;
	int	cword;
	int	flag;

	cword = 0;
	flag = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && flag == 0)
		{
			cword++;
			i++;
			flag = 1;
		}
		else if (s[i] == c && flag == 1)
			flag = 0;
		else
			i++;
	}
	return (cword);
}

char	*wordfill(char const *s, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < finish)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = 0;
	return (word);
}

void	ft_initialize(size_t *i, size_t *j, size_t *tmp)
{
	*i = 0;
	*j = 0;
	*tmp = 0;
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	tmp;
	char	**split;

	if (!s)
		return (NULL);
	ft_initialize(&i, &j, &tmp);
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] == c || i == ft_strlen(s))
		{
			if (tmp != i)
				split[j++] = wordfill(s, tmp, i);
			tmp = i + 1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
