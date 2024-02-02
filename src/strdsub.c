#include "libp.h"

char	*_strdsub(char const *s, char c)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s)
		return (NULL);
	i = _strdlen(s, c) + 1;
	j = 0;
	len = _strlen(s) - i;
	str = _strnew(len + 1);
	while (s[i])
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}

/*
Similar to _strsub, but duplicating substring starts after delimiter char (c)
and continues until end of string(s)
*/

