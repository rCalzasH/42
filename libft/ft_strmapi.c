/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 23:13:42 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/14 23:19:30 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft."
/*
*@brief:apploies function f all along a string
*@param:the finction to aply, the string s to iterate over
*@return:NULL if wrong params or malloc FAILURE, or the new string while aplied
*f
 */
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if(!f || !s )
        return(NULL);
    unsigned  i;
    size_t  s_size;
    char    *mapped;

    s_size = ft_strlen(s);
    i = 0;
    mapped = malloc(sizeof(char) * s_size + 1);
    if(!mapped)
        return (NULL);
    while(i < s_size)
        mapped[i] = f(i,s[i++]);
    mapped[i] = '\0';
    return (mapped);
}

