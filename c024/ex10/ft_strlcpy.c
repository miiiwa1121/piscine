/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 03:30:33 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/28 17:06:59 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (src[res])
		res++;
	if (size < 1)
		return (res);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (res);
}
// #include <stdio.h>
// #include <string.h>

// unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

// int	main(void)
// {
// 	char	dest[50];
// 	char	*src;
// 	int		size;

// 	src = " fweh wr wrn wr wr u. uo keteh wrj rjetykeryjwr jr";
// 	size = 10;
// 	printf("%d\n", ft_strlcpy(dest, src, size));
// 	printf(".%s.\n\n", dest);
// 	printf("%lu\n", strlcpy(dest, src, size));
// 	printf(".%s.\n\n", dest);
// }
