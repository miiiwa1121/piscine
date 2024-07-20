/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utils.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchigan <ruchigan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 02:39:11 by ruchigan          #+#    #+#             */
/*   Updated: 2024/03/24 13:34:32 by ruchigan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_UTILS_H
# define FILE_UTILS_H
# include <unistd.h>

// 指定したファイルの行数を返す
// 引数(filename): ファイル名
// 戻り値: 行数を返す。ファイルが存在しない等のエラーの場合は-1を返す
int		file_line_size(const char *filename);

// ファイルから一行分、文字列を読み込む
// 戻り値: 文字列のバイト数を返す
// ファイルが見つからなかったり、ファイルがオープンできなない場合、-1を返す
// 一行あたりの文字数がmax_lengthを超えた場合、-2を返す
ssize_t	read_line(int fd, char *buffer, size_t max_length);

#endif
