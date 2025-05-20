/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrice.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matgalla <matgalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:14:22 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/15 17:32:20 by matgalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"

int	**mat_maker(int n)
{
	int	**new_mat;
	int	i;
	int	j;

	new_mat = (int **)malloc(sizeof(int *) * n);
	if (new_mat == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		new_mat[i] = (int *)malloc(sizeof(int) * n);
		if (new_mat[i] == NULL)
		{
			while (--i >= 0)
				free(new_mat[i]);
			free(new_mat);
			return (NULL);
		}
		j = 0;
		while (j < n)
			new_mat[i][j++] = 0;
		i++;
	}
	return (new_mat);
}
