#include "libp.h"

char	*_strncat(char *dest, const char *src, size_t n)
{
	char	*d;
	size_t	len;

	if (!dest && !src)
		return (NULL);
	d = dest;
	dest += _strlen(dest);
	len = _strnlen(src, n);
	dest[len] = '\0';
	_memcpy(dest, src, len);
	return (d);
}

/*
_strncat appends string pointed to by src to end of string pointed to
by dest up to n characters long
*/

