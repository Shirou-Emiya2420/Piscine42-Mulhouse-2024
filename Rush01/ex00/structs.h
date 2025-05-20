/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgalla <matgalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 11:30:46 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/15 18:50:38 by matgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_mat_bis
{
	int	*row_1;
	int	*row_2;
	int	*col_1;
	int	*col_2;
}				t_mat_bis;

typedef struct s_game
{
	int			n;
	t_mat_bis	mat_bis;
	int			**mat_base;
}				t_game;

void	ft_putchar(char c);
int		*ft_array_to_tab(t_game *my_game, char *argv);
void	fill_col_row(t_game *game, int *tab);
int		**mat_maker(int n);
int		args_gestion(t_game *game, int argc, char **argv);
void	show_mat(int n, int **mat);

#endif