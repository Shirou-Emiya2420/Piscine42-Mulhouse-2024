#include "ft_tail.h"

void	print_error(const char *program_name, const char *file_name)
{
	write(2, basename((char *)program_name),
		ft_strlen((char *)basename((char *)program_name)));
	write(2, ": ", 2);
	write(2, file_name, ft_strlen((char *)file_name));
	write(2, ": ", 2);
	write(2, strerror(errno), ft_strlen(strerror(errno)));
	write(2, "\n", 1);
}
