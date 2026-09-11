/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/11 10:53:42 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/11 10:53:43 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *@brief: this function turns the parameter given to an lower only if it was an upper
 *@param: the character to convert
 *@return: the parameter converted if was neccesary or the same if not
 */
int	ft_topupper(int param)
{
	if (param >= 65 && param <= 90)
		param += 32;
	return (param);
}