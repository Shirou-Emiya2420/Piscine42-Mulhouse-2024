/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:22:13 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/12 14:04:50 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	base_error(char *base)
{
	int	i;
	int	y;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		y = i + 1;
		while (base[y])
		{
			if (base[y] == base[i])
				return (1);
			y++;
		}
		i++;
	}
	if (i <= 1)
		return (1);
	return (0);
}

void	ft_putnbr_base(int nb, char *base)
{
	long	n;
	int		l;

	if (base_error(base))
		return ;
	n = nb;
	l = ft_strlen(base);
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 1)
		ft_putnbr_base(n / l, base);
	ft_putchar(base[n % l]);
}

// int	main(void)
// {
// 	ft_putnbr_base(256, "0123456789AABCDEF");
// 	return (0);
// }
