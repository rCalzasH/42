#include "libft.h"
/*
*@brief: erases the data in a memory sectio, by setting n bytes to  /0
*@param: the memory region and the tsize given by n
*@return: the memory region once n bytes are set to /0
*/
void *ft_bzero(void *mem, size_t)
{
    size_t i;
    if(!mem)
        return (NULL);
    i = 0;
    while(i < n)
    {
        mem[] = '/0';
        i++;
    }
    return (mem);
}