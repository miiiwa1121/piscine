/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 08:27:09 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/21 16:55:59 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

#include <stdio.h>

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size;
	int	i;

	i = 0;
	size = sizeof(tab) / sizeof(tab[0]);
	printf("元の配列: ");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(tab, size);
	printf("逆順に並び替えた配列: ");
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
