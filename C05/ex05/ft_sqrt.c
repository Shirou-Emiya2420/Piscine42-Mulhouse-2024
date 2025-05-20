/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:14:08 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/19 11:19:38 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i < nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// int main() {
//     int nombre = 36;
//     int racine = ft_sqrt(nombre);

//     if (racine != -1) {
//         printf("La racine carrée de %d est %d.\n", nombre, racine);
//     } else {
//         printf("%d n'est pas un carré parfait.\n", nombre);
//     }

//     return 0;
// }
