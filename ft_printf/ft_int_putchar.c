/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_putchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2026/10/08 10:41:40 by rcalzas           #+#    #+#             */
/*   Updated: 2026/10/08 10:57:15 by rcalzas          ###   ########.fr       */
=======
/*   Created: 2026/10/14 12:39:59 by rcalzas           #+#    #+#             */
/*   Updated: 2026/10/14 12:58:08 by rcalzas          ###   ########.fr       */
>>>>>>> 3de3fb6f4eea72a78e36aac487086d0f931fa71a
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int_putchar(char c)
{
<<<<<<< HEAD
	return(write(1, &c, 1));
=======
	int	ret_value;
	ret_value = write(1, &c, 1);
	return (ret_value);
>>>>>>> 3de3fb6f4eea72a78e36aac487086d0f931fa71a
}
