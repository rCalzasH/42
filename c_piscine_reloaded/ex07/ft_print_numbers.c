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

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	number;
	int		i;

	i = 0;
	number = '0';
	while (number <= '9')
	{
		number += i;
		ft_putchar(number);
		i++;
	}
}
