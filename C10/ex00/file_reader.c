/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_reader.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 08:33:04 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/20 09:07:10 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char const *argv[])
{
	int		fd;
	char	c;
	ssize_t	bytes_read;

	if (argc > 2)
		write(2, "Too many arguments.", 20);
	else if (argc < 2)
		write(2, "File name missing.", 19);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			write(2, "Cannot read file.", 18);
			return (1);
		}
		bytes_read = read(fd, &c, 1);
		while (bytes_read > 0)
		{
			write(1, &c, 1);
			bytes_read = read(fd, &c, 1);
		}
		close(fd);
	}
	return (0);
}
