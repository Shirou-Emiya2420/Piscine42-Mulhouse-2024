/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 07:22:47 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/17 16:44:07 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char const *argv[])
{
	int	i;

	i = 0;
	while (argv[argc - argc][i])
	{
		ft_putchar(argv[argc - argc][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
