/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 23:23:09 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/14 23:51:34 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*@brief
*@param
*@return
*/
void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    if(!f || !s )
        return(NULL);
    unsigned  i;
    size_t  s_size;
    char    *done;

    s_size = ft_strlen(s);
    i = 0;
    done = malloc(sizeof(char) * s_size + 1);
    if(!done)
        return (NULL);
    while(i < s_size)
        done[i] = f(i,&s[i++]);
    done[i] = '\0';
    return (done);
}