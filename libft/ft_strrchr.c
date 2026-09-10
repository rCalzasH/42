#include "libft.h"
/*
*@brief: this function searchs for the last occurence of c in in a string
*@param: s is the string to search over and c is the char to look for
*@return: a pointer to the last occurence or null if c wasnt found on s
*/
char *ft_strrchr(char const *s, char c)
{
    if(!s || !c)
        return (NULL);
    
    char *aux;
    int cmp;
    int i;

    cmp = 0;
    i = ft_strlen(s) - 1;
    while(i >= 0 && !cmp)
    {
        cmp = (unsigned char)*aux - (unsigned char)c;
        aux++;
    }
    if(!cmp)
        return (NULL);
    else
        return (aux);
}