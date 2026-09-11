/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 10:52:55 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/11 10:52:56 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *@brief: this function searchs for the first occurence of c in in a string
 *@param: s is the string to search over and c is the char to look for
 *@return: a pointer to the firs occurence or null if c wasnt found on s
 */
char	*ft_strchr(const char *s, int c)
{
	int	found;
	char	*aux;

	aux = (char *)s;
	found = 0;
	if (!s || !c)
		return (NULL);
	while (*aux && !found)
	{
		found = *aux == c;
		aux++;
	}
	if (!found)
		return (NULL);
	return (aux);
}
