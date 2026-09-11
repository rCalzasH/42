/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 10:52:31 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/11 10:52:31 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *@briet: this function checks ehter a charcter belongs to or not ascii table
 *@param: the character to check
 *@return: 1 if the character is in the asci table or not or 0 if else
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}