/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:00:06 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/18 12:37:07 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb < 0)
		return (0);
	res = 1;
	i = nb;
	while (i > 0)
	{
		res *= i;
		i--;
	}
	return (res);
}

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(0));
// 	printf("%d\n", ft_iterative_factorial(-10));
// 	printf("%d\n", ft_iterative_factorial(8));
// 	printf("%d\n", ft_iterative_factorial(80));
// 	return (0);
// }
