/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clindeck <clindeck@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:27:47 by clindeck          #+#    #+#             */
/*   Updated: 2024/09/26 13:27:28 by clindeck         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <errno.h>
# include <string.h>
# include <libgen.h>

void	print_error(const char *program_name, const char *file_name);
void	display_last_n_bytes(const char *program_name,
			const char *file_name, int num_bytes);
int		ft_strlen(char *str);

#endif
