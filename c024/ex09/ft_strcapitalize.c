/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtsubasa <mtsubasa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:37:26 by mtsubasa          #+#    #+#             */
/*   Updated: 2024/03/28 17:06:27 by mtsubasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (j == 1 && c >= 'a' && c <= 'z')
			str[i] = str[i] - 32;
		else if (j == 0 && c >= 'A' && c <= 'Z')
			str[i] = str[i] + 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
			j = 1;
		else
			j = 0;
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "salut,comment tu vas ? 
						// 42mots quaRAnte-deux; cinquante+et+un";

// 	printf(".%s.\n", ft_strcapitalize(str));
// }
