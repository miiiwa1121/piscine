/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 08:27:09 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/12 10:08:55 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a % *b;
	*a = *a / *b;
	*b = tmp;
}
// #include <stdio.h>

// int	main(void)
// {
// 	int a;
// 	int b;

// 	a = 11;
// 	b = 3;
// 	printf("%d\n%d\n", a, b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("%d\n%d\n", a, b);
// 	return (0);
// }
