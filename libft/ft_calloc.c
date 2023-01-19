/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:01:41 by lvignoli          #+#    #+#             */
/*   Updated: 2023/01/19 12:02:11 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = (void *)malloc(nmemb * size);
	ft_bzero(ptr, nmemb);
	return (ptr);
}
