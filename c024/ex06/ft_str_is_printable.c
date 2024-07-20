/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:34:56 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/13 14:35:03 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 31) && (str[i] < 127))
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
// 	printf("%s - %d\n", str, ft_str_is_printable(str));
// 	str = "aaaaa";
// 	printf("%s - %d\n", str, ft_str_is_printable(str));
// 	str = "12345";
// 	printf("%s - %d\n", str, ft_str_is_printable(str));
// 	str = " 	";
// 	printf("%s - %d\n", str, ft_str_is_printable(str));
// 	str = "";
// 	printf("%s - %d\n", str, ft_str_is_printable(str));

// }
