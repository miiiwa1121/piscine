/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 08:27:09 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/21 16:31:46 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <stdio.h>

int	main(void)
{
	int n = 0;
	int *ptr1 = &n;
	int **ptr2 = &ptr1;
	int ***ptr3 = &ptr2;
	int ****ptr4 = &ptr3;
	int *****ptr5 = &ptr4;
	int ******ptr6 = &ptr5;
	int *******ptr7 = &ptr6;
	int ********ptr8 = &ptr7;
	int *********ptr9 = &ptr8;

	ft_ultimate_ft(ptr9);

	printf("The value of n after calling ft_ultimate_ft: %d\n", n);

	return (0);
}
