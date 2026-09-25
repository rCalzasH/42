/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 10:52:36 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/25 12:03:46 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *@brief: this function checks ehter a charcter is printable
 *@param: the character to check
 *@return: 1 if the character is printable or 0 if else
 */
int	ft_isprint(char c)
{
	return (c >= 32 && c <= 126);
}
