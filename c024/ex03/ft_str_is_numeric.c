/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 03:30:42 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/13 14:33:47 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str1[] = "123456789";
// 	char str2[] = "dddd2d2d2d2";
// 	char str3[] = "";
// 	int result = ft_str_is_numeric(str1);
// 	int result2 = ft_str_is_numeric(str2);
// 	int result3 = ft_str_is_numeric(str3);
// 	printf("Result1: %d\n", result);
// 	printf("Result2: %d\n", result2);
// 	printf("Result3: %d\n", result3);
//	return(0);
// }