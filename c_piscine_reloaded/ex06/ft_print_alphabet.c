/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 11:57:24 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/22 11:59:55 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	letter;
	int		i;

	i = 0;
	letter = 'a';
	while (letter <= 'z')
	{
		letter += i;
		ft_putchar(letter);
		i++;
	}
}
