/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:15:37 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/17 08:46:15 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		++i;
	}
	return (str);
}

// #include <stdio.h>

// int main(int argc, char *argv[])
// {
//     char    *str = ft_strlowcase(argv[argc - 1]);

//     printf("%s\n", str);
//     return 0;
// }
