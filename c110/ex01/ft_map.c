/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 11:49:34 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/28 12:50:05 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

int	f(int i)
{
	i += 1;
	return (i);
}

#include <stdio.h>

int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int *result;
	int length = sizeof(tab) / sizeof(tab[0]);
	int i = 0;

	result = ft_map(tab, length, &f);

	while (i < length)
	{
		printf("%d\n", result[i]);
		i++;
	}
	return (0);
}