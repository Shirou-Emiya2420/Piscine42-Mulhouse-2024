
#include "ft_h.h"

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