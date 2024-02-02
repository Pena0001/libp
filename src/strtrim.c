#include "libp.h"

static int	iswhitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char	*_strtrim(char const *s)
{
	int	i;
	int	len;

	if (!s)
		return (NULL);
	i = 0;
	len = _strlen(s);
	while (iswhitespace(s[i]))
		i++;
	while ((iswhitespace(s[len]) || s[len] == '\0') && i != len)
		len--;
	return (_strsub(s, i, len - i + 1));
}

/*
_strtrim allocates and returns a copy of the string given as argument
without whitespaces at the beginning or at the end of the string. Will be
considered as whitespaces the following characters ’ ’, ’\n’ and ’\t’.

If s has no whitespaces at the beginning or at the end, the function
returns a copy of s. If the allocation fails the function returns NULL.
*/

