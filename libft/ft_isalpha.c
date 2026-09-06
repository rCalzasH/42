/*
*@brief: this function checks ehter a charcter is a letter or not
*@param: the character to check
*@return: 1 if the character is a letter or 0 if else
*/
int ft_isalpha(char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}