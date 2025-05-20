/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:15:37 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/17 08:46:11 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		++i;
	}
	return (str);
}

// #include <stdio.h>

// int main(int argc, char *argv[])
// {
//     char    *str = ft_strupcase(argv[argc - 1]);

//     printf("%s\n", str);
//     return 0;
// 