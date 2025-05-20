#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_recup_str(char *str)
{
	int		i;
	int		j;
	int		len;
	char	*ret;

	i = 0;
	j = 0;
	len = ft_strlen(str);
	ret = malloc(sizeof(char) * len + 1);
	if (!ret)
		return (NULL);
	ret[len] = '\0';
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 43)
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret[j] = str[i];
		i++;
		j++;
	}
	return (ret);
}

int *ft_tab_str(char *str, int *tab)
{
	int len;
	int n;
	int	i;
	int	j;

	i = 0;
	n = 0;
	j = 0;
	len = ft_strlen(str);
	tab = malloc(sizeof(int) * ((len / 3) + (len % 3)));
	if (!tab)
		return (NULL);
	while(str[i])
	{
		n = (n * 10) + str[i] - '0';
		if ((len - i - 1) % 3 == 0)
		{
			tab[j] = n;
			n = 0;
			j++;
		}
		i++;
	}
	free (tab);
	return (tab);
}

int	*ft_return_tab(char *str)
{
	int	*tab;
	
	str = ft_recup_str(str);
	tab = ft_tab_str(str, tab);
	return (tab);
}

