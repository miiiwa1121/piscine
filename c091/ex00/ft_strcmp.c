/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 02:26:26 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/28 02:04:23 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char *sgm1;
// 	char *sgm2;
// 	int ans;

// 	sgm1 = "aa";
// 	sgm2 = "aaa";
// 	ans = ft_strcmp(sgm1, sgm2);
// 	printf("\nft_strcmp %d \n", ans);
// 	ans = strcmp(sgm1, sgm2);
// 	printf("strcmp    %d \n", ans);

// 	sgm1 = "1";
// 	sgm2 = "2";
// 	ans = ft_strcmp(sgm1, sgm2);
// 	printf("\nft_strcmp %d \n", ans);
// 	ans = strcmp(sgm1, sgm2);
// 	printf("strcmp    %d \n", ans);

// 	sgm1 = "hoge";
// 	sgm2 = "hoge";
// 	ans = ft_strcmp(sgm1, sgm2);
// 	printf("\nft_strcmp %d \n", ans);
// 	ans = strcmp(sgm1, sgm2);
// 	printf("strcmp    %d \n", ans);

// 	sgm1 = "123456789";
// 	sgm2 = "123456780";
// 	ans = ft_strcmp(sgm1, sgm2);
// 	printf("\nft_strcmp %d \n", ans);
// 	ans = strcmp(sgm1, sgm2);
// 	printf("strcmp    %d \n", ans);

// 	sgm1 = ";;;";
// 	sgm2 = ";;;";
// 	ans = ft_strcmp(sgm1, sgm2);
// 	printf("\nft_strcmp %d \n", ans);
// 	ans = strcmp(sgm1, sgm2);
// 	printf("strcmp    %d \n", ans);

// 	sgm1 = ";;'";
// 	sgm2 = ";;;";
// 	ans = ft_strcmp(sgm1, sgm2);
// 	printf("\nft_strcmp %d \n", ans);
// 	ans = strcmp(sgm1, sgm2);
// 	printf("strcmp    %d \n", ans);

// 	sgm1 = "cab";
// 	sgm2 = "bas";
// 	ans = ft_strcmp(sgm1, sgm2);
// 	printf("\nft_strcmp %d \n", ans);
// 	ans = strcmp(sgm1, sgm2);
// 	printf("strcmp    %d \n", ans);

// 	sgm1 = "\n";
// 	sgm2 = "\n";
// 	ans = ft_strcmp(sgm1, sgm2);
// 	printf("\nft_strcmp %d \n", ans);
// 	ans = strcmp(sgm1, sgm2);
// 	printf("strcmp    %d \n", ans);

// 	sgm1 = "\n";
// 	sgm2 = "]";
// 	ans = ft_strcmp(sgm1, sgm2);
// 	printf("\nft_strcmp %d \n", ans);
// 	ans = strcmp(sgm1, sgm2);
// 	printf("strcmp    %d \n", ans);

// 	return (0);
// }