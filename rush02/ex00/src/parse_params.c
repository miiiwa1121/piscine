/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_params.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchigan <ruchigan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 21:32:31 by ruchigan          #+#    #+#             */
/*   Updated: 2024/03/24 18:40:31 by ruchigan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/char_utils.h"
#include "../include/rush02.h"
#include <stdbool.h>
#include <stdlib.h>

t_params	init_params(void);
bool		is_argc_is_valid(int argc);
bool		is_search_key_is_valid_number(char *key);

t_params	parse_params(int argc, char *argv[])
{
	t_params	params;
	char		*search_key;
	char		*custom_dictionary_filename;

	params = init_params();
	if (!is_argc_is_valid(argc))
		return (params);
	if (argc == 2)
	{
		search_key = argv[1];
	}
	else
	{
		custom_dictionary_filename = argv[1];
		search_key = argv[2];
	}
	if (!is_search_key_is_valid_number(search_key))
		return (params);
	params.search_key = search_key;
	params.custom_dictionary_filename = custom_dictionary_filename;
	params.is_valid = true;
	return (params);
}

bool	is_argc_is_valid(int argc)
{
	return (argc == 2 || argc == 3);
}

//　キーが妥当な数字であるか検証する
bool	is_search_key_is_valid_number(char *key)
{
	if (key == NULL || *key == '\0')
		return (false);
	while (*key)
	{
		if (!ft_is_digit((unsigned char)*key))
			return (false);
		key++;
	}
	return (true);
}

// paramsの初期値を返す
t_params	init_params(void)
{
	t_params	params;

	params = (t_params){
		.is_valid = false,
		.custom_dictionary_filename = NULL,
		.search_key = NULL,
	};
	return (params);
}
