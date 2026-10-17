/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_putnbr_base.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:06:39 by rcalzas           #+#    #+#             */
/*   Updated: 2026/10/17 14:29:03 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i])
		i++;
	return i;
}
int	ft_int_putnbr_base(int nbr, char *base, int rv)
{
	unsigned int	num;
	int				mod;
	char			digit;
	int				ret_value;

	ret_value = rv;
	if (nbr < 0)
	{
		write(1, "-", 1);
		num = nbr * -1;
	}
	else
		num = nbr;
	mod = num % ft_strlen(base);
	digit = base[mod];
	if (num >= ft_strlen(base))
	{
		num = num / ft_strlen(base);
		ft_putnbr_base(num, base, ret_value++);
		write(1, &digit, 1);
	}
	else
		write(1, &digit, 1);
		return (++ret_value)
}

