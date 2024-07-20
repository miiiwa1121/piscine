/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchigan <ruchigan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 19:23:03 by ruchigan          #+#    #+#             */
/*   Updated: 2024/03/24 19:16:57 by ruchigan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/load_dictionary.h"
#include "../include/rush02.h"
#include <unistd.h>

int	main(int argc, char *argv[])
{
	t_dictionary_load_result	load_result;
	t_dictionary_load_result	load_custom_result;
	t_params					params;

	params = parse_params(argc, argv);
	if (!params.is_valid)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	load_result = load_dictionary_from_file("numbers.dict");
	if (!load_result.is_valid)
	{
		write(2, "Dict Error\n", 11);
		return (1);
	}
	load_custom_result = load_dictionary_from_file(params.custom_dictionary_filename);
	if (!load_custom_result.is_valid)
	{
		write(2, "Dict Error\n", 11);
		return (1);
	}
	if (!dictionary_has_same_key(load_result.dictionary,
			load_custom_result.dictionary))
	{
		write(2, "Dict not same Error\n", 11);
		return (1);
	}
	free_dictionary(load_result.dictionary);
	return (0);
}
// int	main(int argc, char **argv)
// {
// 	Params					params;
// 	DictionaryLoadResult	load_result;
// 	SearchWordResult		search_result;

// 	params = parse_params(argc, argv);
// 	if (!params.is_valid)
// 	{
// 		write(2, "Error\n", 6);
// 		return (1);
// 	}
// 	load_result = load_dictionary(params.additional_dictionary_filename);
// 	if (!load_result.is_valid)
// 	{
// 		write(2, "Dict Error\n", 11);
// 		return (1);
// 	}
// 	search_result = search_word_by_key(params.search_key,
// 			load_result.dictionary);
// 	if (!search_result.is_valid)
// 	{
// 		write(2, "Dict Error\n", 11);
// 		return (1);
// 	}
// 	ft_putstr(search_result.word->value);
// 	free_dictionary(load_result.dictionary);
// 	return (0);
// }
