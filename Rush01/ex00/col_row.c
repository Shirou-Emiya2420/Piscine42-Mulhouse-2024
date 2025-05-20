/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   col_row.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgalla <matgalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:15:59 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/15 15:58:59 by matgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"

static void	mat_bis_malloc(t_mat_bis *mat_bis, int n)
{
	mat_bis->col_1 = (int *)malloc(sizeof(int) * n);
	if (mat_bis->col_1 == NULL)
		return ;
	mat_bis->col_2 = (int *)malloc(sizeof(int) * n);
	if (mat_bis->col_2 == NULL)
		return ;
	mat_bis->row_1 = (int *)malloc(sizeof(int) * n);
	if (mat_bis->row_1 == NULL)
		return ;
	mat_bis->row_2 = (int *)malloc(sizeof(int) * n);
	if (mat_bis->row_2 == NULL)
		return ;
}

static void	fill_row(int n, t_mat_bis *mat_bis, int *tab, int *y)
{
	int	i;

	i = 0;
	while (i < n)
	{
		mat_bis->row_1[i] = tab[i + *y];
		i++;
	}
	*y += i;
	i = 0;
	while (i < n)
	{
		mat_bis->row_2[i] = tab[i + *y];
		i++;
	}
	*y += i;
}

static void	fill_col(int n, t_mat_bis *mat_bis, int *tab, int *y)
{
	int	i;

	i = 0;
	while (i < n)
	{
		mat_bis->col_1[i] = tab[i + *y];
		i++;
	}
	*y += i;
	i = 0;
	while (i < n)
	{
		mat_bis->col_2[i] = tab[i + *y];
		i++;
	}
	*y += i;
}

void	fill_col_row(t_game *game, int *tab)
{
	int	y;

	y = 0;
	mat_bis_malloc(&game->mat_bis, game->n);
	fill_row(game->n, &game->mat_bis, tab, &y);
	fill_col(game->n, &game->mat_bis, tab, &y);
}
