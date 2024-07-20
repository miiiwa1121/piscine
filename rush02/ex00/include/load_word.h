/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_word.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchigan <ruchigan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 02:39:20 by ruchigan          #+#    #+#             */
/*   Updated: 2024/03/24 03:01:14 by ruchigan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOAD_WORD_H
# define LOAD_WORD_H

// 有効な行かどうかを判定する
int		valid_line(char *line);

// キーを取得する(要free)
char	*get_key(char *line);

// 値を取得する(要free)
char	*get_value(char *line);

#endif
