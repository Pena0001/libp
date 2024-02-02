int	_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/* _isprint checks is passed character is printable */

