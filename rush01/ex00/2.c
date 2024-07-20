#include <stdio.h>

// 各行と列に1から4までの数字が一つずつ存在するかどうかをチェックする関数
int check_numbers(int arr[4][4]);

int main(void)
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {2, 3, 4, 1},
        {3, 4, 1, 2},
        {4, 1, 2, 3}
    };

    // 関数を呼び出して配列内の数字のチェックを行う
    int result = check_numbers(arr);

    // 結果の出力
    if (result)
    {
        printf("各行と列に1から4までの数字が一つずつ存在します。\n");
    }
    else
    {
        printf("各行と列に1から4までの数字が一つずつ存在しません。\n");
    }

    return 0;
}

// 各行と列に1から4までの数字が一つずつ存在するかどうかをチェックする関数
int check_numbers(int arr[4][4])
{
    // 各数字が行、列に一つずつ存在するかどうかを記録する配列
    int row_count[4] = {0}; // 各行の数字の出現回数
    int col_count[4] = {0}; // 各列の数字の出現回数

    // 配列を走査して各数字の出現回数をカウント
    int i = 0;
    while (i < 4)
    {
        int j = 0;
        while (j < 4)
        {
            int num = arr[i][j];
            if (num >= 1 && num <= 4)
            {
                row_count[i]++;
                col_count[j]++;
            }
            j++;
        }
        i++;
    }

    // 各行と列に1から4までの数字が一つずつ存在するかどうかを確認
    int k = 0;
    while (k < 4)
    {
        if (row_count[k] != 1 || col_count[k] != 1)
        {
            // どれか1つでも出現回数が1でない場合は、条件を満たさないためfalseを返す
            return 0;
        }
        k++;
    }

    // 各行と列に1から4までの数字が一つずつ存在する場合はtrueを返す
    return 1;
}

check(){
	while()
}