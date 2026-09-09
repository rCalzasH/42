#include "libft.h"
/*
*@brief: compares the first n bytes of 2 strings, treating them as unsigned char
*@param: s1, the first string, s2, the string to compare s1 against to,
*and n, the number of bytes to compare
*@return: 0 if s1 is equal to s2 in the n bytes compared, or the difference
*/
int ft_strncmp(char *s1, char *s2, size_t n)
{
    int cmp;
    size_t i;
    if(!s1 || !s2)
        return -1;

    i = 0;
    cmp = 0
    while(i < n && (s1[i]|| s2[i]) && !cmp)
    {
        cmp = (unsigned char)s1[i] - (unsigned char)s2[i];
        i++;
    }
    return cmp;
}