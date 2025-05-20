/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:55:38 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/09 16:39:34 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	half;

	i = 0;
	temp = 0;
	half = size / 2;
	while (half-- > 0)
	{
		temp = tab[i];
		tab[i++] = tab[size - 1];
		tab[--size] = temp;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	tab[4] = {1, 2, 3, 4};
// 	int	size;
// 	int	i;

// 	i = 0;
// 	size = 4;
// 	ft_rev_int_tab(tab, size);
// 	while (i < size)
// 	{
// 		printf("-%d\n", i);
// 		printf("%d\n", tab[i]);
// 		i++;
// 	}
// 	return (0);
// }
