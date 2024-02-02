#include "libp.h"

void	*_memalloc(size_t size)
{
	void	*mem;

	if (size)
	{
		mem = (void *)malloc(sizeof(*mem) * (size));
		if (mem)
		{
			_memset(mem, 0, size);
			return (mem);
		}
	}
	return (NULL);
}

/*
_memalloc allocates and returns a “fresh” memory area. The memory
allocated is initialized to 0. If the allocation fails, the function
returns NULL.
*/

