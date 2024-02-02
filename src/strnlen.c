#include "libp.h"

size_t	_strnlen(const char *s, size_t len)
{
	size_t	i;

	i = 0;
	while (s[i] && i < len)
		i++;
	return (i);
}

/*
_strnlen calculates lenght of given string without '\0' and total or
maximum of len
*/

