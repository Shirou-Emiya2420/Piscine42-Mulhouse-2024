/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:31:59 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/18 12:49:36 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_power(5, 1));
// 	printf("%d\n", ft_iterative_power(5, 2));
// 	printf("%d\n", ft_iterative_power(5, 3));
// 	printf("%d\n", ft_iterative_power(5, 4));
// 	return (0);
// }
