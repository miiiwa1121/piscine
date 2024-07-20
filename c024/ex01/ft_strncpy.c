/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 03:30:33 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/28 21:34:09 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
// #include <string.h>

// int	main(void)
// {
// 	char *src;
// 	char *ans_1;
// 	char *ans_2;
// 	char dest[13];

// 	src = "mi a";
// 	ans_1 = ft_strncpy(dest, src, 4);
// 	ans_2 = strncpy(dest, src ,4);
//     printf("元の文字：%s\n",src);
// 	printf("ft_strcpy:%s\n", ans_1);
// 	printf("strcpy:%s\n", ans_2);
// 	return (0);
// }
