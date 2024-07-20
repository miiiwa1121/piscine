/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 08:37:10 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/20 22:53:46 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= nb / i)
	{
		if (nb == (i * i))
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	i;

// 	for (i = 0; i <= 81; i++)
// 	{
// 		printf("%d:%d\n", i, ft_sqrt(i));
// 	}
// 	printf("%d\n", ft_sqrt(2147395600));
// 	return (0);
// }
