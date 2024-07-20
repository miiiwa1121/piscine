/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:54:19 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/20 21:27:02 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	else if (nb > 0)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (nb);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_recursive_factorial(-1)); // 12以上でオーバー
// 	printf("%d\n", ft_recursive_factorial(0));  // 12以上でオーバー
// 	printf("%d\n", ft_recursive_factorial(1));  // 12以上でオーバー
// 	printf("%d\n", ft_recursive_factorial(2));  // 12以上でオーバー
// 	printf("%d\n", ft_recursive_factorial(3));  // 12以上でオーバー
// 	printf("%d\n", ft_recursive_factorial(12)); // 12以上でオーバー
// 	printf("%d\n", ft_recursive_factorial(13)); // 13!=6,227,020,800
// 	return (0);
// }
