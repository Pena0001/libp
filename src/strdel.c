#include "libp.h"

void	_strdel(char **as)
{
	_memdel((void **)as);
}

/*
Takes as a parameter the address of a string that need to be
freed with free(3), then sets its pointer to NULL.
*/

