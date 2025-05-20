#ifndef LIB_H
# define LIB_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_dict_entry 
{
    int number;
    char *text;
}               t_dict_entry;

#endif