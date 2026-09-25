/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 11:07:26 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/25 12:03:16 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*@brief:joins two string into a new string, and null terminates the new one
*@param: the two strings to join
*@return: the new string or null if invalid params or ft_calloc failure
*
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*joint;
	char		*aux_s1;
	char		*aux_s2;
	size_t		size;

	if (!s1 || !s2)
		return (NULL);
	size = (ft_strlen(s1) + ft_strlen(s2) + 1);
	aux_s1 = (char *)s1;
	aux_s2 = (char *)s2;
	joint = ft_calloc(size, sizeof(char));
	ft_strlcat(joint, aux_s1, size);
	ft_strlcat(joint, aux_s2, size);
	return (joint);
}
