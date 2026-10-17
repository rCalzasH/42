/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 21:20:11 by rcalzas           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2026/10/08 10:59:12 by rcalzas          ###   ########.fr       */
=======
/*   Updated: 2026/10/14 12:43:39 by rcalzas          ###   ########.fr       */
>>>>>>> 3de3fb6f4eea72a78e36aac487086d0f931fa71a
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
<<<<<<< HEAD

=======
>>>>>>> 3de3fb6f4eea72a78e36aac487086d0f931fa71a
int ft_printf(char *format, ...);
int	ft_choose_format(char c, va_list l);
int	ft_int_putnbr(int n, int rv);
int	ft_int_putchar(char c);
<<<<<<< HEAD
=======
int	ft_int_putstr(char *str);
>>>>>>> 3de3fb6f4eea72a78e36aac487086d0f931fa71a

#endif
