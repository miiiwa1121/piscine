/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 05:05:48 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/20 21:27:02 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0 || nb == 0)
	{
		return (0);
	}
	while (power > 0)
	{
		i = i * nb;
		power--;
	}
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_power(0, 0));
// 	printf("%d\n", ft_iterative_power(0, 1));
// 	printf("%d\n", ft_iterative_power(1, 0));
// 	printf("%d\n", ft_iterative_power(2, 0));
// 	printf("%d\n", ft_iterative_power(1, 10));
// 	printf("%d\n", ft_iterative_power(2, 5));
// 	printf("%d\n", ft_iterative_power(2, 10));
// 	printf("%d\n", ft_iterative_power(-2, 5));
// 	printf("%d\n", ft_iterative_power(2, -5));
// 	return (0);
// }
