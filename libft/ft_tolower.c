#include "libft.h"
/*
*@brief: this function turns the parameter given to an lower only if it was an upper
*@param: the character to convert
*@return: the parameter converted if was neccesary or the same if not
*/
int ft_topupper(int param)
{
    if (param >= 65 && param <= 90)
        param +=32;
    return param;
}