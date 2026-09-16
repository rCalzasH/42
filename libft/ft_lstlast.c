/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 10:36:36 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/16 15:30:44 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
*@brief:returns the last node of the list
*@param: the a pointer to the list which last node que want to obtain
*@return: NULL if wrong params or the last node of lst
*/
t_list *ft_lstlast(t_list *lst)
{
	unsigned int	lst_s;
	unsigned int	counter;
	void			*cursor;
	if (!lst)
		return (NULL);
	lst_s = ft_lstsize(lst);
	cursor = lst->next;
	while(counter < lst_s)
		{
			cursor = lst->next;
			counter++;
		}
	return (cursor);
}