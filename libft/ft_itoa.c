/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 17:49:36 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/18 09:38:24 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"
size_t	count_c(int n)
{
	size_t	num_c;
	int		flag_neg;

	flag_neg = n < 0;
	while(n / 10 != 0)
		num_c++;
	if(flag_neg)
		num_c++;
	return (num_c);
}
char *ft_itoa(int n)
{
	char	*num;
	long	number;
	size_t	c;
	
	number = n;
	c = count_c(n);
	num = malloc(sizeof(char) * c + 1);
	if (!num)
		return(NULL);
	
	if(n < 0)
	{
		number *= -1;
		num[0]='-';
	}
	num[c]= 0;
	while(--c)
	{
		num[c] = (number % 10) + '0';
		number = number / 10;
	}
	return (num);
}