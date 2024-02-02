#include "libp.h"

char	*_strrchr(const char *str, int c)
{
	int	len;

	len = _strlen(str);
	while (len >= 0)
	{
		if (str[len] == (char) c)
			return ((char *)(str + len));
		len--;
	}
	return (NULL);
}

/*
_strrchr sachers for last occurence of character c in string pointed
by argument str
*/

