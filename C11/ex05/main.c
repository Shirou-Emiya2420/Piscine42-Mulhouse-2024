/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 08:45:05 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/26 11:23:56 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	main(int argc, char *argv[])
{
	t_type	val;
	int		res;

	if (argc != 4)
		return (0);
	if (parsing_argv(argc, argv, &val))
	{
		res = ft_oper(val.nb_1, val.nb_2, val.op);
		ft_putnbr(res);
		write(1, "\n", 1);
	}
	return (0);
}
