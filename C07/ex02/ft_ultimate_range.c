/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:10:53 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/19 08:26:14 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*new_int;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	new_int = malloc(sizeof(int) * size);
	if (!new_int)
		return (-1);
	i = 0;
	while (min < max)
	{
		new_int[i] = min;
		min++;
		i++;
	}
	*range = new_int;
	return (size);
}
