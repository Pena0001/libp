#include "libp.h"

void	_putnbr(int n)
{
	if (n == -2147483648)
	{
		_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		_putnbr(n / 10);
		_putnbr(n % 10);
	}
	if (n < 10)
		_putchar(n + 48);
}

/* Outputs the integer n to the standard output. */

