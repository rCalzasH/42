/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 10:36:36 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/25 12:37:03 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
*@brief:returns the last node of the list
*@param: the a pointer to the list which last node que want to obtain
*@return: NULL if wrong params or the last node of lst
*/
t_list	*ft_lstlast(t_list *lst)
{
	void	*cursor;

	if (!lst)
		return (NULL);
	cursor = lst->next;
	while (cursor)
		cursor = lst->next;
	return (cursor);
}
