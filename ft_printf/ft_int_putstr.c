/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_putstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 12:35:09 by rcalzas           #+#    #+#             */
/*   Updated: 2026/10/18 11:21:25 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int_putstr(char *str)
{
	int	ret_value;

	if (!str)
		return (write(1, "(null)", 6));
	ret_value = 0;
	while (*str)
		ret_value += ft_int_putchar(*str++);
	return (ret_value);
}
