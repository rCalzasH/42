#include "libft.h"
/*
*@brief: this function compare 2 regions of memory, non considering \0 as a final
*comparing them as unsigned chars
*@param: compares n bytes of two memory regions, s1 against s2 
*@return: -1 if not valid params, 0 if equals, or the difference bewtween s1, and s2
*/
int memcmp(const void *s1, const void *s2, size_t n)
{
    int cmp;
    size_t i;
    if(!s1 || !s2)
        return -1;

    i = 0;
    cmp = 0
    while(i < n && !cmp)
    {
        cmp = (unsigned char)s1[i] - (unsigned char)s2[i];
        i++;
    }
    return cmp;
}