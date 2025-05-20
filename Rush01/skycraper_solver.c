#include "structs.h"

int	solve_skyscraper(t_game *game, int row, int col)
{
	int	num;

	if (row == game->n)
		return (1);
	if (col == game->n)
		return (solve_skyscraper(game, row + 1, 0));
	if (game->mat_base[row][col] != 0)
		return (solve_skyscraper(game, row, col + 1));
	num = 0;
	while (++num <= game->n)
	{
		if (!is_in_row(game->mat_base, row, num, game->n) &&
		    !is_in_col(game->mat_base, col, num, game->n))
		{
			game->mat_base[row][col] = num;
			if (check_visibility(game->mat_base, game->mat_bis, game->n))
			{
				if (solve_skyscraper(game, row, col + 1))
					return (1);
			}
			game->mat_base[row][col] = 0;
		}
	}
	return (0);
}
