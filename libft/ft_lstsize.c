/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 10:29:12 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/25 13:42:24 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*@brief:returns the size of a given list
*@param:the list to iterate over
*@return:the size of the list
*/
#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	void			*cursor;
	unsigned int	size;

	size = 1;
	cursor = lst->next;
	while (cursor)
	{
		cursor = lst->next;
		size++;
	}
	return (size);
}
