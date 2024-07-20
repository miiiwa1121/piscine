/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchigan <ruchigan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 02:36:07 by ruchigan          #+#    #+#             */
/*   Updated: 2024/03/24 17:02:02 by ruchigan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/char_utils.h"
#include <stdlib.h>

unsigned long	ft_strlen(char *str)
{
	unsigned long	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_substring(char *str, int start, int end)
{
	int		i;
	int		counter;
	char	*substring;

	if (start < 0 || end < start || !str)
		return (NULL);
	counter = 0;
	substring = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!substring)
		return (NULL);
	i = start;
	while (i < end)
	{
		substring[counter++] = str[i++];
	}
	substring[counter] = '\0';
	return (substring);
}

int	ft_strlcpy(char *dest, const char *src, int dest_size)
{
	int	i;
	int	src_len;

	if (!dest || !src)
		return (0);
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (dest_size == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < dest_size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

char	*compress_spaces(char *str)
{
	char	*result;
	size_t	i;
	size_t	j;

	if (!str)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (ft_is_space(str[i]))
		{
			result[j++] = ' ';
			while (str[i] && ft_is_space(str[i + 1]))
				i++;
		}
		else
			result[j++] = str[i];
		i++;
	}
	result[j] = '\0';
	return (result);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (1)
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		if (*s1 == '\0')
			return (-1);
		if (*s2 == '\0')
			return (1);
		if (*s1 < *s2)
			return (-1);
		else if (*s2 < *s1)
			return (1);
		s1++;
		s2++;
	}
}
