#include <stdbool.h>
#include <stdio.h>

#define SIZE 4

// 盤面の表示
void	print_board(int board[SIZE][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			printf("%d ", board[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

// 指定した位置に数字を配置できるかどうかを判定
bool	is_valid(int board[SIZE][SIZE], int row, int col, int num)
{
	int	start_row;
	int	start_col;

	for (int i = 0; i < SIZE; i++)
	{
		if (board[row][i] == num || board[i][col] == num)
		{
			return (false);
		}
	}
	start_row = row - row % 2;
	start_col = col - col % 2;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (board[i + start_row][j + start_col] == num)
			{
				return (false);
			}
		}
	}
	return (true);
}

// 数独パズルを解く
bool	solve_sudoku(int board[SIZE][SIZE], int row, int col)
{
	if (row == SIZE)
	{
		return (true); // 解が見つかった
	}
	if (col == SIZE)
	{
		return (solve_sudoku(board, row + 1, 0)); // 次の行に移動
	}
	if (board[row][col] != 0)
	{
		return (solve_sudoku(board, row, col + 1)); // 既に数字がある場合は次の列に進む
	}
	for (int num = 1; num <= SIZE; num++)
	{
		if (is_valid(board, row, col, num))
		{
			board[row][col] = num;
			if (solve_sudoku(board, row, col + 1))
			{
				return (true); // 解が見つかった
			}
			board[row][col] = 0; // バックトラックgit 
		}
	}
	return (false); // 解が見つからない
}

// 数独パズルの全ての解を返す
void	find_all_solutions(int board[SIZE][SIZE])
{
	if (!solve_sudoku(board, 0, 0))
	{
		printf("No solution exists.\n");
	}
}

int	main(void)
{
	int	sudoku[SIZE][SIZE] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0,
			0, 0}};

	find_all_solutions(sudoku);
	return (0);
}
