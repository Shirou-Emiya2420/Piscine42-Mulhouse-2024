/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgalla <matgalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:44:36 by vielblin          #+#    #+#             */
/*   Updated: 2024/09/15 18:52:17 by matgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"

static int	*ft_error(int *tab)
{
	if (tab)
		free(tab);
	write(2, "Error\n", 6);
	return (NULL);
}

static int	ft_is_space(char c)
{
	return (c == '\f' || c == '\n' || c == '\r' || c == '\t'
		|| c == '\v' || c == ' ');
}

int	*ft_convert_to_tab(char *argv, int total_constraints)
{
	int	*tab;
	int	i;
	int	j;

	i = 0;
	j = 0;
	tab = malloc(total_constraints * sizeof(int));
	if (!tab)
		return (NULL);
	while (j < total_constraints)
	{
		while (ft_is_space(argv[i]))
			i++;
		if (argv[i] >= '0' && argv[i] <= '9')
		{
			tab[j] = argv[i] - '0';
			if (tab[j] > total_constraints / 4 || tab[j] == 0)
				return (ft_error(tab));
			i++;
			j++;
		}
	}
	return (tab);
}

int	*ft_array_to_tab(t_game *my_game, char *argv)
{
	int	i;
	int	arg_n;

	i = 0;
	arg_n = 0;
	while (argv[i])
	{
		while (ft_is_space(argv[i]))
			i++;
		if (argv[i] >= '0' && argv[i] <= '9')
		{
			arg_n++;
			i++;
		}
		if (!ft_is_space(argv[i]) && argv[i] != 0)
			return (ft_error(NULL));
	}
	if (arg_n % 4 != 0)
		return (ft_error(NULL));
	else
		my_game->n = arg_n / 4;
	return (ft_convert_to_tab(argv, arg_n));
}

int	args_gestion(t_game *game, int argc, char **argv)
{
	int	*tab;

	tab = ft_array_to_tab(game, argv[argc - 1]);
	if (!tab)
		return (1);
	fill_col_row(game, tab);
	free(tab);
	return (0);
}
