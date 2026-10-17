/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_putstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 12:35:09 by rcalzas           #+#    #+#             */
/*   Updated: 2026/10/17 11:04:41 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int_putstr(char *str)
{
	char *str_aux;
	int	ret_value;

	str_aux = str;
	ret_value = 0;
	while(*str_aux)
		ret_value += ft_int_putchar(*str_aux++);
	return ret_value;
}