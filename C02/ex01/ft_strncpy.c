/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 09:49:32 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/05 10:28:24 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	chaine1[10] = "coucou";
// 	char	chaine2[10] = "nihihi";

// 	ft_strncpy(chaine2, chaine1, 4);
// 	printf("%s", chaine2);
// }
