/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 08:27:09 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/12 10:08:55 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int a;
// 	int b;
// 	int div;
// 	int mod;

// 	a = 11;
// 	b = 3;
// 	printf("a = %d : b = %d\n", a, b);
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("div = %d : mod = %d\n", div, mod);
// 	return (0);
// }