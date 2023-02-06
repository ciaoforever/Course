/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <lvignoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:59:08 by lvignoli          #+#    #+#             */
/*   Updated: 2023/02/06 17:44:37 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <stdio.h>

size_t	ft_strlen(char const *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *src, int a);
char	*get_next_line(int fd);

#endif