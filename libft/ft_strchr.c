#include "libft.h"
/*
*@brief: this function searchs for the first occurence of c in in a string
*@param: s is the string to search over and c is the char to look for
*@return: a pointer to the firs occurence or null if c wasnt found on s
*/
char *strchr(const char *s, int c)
{
    int i;

    i = 0;
    if (!s || !c)
        return (NULL);
    while(s[i] && s[]!=)
            i++;
    if(!s[i])
        return (NULL);
    return (&s[i]);
}