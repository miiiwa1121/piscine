/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:54:19 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/20 21:27:02 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	while (nb > 0)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(-1)); // 12以上でオーバー
// 	printf("%d\n", ft_iterative_factorial(0)); // 12以上でオーバー
// 	printf("%d\n", ft_iterative_factorial(1)); // 12以上でオーバー
// 	printf("%d\n", ft_iterative_factorial(2)); // 12以上でオーバー
// 	printf("%d\n", ft_iterative_factorial(3)); // 12以上でオーバー
// 	printf("%d\n", ft_iterative_factorial(12)); // 12以上でオーバー
// 	printf("%d\n", ft_iterative_factorial(13)); // 13!=6,227,020,800

// 	return (0);
// }
