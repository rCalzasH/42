#include "libft.h"

/*
 *@brief: this function checks ehter a charcter is a alphanumeric or not
 *@param: the character to check
 *@return: 1 if the charater is alphanumeric or 0 if else
 */
int	ft_isalum(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'));
}