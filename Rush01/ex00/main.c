/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgalla <matgalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:25:13 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/15 20:34:57 by matgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"

int	free_all(t_game *my_game)
{
	int	i;

	i = my_game->n;
	while (--i >= 0)
		free(my_game->mat_base[i]);
	free(my_game->mat_base);
	free(my_game->mat_bis.col_1);
	free(my_game->mat_bis.col_2);
	free(my_game->mat_bis.row_1);
	free(my_game->mat_bis.row_2);
	return (0);
}

int	main(int argc, char *argv[])
{
	t_game	my_game;

	if (argc != 2)
	{
		write(2, "Error: invalid arguments\n", 25);
		return (1);
	}
	if (args_gestion(&my_game, argc, argv))
		return (1);
	my_game.mat_base = mat_maker(my_game.n);
	show_mat(my_game.n, my_game.mat_base);
	return (free_all(&my_game));
}
