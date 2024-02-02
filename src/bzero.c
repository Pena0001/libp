#include "libp.h"

void	_bzero(void *s, size_t n)
{
	_memset(s, 0, n);
}

/*
_bzero erases data in n bytes of memory starting at location s
by writing zeroes (bytes cointaining '\0') to that area
*/

