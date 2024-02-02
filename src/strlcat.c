#include "libp.h"

size_t	_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	i = 0;
	d_len = _strlen(dest);
	s_len = _strlen(src);
	if (n <= d_len)
		return (s_len + n);
	while (dest[i] && i < (n - 1))
		i++;
	while (*src && i < (n - 1))
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (d_len + s_len);
}

/*
_strlcat appends string up to n characters pointed to by src to end
of string pointed to by dest and returns total lenght of string it
tries to create
*/

