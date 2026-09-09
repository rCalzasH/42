#include "libft.h"
/*
*@brief: this function searchs for the last occurence of c in in a string
*@param: s is the string to search over and c is the char to look for
*@return: a pointer to the last occurence or null if c wasnt found on s
*/
char *strrchr(char *s, char c)
{
    if(!s || !c)
        return (NULL);
    
    int i;
    int cmp;

    cmp = 0;
    i = = ft_strlen(s) - 1;
    while(i >= 0 && !cmp)
    {
        cmp = (unsigned char)s[i] - (unsigned char)c;
        i--
    }
    if(!cmp)
        return (NULL);
    else
        return (&s[i]);
}