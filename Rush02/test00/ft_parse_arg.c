#include "ft_h.h"

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
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret[j] = str[i];
		i++;
		j++;
	}
	return (ret);
}

int	ft_tab_str(t_number *num, char *str)
{
	int len;
	int n;
	int	i;

	i = 0;
	n = 0;
	num->size = 0;
	len = ft_strlen(str);
	num->number = malloc(sizeof(int) * ((len / 3) + (len % 3)));
	if (!num->number)
		return (1);
	while (str[i])
	{
		n = (n * 10) + str[i] - '0';
		if ((len - i - 1) % 3 == 0)
		{
			num->number[num->size] = n;
			n = 0;
			num->size++;
		}
		i++;
	}
	return (0);
}

int	ft_return_tab(t_number *num, char *arg)
{
	char	*str;

	str = ft_recup_str(arg);
	if (!str)
		return (1);
	ft_tab_str(num, str);
	if (!num->number)
		return (1);
	free(str);
	return (0);
}

int main(int argc, char *argv[])
{
	t_number	test;

	ft_return_tab(&test, argv[argc - 1]);
	for (int i = 0; i < test.size; i++)
	{
		printf("%d\n", test.number[i]);
	}
	return 0;
}

