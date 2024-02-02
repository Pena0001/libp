#include "libp.h"

void	lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*link;

	while (*alst)
	{
		link = (*alst)->next;
		lstdelone(alst, del);
		*alst = link;
	}
}

/*
Takes as a parameter the adress of a pointer to a link and
frees the memory of this link and every successors of that link
using the functions del and free(3). Finally the pointer to
the link that was just freed must be set to NULL
*/

