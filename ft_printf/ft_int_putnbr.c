/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 12:12:10 by rcalzas           #+#    #+#             */
/*   Updated: 2026/10/05 12:18:28 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int_putnbr(int n, int rv)
{
	long	number;
	char	c;
	int		ret_value;

	return_value = rv;
	number = n;
	if (number < 0)
	{
		ft_int_putchar('-');
		number = -number;
		ret_value++;
	}
	if (number > 9)
	{
		ret_value++;
		ft_int_putnbr(number / 10, ret_value);
	}
	c = (number % 10) + '0';
	ft_int_putchar(c, fd);
	return (++ret_value)
}