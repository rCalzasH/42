/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 21:20:11 by rcalzas           #+#    #+#             */
/*   Updated: 2026/10/14 12:43:39 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
int ft_printf(char *format, ...);
int	ft_choose_format(char c, va_list l)
int	ft_int_putnbr(int n, int rv);
int	ft_int_putchar(char c);
int	ft_int_putstr(char *str);

#endif
