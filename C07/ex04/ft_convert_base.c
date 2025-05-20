/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:40:55 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/19 08:17:49 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	base_error(char *base);
int	ft_strlen(char *str);

int	nbr_lenght(int nbr, int base_len)
{
	int	i;

	i = 1;
	while (nbr >= base_len)
	{
		i++;
		nbr /= base_len;
	}
	return (i);
}

char	*ft_itoa_base(long nbr, char *base, int sign)
{
	char	*ret;
	int		base_len;
	int		i;
	int		len;

	base_len = ft_strlen(base);
	len = nbr_lenght(nbr, base_len);
	if (sign == -1)
		len++;
	else
		sign = 0;
	i = len;
	ret = (char *) malloc((len + 1) * sizeof(char));
	ret[i--] = 0;
	if (!ret)
		return (NULL);
	while (i + sign >= 0)
	{
		ret[i] = base[nbr % base_len];
		nbr /= base_len;
		i--;
	}
	if (sign == -1)
		ret[i] = '-';
	return (ret);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	num;
	int	sign;

	num = 0;
	if (base_error(base_from) || base_error(base_to))
		return (NULL);
	num = ft_atoi_base(nbr, base_from);
	if (num < 0)
		sign = -1;
	else
		sign = 1;
	return (ft_itoa_base(num * sign, base_to, sign));
}
