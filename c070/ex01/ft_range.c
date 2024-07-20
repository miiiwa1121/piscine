/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 11:46:25 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/28 13:31:36 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*num;

	if (min >= max)
		return (NULL);
	i = 0;
	num = (int *)malloc(sizeof(int) * (max - min));
	if (num == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		num[i] = min;
		min++;
		i++;
	}
	return (num);
}

#include <stdio.h>

int	main(void)
{
	int	*result;
	int	x;
	int	y;

	x = 0;
	y = 10;
	result = ft_range(x, y);
	if (result == NULL)
		return (1);
	for (int i = 0; i < y - x; i++)
		printf("%d ", result[i]);
	free(result);
	return (0);
}
