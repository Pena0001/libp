#include "libp.h"

int	_isalnum(int c)
{
	return (_isalpha(c) || _isdigit(c));
}

/* _isalnum checks if passed character is alphanumeric */

