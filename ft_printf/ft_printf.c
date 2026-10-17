/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 23:41:15 by rcalzas           #+#    #+#             */
/*   Updated: 2026/10/14 12:58:11 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_choose_format(char c, va_list l)
{
	if(c == 'c')
		return(ft_int_putchar(va_arag(list, char)));
	else if(c == 'd' || c == 'i')
		return(ft_int_putnbr(va_arg(list, int)));
	else if(c == 's')
		return(ft_int_putstr(va_list(list, char *)));
	else if(c == 'p')
		return (ft_int_putptr(list, ));
	else if(c == 'X')
		return();
	else if(c == 'x')
		return();
	else if(c == 'u')
		return;
	else if(c == '%')
		return ft_int_putchar('%');
	else 
		return(-1);
}

int ft_printf(char *format, ...)
{
	int	index;
	int	return_value;
	va_list	list;

	va_start(list);
	return_value = 0;
	index = 0;
	while(format[index])
	{
		if(format[index] == '%')
			return_value += ft_choose_format(format[index++], list);
		else 
			return_value += ft_int_putchar(format[index++]);
	}
	va_end(list);
	return return_value;
}
