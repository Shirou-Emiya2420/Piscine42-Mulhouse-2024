/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:23:41 by vielblin          #+#    #+#             */
/*   Updated: 2024/09/14 16:25:49 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	int	**tab;
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	if (argc != 2)
		return (0);
	tab = malloc(6 * sizeof(int *));
	while (i < 6)
	{
		tab[i] = malloc(6 * sizeof(int));
		i++;
	}
	while (j < 6)
	{
		i = 1;
		while (i < 5)
		{
			tab[j][i] = argv[1][k] - 48;
			i++;
			k += 2;
		}
		j += 5;
	}
	j = 1;
	i = 0;
	while (i < 6)
	{
		j = 1;
		while (j < 5)
		{
			tab[j][i] = argv[1][k] - 48;
			j++;
			k += 2;
		}
		i += 5;
	}
	i = 0;
	j = 0;
	while (j < 6)
	{
		i = 0;
		while (i < 6)
		{
			ft_putchar(tab[j][i] + 48);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
	return (0);
}

// void	show_row_col(t_mat_bis *mat_bis, int n)
// {
// 	int	i;
// 	int	y;

// 	i = -1;
// 	y = 0;
// 	while (i < n +1)
// 	{
// 		if (i == -1 || i == n)
// 			ft_putchar(' ');
// 		else
// 			ft_putchar(mat_bis->col_1[i] + 48);
// 		i++;
// 	}
// 	ft_putchar('\n');
// 	while (y < n)
// 	{
// 		i = -1;
// 		while (i < n +1)
// 		{
// 			if (i == -1)
// 				ft_putchar(mat_bis->row_1[y] + 48);
// 			else if (i == n)
// 				ft_putchar(mat_bis->row_2[y] + 48);
// 			else
// 				ft_putchar(' ');
// 			i++;
// 		}
// 		ft_putchar('\n');
// 		y++;
// 	}
// 	i = -1;
// 	while (i < n +1)
// 	{
// 		if (i == -1 || i == n)
// 			ft_putchar(' ');
// 		else
// 			ft_putchar(mat_bis->col_2[i] + 48);
// 		i++;
// 	}
// 	ft_putchar('\n');
// }
