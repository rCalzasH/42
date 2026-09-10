#include "libft.h"

/*
 *@brief: Sets a number of byste of memory given with a constant type
 *@param: the memory to chancge, allocated in mem, the const type in
 *type and the number of bytes, given in n.
 *@return: the memory  given when the n bytes are set to type
 */
void	*ft_memset(void *mem, int x, size_t n)
{
	size_t i;
	if (!mem)
		return (NULL);
	i = 0;
	while (((char *)mem)[i] && i < n)
	{
		((char *)mem)[i] = (char)x;
		i++;
	}
	return (mem);
}