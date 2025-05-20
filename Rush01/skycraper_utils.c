#include "structs.h"

int	is_in_row(int **grid, int row, int num, int n)
{
	int	col;

	col = 0;
	while (col < n)
	{
		if (grid[row][col] == num)
			return (1);
		col++;
	}
	return (0);
}

int	is_in_col(int **grid, int col, int num, int n)
{
	int	row;

	row = 0;
	while (row < n)
	{
		if (grid[row][col] == num)
			return (1);
		row++;
	}
	return (0);
}

int	check_visibility(int **grid, t_mat_bis hints, int n)
{
	int	row;
	int	col;
	int	max_height;
	int	visible_count;

	// Vérification pour chaque rangée
	for (row = 0; row < n; row++)
	{
		max_height = 0;
		visible_count = 0;
		for (col = 0; col < n; col++)
		{
			if (grid[row][col] > max_height)
			{
				max_height = grid[row][col];
				visible_count++;
			}
		}
		if (hints.row_1[row] != 0 && hints.row_1[row] != visible_count)
			return (0);

		max_height = 0;
		visible_count = 0;
		for (col = n - 1; col >= 0; col--)
		{
			if (grid[row][col] > max_height)
			{
				max_height = grid[row][col];
				visible_count++;
			}
		}
		if (hints.row_2[row] != 0 && hints.row_2[row] != visible_count)
			return (0);
	}

	// Vérification pour chaque colonne
	for (col = 0; col < n; col++)
	{
		max_height = 0;
		visible_count = 0;
		for (row = 0; row < n; row++)
		{
			if (grid[row][col] > max_height)
			{
				max_height = grid[row][col];
				visible_count++;
			}
		}
		if (hints.col_1[col] != 0 && hints.col_1[col] != visible_count)
			return (0);

		max_height = 0;
		visible_count = 0;
		for (row = n - 1; row >= 0; row--)
		{
			if (grid[row][col] > max_height)
			{
				max_height = grid[row][col];
				visible_count++;
			}
		}
		if (hints.col_2[col] != 0 && hints.col_2[col] != visible_count)
			return (0);
	}

	return (1);
}

