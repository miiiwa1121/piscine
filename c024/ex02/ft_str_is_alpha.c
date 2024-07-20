/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 03:30:38 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/13 14:30:09 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
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

// 	str = "Hello";
// 	printf("%s - %d\n", str, ft_str_is_alpha(str));
// 	str = "H1llO W0RLD";
// 	printf("%s - %d\n", str, ft_str_is_alpha(str));
// 	str = "";
// 	printf("%s - %d\n", str, ft_str_is_alpha(str));
// }