/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:45:09 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/12 14:40:58 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

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

	if (ft_strlen(base) <= 1)
		return (1);
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
	return (0);
}

int	ft_is_space_or_sign(char *str, int *i)
{
	int	sign;

	sign = 1;
	while (str[*i] == ' ' || str[*i] == '\t' || str[*i] == '\n'
		|| str[*i] == '\v' || str[*i] == '\f' || str[*i] == '\r')
		(*i)++;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			sign = -sign;
		(*i)++;
	}
	return (sign);
}

int	ft_base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	res;
	int	base_len;
	int	sign;
	int	index;

	if (base_error(base))
		return (0);
	i = 0;
	res = 0;
	base_len = ft_strlen(base);
	sign = ft_is_space_or_sign(str, &i);
	while (str[i])
	{
		index = ft_base_index(str[i], base);
		if (index == -1)
			break ;
		res = res * base_len + index;
		i++;
	}
	return (res * sign);
}
