/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:51:18 by tasai             #+#    #+#             */
/*   Updated: 2024/03/28 20:43:11 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_get_number(int x, int y, int *i)
{
	if (x >= 10)
	{
		i[0] = x / 10;
		i[1] = x - 10 * i[0];
	}
	else
	{
		i[0] = 0;
		i[1] = x;
	}
	if (y >= 10)
	{
		i[2] = y / 10;
		i[3] = y - 10 * i[2];
	}
	else
	{
		i[2] = 0;
		i[3] = y;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

void	ft_putchar_all(int x, int y)
{
	int	i[4];

	ft_get_number(x, y, i);
	ft_putnbr(i[0]);
	ft_putnbr(i[1]);
	ft_putchar(' ');
	ft_putnbr(i[2]);
	ft_putnbr(i[3]);
	if (x != 98 || y != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar_all(i, j);
			j++;
		}
		i++;
	}
}

// int	main(void)

// {
// 	ft_print_comb2();
// }