/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 08:20:42 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/19 08:24:46 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	if (ft_strlen(base) < 2)
		return (1);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
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

static int	ft_is_space_or_sign(char *str, int *i)
{
	int	sign;

	sign = 1;
	while (str[*i] == ' ' || (str[*i] >= 9 && str[*i] <= 13))
		(*i)++;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			sign = -sign;
		(*i)++;
	}
	return (sign);
}

static int	ft_base_index(char c, char *base)
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
