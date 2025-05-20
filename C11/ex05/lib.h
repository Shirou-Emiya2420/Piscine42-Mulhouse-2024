/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 08:50:02 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/25 09:50:21 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <unistd.h>

typedef struct s_type
{
	int		nb_1;
	int		nb_2;
	char	op;
}		t_type;

int		ft_atoi(char *str);
int		parsing_argv(int argc, char **argv, t_type *val);
int		ft_oper(int nb_1, int nb_2, char op);
void	ft_putnbr(int nb);

#endif