/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 10:51:56 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/11 10:51:59 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *@brief:allocates memory, and cleans that memoty
 *@param:the  number of bytes to allocate and clean
 *@return:a pointer to the new memory region allocated after being cleaned
 *or NULL in case of invalid params or malloc failure
 */
void	*ft_calloc(size_t n, size_t size)
{
	void	*res;

	res = malloc(n * size);
	if (!res)
		return (NULL);
	ft_memset(res, 0, n * size);
	return (res);
}
