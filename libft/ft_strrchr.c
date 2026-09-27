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
char	*ft_strrchr(char const *s, char c)
{
	char	*aux;
	int		cmp;
	int		i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) == 0 || c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	cmp = 1;
	aux = (char *)s;
	i = ft_strlen(s) - 1;
	while (i >= 0 && cmp)
		cmp = (unsigned char)aux[i--] - (unsigned char)c;
	if (cmp)
		return (NULL);
	else
		return (&aux[++i]);
}
