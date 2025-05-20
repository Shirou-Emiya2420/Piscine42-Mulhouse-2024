/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:07:38 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/07 14:25:39 by clindeck         ###   ########.fr       */
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
			if ((i == 1 && j == 1) || (i == 1 && j == y) || (i == x && j == 1)
				|| (i == x && j == y))
				ft_putchar('o');
			if ((i != 1 && j == 1 && i != x) || (i != 1 && j == y && i != x))
				ft_putchar('-');
			if ((j != 1 && i == 1 && j != y) || (j != 1 && i == x && j != y))
				ft_putchar('|');
			if ((i != x && i != 1 && j != y && j != 1))
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		i = 1;
		j++;
	}
}
