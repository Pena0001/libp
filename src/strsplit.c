#include "libp.h"

static int	str_count(char const *s, char c)
{
	int	n;

	n = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (!*s)
			break ;
		while (*s != c && *s)
			s++;
		n++;
	}
	return (n);
}

static void	free_arr(char **arr, int i)
{
	while (0 <= i)
		free(arr[i--]);
	free(arr);
	arr = NULL;
}

static void	split_to_array(char **arr, char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			j = 1;
			while (s[j] && (s[j] != c))
				j++;
			arr[i] = (char *)malloc((j + 1) * sizeof(char));
			if (!arr[i])
			{
				free_arr(arr, i);
				return ;
			}
			_strncpy(arr[i], s, j);
			arr[i][j] = '\0';
			s += j;
			i++;
		}
		else
			s++;
	}
}

char	**_strsplit(char const *s, char c)
{
	char	**arr;
	int		n;

	if (!s)
		return (NULL);
	n = str_count(s, c);
	arr = (char **)malloc((n + 1) * sizeof(*arr));
	if (!arr)
		return (NULL);
	arr[n] = NULL;
	split_to_array(arr, s, c);
	return (arr);
}

/*
Allocates (with malloc(3)) and returns an array of “fresh” strings (all
ending with ’\0’, including the array itself) obtained by spliting s using
the character c as a delimiter. If the allocation fails the function
returns NULL.

	Example : _strsplit("*hello*fellow***students*", ’*’)
	returns the array ["hello", "fellow", "students"].
*/

