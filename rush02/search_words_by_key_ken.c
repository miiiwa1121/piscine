/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_words_by_key_ken.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchigan <ruchigan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 18:51:27 by kchou             #+#    #+#             */
/*   Updated: 2024/03/24 12:59:40 by ruchigan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

// 3桁毎の数字を格納する配列
char	*splited_triplets[];

//出力する単位を格納する配列
char	*units[];

//桁数を数える関数（strlen）を実装
int	ft_strlen(char *str)
{
	int	digit_count;

	digit_count = 0;
	while (*str != '\0')
	{
		digit_count++;
		str++;
	}
	return (digit_count);
}

//文字を配列にコピーする関数（strncpy）
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// 3桁毎に数字を区切って、<数字>を配列として出力する関数
char	put_three_digit_number(char *str)
{
	int	digit_count;
	int	remainder;
	int	i;

	int index; // splited_tripletsの配列番号
	digit_count = ft_strlen(str);
	remainder = len % 3;
	index = 0;
	if (reminder > 0)
	{
		ft_strncpy(splited_triplets[index], str, remainder);
			//配列の先頭に3で割ったあまりの文字数を代入している
		splited_triplets[index][remainder] = '\0';          
			//配列の情報にNULLで区切りを付ける
		index++;
	}
	i = remainder;
	while (i < digit_count)
	{
		ft_strncpy(splited_triplets[index], str + i, 3);
		splited_triplets[index][3] = '\0';
		index++;
		i += 3;
	}
}

// 3桁の数字を<数字の要素>として出力する関数、配列はそのまま
char	put_source_by_key(char *str)
{
	int	str_len;
	int	i;
				int digit_count;
				int unit_count;

	i = 0;
	str_len = ft_strlen(str);
	while (str != '\0', i < 3)
	{
		if (str_len = 3)
		{
			printf(
//出力された3桁の数字を全て<数字の要素として>出力する関数
//3桁区切りの単位がいくつ使われるのかを数える関数
int	put_unit_count(char *str)
{
				digit_count = ft_strlen(str);
				unit_count = 0 while (digit_count > 3)
					// 3桁の数字はthousand以上の単位を必要としないため
				{
					digit_count -= 3;
					unit_count++;
				}
				return (unit_count)
}

			// 3桁区切りの単位をthousand〜必要な分まで逆の順番に並べる関数
		}

		int main(void)
		{
			char number[] = "234234234";
			char dictionary[][] = {"1", "2", "3", "4", "5", "6", "7", "8", "9",
				"10", "11", "12", "13", "14", "15", "16", "17", "18", "19",
				"20", "30", "40", "50", "60", "70", "80", "90", "100", "1000",
				"1000000", "1000000000", "1000000000000", "1000000000000000",
				"1000000000000000000", "1000000000000000000000",
				"1000000000000000000000000", "1000000000000000000000000000",
				"1000000000000000000000000000000",
				"1000000000000000000000000000000000"} serch_words_by_key(number,
					dictionary);
			return (0);
		}
