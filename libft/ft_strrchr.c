/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 10:53:28 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/25 12:18:26 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *@brief: this function searchs for the last occurence of c in in a string
 *@param: s is the string to search over and c is the char to look for
 *@return: a pointer to the last occurence or null if c wasnt found on s
 */

char	*ft_strrchr(const char *str, int c)
{
	char			*p;
	unsigned char	ch;
	size_t			offset;

	ch = c;
	offset = ft_strlen(str);
	p = (char *)str + offset;
	if (ch == '\0')
		return (p++);
	while (p >= str)
	{
		if (*p == ch)
			return (p);
		p--;
	}
	p = NULL;
	return (p);
}
