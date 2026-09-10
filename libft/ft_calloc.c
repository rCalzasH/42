#include "libft.h"

/*
 *@brief:allocates memory, and cleans that memoty
 *@param:the  number of bytes to allocate and clean
 *@return:a pointer to the new memory region allocated after being cleaned
 *or NULL in case of invalid params or malloc failure
 */
void	*ft_calloc(size_t n, size_t size)
{
	void	*res;

	res = malloc(n * size);
	if (!res)
		return (NULL);
	ft_memset(res, 0, n * size);
	return (res);
}
