#include "libp.h"

void	_putendl_fd(char const *s, int fd)
{
	_putstr_fd(s, fd);
	_putchar_fd('\n', fd);
}

/* Outputs the string s to the file descriptor fd followed by a ’\n’. */

