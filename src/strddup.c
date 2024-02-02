#include "libp.h"

char	*_strddup(const char *s, char c)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * _strdlen((char *)s, c) + 1);
	if (!str)
		return (NULL);
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
_strddup is similar to _strdup, but it will only duplicate content of
string 's' until delimiting character 'c'
*/

