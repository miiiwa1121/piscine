#include <stdio.h>
#include <stdlib.h>

//出力する単位を格納する配列
char *units[1]; // グローバル配列の宣言

void	put_unit_storag(int unit_count)
{
	int	i;
	int	j;

	int max_unit; // unit_countを保存
	i = 0;
	max_unit = unit_count;
	while (i < unit_count)
	{
		// メモリを動的に割り当てて、そのアドレスを各要素に代入
		units[i] = (char)malloc((unit_count * 3 + 1) * sizeof(char));
		if (units[i] == NULL)
		{
			printf("error");
			//強制終了
		}
		units[i][0] = '1';
		j = 1;
		while (j <= (max_unit)*3)
		{
			units[i][j] = '0';
			j++;
		}
		units[i][j] = '\0';
		i++;
		max_unit--;
	}
}

int	main(void)
{
	int	i;
	int	j;

	i = 0;
	put_unit_storag(10);
	// units配列の内容を出力
	i = 0;
	while (units[i] != '\0')
	{
		j = 0;
		while (units[i][j] != '\0')
		{
			printf("%c", units[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
