/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:39:13 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/21 17:18:20 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	str_len(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t	dest_len;
	size_t	i;
	size_t	src_len;

	src_len = str_len(src);
	dest_len = 0;
	i = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	if (dest_len < size)
	{
		while (src[i] && dest_len + i < size - 1)
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
	}
	return (dest_len + src_len);
}

int	main(void)
{
	char	dest[10] = "ABCDE";
	char	src[] = "12345";
	size_t	dest_size;
	size_t	result;
	int x;
	x = 7;

	result = ft_strlcat(dest, src, x);
	printf("%zu\n", result);
	printf("%s\n", dest);
	result = strlcat(dest, src, x);
	printf("%zu\n", result);
	printf("%s\n", dest);
	return (0);
}
