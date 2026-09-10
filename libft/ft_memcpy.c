#include "libft.h"

/*
 *@brief:copies n bytes of memory in the dest memory region
 *@param: -dest: the memory region of destination, -src:
 *the memory regions thats the source, -n: the number of bytes to copy
 *@return:the destination memory region once its coppied src
 */
void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest || !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
