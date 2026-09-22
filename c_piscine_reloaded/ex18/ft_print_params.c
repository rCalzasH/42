/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 15:30:18 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/22 22:32:33 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	if (!str)
		return ;
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc <= 1 || !argv)
		return (-1);

	while (*argv)
		ft_putstr(argv++);
	return (0);
}