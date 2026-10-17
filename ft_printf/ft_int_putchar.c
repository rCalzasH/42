/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_putchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:06:17 by rcalzas           #+#    #+#             */
/*   Updated: 2026/10/17 11:06:25 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_int_putchar(char c)
{

	int	ret_value;
	ret_value = write(1, &c, 1);
	return (ret_value);
}
