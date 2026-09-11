/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 10:52:16 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/11 10:52:17 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *@brief: erases the data in a memory sectio, by setting n bytes to  /0
 *@param: the memory region and the tsize given by n
 *@return: the memory region once n bytes are set to /0
 */
void	*ft_bzero(void *mem, size_t n)
{
	size_t i;
	if (!mem)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)mem)[i] = '0';
		i++;
	}
	return (mem);
}