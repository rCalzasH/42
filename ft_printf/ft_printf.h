/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:22:24 by rcalzas           #+#    #+#             */
/*   Updated: 2026/11/01 16:41:10 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(char const *format, ...);
int		ft_choose_format(char c, va_list list);
int		ft_int_putnbr_base(long long nbr, char *base, int rv);
int		ft_int_convert_hex(unsigned long long nbr, char *base, int rv);
int		ft_int_putchar(char c);
int		ft_int_putstr(char *str);
int		ft_print_ptr(uintptr_t ptr);
void	ft_put_ptr(uintptr_t num);

#endif
