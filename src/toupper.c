int	_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c & ~32);
	return (c);
}

/* _toupper converts letter to uppercase using bitwise AND */

