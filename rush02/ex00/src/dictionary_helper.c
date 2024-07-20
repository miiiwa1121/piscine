/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary_helper.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchigan <ruchigan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 09:00:44 by ruchigan          #+#    #+#             */
/*   Updated: 2024/03/24 19:45:17 by ruchigan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/load_dictionary.h"
#include "../include/string_utils.h"
#include <stdbool.h>
#include <stdlib.h>

t_word	search_word_by_key(t_word *dictionary, char *key);

void	free_dictionary(t_word *dictionary)
{
	t_word	*word;

	word = dictionary;
	while (word && word->key != NULL)
	{
		free(word->key);
		free(word->value);
		word++;
	}
	free(dictionary);
}

bool	dictionary_has_same_key(t_word *base_dictionary,
		t_word *custom_dictionary)
{
	t_word	word;

	while (base_dictionary->key != NULL)
	{
		word = search_word_by_key(custom_dictionary, base_dictionary->key);
		if (word.key == NULL)
			return (false);
		base_dictionary++;
	}
	return (true);
}

bool	dictionary_has_unique_key(t_word *dictionary)
{
	t_word	*current;
	t_word	*compare;

	current = dictionary;
	while (current && current->key)
	{
		compare = dictionary;
		while (compare && compare->key)
		{
			if (compare != current && ft_strcmp(compare->key,
					current->key) == 0)
				return (false);
			compare++;
		}
		current++;
	}
	return (true);
}

t_word	search_word_by_key(t_word *dictionary, char *key)
{
	t_word	empty_word;

	empty_word = (t_word){.key = NULL, .value = NULL};
	while (dictionary->key != NULL)
	{
		if (ft_strcmp(dictionary->key, key) == 0)
			return (*dictionary);
		dictionary++;
	}
	return (empty_word);
}
