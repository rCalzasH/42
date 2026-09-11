/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 10:53:38 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/11 10:53:39 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *@brief: this function turns the parameter given to an upper only if it was lower
 *@param: the character to convert
 *@return: the parameter converted if was neccesary or the same if not
 */
int	ft_topupper(int param)
{
	if (param >= 97 && param <= 122)
		param -= 32;
	return (param);
}