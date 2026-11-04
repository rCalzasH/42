/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_convert_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 16:24:58 by rcalzas           #+#    #+#             */
/*   Updated: 2026/11/04 12:22:03 by rcalzas          ###   ########.fr       */
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
	char				digit;
	unsigned int		base_len;

	base_len = ft_strlen(base);
	if (nbr >= base_len)
		rv = ft_int_convert_hex(nbr / base_len, base, rv);
	digit = base[nbr % base_len];
	rv += write(1, &digit, 1);
	return (rv);
}
