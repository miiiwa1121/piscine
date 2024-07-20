/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 03:10:10 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/28 03:18:26 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char *src;
// 	char *ans_1;
// 	char *ans_2;
// 	char dest[5];

// 	src = "miwa";
// 	ans_1 = ft_strcpy(dest, src);
// 	ans_2 = strcpy(dest, src);
//  	printf("元の文字：%s\n",src);
// 	printf("ft_strcpy:%s\n", ans_1);
// 	printf("strcpy:%s\n", ans_2);
// 	return (0);
// }