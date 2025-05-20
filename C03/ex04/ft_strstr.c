/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 09:51:01 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/11 08:44:00 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	y;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		y = 0;
		while (str[i + y] == to_find[y] && to_find[y])
			y++;
		if (to_find[y] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>

// int main(int argc, char *argv[])
// {
//     printf("%s\n", ft_strstr(argv[argc - 2], argv[argc - 1]));
//     printf("%s\n", strstr(argv[argc - 2], argv[argc - 1]));
//     return 0;
// }