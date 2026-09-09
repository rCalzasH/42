#include "libft.h"
/*
*@brief:copies n bytes of memory in the dest memory region, taking care of overlapping
*@param: -dest: the memory region of destination, -src: 
*the memory regions thats the source, -n: the number of bytes to copy 
*@return:the destination memory region once its coppied src, without overlap
*/
 void memmove(void *dest, void *src, int size)
{
  if(!dest || !src)
    return (NULL);
  int i;
  if (dest < src) 
  {
    i = 0;
    while( i < size) 
    {
      ((char *)dest)[i] = ((char *)src)[i];
      i++;
    }
  } 
  else 
  {
    i = size - 1;
    while (i >= 0) 
    {
      ((char *)dest)[i] = ((char *)src)[i];
      i--;
    }
  }
  return (dest);
} 