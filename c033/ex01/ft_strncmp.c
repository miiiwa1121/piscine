/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:39:13 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/21 17:09:46 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
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
// 	size_t n;
// 	int ans;

// 	n = 3;

// 	sgm1 = "1234567890";
// 	sgm2 = "1234567890";
// 	ans = ft_strncmp(sgm1, sgm2, n);
// 	printf("\nft_strncmp %d \n", ans);
// 	ans = strncmp(sgm1, sgm2, n);
// 	printf("strncmp    %d \n", ans);

// 	sgm1 = "1234567890";
// 	sgm2 = "2234567890";
// 	ans = ft_strncmp(sgm1, sgm2, n);
// 	printf("\nft_strncmp %d \n", ans);
// 	ans = strncmp(sgm1, sgm2, n);
// 	printf("strncmp    %d \n", ans);

// 	sgm1 = "2234567890";
// 	sgm2 = "1234567890";
// 	ans = ft_strncmp(sgm1, sgm2, n);
// 	printf("\nft_strncmp %d \n", ans);
// 	ans = strncmp(sgm1, sgm2, n);
// 	printf("strncmp    %d \n", ans);

// 	sgm1 = "1235467890";
// 	sgm2 = "1234567890";
// 	ans = ft_strncmp(sgm1, sgm2, n);
// 	printf("\nft_strncmp %d \n", ans);
// 	ans = strncmp(sgm1, sgm2, n);
// 	printf("strncmp    %d \n", ans);

// 	sgm1 = "1234567890";
// 	sgm2 = "1234657890";
// 	ans = ft_strncmp(sgm1, sgm2, n);
// 	printf("\nft_strncmp %d \n", ans);
// 	ans = strncmp(sgm1, sgm2, n);
// 	printf("strncmp    %d \n", ans);
// }