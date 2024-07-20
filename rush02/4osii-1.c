#include <stdio.h>
#include <string.h>

#define MAX_SPLIT 14
#define TRIPLET_SIZE 4 // 3桁 + ヌル文字

char	splited_triplets[MAX_SPLIT][TRIPLET_SIZE];

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
	for (int x = 0; x < MAX_SPLIT && splited_triplets[x][0] != '\0'; x++)
	{
		// splited_triplets[x][1]にnullがある場合
		if (splited_triplets[x][1] == '\0')
		{
			printf("%c", splited_triplets[x][0]);
		}
		// splited_triplets[x][2]にnullがある場合
		else if (splited_triplets[x][2] == '\0')
		{
			if (splited_triplets[x][0] == '1')
			{
				printf("%c%c", splited_triplets[x][0], splited_triplets[x][1]);
			}
			else if (splited_triplets[x][0] == '0')
			{
				printf("%c", splited_triplets[x][1]);
			}
			else
			{
				printf("%c0", splited_triplets[x][0]);
				if (splited_triplets[x][1] != '0')
				{
					printf("%c", splited_triplets[x][1]);
				}
			}
		}
		// splited_triplets[x][3]にnullがある場合
		else if (splited_triplets[x][3] == '\0')
		{
			if (splited_triplets[x][0] == '0' && splited_triplets[x][1] == '0'
				&& splited_triplets[x][2] == '0')
			{
				printf("v");
			}
			else
			{
				if (splited_triplets[x][0] == '0')
				{
					// 最初の要素が0の場合、次の要素に基づいて処理
					if (splited_triplets[x][1] == '1')
					{
						printf("%c%c", splited_triplets[x][1],
							splited_triplets[x][2]);
					}
					else if (splited_triplets[x][1] == '0')
					{
						if (splited_triplets[x][2] != '0')
						{
							printf("%c", splited_triplets[x][2]);
						}
					}
					else
					{
						printf("%c0", splited_triplets[x][1]);
						if (splited_triplets[x][2] != '0')
						{
							printf("%c", splited_triplets[x][2]);
						}
					}
				}
				else
				{
					// 最初の要素が0ではない場合
					printf("%c100", splited_triplets[x][0]);
					if (splited_triplets[x][1] == '1')
					{
						printf("%c%c", splited_triplets[x][1],
							splited_triplets[x][2]);
					}
					else if (splited_triplets[x][1] == '0')
					{
						if (splited_triplets[x][2] != '0')
						{
							printf("%c", splited_triplets[x][2]);
						}
					}
					else
					{
						printf("%c0", splited_triplets[x][1]);
						if (splited_triplets[x][2] != '0')
						{
							printf("%c", splited_triplets[x][2]);
						}
					}
				}
			}
		}
		printf("\n"); // New line for each triplet
	}
}

int	main(void)
{
	char str[] = "111235878900000007896008098909822";
	put_three_digit_number(str);
	format_and_print_triplets();
	return (0);
}