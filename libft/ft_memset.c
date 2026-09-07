/*
*@brief: Sets a number of byste of memory given with a constant type 
*@param: the memory to chancge, allocated in mem, the const type in
*type and the number of bytes, given in n.
*@return: the memory  given when the n bytes are set to type 
*/
void *ft_memset(void *mem, int x, size_t n)
{
    int i;
    if(!mem)
        return (NULL);
    i = 0;
    while(mem[i] && i < n)
    {
        mem[i] = x;
        i++;
    }
    return (mem);
}