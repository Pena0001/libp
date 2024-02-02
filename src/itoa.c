#include "libp.h"

static void	write_itoa(long int nbr, char *s, int *i)
{
	if (nbr > 9)
		write_itoa(nbr / 10, s, i);
	s[(*i)++] = '0' + nbr % 10;
}

char	*_itoa(int n)
{
	char		*s;
	int			len;
	int			i;
	long int	nbr;

	len = _nbrlen(n);
	s = _strnew(len);
	if (s == NULL)
		return (NULL);
	i = 0;
	nbr = (long int)n;
	if (nbr < 0)
	{
		s[i++] = '-';
		nbr *= -1;
	}
	write_itoa(nbr, s, &i);
	s[i] = '\0';
	return (s);
}

/* _itoa converts integer to string */

