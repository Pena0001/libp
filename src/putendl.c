#include "libp.h"

void	_putendl(char const *s)
{
	if (s == NULL)
		return ;
	write(1, s, _strlen(s));
	write(1, "\n", 1);
}

/* Outputs the string s to the standard output followed by a ’\n’. */

