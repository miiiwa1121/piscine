/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 08:27:09 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/12 10:08:55 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	min;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		min = i;
		while (j < size)
		{
			if (tab[j] < tab[min])
				min = j;
			j++;
		}
		if (min != i)
		{
			temp = tab[i];
			tab[i] = tab[min];
			tab[min] = temp;
		}
		i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	tab[] = {5, 2, 4, 1, 3};
// 	int	size;
// 	int	i;

// 	i = 0;
// 	size = sizeof(tab) / sizeof(tab[0]);
// 	printf("元の配列: ");
// 	while (i < size)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	ft_sort_int_tab(tab, size);
// 	printf("昇順に並び替えた配列: ");
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
