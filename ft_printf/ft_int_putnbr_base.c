/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_putnbr_base.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:06:39 by rcalzas           #+#    #+#             */
/*   Updated: 2026/10/18 11:22:57 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include "ft_printf.h"

static unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_int_putnbr_base(long nbr, char *base, int rv)
{
	unsigned long	num;
	char			digit;
	unsigned int	base_len;

	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		rv += write(1, "-", 1);
		num = nbr * -1;
	}
	else
		num = nbr;
	if (num >= base_len)
		rv = ft_int_putnbr_base(num / base_len, base, rv);
	digit = base[num % base_len];
	rv += write(1, &digit, 1);
	return (rv);
}
