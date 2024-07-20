/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchigan <ruchigan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 09:00:44 by ruchigan          #+#    #+#             */
/*   Updated: 2024/03/24 16:51:40 by ruchigan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int		file_line_size(const char *filename);

ssize_t	read_line(int fd, char *buffer, ssize_t max_length);

ssize_t	read_line(int fd, char *buffer, ssize_t max_length)
{
	ssize_t	total_read;
	ssize_t	bytes_read;
	char	c;

	total_read = 0;
	while (total_read < max_length - 1)
	{
		bytes_read = read(fd, &c, 1);
		if (bytes_read <= 0)
		{
			return (-1);
		}
		if (c == '\n')
		{
			break ;
		}
		buffer[total_read++] = c;
	}
	buffer[total_read] = '\0';
	if (total_read == max_length - 1 && c != '\n')
	{
		return (-2);
	}
	return (total_read);
}

int	file_line_size(const char *filename)
{
	int		fd;
	char	line[BUFFER_SIZE];
	int		count;
	ssize_t	read_result;

	count = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (-1);
	}
	while (1)
	{
		read_result = read_line(fd, line, sizeof(line));
		if (read_result < 0)
			break ;
		if (line[0] == '\0' || (line[0] == '\n' && line[1] == '\0'))
			continue ;
		count++;
	}
	close(fd);
	if (read_result == -2)
		return (-1);
	return (count);
}
