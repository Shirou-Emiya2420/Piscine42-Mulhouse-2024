/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:33:08 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/04 14:41:45 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// #include <stdio.h>

// int main()
// {
// 	int	a;
// 	int	b;

// 	a = 24;
// 	b = 10;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("%d\n%d", a, b);
// 	return 0;
// }
