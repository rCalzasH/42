#include "libft.h"
/*
*@brief: this function checks ehter a charcter is printable
*@param: the character to check
*@return: 1 if the character is printable or 0 if else
*/
int ft_isprint(char c)
{
    return (c >= 32 && c <= 126);
}