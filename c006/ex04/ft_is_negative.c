/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:54:48 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/11 17:21:21 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	if (n == 0)
		c = 'P';
	else if (n > 0)
		c = 'P';
	else
		c = 'N';
	write(1, &c, 1);
}

// int	main(void)
// {
// 	ft_is_negative(0);
// 	return (0);
// }
