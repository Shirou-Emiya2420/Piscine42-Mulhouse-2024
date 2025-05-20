/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 08:14:28 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/26 10:59:33 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*new_int_tab;
	int	i;

	new_int_tab = (int *)malloc(sizeof(int) * length);
	if (new_int_tab == NULL)
		return (NULL);
	i = -1;
	while (++i < length)
		new_int_tab[i] = f(tab[i]);
	return (new_int_tab);
}
