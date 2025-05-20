/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgalla <matgalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:08:35 by matgalla          #+#    #+#             */
/*   Updated: 2024/09/15 20:34:50 by matgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"

int	verifie_ligne(t_game *ft_struct, int ligne, int valeur)
{
	int	colonne_actuelle;

	colonne_actuelle = 0;
	while (colonne_actuelle < ft_struct->n)
	{
		if (ft_struct->mat_base[ligne][colonne_actuelle] == valeur)
			return (1);
		colonne_actuelle++;
	}
	return (0);
}

int	verifie_colonne(t_game *ft_struct, int colonne, int valeur)
{
	int	ligne_actuelle;

	ligne_actuelle = 0;
	if (ft_struct == NULL || ft_struct->mat_base == NULL)
		return (1);
	if (ligne_actuelle >= ft_struct->n || colonne >= ft_struct->n
		|| ligne_actuelle < 0 || colonne < 0)
		return (1);
	while (ligne_actuelle < ft_struct->n)
	{
		if (ft_struct->mat_base[ligne_actuelle][colonne] == valeur)
			return (1);
		ligne_actuelle++;
	}
	return (0);
}

int	is_present(t_game *ft_struct, int ligne, int colonne, int valeur)
{
	return (verifie_ligne(ft_struct, ligne, valeur)
		|| verifie_colonne(ft_struct, colonne, valeur));
}

// int	is_safe(t_game *game, int row, int col, int value)
// {
// 	if (is_present(game, row, col, value))
// 		return (0);
// 	if (!verify_buildings_visibles(game, row, col))
// 		return (0);
// 	return (1);
// }

// int ft_backtracking(t_game *game, int row, int col)
// {
//     int value;

//     if (row == game->n)
//         return (1);
//     if (col == game->n)
//         return (ft_backtracking(game, row + 1, 0));
//     if (game->mat_base[row][col] != 0)
//         return (ft_backtracking(game, row, col + 1));
    
//     for (value = 1; value <= game->n; value++)
//     {
//         if (is_safe(game, row, col, value))
//         {
//             game->mat_base[row][col] = value;
//             // Debug: Print grid state after placing a value
//             printf("Placed %d at row %d, col %d\n", value, row, col);
//             show_mat(game->n, game->mat_base);
//             if (ft_backtracking(game, row, col + 1))
//                 return (1);
//             game->mat_base[row][col] = 0;
//         }
//     }
//     return (0);
// }


// int	ft_backtracking(t_game *game, int row, int col)
// {
// 	int	value;

// 	if (row == game->n)
// 		return (1);
// 	if (col == game->n)
// 		return (ft_backtracking(game, row + 1, 0));
// 	if (game->mat_base[row][col] != 0)
// 		return (ft_backtracking(game, row, col + 1));
// 	value = 1;
// 	while (value <= game->n)
// 	{
// 		if (is_safe(game, row, col, value))
// 		{
// 			game->mat_base[row][col] = value;
// 			if (ft_backtracking(game, row, col + 1))
// 				return (1);
// 			game->mat_base[row][col] = 0;
// 		}
// 		value++;
// 	}
// 	return (0);
// }
