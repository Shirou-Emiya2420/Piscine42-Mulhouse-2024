/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:44:50 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/24 16:03:09 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}t_stock_str;

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	while (src[i])
		i++;
	dup = (char *)malloc(sizeof(char) * (i + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	tab = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = 0;
		while (av[i][tab[i].size])
			tab[i].size++;
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (!tab[i].copy)
			return (NULL);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

// void	strcpy_var(int ac, char **av, char *str)
// {
// 	int	i;
// 	int	y;
// 	int	z;

// 	i = 0;
// 	z = 0;
// 	while (i++ < ac)
// 	{
// 		y = 0;
// 		while (av[i][y++])
// 		{
// 			str[z] = av[i][y];
// 		}	
// 	}
// 	str[z] = 0;
// }

// char	*true_strcpy(char *str)
// {
// 	int		i;
// 	char	*new_string;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	new_string = malloc(sizeof(char) * i + 1);
// 	if (new_string == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (str[i++])
// 		new_string[i] = str[i];
// 	new_string[i] = 0;
// 	return (new_string);
// }
