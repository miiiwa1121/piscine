/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 23:16:42 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/21 19:19:22 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	num;
	int	ans;

	ans = 0;
	num = 0;
	while ((*str >= '\011' && *str <= '\015') || *str == '\040')
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			num++;
		str++;
	}
	if (num % 2 == 1)
		num = -1;
	else
		num = 1;
	while (*str >= '0' && *str <= '9')
	{
		ans = ans * 10 + (*str - '0');
		str++;
	}
	return (ans * num);
}
#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("%d\n", argc);
	printf("%d\n", ft_atoi(argv[1]));
	return (0);
}
