#include "libp.h"

void	_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* Outputs the char c to the file descriptor fd. */

