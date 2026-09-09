#include "libft.h"
/*
*@brief:allocates memory, and cleans that memoty
*@param:the string to coppy
*@return:a pointer to the first position of the new string 
*or NULL in case of invalid params or malloc failure
*/
char *strdup(const char *s)
{
    if(!s)
        return (NULL);
    int size;
    char *dup;

    size = ft_strlen(s);
    dup = ft_calloc(sizeof(char), size);
    if(!dup)
        return (NULL);
    ft_strncpy(dup, s, size -1);
    dup[size] = '\0';
    return (dup);
    
}
