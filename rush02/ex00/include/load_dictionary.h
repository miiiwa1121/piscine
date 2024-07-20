/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_dictionary.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchigan <ruchigan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 02:36:49 by ruchigan          #+#    #+#             */
/*   Updated: 2024/03/24 19:38:13 by ruchigan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOAD_DICTIONARY_H
# define LOAD_DICTIONARY_H

# include <stdbool.h>

// 単語
// key: キー
// value: 値
typedef struct s_word
{
	char					*key;
	char					*value;
}							t_word;

// 辞書の読み込み結果
// is_valid: 有効な辞書かどうか。有効な場合はtrue、無効な場合はfalse
// dictionary: 辞書。Wordの配列として定義されており、終端にはNULLが入る
typedef struct s_dictionary_load_result
{
	bool					is_valid;
	t_word					*dictionary;
}							t_dictionary_load_result;

// 辞書を作成する
// 引数(filename): 辞書のファイルパス
// 返り値: DictionaryLoadResultを返す
t_dictionary_load_result	load_dictionary_from_file(const char *filename);

// 辞書内のメモリと辞書を解放する
void						free_dictionary(t_word *dictionary);

// 二つの辞書がすべて、同じキーになっているかどうか
bool						dictionary_has_same_key(t_word *base_dictionary,
								t_word *custom_dictionary);

// 辞書内のキーがユニークであるか
bool						dictionary_has_unique_key(t_word *dictionary);

#endif
