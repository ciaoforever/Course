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

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*str;
	int			i;

	/*if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);*/
	buffer = malloc(BUFFER_SIZE + 1);
	buffer[BUFFER_SIZE] = 0;
	read(fd, buffer, BUFFER_SIZE);
	if (ft_strchr(buffer, '\n'))
		buffer = ft_strchr(buffer, '\n');
	return (buffer);
}

int	main()
{
	int		fd;
	char	*line;
	int		i;

	i = 0;
	fd = open("Users/lvignoli/Desktop/teeext.txt", O_RDONLY);
	while (i < 1)
	{
		printf("%s", get_next_line(fd));
		i++;
	}
	close (fd);
}
