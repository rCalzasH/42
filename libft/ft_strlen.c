#include "libft.h"

/*
 *@brief: this counts the number of characters in a string
 *@param: the string to count over
 *@return: the number of characters in str, or -1 if invalid param
 */
size_t	ft_strlen(char const *str)
{
	if (!str)
		return (-1);
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}