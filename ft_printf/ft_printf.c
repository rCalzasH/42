/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 23:41:15 by rcalzas           #+#    #+#             */
/*   Updated: 2026/11/04 12:20:26 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_choose_format(char c, va_list list)
{
	if (c == 'c')
		return (ft_int_putchar(va_arg(list, int)));
	else if (c == 'd' || c == 'i')
		return (ft_int_putnbr_base(va_arg(list, int), "0123456789", 0));
	else if (c == 's')
		return (ft_int_putstr(va_arg(list, char *)));
	else if (c == 'p')
		return (ft_print_ptr(va_arg(list, uintptr_t)));
	else if (c == 'X')
		return (ft_int_convert_hex(va_arg(list, unsigned int),
				"0123456789ABCDEF", 0));
	else if (c == 'x')
		return (ft_int_convert_hex(va_arg(list, unsigned int),
				"0123456789abcdef", 0));
	else if (c == 'u')
		return (ft_int_putnbr_base(va_arg(list, unsigned int),
				"0123456789", 0));
	else if (c == '%')
		return (ft_int_putchar('%'));
	else
		return (-1);
}

int	ft_printf(char const *format, ...)
{
	int		index;
	int		return_value;
	va_list	list;

	if (!format)
		return (0);
	va_start(list, format);
	return_value = 0;
	index = 0;
	while (format[index])
	{
		if (format[index] == '%')
			return_value += ft_choose_format(format[++index], list);
		else
			return_value += ft_int_putchar(format[index]);
		index++;
	}
	va_end(list);
	return (return_value);
}

//#include <limits.h>
//#include <stdio.h>
//int main  (void)
//{
//	//int num = 62536;
//	//void *ptr = &num;
//	////strs
//	//ft_printf("%s", "Hola Caracola\n");
//	//printf("%s", "Hola Caracola\n");
//	////
//	//ft_printf("%d\n",num);
//	//printf("%d\n",num);
//	////
//	//ft_printf("%x\n",num);
//	//printf("%x\n",num);
//	////
//	//ft_printf("%X\n",num);
//	//printf("%X\n",num);
//	////
//	//ft_printf("%p\n",ptr);
//	//printf("%p\n",ptr);
//	////
//	//ft_printf("%p\n",NULL);
//	//printf("%p\n",NULL);
//	//
//	ft_printf("%x\n", LONG_MAX);
//	printf("%x\n", LONG_MAX);
//	//
//	ft_printf("%x\n", LONG_MIN);
//	printf("%x\n", LONG_MIN);
//	//
//	ft_printf("%x\n", ULONG_MAX);
//	printf("%x\n", ULONG_MAX);
//	//
//	ft_printf("%x\n", 9223372036854775807LL);
//	printf("%x\n", 9223372036854775807LL);
//	//
//	ft_printf("%u %u %u %u %u %u %u\n", 
// INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
//	printf("%u %u %u %u %u %u %u", 
// INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
//	return (0);
//}
