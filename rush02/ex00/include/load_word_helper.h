/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_word_helper.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchigan <ruchigan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 02:39:11 by ruchigan          #+#    #+#             */
/*   Updated: 2024/03/24 03:04:18 by ruchigan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOAD_WORD_HELPER_H
# define LOAD_WORD_HELPER_H

// コロンの文字の位置を取得する
int		find_colon_position(char *str);

// コロンの左側の文字列を取得する(要free)
char	*get_left_str_colon(char *line);

// コロンの右側の文字列を取得する(要free)
char	*get_right_str_colon(char *line);

#endif
