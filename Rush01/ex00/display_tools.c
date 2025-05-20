/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgalla <matgalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:45:57 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/15 17:34:45 by matgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	show_mat(int n, int **mat)
{
	int	i;
	int	y;

	i = 0;
	while (i < n)
	{
		y = 0;
		while (y < n)
		{
			ft_putchar(mat[i][y] + '0');
			y++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	show_tab(int n, int *tab)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i]);
		i++;
	}
}
