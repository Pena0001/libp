int	_tolower(int c)
{
	if (c > 64 && c < 91)
		return (c | 32);
	return (c);
}

/* _tolower converts letter to lowercase using bitwise OR */

