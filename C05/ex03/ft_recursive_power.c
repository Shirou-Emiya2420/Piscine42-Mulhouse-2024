/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:31:59 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/18 12:56:14 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}

// int	main(void)
// {
// 	printf("%d\n", ft_recursive_power(5, 1));
// 	printf("%d\n", ft_recursive_power(5, 2));
// 	printf("%d\n", ft_recursive_power(5, 3));
// 	printf("%d\n", ft_recursive_power(5, 4));
// 	return (0);
// }
