/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 15:59:46 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/18 09:51:30 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
*@brief:writes an integer to a given filedescriptor
*@param:the integer n, and the filedescriptor fd
*@return:no return value
*/
void	ft_putnbr_fd(int n, int fd)
{
	long	number;
	char	c;

	number = n;
	if(number < 0)
	{
		number*=-1;
		write(fd, "-", 1);
	}
	if(number > 9)
	{
		c = (number%10) - '0';
		return(ft_putnbr_fd(number/10, fd));
		write(fd, &c, 1);
	}
	else
	{
		c =  number -'0';
		write(fd, &c, 1);
		return;
	}
}