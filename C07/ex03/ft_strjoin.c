/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 08:08:37 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/22 11:52:20 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	total_length(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += (ft_strlen(sep) * (size - 1));
	return (total_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_len;
	int		i;

	if (size == 0)
	{
		result = (char *)malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	total_len = total_length(size, strs, sep);
	result = (char *)malloc((total_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *strs1[] = {"Hello", "world", "from", "C"};
// 	char *sep1 = " ";
// 	char *result1 = ft_strjoin(4, strs1, sep1);
// 	printf("Test 1 result: %s\n", result1);
// 	free(result1);
// 	char *strs2[] = {"Solo"};
// 	char *sep2 = ", ";
// 	char *result2 = ft_strjoin(1, strs2, sep2);
// 	printf("Test 2 result: %s\n", result2);
// 	free(result2);
// 	char *strs3[] = {"This", "should", "not", "appear"};
// 	char *sep3 = ", ";
// 	char *result3 = ft_strjoin(0, strs3, sep3);
// 	printf("Test 3 result: '%s'\n", result3);
// 	free(result3);
// 	char *strs4[] = {"Hello", "", "World"};
// 	char *sep4 = "-";
// 	char *result4 = ft_strjoin(3, strs4, sep4);
// 	printf("Test 4 result: %s\n", result4);
// 	free(result4);

// 	return (0);
// }
