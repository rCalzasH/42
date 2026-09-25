/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 10:59:22 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/25 13:58:34 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*@brief: creates a substring of a string given
*@param: s is the string to create the substring of, start the position to 
*start the substring and len, the len of the substring
*@return: null if invalid params or malloc failure, or the substring created
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	char	*aux;

	if (!s)
		return (NULL);
	substr = ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (NULL);
	aux = (char *)s;
	aux += start;
	ft_strlcpy(substr, aux, len);
	return (substr);
}
