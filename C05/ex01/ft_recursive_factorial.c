/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:18:04 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/19 11:17:15 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
		nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}

// int	main(void)
// {
// 	printf("%d\n", ft_recursive_factorial(-10));
// 	printf("%d\n", ft_recursive_factorial(8));
// 	printf("%d\n", ft_recursive_factorial(80));
// 	printf("%d\n", ft_recursive_factorial(0));
// 	return (0);
// }
