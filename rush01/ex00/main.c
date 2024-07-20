/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 02:08:08 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/17 22:25:51 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	nn(int a[], int jou)
{
	int	i;
	int	j;

	i = 0;
	while (i < jou)
	{
		j = 0;
		while (j < jou)
		{
			printf("a");
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}

int	jou(int a)
{
	int	i;
	int	b;

	i = 0;
	b = i * i;
	while (b != a)
	{
		b = 0;
		i++;
		b = i * i;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	jou;

	printf("%d\n", jou(argc - 1));
	jou = jou(argc - 1);
	printf("文字列の個数 %d\n", argc);
	nn(argv, jou);
	while (i < argc)
	{
		printf("%d 番目の文字列 %s\n", i, argv[i]);
		i++;
	}
	return (0);
}
