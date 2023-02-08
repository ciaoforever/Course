/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvignoli <lvignoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:59:13 by lvignoli          #+#    #+#             */
/*   Updated: 2023/02/06 18:27:54 by lvignoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	find_n(char	*buffer)
{
	int	i;

	i = 0;
	while(buffer[i])
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
	static char	buffer[BUFFER_SIZE];
	char		*line;
	int			i;

	/*if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);*/
	if (!buffer)
		read(fd, buffer, BUFFER_SIZE);
	i = find_n(buffer);
	if (i != -1)
		line = ft_substr((char *)buffer, 0, i);
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
		printf("%s", get_next_line(fd));
		i++;
	}
	close (fd);
}
