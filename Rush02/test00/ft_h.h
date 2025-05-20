
#ifndef LIB_H
# define LIB_H

# include <stdio.h>

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct	s_number
{
	int	*number;
	int	size;
	t_value	*tab;
}				t_number;
typedef struct	s_value
{
	char	*keys;
	char	*value;
}				t_value;

#endif