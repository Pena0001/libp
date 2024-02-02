#include "libp.h"

char	*_strdup(const char *s)
{
	char	*str;

	str = (char *)malloc(sizeof(*str) * (_strlen(s) + 1));
	if (str)
	{
		return (_strcpy(str, s));
	}
	return (NULL);
}

/* _strdup returns pointer to new string which is duplicate of string s */

