/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_dictionary.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchigan <ruchigan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 09:00:44 by ruchigan          #+#    #+#             */
/*   Updated: 2024/03/24 19:44:48 by ruchigan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/file_utils.h"
#include "../include/load_dictionary.h"
#include "../include/load_word.h"
#include <fcntl.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#define BUFFER_SIZE 1024

bool						load_file(const char *filename, t_word *dictionary);
t_word						create_word(char *params);
t_word						create_empty_word(void);

t_dictionary_load_result	load_dictionary_from_file(const char *filename)
{
	int		dictionary_size;
	t_word	*dictionary;

	dictionary_size = file_line_size(filename);
	if (dictionary_size < 1)
		return ((t_dictionary_load_result){.is_valid = false,
			.dictionary = NULL});
	dictionary = (t_word *)malloc((dictionary_size + 1) * sizeof(t_word));
	if (load_file(filename, dictionary)
		&& dictionary_has_unique_key(dictionary))
	{
		return ((t_dictionary_load_result){
			.is_valid = true,
			.dictionary = dictionary,
		});
	}
	else
	{
		free_dictionary(dictionary);
		return ((t_dictionary_load_result){.is_valid = false,
			.dictionary = NULL});
	}
}

// ファイルを読み込み辞書を作成する
// 返り値: 辞書を作成できたらtrue、できなかったらfalse
bool	load_file(const char *filename, t_word *dictionary)
{
	int		fd;
	char	line[BUFFER_SIZE];
	ssize_t	line_size;

	fd = open(filename, O_RDONLY);
	while (1)
	{
		line_size = read_line(fd, line, sizeof(line));
		if (line_size < 0)
			break ;
		if (line[0] == '\0' || (line[0] == '\n' && line[1] == '\0'))
			continue ;
		if (!valid_line(line))
		{
			*dictionary = create_empty_word();
			free_dictionary(dictionary);
			close(fd);
			return (false);
		}
		*dictionary = create_word(line);
		dictionary++;
	}
	*dictionary = (t_word){NULL, NULL};
	close(fd);
	return (true);
}

t_word	create_word(char *params)
{
	t_word	word;

	word = (t_word){
		.key = get_key(params),
		.value = get_value(params),
	};
	return (word);
}

t_word	create_empty_word(void)
{
	t_word	word;

	word = (t_word){
		.key = NULL,
		.value = NULL,
	};
	return (word);
}
