#include "libp.h"

void	_strclr(char *s)
{
	if (s)
		_bzero(s, _strlen(s));
}

/* Sets every character of the string to the value ’\0’ */

