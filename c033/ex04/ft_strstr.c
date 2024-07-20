/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 10:12:09 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/21 17:13:36 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*str == '\0' && *to_find == '\0')
	{
		return ("");
	}
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char i;

	i ='a';
	char str[] = "1234567890";
	char find[] = "567";

	printf("ft_strstr:%s,%c\n", ft_strstr(str, find),i);
	printf("strstr:%s,%c\n", strstr(str, find),i);
	return (0);
}