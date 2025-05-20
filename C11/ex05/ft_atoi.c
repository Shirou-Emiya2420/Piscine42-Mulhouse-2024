/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:45:09 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/25 09:53:07 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

static int	ft_is_space(char c)
{
	return (c == '\f'
		|| c == '\n'
		|| c == '\r'
		|| c == '\t'
		|| c == '\v'
		|| c == ' ');
}

static int	ft_is_negative(char *str, int *i)
{
	int	b;

	b = 0;
	while (str[*i] && (str[*i] == '-' || str[*i] == '+'))
	{
		if (str[*i] == '-')
			b++;
		*i += 1;
	}
	if (b % 2 == 1)
		return (-1);
	return (1);
}

static int	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	res;
	int	start;
	int	end;
	int	mult;
	int	negative;

	mult = 1;
	start = 0;
	res = 0;
	while (ft_is_space(str[start]) && str[start])
		start++;
	negative = ft_is_negative(str, &start);
	end = start;
	while (str[end] && ft_is_number(str[end]))
		end++;
	while (end-- > start)
	{
		res += (str[end] - 48) * mult;
		mult *= 10;
	}
	res *= negative;
	return (res);
}
