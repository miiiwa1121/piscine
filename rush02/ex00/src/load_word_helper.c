/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_word_helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchigan <ruchigan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 21:32:31 by ruchigan          #+#    #+#             */
/*   Updated: 2024/03/24 03:03:22 by ruchigan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/string_utils.h"
#include <stdbool.h>
#include <stdlib.h>

int	find_colon_position(char *str)
{
	int	i;

	i = 0;
	while (str[i] != ':')
		i++;
	return (i);
}

char	*get_left_str_colon(char *line)
{
	return (ft_substring(line, 0, find_colon_position(line)));
}

char	*get_right_str_colon(char *line)
{
	return (ft_substring(line, find_colon_position(line) + 1, ft_strlen(line)));
}
