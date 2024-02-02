int	_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* _isascii checks if passed character is ASCII character */

