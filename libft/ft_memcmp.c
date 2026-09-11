/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 10:52:42 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/11 10:52:44 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *@brief: this function compare 2 regions of memory,
	non considering \0 as a final
 *comparing them as unsigned chars
 *@param: compares n bytes of two memory regions, s1 against s2
 *@return: -1 if not valid params, 0 if equals, or the difference bewtween s1,
	and s2
 */
int	memcmp(const void *s1, const void *s2, size_t n)
{
	int cmp;
	size_t i;
	char *str1;
	char *str2;

	cmp = 0;
	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n && !cmp)
	{
		cmp = (unsigned char)*str1 - (unsigned char)*str2;
		i++;
		str1++;
		str2++;
	}
	return (cmp);
}