#include "libft.h"
/*
*@brief:allocates memory, and cleans that memoty
*@param:the  number of bytes to allocate and clean
*@return:a pointer to the new memory region allocated after being cleaned 
*or NULL in case of invalid params or malloc failure
*/
void *calloc(size_t n, size_t size)
{
    if(n <= 0 || size <= 0)
    void *res;
    res = malloc(n * size);
    if(!res)
        return (NULL);
    ft_memset(0);
    return res;
}
