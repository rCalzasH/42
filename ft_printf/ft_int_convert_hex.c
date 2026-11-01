/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_convert_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 16:24:58 by rcalzas           #+#    #+#             */
/*   Updated: 2026/11/01 16:41:11 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_int_convert_hex(unsigned long long nbr, char *base, int rv)
{
	unsigned long long	num;
	char				digit;
	unsigned int		base_len;

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
