/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 08:35:36 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/26 14:38:20 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	croissant;
	int	decroissant;

	if (length < 2)
		return (1);
	croissant = 1;
	decroissant = 1;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			decroissant = 0;
		if (f(tab[i], tab[i + 1]) > 0)
			croissant = 0;
		i++;
	}
	return (croissant || decroissant);
}
