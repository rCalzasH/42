/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 11:19:35 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/25 13:51:06 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*@brief:checks if a char is on a charset
*@param:set is the charset to check over
*@return: 1 if c is found on set or 0 if else
*/
static int	is_in_set(char const *set, char c)
{
	int	found;
	int	i;

	i = 0;
	found = 0;
	while (set[i] && !found)
	{
		found = set[i] == c;
		i++;
	}
	return (found);
}

/*
*@brief:returns a "copy" of s1 without the chars in set
*@param:s1 is the string to trim and set is the charset to remove
*@return:the new string trimmed or NULL if malloc failure
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char		*trimmed;
	char		*aux;
	size_t		start;
	size_t		end;

	start = 0;
	end = ft_strlen(s1);
	aux = (char *)s1;
	while (!is_in_set(set, aux[start]))
		start++;
	while (!is_in_set(set, aux[end]))
		end--;
	trimmed = malloc(end - start * sizeof(char) + 1);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, &aux[start], end - start + 1);
	return (trimmed);
}
