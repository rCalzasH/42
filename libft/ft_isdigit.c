/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 10:52:33 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/25 12:03:50 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *@brief: this function checks ehter a charcter is a number or not
 *@param: the character to check
 *@return: 1 if the character is a number or 0 if else
 */
int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}
