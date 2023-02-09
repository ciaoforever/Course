/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <lvignoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:59:13 by lvignoli          #+#    #+#             */
/*   Updated: 2023/02/09 21:52:39 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	find_n(char	*buffer)
{
	int	i;

	i = 0;
	if (!buffer)
		return (-1);
	while (buffer[i])
	{
		if (buffer[i] != '\n')
			i++;
		else
			return (i);
	}
	return (-1);
}

char	*get_next_line(int fd)
{
	static char	*magnus;
	char		buffer[BUFFER_SIZE + 1];
	char		*line;
	int			i;
	size_t		size;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	i = find_n(magnus);
	while (i < 0)
	{
		size = read(fd, buffer, BUFFER_SIZE);
		if (!size)
		{
			if (magnus)
				i = ft_strlen(magnus);
			break ;
		}
		buffer[size] = 0;
		magnus = ft_strjoin(magnus, buffer);
		i = find_n(magnus);
	}
	if (!magnus)
		return (NULL);
	line = ft_substr(magnus, 0, ++i);
	magnus = ft_memcpy(magnus, magnus + i, ft_strlen(magnus) - i);
	printf("$%s\n", magnus);
	return (line);
}

int	main()
{
	int		fd;
	int		i;

	i = 0;
	fd = open("teeext.txt", O_RDONLY);
	while (i < 1)
	{
		//printf("%s", get_next_line(fd));
		get_next_line(fd);
		i++;
	}
	close (fd);
	return (0);
}
