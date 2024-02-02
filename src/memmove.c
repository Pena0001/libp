#include "libp.h"

void	*_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;

	if (dest == NULL || src == NULL)
		return (NULL);
	tmp = malloc(sizeof(unsigned char) * n);
	_memcpy(tmp, src, n);
	_memcpy(dest, tmp, n);
	free(tmp);
	return (dest);
}

/*
_memmove copies n characters from src to dest,
for overlapping memory _memmove is safer than _memcpy
*/

