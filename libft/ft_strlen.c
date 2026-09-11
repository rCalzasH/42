/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 10:53:15 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/11 10:53:16 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *@brief: this counts the number of characters in a string
 *@param: the string to count over
 *@return: the number of characters in str, or -1 if invalid param
 */
size_t	ft_strlen(char const *str)
{
	if (!str)
		return (-1);
	size_t i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}