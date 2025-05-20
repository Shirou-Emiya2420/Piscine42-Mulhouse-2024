#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	col1(int **grid)
{
	int	col;
	int	row;
	int	visible;
	int	max_height;

	col = 1;
	while (col < 5)
	{
		visible = 0;
		max_height = 0;
		row = 0;
		while (++row < 5)
		{
			if (grid[row][col] > max_height)
			{
				max_height = grid[row][col];
				visible++;
			}
		}
		if (visible != grid[0][col])
			return (0);
		col++;
	}
	return (1);
}

int	col2(int **grid)
{
	int	col;
	int	row;
	int	visible;
	int	max_height;

	col = 0;
	while (col < 5)
	{
		visible = 0;
		max_height = 0;
		row = 0;
		while (++row < 5)
		{
			if (grid[row][col] > max_height)
			{
				max_height = grid[row][col];
				visible++;
			}
		}
		if (visible != grid[5][col])
			return (0);
		col++;
	}
	return (1);
}

int	row1(int **grid)
{
	int	row;
	int	col;
	int	visible;
	int	max_height;

	row = 0;
	while (row < 5)
	{
		visible = 0;
		max_height = 0;
		col = 0;
		while (++col < 5)
		{
			if (grid[row][col] > max_height)
			{
				max_height = grid[row][col];
				visible++;
			}
		}
		if (visible != grid[row][0])
			return (0);
		row++;
	}
	return (1);
}

int	row2(int **grid)
{
	int	row;
	int	col;
	int	visible;
	int	max_height;

	row = 1;
	while (row < 5)
	{
		visible = 0;
		max_height = 0;
		col = 0;
		while (++col < 5)
		{
			if (grid[row][col] > max_height)
			{
				max_height = grid[row][col];
				visible++;
			}
		}
		if (visible != grid[row][5])
			return (0);
		row++;
	}
	return (1);
}

int	is_valid(int **tab)
{
	if (!col1(tab))
		return (0);
	if (!col2(tab))
		return (0);
	if (!row1(tab))
		return (0);
	if (!row2(tab))
		return (0);
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	show_mat(int **mat)
{
	int	i;
	int	y;

	i = 0;
	while (i < 6)
	{
		y = 0;
		while (y < 6)
		{
			ft_putchar(mat[i][y] + '0');
			y++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	duplicate(int **tab, int row, int col)
{
	int	i;
	int	j;
	int	dup;

	i = 1;
	j = 1;
	dup = 0;
	while (i < 5)
	{
		if (dup == tab[row][i])
			return (1);
		dup = tab[row][i];
		i++;
	}
	dup = 0;
	while (j < 5)
	{
		if (dup == tab[j][col])
			return (1);
		dup = tab[j][col];
		j++;
	}
	return (0);
}

int	ft_backtrack(int **tab, int row, int col)
{
	int	bul;

	bul = 1;
	if (row == 5)
		return (0);
	if (col == 4)
		return (ft_backtrack(tab, row + 1, 0));
	if (duplicate(tab, row, col) || 1)
	{
		printf("AAA\n");
		if(!is_valid(tab))
		{
			printf("AAA\n");
			return (ft_backtrack(tab, row, col + 1));
		}
		else
			return (1);
	}
	else
		write(1, "test\n", 5);
	return (0);
	
}

int	main(int argc, char **argv)
{
	int i;
	int j;
	int k;
	int **tab;

	j = 0;
	k = 0;
	i = 0;
	if (argc != 2)
	{
		write(2, "Args error\n", 10);
		return (0);
	}
	else if (ft_strlen(argv[1]) != 31)
	{
		write(2, "Input error\n", 10);
		return (0);
	}
	tab = malloc(6 * sizeof(int*));
	while (i < 6)
	{
		tab[i] = malloc(6 * sizeof(int));
		i++;
	}
	i = 0;
	while (j < 6)
	{
		i = 0;
		while (i < 6)
		{
			tab[j][i] = 0;
			i++;
		}
		j++;
	}
	j = 0;
	i = 0;
	while (j < 6)
	{
		if (j == 0 || j == 5)
		{
			i = 1;
			while (i < 5)
			{
				tab[j][i] = argv[1][k] - 48;
				i++;
				k += 2;
			}
		}
		else
		{
			i = 0;
			while (i < 6)
			{
				tab[j][i] = argv[1][k] - 48;
				i += 5;
				k += 2;
			}
		}
		j++;
	}
	if (!ft_backtrack(tab, 0, 0))
		write(1, "error: no solution found\n", 25);
	else
		write(1, ":o\n", 3);
	return 0;
}
