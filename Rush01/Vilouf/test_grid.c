void	col1(int **grid)
{
	int	col;
	int	row;
	int	visible;
	int	max_height;

	col = 0;
	while (col < game->n)
	{
		visible = 0;
		max_height = 0;
		row = -1;
		while (++row < game->n)
		{
			if (grid[row][col] > max_height)
			{
				max_height = grid[row][col];
				visible++;
			}
		}
		if (visible != contrainte[col])
			return (0);
		col++;
	}
	return (1);
}

void	col2(int **grid)
{
	int	col;
	int	row;
	int	visible;
	int	max_height;

	col = 0;
	while (col < game->n)
	{
		visible = 0;
		max_height = 0;
		row = -1;
		while (++row < game->n)
		{
			if (grid[row][col] > max_height)
			{
				max_height = grid[row][col];
				visible++;
			}
		}
		if (visible != contrainte[col])
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
	while (row < game->n)
	{
		visible = 0;
		max_height = 0;
		col = -1;
		while (++col < game->n)
		{
			if (grid[row][col] > max_height)
			{
				max_height = grid[row][col];
				visible++;
			}
		}
		if (visible != contrainte[row])
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
	while (row < game->n)
	{
		visible = 0;
		max_height = 0;
		col = -1;
		while (++col < game->n)
		{
			if (grid[row][col] > max_height)
			{
				max_height = grid[row][col];
				visible++;
			}
		}
		if (visible != contrainte[row])
			return (0);
		row++;
	}
	return (1);
}

int	is_valid(int **game)
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