#include "libp.h"

void	_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		_putchar_fd('-', fd);
		n *= -1;
	}
	if (n >= 10)
	{
		_putnbr_fd(n / 10, fd);
		_putnbr_fd(n % 10, fd);
	}
	if (n < 10)
		_putchar_fd(n + 48, fd);
}

/* Outputs the integer n to the file descriptor fd. */

