/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 12:21:30 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/22 12:41:45 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	while(nb > 0)
		result *= nb--;
	return result;
}
/*#include<stdio.h>
int main(void)
{
	printf("%d\n", ft_iterative_factorial(4));
	return 0;
}
*/
