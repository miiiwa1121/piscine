/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 06:06:42 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/20 21:27:02 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index <= 1)
	{
		return (index);
	}
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_fibonacci(-2));
// 	printf("%d\n", ft_fibonacci(-1));
// 	printf("%d\n", ft_fibonacci(0));
// 	printf("%d\n", ft_fibonacci(1));
// 	printf("%d\n", ft_fibonacci(2));
// 	printf("%d\n", ft_fibonacci(3));
// 	printf("%d\n", ft_fibonacci(4));
// 	printf("%d\n", ft_fibonacci(5));
// 	printf("%d\n", ft_fibonacci(6));
// 	printf("%d\n", ft_fibonacci(7));
// 	printf("%d\n", ft_fibonacci(8));
// 	printf("%d\n", ft_fibonacci(9));

// 	return (0);
// }
