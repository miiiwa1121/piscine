/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchigan <ruchigan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 02:39:11 by ruchigan          #+#    #+#             */
/*   Updated: 2024/03/24 17:03:20 by ruchigan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_UTILS_H
# define STRING_UTILS_H

// 文字列の長さを返す
unsigned long	ft_strlen(char *str);

// 受け取った文字列の開始位置から、終了位置までの文字を返す(要free)
char			*ft_substring(char *str, int start, int end);

// 文字列のコピーを行う
int				ft_strlcpy(char *dest, const char *src, int dest_size);

// 文中のスペースを削除する(要free)
char			*compress_spaces(char *str);

int				ft_strcmp(char *s1, char *s2);

#endif
