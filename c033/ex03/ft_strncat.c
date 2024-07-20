/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:39:13 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/21 17:11:05 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while ((src[j]) && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char dest[30] = "ABC";
// 	char src[] = "123";
// 	size_t n;

// 	n = 2;

// 	ft_strncat(dest, src, n);
// 	printf("ft_strcat %s\n", dest);
// 	// strncat(dest, src, n); /* 文字型配列に文字型配列を連結 */
// 	// printf("strcat    %s\n", dest);

// 	return (0);
// }