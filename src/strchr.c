#include "libp.h"

char	*_strchr(const char *str, int c)
{
	return (_memchr(str, c, _strlen(str) + 1));
}

/*
_strchr searches for first occurence of character c in string
pointed by argument str
*/

