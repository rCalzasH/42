/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 10:34:18 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/23 10:39:49 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	if(min >= max)
		return (NULL);
	range = malloc(max - min);
	if(!range)
		return (NULL);
	i = 0;
	while(min < max)
		range[i++] = min++;
	return (range);
}