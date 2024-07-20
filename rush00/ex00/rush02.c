/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnishimu <jnishimu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:27:46 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/09 18:20:52 by jnishimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	xe;
	int	ye;

	if (x < 1 || y < 1)
		return ;
	xe = 1;
	while (xe <= x)
	{
		ye = 1;
		while (ye <= y)
		{
			if ((xe > 1 && xe < x) && (ye > 1 && ye < y))
				ft_putchar(' ');
			else if ((xe == 1) && (ye == 1 || ye == y))
				ft_putchar('A');
			else if ((xe == x) && (ye == 1 || ye == y))
				ft_putchar('C');
			else
				ft_putchar('B');
			ye++;
		}
		ft_putchar('\n');
		xe++;
	}
}
