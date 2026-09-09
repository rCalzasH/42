#include "libft.h"
static int ft_isspace(char c)
{
    return (c == '20' || (c >= 8 && c <= 13))
}
/*
*@brief: transforms an string into an int value, does not check for
*overflow or other errors
*@param: the string to transform into number
*@return: the number read till un invalid character is found
*or the number expected
*/
int ft_atoi(char *number)
{
    int nb;
    int sign_count;
    int minus;

    sign_count = 0:
    nb = 0;
    minus = 1;
    if (!number)
        return nb;
    while(ft_isspace(*s))
        s++;
    while((*s='+' || *s='-') && sign_count < 2)
    {
        if(*s = '-')
            minus*=-1;
        sign_count++;
        s++;
    }
    while(ft_isdigit(*s))
    {
        nb = nb*10 + (*s-48);
        s++;
    }
    return (nb);
}