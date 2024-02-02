#include "libp.h"

void	*_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*s;

	s = (const unsigned char *)str;
	while (n-- > 0)
	{
		if (*s == c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}

/*
_memchr searches for first occurrence of character c in first n bytes
of string pointed by argument str
and returns pointer to matching byte or NULL if the character doesn't
occur in the given memory area
*/

