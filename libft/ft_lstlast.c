/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 10:36:36 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/16 10:43:01 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
*@brief
*@param
*@return
*/
t_list *ft_lstlast(t_list *lst)
{
	unsigned int	lst_s;
	unsigned int	counter;
	t_list			*cursor;
	lst_s = ft_lstsize(lst);
	cursor = lst->next;
	while(counter++ < lst_s)
		cursor = lst->next;
	return (cursor);
}