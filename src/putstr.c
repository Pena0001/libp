#include "libp.h"

void	_putstr(char const *s)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
		_putchar(s[i++]);
}

/* Outputs the string s to strandard output. */

