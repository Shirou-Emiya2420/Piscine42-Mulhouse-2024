/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ma_queue.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 08:54:38 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/26 14:46:20 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	parsing_argv(int argc, char **argv, t_type *val)
{
	if (argc != 4)
		return (0);
	val->op = argv[2][0];
	if (val->op != '+' && val->op != '-' && val->op != '/'
		&& val->op != '*' && val->op != '%')
	{
		write(2, "0\n", 2);
		return (0);
	}
	val->nb_1 = ft_atoi(argv[1]);
	val->nb_2 = ft_atoi(argv[3]);
	if (val->op == '/' && val->nb_2 == 0)
	{
		write(2, "Stop : division by zero\n", 24);
		return (0);
	}
	if (val->op == '%' && val->nb_2 == 0)
	{
		write(2, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (1);
}

int	ft_oper(int nb_1, int nb_2, char op)
{
	if (op == '+')
		return (nb_1 + nb_2);
	if (op == '-')
		return (nb_1 - nb_2);
	if (op == '*')
		return (nb_1 * nb_2);
	if (op == '/')
		return (nb_1 / nb_2);
	if (op == '%')
		return (nb_1 % nb_2);
	return (0);
}
