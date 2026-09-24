/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 15:13:50 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/22 15:15:37 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_putstr(char	*str)
{
	if (!str)
		return ;
	while (*str)
		ft_putchar(*(str++));
	return ;
}
