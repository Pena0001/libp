#include "libp.h"

char	*_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = _strnew(_strlen(s1) + _strlen(s2));
	if (!str)
		return (NULL);
	_strcpy(str, s1);
	_strcat(str, s2);
	return (str);
}

/*
_strjoin allocates (with malloc(3)) and returns a “fresh” string ending
with ’\0’, result of the concatenation of s1 and s2. If the allocation
fails the function returns NULL.
*/

