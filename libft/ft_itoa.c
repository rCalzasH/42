/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 17:49:36 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/25 13:47:35 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_c(int n)
{
	size_t	num_c;
	long	nb;

	num_c = 0;
	nb = n;
	if (nb <= 0)
	{
		num_c++;
		nb = -nb;
	}
	if (n == 0)
		return (1);
	while (nb > 0)
	{
		num_c++;
		nb /= 10;
	}
	return (num_c);
}

char	*ft_itoa(int n)
{
	char	*num;
	long	number;
	size_t	c;

	number = n;
	c = count_c(n);
	num = malloc(sizeof(char) * (c + 1));
	if (!num)
		return (NULL);
	num[c--] = '\0';
	if (number == 0)
		num[0] = '0';
	if (number < 0)
	{
		num[0] = '-';
		number = -number;
	}
	while (number > 0)
	{
		num[c--] = (number % 10) + '0';
		number /= 10;
	}
	return (num);
}
