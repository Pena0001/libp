#include "libp.h"

void	_putstr_fd(char const *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, _strlen(s));
}

/* _putstr_fd outputs string s to file descriptor fd */

