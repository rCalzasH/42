/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 12:12:10 by rcalzas           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/10/08 10:58:09 by rcalzas          ###   ########.fr       */
=======
/*   Updated: 2026/10/14 12:38:03 by rcalzas          ###   ########.fr       */
>>>>>>> 3de3fb6f4eea72a78e36aac487086d0f931fa71a
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int_putnbr(int n, int rv)
{
	long	number;
	char	c;
	int		ret_value;

	ret_value = rv;
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
	ft_int_putchar(c);
<<<<<<< HEAD
	return (++ret_value);
}

#include <stdio.h>
int main()
{
	printf("\n%d\n", ft_int_putnbr(45, 0));
=======
	return (++ret_value)
>>>>>>> 3de3fb6f4eea72a78e36aac487086d0f931fa71a
}