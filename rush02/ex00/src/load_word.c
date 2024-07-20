/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchigan <ruchigan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 21:32:31 by ruchigan          #+#    #+#             */
/*   Updated: 2024/03/24 03:01:42 by ruchigan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/char_utils.h"
#include "../include/load_word_helper.h"
#include "../include/string_utils.h"
#include <stdbool.h>
#include <stdlib.h>

// 区切り文字を含んでいるか判定する
bool	has_colon(char *line);

char	*get_key(char *line);

int	valid_line(char *line)
{
	int		is_has_colon;
	char	*key;

	is_has_colon = has_colon(line);
	if (!is_has_colon)
		return (0);
	key = get_key(line);
	if (!key || !ft_is_digit(*key))
	{
		free(key);
		return (0);
	}
	free(key);
	return (1);
}

char	*get_key(char *line)
{
	char	*key;
	int		i;
	int		start;

	i = 0;
	while (line[i] && ft_is_space(line[i]))
		i++;
	start = i;
	while (line[i] && ft_is_digit(line[i]))
		i++;
	if (i > start)
	{
		while (line[start] == '0' && start < i - 1)
			start++;
		key = ft_substring(line, start, i);
		return (key);
	}
	return (NULL);
}

char	*get_value(char *line)
{
	char	*value;
	char	*trimmed;
	int		i;
	int		j;

	value = get_right_str_colon(line);
	i = 0;
	while (value[i] && ft_is_space(value[i]))
		i++;
	j = ft_strlen(value) - 1;
	while (j > i && ft_is_space(value[j]))
		j--;
	trimmed = ft_substring(value, i, j + 1);
	free(value);
	value = compress_spaces(trimmed);
	free(trimmed);
	return (value);
}

bool	has_colon(char *line)
{
	int	colon_count;
	int	i;

	i = 0;
	colon_count = 0;
	while (line[i])
	{
		if (line[i] == ':')
			colon_count++;
		i++;
	}
	return (colon_count != 0);
}
