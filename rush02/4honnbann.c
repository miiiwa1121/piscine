#include <stdio.h>
#include <string.h>

#define MAX_SPLIT 14
#define TRIPLET_SIZE 4 // 3桁 + ヌル文字
#define MAX_WORDS 30 // 仮の最大単語数
#define WORD_SIZE 10 // 仮の最大単語サイズ

char splited_triplets[MAX_SPLIT][TRIPLET_SIZE];
char splited_triplets_in_words[MAX_WORDS][TRIPLET_SIZE][WORD_SIZE]; // 3次元配列

// ft_strncpy実装
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


void format_and_store_triplets() {
    int three_triplets_combo = 0; // 3次元配列の最初のインデックスを追跡
    for (int x = 0; x < MAX_SPLIT && splited_triplets[x][0] != '\0'; x++) {
        char buffer[TRIPLET_SIZE * 4]; // 最大サイズのバッファを確保
        int buffer_index = 0; // バッファのインデックス

        // splited_triplets[x][1]にnullがある場合
        if (splited_triplets[x][1] == '\0') {
            buffer[buffer_index++] = splited_triplets[x][0];
        }
        // splited_triplets[x][2]にnullがある場合
        else if (splited_triplets[x][2] == '\0') {
            if (splited_triplets[x][0] == '1' || splited_triplets[x][0] == '0') {
                buffer[buffer_index++] = splited_triplets[x][0];
            } else {
                buffer[buffer_index++] = splited_triplets[x][0];
                buffer[buffer_index++] = '0';
            }
            if (splited_triplets[x][1] != '0' || splited_triplets[x][0] != '0') {
                buffer[buffer_index++] = splited_triplets[x][1];
            }
        }
        // splited_triplets[x][3]にnullがある場合
        else if (splited_triplets[x][3] == '\0') {
            if (!(splited_triplets[x][0] == '0' && splited_triplets[x][1] == '0' && splited_triplets[x][2] == '0')) {
				                if (splited_triplets[x][0] != '0') {
                    buffer[buffer_index++] = splited_triplets[x][0];
                    ft_strncpy(buffer + buffer_index, "100", 3);
                    buffer_index += 3;
                }
                if (splited_triplets[x][1] != '0') {
                    buffer[buffer_index++] = splited_triplets[x][1] != '1' ? '0' : splited_triplets[x][1];
                }
                if (splited_triplets[x][2] != '0') {
                    buffer[buffer_index++] = splited_triplets[x][2];
                }
            } else {
                ft_strncpy(buffer, "v", 1);
                buffer_index = 1;
            }
        }
        buffer[buffer_index] = '\0'; // ヌル終端

        // bufferの内容をsplited_triplets_in_wordsにコピー
        ft_strncpy(splited_triplets_in_words[three_triplets_combo][0], buffer, buffer_index + 1);
        three_triplets_combo++; // 次のコンボに移動
    }
}

int main(void) {
    char str[] = "10110110";
    put_three_digit_number(str);
    format_and_store_triplets();
    // 結果の出力（デバッグ用）
    for (int i = 0; i < MAX_WORDS && splited_triplets_in_words[i][0][0] != '\0'; i++) {
        printf("%s\n", splited_triplets_in_words[i][0]);
    }
    return 0;
}