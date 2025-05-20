/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgalla <matgalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 09:54:20 by tnezet            #+#    #+#             */
/*   Updated: 2024/09/15 17:34:55 by matgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"

// void	col1(t_game *game, int **grid, int *contrainte)
// {
// 	int	col;
// 	int	row;
// 	int	visible;
// 	int	max_height;

// 	col = 0;
// 	while (col < game->n)
// 	{
// 		visible = 0;
// 		max_height = 0;
// 		row = -1;
// 		while (++row < game->n)
// 		{
// 			if (grid[row][col] > max_height)
// 			{
// 				max_height = grid[row][col];
// 				visible++;
// 			}
// 		}
// 		if (visible != contrainte[col])
// 			return (0);
// 		col++;
// 	}
// 	return (1);
// }

// void	col2(t_game *game, int **grid, int *contrainte)
// {
// 	int	col;
// 	int	row;
// 	int	visible;
// 	int	max_height;

// 	col = 0;
// 	while (col < game->n)
// 	{
// 		visible = 0;
// 		max_height = 0;
// 		row = -1;
// 		while (++row < game->n)
// 		{
// 			if (grid[row][col] > max_height)
// 			{
// 				max_height = grid[row][col];
// 				visible++;
// 			}
// 		}
// 		if (visible != contrainte[col])
// 			return (0);
// 		col++;
// 	}
// 	return (1);
// }

// int	row1(t_game *game, int **grid, int *contrainte)
// {
// 	int	row;
// 	int	col;
// 	int	visible;
// 	int	max_height;

// 	row = 0;
// 	while (row < game->n)
// 	{
// 		visible = 0;
// 		max_height = 0;
// 		col = -1;
// 		while (++col < game->n)
// 		{
// 			if (grid[row][col] > max_height)
// 			{
// 				max_height = grid[row][col];
// 				visible++;
// 			}
// 		}
// 		if (visible != contrainte[row])
// 			return (0);
// 		row++;
// 	}
// 	return (1);
// }

// int	row2(t_game *game, int **grid, int *contrainte)
// {
// 	int	row;
// 	int	col;
// 	int	visible;
// 	int	max_height;

// 	row = 1;
// 	while (row < game->n)
// 	{
// 		visible = 0;
// 		max_height = 0;
// 		col = -1;
// 		while (++col < game->n)
// 		{
// 			if (grid[row][col] > max_height)
// 			{
// 				max_height = grid[row][col];
// 				visible++;
// 			}
// 		}
// 		if (visible != contrainte[row])
// 			return (0);
// 		row++;
// 	}
// 	return (1);
// }

// int	is_valid(t_game *game)
// {
// 	if (!col1(game, game->mat_base, game->test->col_1))
// 		return (0);
// 	if (!col2(game, game->mat_base, game->test->col_2))
// 		return (0);
// 	if (!row1(game, game->mat_base, game->test->row_1))
// 		return (0);
// 	if (!row2(game, game->mat_base, game->test->row_2))
// 		return (0);
// 	return (1);
// }

// static int	*ft_error(int *tab)
// {
// 	if (tab)
// 		free(tab);
// 	write(2, "Error", 5);
// 	return (NULL);
// }

// static int	ft_is_space(char c)
// {
// 	return (c == '\f'
// 		|| c == '\n'
// 		|| c == '\r'
// 		|| c == '\t'
// 		|| c == '\v'
// 		|| c == ' ');
// }

// int	*ft_convert_to_tab(char *argv, int n)
// {
// 	int	*tab;
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	tab = malloc(n * sizeof(int));
// 	if (!tab)
// 		return (NULL);
// 	while (j < n)
// 	{
// 		while (ft_is_space(argv[i]))
// 			i++;
// 		if (argv[i] >= '0' && argv[i] <= '9')
// 		{
// 			tab[j] = argv[i] - 48;
// 			if (tab[j] > n / 4 || tab[j] == 0)
// 				return (ft_error(tab));
// 			i++;
// 			j++;
// 		}
// 	}
// 	return (tab);
// }

// int	*ft_array_to_tab(t_game *my_game, char *argv)
// {
// 	int	i;
// 	int	arg_n;

// 	i = 0;
// 	arg_n = 0;
// 	while (argv[i])
// 	{
// 		while (ft_is_space(argv[i]))
// 			i++;
// 		if (argv[i] >= '0' && argv[i] <= '9')
// 		{
// 			arg_n++;
// 			i++;
// 		}
// 		if (!ft_is_space(argv[i]) && argv[i] != 0)
// 			return (ft_error(NULL));
// 	}
// 	if (arg_n % 4 != 0)
// 		return (ft_error(NULL));
// 	else
// 		my_game->n = arg_n / 4;
// 	return (ft_convert_to_tab(argv, arg_n));
// }

// int	main(int argc, char **argv)
// {
// 	int	*tab;
// 	t_game game;

// 	tab = ft_array_to_tab(&game, argv[argc - 1]);
// 	if (!tab)
// 		return (1);
// 	int	i = 0;
// 	while (tab[i] < game.n * 4)
// 	{
// 		printf("%d, %d\n", tab[i], game.n);
// 		i++;
// 	}
// 	free(tab);
// 	return (0);
// }
