/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kchou <kchou@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 23:00:46 by kchou             #+#    #+#             */
/*   Updated: 2024/03/24 23:00:51 by kchou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#define MAX_SPLIT 52
#define TRIPLET_SIZE 4 // 3桁 + ヌル文字
#define MAX_WORDS 30   // 仮の最大単語数
#define WORD_SIZE 10   // 仮の最大単語サイズ

char	splited_triplets[MAX_SPLIT][TRIPLET_SIZE];
char splited_triplets_in_words[MAX_WORDS][MAX_SPLIT][WORD_SIZE]; // 3次元配列

void	put_three_digit_number(char *str)
{
	int	digit_count;
	int	remainder;
	int	index;

	digit_count = strlen(str);
	remainder = digit_count % 3;
	index = 0;
	if (remainder > 0)
	{
		strncpy(splited_triplets[index], str, remainder);
		splited_triplets[index][remainder] = '\0';
		index++;
	}
	for (int i = remainder; i < digit_count; i += 3)
	{
		strncpy(splited_triplets[index], &str[i], 3);
		splited_triplets[index][3] = '\0';
		index++;
	}
}

void	format_and_print_triplets(void)
{
	int	triplet_combo;

	triplet_combo = 0;
	for (int x = 0; x < MAX_SPLIT && splited_triplets[x][0] != '\0'; x++)
	{
		int element_index = 0; // Index for elements within a triplet
		if (splited_triplets[x][0] == '0' && splited_triplets[x][1] == '0'
			&& splited_triplets[x][2] == '0')
		{
			strcpy(splited_triplets_in_words[triplet_combo][element_index],
				"v");
			triplet_combo++;
			continue ;
		}
		else
		{
			// splited_triplets[x][2]にnullがある場合の処理
			if (splited_triplets[x][2] == '\0')
			{
				if (splited_triplets[x][0] == '1')
				{
					// "1"の場合、残りの要素をそのまま出力
					sprintf(splited_triplets_in_words[triplet_combo][element_index++],
						"%c%c", splited_triplets[x][0], splited_triplets[x][1]);
				}
				else if (splited_triplets[x][0] != '0')
				{
					// "0"でも"1"でもない場合、"0"を付けて出力
					sprintf(splited_triplets_in_words[triplet_combo][element_index++],
						"%c0", splited_triplets[x][0]);
					if (splited_triplets[x][1] != '0')
					{
						// splited_triplets[x][1]が"0"でなければそのまま出力
						sprintf(splited_triplets_in_words[triplet_combo][element_index++],
							"%c", splited_triplets[x][1]);
					}
				}
				else
				{
					// "0"の場合、splited_triplets[x][1]のみを出力
					if (splited_triplets[x][1] != '0')
					{
						sprintf(splited_triplets_in_words[triplet_combo][element_index++],
							"%c", splited_triplets[x][1]);
					}
				}
			}
			else
			{
				// splited_triplets[x][3]にnullがない場合の通常の処理
				if (splited_triplets[x][0] != '0')
				{
					sprintf(splited_triplets_in_words[triplet_combo][element_index++],
						"%c", splited_triplets[x][0]);
					strcpy(splited_triplets_in_words[triplet_combo][element_index++],
						"100");
				}
				if (splited_triplets[x][1] != '\0')
				{
					if (splited_triplets[x][1] == '1')
					{
						// "1"の場合、残りの要素をそのまま出力
						sprintf(splited_triplets_in_words[triplet_combo][element_index++],
							"%c%c", splited_triplets[x][1],
							splited_triplets[x][2]);
					}
					else if (splited_triplets[x][1] == '0')
					{
						if (splited_triplets[x][2] != '0')
						{
							sprintf(splited_triplets_in_words[triplet_combo][element_index++],
									"%c", splited_triplets[x][2]);
						}
					}
					else
					{
						sprintf(splited_triplets_in_words[triplet_combo][element_index++],
							"%c0", splited_triplets[x][1]);
						if (splited_triplets[x][2] != '0')
						sprintf(splited_triplets_in_words[triplet_combo][element_index++],
							"%c", splited_triplets[x][2]);
					}
				}
			}
			triplet_combo++; // Move to the next set for the next triplet
		}
	}
}

int	main(void)
{
	char	str[] = "12430001340400001";

	put_three_digit_number(str);
	format_and_print_triplets();
	// Print the formatted triplets for verification
	for (int i = 0; i < MAX_WORDS
		&& splited_triplets_in_words[i][0][0] != '\0'; i++)
	{
		for (int j = 0; j < MAX_SPLIT
			&& splited_triplets_in_words[i][j][0] != '\0'; j++)
		{
			printf("%s ", splited_triplets_in_words[i][j]);
		}
		printf("\n");
	}
	return (0);
}
