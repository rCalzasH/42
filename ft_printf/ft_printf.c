/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 23:41:15 by rcalzas           #+#    #+#             */
/*   Updated: 2026/10/17 14:09:20 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_choose_format(char c, va_list list)
{
	if(c == 'c')
		return(ft_int_putchar(va_arg(list, char)));
	else if(c == 'd' || c == 'i')
		return(ft_int_putnbr_base(va_arg(list, int), "0123456789", 0));
	else if(c == 's')
		return(ft_int_putstr(va_arg(list, char *)));
	else if(c == 'p')
		return (ft_int_putptr(va_arg(list, uintptr_t)));
	else if(c == 'X')
		return(ft_int_putnbr_base(va_arg(list, int), "0123456789ABCDEF"), 0);
	else if(c == 'x')
		return(ft_int_putnbr_base(va_arg(list, int), "0123456789abcdef"), 0);
	else if(c == 'u')
		return(ft_int_putnbr_base(va_arg(list, unsigned int), "0123456789", 0));
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

int main()
{
	char *hello_world = "Hello world";
	ft_printf("%s\n", hello_world);
}