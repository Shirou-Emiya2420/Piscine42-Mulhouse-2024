/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_short_int_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:34:03 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/09 16:40:23 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_ok(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
			return (1);
		i++;
	}
	return (0);
}

void	ft_short_int_tab(int *tab, int size)
{
	int	i;
	int	buff;

	i = 0;
	if (size <= 1)
		return ;
	while (ft_is_ok(tab, size))
	{
		if (!(i < size - 1))
		{
			i = 0;
		}
		if (tab[i] > tab[i + 1])
		{
			buff = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = buff;
		}
		i++;
	}
}

// int main()
// {
// 	int	tab[10] = {40, 40, 20, 12, 22, 3, 80, 98, 21, 2};
// 	int	size;
// 	int	i;

// 	i = 0;
// 	size = 10;
// 	ft_short_int_tab(tab, size);
// 	while (i < size)
// 	{
// 		printf("-%d\n", i);
// 		printf("%d\n", tab[i]);
// 		i++;
// 	}
// 	return (0);
// }
