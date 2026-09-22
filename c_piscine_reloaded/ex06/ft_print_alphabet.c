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

#include <unistd.h>
void	ft_print_alphabet(void)
{
	char	letter;
	int		i;

	i = 0;
	letter = 'a';
	while(letter <= 'z')
	{
		letter += i;
		write(1,&letter, 1);
		i++;
	}
}