/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 23:23:09 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/25 13:59:48 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
*@brief
*@param
*@return
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	size_t			s_size;
	char			*done;

	if (!f || !s)
		return ;
	s_size = ft_strlen(s);
	i = 0;
	done = malloc(sizeof(char) * s_size + 1);
	if (!done)
		return ;
	ft_memcpy(done, s, s_size + 1);
	while (i < s_size)
	{
		f(i, &done[i]);
		i++;
	}
	done[i] = '\0';
	return ;
}
