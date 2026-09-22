/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 12:09:08 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/22 12:11:34 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_numbers(void)
{
	char	number;
	int		i;

	i = 0;
	number = '0';
	while(number <= '9')
	{
		number += i;
		write(1, &number, 1);
		i++;
	}
}