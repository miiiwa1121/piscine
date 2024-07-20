/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 05:47:07 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/20 21:27:02 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0 || nb == 0)
	{
		return (0);
	}
	if (power > 0)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
	}
	return (nb);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_recursive_power(0, 0));
// 	printf("%d\n", ft_recursive_power(0, 1));
// 	printf("%d\n", ft_recursive_power(1, 0));
// 	printf("%d\n", ft_recursive_power(2, 0));
// 	printf("%d\n", ft_recursive_power(1, 10));
// 	printf("%d\n", ft_recursive_power(2, 5));
// 	printf("%d\n", ft_recursive_power(2, 10));
// 	printf("%d\n", ft_recursive_power(-2, 5));
// 	printf("%d\n", ft_recursive_power(2, -5));
// 	return (0);
// }
