/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:04:04 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/25 10:19:36 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	char	*tmp;
	int		sorted;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = -1;
		while (tab[++i + 1])
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				sorted = 0;
			}
		}
	}
}

// #include <stdio.h>

// void	print_tab(char **tab)
// {
// 	int i = 0;

// 	while (tab[i] != NULL)
// 	{
// 		printf("%s\n", tab[i]);
// 		i++;
// 	}
// }

// int	main(void)
// {
// 	char *tab[] = {"banana", "apple", "cherry", "date", "fig", NULL};

// 	printf("Avant le tri:\n");
// 	print_tab(tab);

// 	ft_sort_string_tab(tab);

// 	printf("\nAprès le tri:\n");
// 	print_tab(tab);
// 	return (0);
// }
