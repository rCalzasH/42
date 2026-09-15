/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putend_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 12:25:29 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/15 12:27:25 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
*@brief:prints a string to a filedescriptor followed by a new line
*@param:the file descriptor to print on and the string to print
*@return:no return value
*/

void ft_putendl_fd(char *s, int fd)
{
    ft_putstr_fd(s,fd);
    write(fd, "\n", 1);
    return;
}