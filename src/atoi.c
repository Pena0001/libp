#include "libp.h"

int	_atoi(const char *s)
{
	int	i;
	int	sign;
	int	num;

	if (!s)
		return (0);
	i = 0;
	num = 0;
	while (_isspace(s[i]))
		i++;
	if (s[i] == '-')
		sign = -1;
	else
		sign = 1;
	if (s[i] == '-' || s[i] == '+')
	{
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
		num = (num * 10) + (s[i++] - '0');
	return (num * sign);
}

/* _atoi converts string argument str to int */

