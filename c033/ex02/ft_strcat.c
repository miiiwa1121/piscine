/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:39:13 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/21 17:10:18 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dest[30] = "ABC";
	char src[] = "123";

	ft_strcat(dest, src);
	printf("ft_strcat %s\n", dest);
	// strcat(dest, src); /* 文字型配列に文字型配列を連結 */
	// printf("strcat    %s\n", dest);

	return (0);
}