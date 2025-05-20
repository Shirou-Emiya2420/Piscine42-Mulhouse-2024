/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 09:12:00 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/26 13:27:26 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

// Fonction pour calculer la longueur d'une chaîne de caractères
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	display_last_n_bytes(const char *program_name, const char *file_name, int num_bytes)
{
	int		fd;
	ssize_t	bytes_read;
	char	*buffer;
	ssize_t	file_size = 0;
	char	temp_buf[4096]; // Tampon temporaire pour compter la taille

	// Ouvrir le fichier
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		print_error(program_name, file_name);
		return;
	}

	// Lire tout le fichier pour calculer sa taille totale
	while ((bytes_read = read(fd, temp_buf, sizeof(temp_buf))) > 0)
		file_size += bytes_read;

	// Si erreur de lecture
	if (bytes_read == -1)
	{
		print_error(program_name, file_name);
		close(fd);
		return;
	}

	// Repositionner le curseur au début
	close(fd);
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		print_error(program_name, file_name);
		return;
	}

	// Allouer un buffer pour lire les derniers 'n' octets
	buffer = (char *)malloc(sizeof(char) * num_bytes);
	if (!buffer)
	{
		print_error(program_name, file_name);
		close(fd);
		return;
	}

	// Si la taille du fichier est inférieure à num_bytes, ajuster num_bytes
	if (file_size < num_bytes)
		num_bytes = file_size;

	// Lire et ignorer les premiers octets pour ne lire que les derniers 'n' octets
	if (file_size > num_bytes)
	{
		while (file_size > num_bytes)
		{
			bytes_read = read(fd, temp_buf, sizeof(temp_buf));
			if (bytes_read == -1)
			{
				print_error(program_name, file_name);
				free(buffer);
				close(fd);
				return;
			}
			file_size -= bytes_read;
		}
	}
	bytes_read = read(fd, buffer, num_bytes);
	if (bytes_read > 0)
		write(1, buffer, bytes_read);

	// Libérer la mémoire et fermer le fichier
	free(buffer);
	close(fd);
}

int	main(int argc, char **argv)
{
	int		num_bytes;
	int		i;

	if (argc < 4 || argv[1][0] != '-' || argv[1][1] != 'c')
	{
		write(2, "Usage: ./ft_tail -c [num_bytes] [file...]\n", 42);
		return (1);
	}

	// Convertir le nombre d'octets à afficher
	num_bytes = atoi(argv[2]);
	if (num_bytes <= 0)
	{
		write(2, "Error: invalid number of bytes.\n", 31);
		return (1);
	}

	// Boucler sur les fichiers fournis en argument
	i = 3;
	while (i < argc)
	{
		// Si plusieurs fichiers, afficher le nom du fichier
		if (argc > 4)
		{
			write(1, "==> ", 4);
			write(1, argv[i], ft_strlen(argv[i]));
			write(1, " <==\n", 5);
		}
		display_last_n_bytes(argv[0], argv[i], num_bytes);
		i++;
		// Ajouter une ligne vide entre les sorties si plusieurs fichiers
		if (i < argc)
			write(1, "\n", 1);
	}
	return (0);
}

