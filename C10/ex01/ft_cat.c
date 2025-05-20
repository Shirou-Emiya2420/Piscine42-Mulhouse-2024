/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 09:12:00 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/22 14:13:50 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <libgen.h>
#include <string.h>

#define BUFFER_SIZE 29000

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	print_error(const char *program_name, const char *file_name)
{
	write(2, basename((char *)program_name),
		ft_strlen((char *)basename((char *)program_name)));
	write(2, ": ", 2);
	write(2, (char *)file_name, ft_strlen((char *)file_name));
	write(2, ": ", 2);
	write(2, strerror(errno), ft_strlen(strerror(errno)));
	write(2, "\n", 1);
}

void	ft_cat(const char *programme, const char *file_name)
{
	int		fd;
	ssize_t	bytes_read;
	char	buffer[BUFFER_SIZE];

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		print_error(programme, file_name);
		return ;
	}
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	if (bytes_read == -1)
		print_error(programme, file_name);
	if (close(fd) == -1)
		print_error(programme, file_name);
}

int	main(int argc, char const *argv[])
{
	int	i;

	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		ft_cat(argv[0], argv[i]);
		i++;
	}
	return (0);
}
