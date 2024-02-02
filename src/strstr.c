#include "libp.h"

char	*_strstr(const char *haystack, const char *needle)
{
	size_t	i;

	if (*needle == '\0')
		return ((char *)haystack);
	i = _strlen(needle);
	while (*haystack)
	{
		if (*haystack == *needle && _strncmp(haystack, needle, i) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

/*
_strnstr tries to locate substring(needle) in string (haystack)
If needle is empty, haystack is returned and if needle occurs nowhere in
haystack NULL is returned, otherwise first character of first occurance
of needle is returned
*/

