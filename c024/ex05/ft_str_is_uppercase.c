/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 03:30:38 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/13 14:27:15 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
// 	char *str;

// 	str = "AAAAA";
// 	printf("%s - %d\n", str, ft_str_is_uppercase(str));
// 	str = "aAaAaA";
// 	printf("%s - %d\n", str, ft_str_is_uppercase(str));
// 	str = "aaaaa";
// 	printf("%s - %d\n", str, ft_str_is_uppercase(str));
// 	str = "12345";
// 	printf("%s - %d\n", str, ft_str_is_uppercase(str));
// 	str = "";
// 	printf("%s - %d\n", str, ft_str_is_uppercase(str));

// }