#include "libp.h"

void	_memdel(void **ap)
{
	if (ap != NULL)
	{
		free(*ap);
		*ap = NULL;
	}
}

/*
Takes as a parameter the address of a memory area that needs
to be freed with free(3), then puts the pointer to NULL.
*/

