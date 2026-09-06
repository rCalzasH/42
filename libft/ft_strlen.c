/*
*@brief: this counts the number of characters in a string
*@param: the string to count over 
*@return: the number of characters in str, or -1 if invalid param
*/
int ft_strlen(char *str)
{
    if(!str)
        return (-1);
    int i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}