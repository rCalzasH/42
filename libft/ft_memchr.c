#include "libft.h"

/*
 *@brief: this function searchs for an occurence of c at hte first n bytes pointed
 *@param: s[i] is the location where we start to look for c,
	n bytes ahead at most
 *@return: a pointer to the ocurrence in n bytes or null if c wasnt found
 */
void	*memchr(const void *s, int c, size_t n)
{
	size_t i;
	int cmp;
	void *aux;
	if (!s || !c)
		return (NULL);
	i = 0;
	cmp = 0;
	while (i < n && !cmp)
	{
		cmp = *(unsigned char *)aux == (unsigned char)c;
		i++;
		aux++;
	}
	if (cmp)
		return (aux);
	else
		return (NULL);
}