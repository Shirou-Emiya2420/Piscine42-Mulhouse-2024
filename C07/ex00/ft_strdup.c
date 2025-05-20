/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:31:10 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/21 10:30:33 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*new_string;
	int		lenght;

	lenght = 0;
	while (src[lenght])
		lenght++;
	new_string = malloc(sizeof(char) * (lenght + 1));
	if (new_string == NULL)
		return (NULL);
	ft_strcpy(new_string, src);
	return (new_string);
}
