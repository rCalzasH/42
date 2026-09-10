#include "libft.h"

/*
 *@brief:concatenates 2 strings given, taking into acount the of bytes
 *@param:the string to append, and the busffer dst, to on it
 *@return: the length of the string that  is trying to create
 */
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t dstlen;
	size_t srclen;
	size_t i;

	dstlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (srclen);
	if (dstsize <= dstlen)
		return (srclen += dstsize);
	else
		srclen += dstlen;
	while (src[i] != '\0' && dstlen < dstsize - 1 && dest != src)
	{
		dest[dstlen] = src[i];
		i++;
		dstlen++;
	}
	dest[dstlen] = '\0';
	return (srclen);
}