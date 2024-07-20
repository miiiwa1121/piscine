/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchigan <ruchigan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 02:36:49 by ruchigan          #+#    #+#             */
/*   Updated: 2024/03/24 18:31:28 by ruchigan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdbool.h>

// パラメータ
// is_valid: 有効なパラメータかどうか。有効な場合はtrue、無効な場合はfalse
// custom_dictionary_filename: 追加の辞書ファイル名。指定されていない場合はNULL
// search_key: 検索キー
typedef struct s_params
{
	bool	is_valid;
	char	*custom_dictionary_filename;
	char	*search_key;
}			t_params;

// コマンドライン引数からパラメータをパースする
// 引数(argc): argc
// 引数(argv): argv
// 戻り値: パラメータ
t_params	parse_params(int argc, char **argv);

// 引数からパラメータをパースする
t_params	parse_params(int argc, char *argv[]);
#endif
