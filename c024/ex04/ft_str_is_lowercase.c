/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 03:30:38 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/13 14:33:59 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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

// 	str = "aaaaa";
// 	printf("%s - %d\n", str, ft_str_is_lowercase(str));
// 	str = "aAaAaA";
// 	printf("%s - %d\n", str, ft_str_is_lowercase(str));
// 	str = "12345";
// 	printf("%s - %d\n", str, ft_str_is_lowercase(str));
// 	str = "";
// 	printf("%s - %d\n", str, ft_str_is_lowercase(str));

// }