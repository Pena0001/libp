#include "libp.h"

size_t	_strdlen(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

/*
_strdlen is similar to _strlen, but it will stop calculating if
delimiter char(c) is found
*/

