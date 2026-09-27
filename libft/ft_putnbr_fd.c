/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 15:59:46 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/25 13:41:40 by rcalzas          ###   ########.fr       */
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
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number = -number;
	}
	if (number > 9)
	{
		ft_putnbr_fd(number / 10, fd);
	}
	c = (number % 10) + '0';
	ft_putchar_fd(c, fd);
}
