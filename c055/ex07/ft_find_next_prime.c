/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 08:51:29 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/20 21:27:02 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	so;

	so = 1;
	i = 2;
	if (nb > 1)
	{
		while (nb / i >= i)
		{
			if (nb % i == 0)
			{
				so = 0;
			}
			i++;
		}
		if (so == 1)
		{
			return (nb);
		}
	}
	return (ft_find_next_prime(nb + 1));
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	i;

// 	for (i = -7; i <= 100; i++)
// 	{
// 		printf("%d:%d\n", i, ft_find_next_prime(i));
// 	}
// 	printf("%d\n",ft_find_next_prime(2147483647));
// 	return (0);
// }