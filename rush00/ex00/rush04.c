/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:27:46 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/09 19:55:50 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	xe;
	int	ye;

	if (x < 1 || y < 1)
		return ;
	ye = 1;
	while (ye <= x)
	{
		xe = 1;
		while (xe <= y)
		{
			if ((xe > 1 && xe < x) && (ye > 1 && ye < y))
				ft_putchar(' ');
			else if (((xe == 1) && (ye == y)) || ((xe == x) && (ye == 1)))
				ft_putchar('C');
			else if (xe == ye)
				ft_putchar('A');
			else
				ft_putchar('B');
			xe++;
		}
		ft_putchar('\n');
		ye++;
	}
}
