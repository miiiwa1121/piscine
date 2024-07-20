/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:08:24 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/17 22:44:35 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	checkup(int a[][], int b[])
{
	int	x;
	int	y;
	int	count;
	int	Max;

	x = 0;
	Max = a[0][0];
	while (x != '\0')
	{
		y = 0;
		while (y != '\0')
		{
			if (Max < a[x][y + 1])
				Max = a[x][y + 1];
			count++;
			y++;
		}
		if (b[x] == count)
			x++;
		else
			return (0);
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	int	a[4][4];
	int	b[16];
	int	array44[4][4];

	array44 = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
	printf("%s", array44[][]);
	checkup(a[][], b[]);
}
