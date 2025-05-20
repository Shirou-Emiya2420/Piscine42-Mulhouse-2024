
#include "ft_h.h"

int	open_file(char *src)
{
	int	fd;

	fd = open(src, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.", 18);
		return (1);
	}
	return (fd);
}

char	read_file(int fd)
{
	char	c;
	ssize_t	bytes_read;

	bytes_read = read(fd, &c, 1);
	if (bytes_read > 0)
		c = 0;
	return (c);
}

void	size_t_tab(int fd, t_number	*num)
{
	int			y;
	int			c;

	y = 0;
	c = read_file(fd);
	while (c > 0)
	{
		if (c == '\n')
			y++;
		c = read_file(fd);
	}
	num->size = y;
	num->tab = malloc(sizeof(t_value) * y);
	close(fd);

}

void	remp_tab(t_number *num, int fd)
{
	int		y;
	int		x;
	char	c;

	x = 0;
	c = read_file(fd);
	while (c != 32 || c != ':')
	{
		num->tab[x].keys[y] = c;
		y++;
		c = read_file(fd);
	}
	while (c == 32 || c == ':')
		c = read_file(fd);
	y = 0;
	while (c != '\n')
	{
		num->tab[x].value[y] = c;
		y++;
		c = read_file(fd);
	}
}

void	ft_parse_dico(t_number *num, char *src)
{
	int	fd;

	fd = open_file(src);
	size_t_tab(fd, num);
	fd = open_file(src);
	remp_tab(num, fd);
	close(fd);
}
