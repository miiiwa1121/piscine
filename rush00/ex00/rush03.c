/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiwakami <yiwakami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:27:46 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/09 16:34:34 by yiwakami         ###   ########.fr       */
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
			else if ((xe == 1) && (ye == 1 || ye == y))
				ft_putchar('A');
			else if ((xe == x) && (ye == 1 || ye == y))
				ft_putchar('C');
			else
				ft_putchar('B');
			xe++;
		}
		ft_putchar('\n');
		ye++;
	}
}
