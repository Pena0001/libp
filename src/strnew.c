#include "libp.h"

char	*_strnew(size_t size)
{
	return ((char *)_memalloc(size + 1));
}

/*
Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’.
Each character of the string is initialized at ’\0’. If the allocation
fails the function returns NULL.
*/

