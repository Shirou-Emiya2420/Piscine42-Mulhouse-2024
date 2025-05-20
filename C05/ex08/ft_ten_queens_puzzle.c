/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 09:36:03 by matgalla          #+#    #+#             */
/*   Updated: 2024/09/26 14:06:59 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_possible(int tab[10], int lig, int col)
{
	int	i;

	i = 0;
	while (i < lig)
	{
		if (tab[i] == col || (i - tab[i]) == (lig - col) || \
			(i + tab[i]) == (lig + col))
			return (0);
		i++;
	}
	return (1);
}

void	ft_print_solutions(int tab[10])
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_ten_queens_place(int tab[10], int lig, int *nb_sol)
{
	int	col;

	if (lig == 10)
	{
		ft_print_solutions(tab);
		*nb_sol += 1;
		return ;
	}
	col = 0;
	while (col < 10)
	{
		if (ft_possible(tab, lig, col))
		{
			tab[lig] = col;
			ft_ten_queens_place(tab, lig + 1, nb_sol);
		}
		col++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	tab[10];
	int	i;
	int	nb_sol;

	nb_sol = 0;
	i = 0;
	while (i < 10)
	{
		tab[i] = -1;
		i++;
	}
	ft_ten_queens_place(tab, 0, &nb_sol);
	return (nb_sol);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_ten_queens_puzzle());
// 	return (0);
// }
