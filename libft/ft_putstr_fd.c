/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 12:20:25 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/15 12:27:00 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
*@brief:prints a string to a filedescriptor
*@param:the file descriptor to print on and the string to print
*@return:no return value
*/
void ft_putstr_fd(char *s, int fd)
{
    if(!s || !fd)
        return;
    int i;
    i = 0;
    while(s[i])
        write(1,&s[i++], 1);
    return;
}