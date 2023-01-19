/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:11:17 by lvignoli          #+#    #+#             */
/*   Updated: 2023/01/19 12:13:20 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	return ((int)ft_strncmp((const char *)s1, (const char *)s2, n));
}
