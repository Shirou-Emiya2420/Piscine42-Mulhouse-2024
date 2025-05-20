/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:07:38 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/07 14:49:58 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (j <= y)
	{
		while (i <= x)
		{
			if ((i == 1 && j == 1) || (i == x && j == y && j != 1 && x != 1))
				ft_putchar('A');
			if ((i == 1 && j == y && j != 1) || (i == x && j == 1 && x != 1))
				ft_putchar('C');
			if ((i != x && j == 1 && i != 1) || (i != x && j == y && i != 1)
				|| (j != 1 && j != y && i == 1)
				|| (j != 1 && j != y && i == x))
				ft_putchar('B');
			if ((i != x && i != 1 && j != y && j != 1))
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		i = 1;
		j++;
	}
}
