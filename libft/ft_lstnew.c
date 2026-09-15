/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 23:09:56 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/15 23:37:54 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
*@brief:creates a new node and stores the data, while next is initialized to 
*null
*@param:the content to store
*@return:NULL if malloc failure or the new node
*/
t_list *ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list) * 1);
	if(!list)
		return (NULL);
	ft_memcpy(list->content,content);
	list->next = NULL;
	return (list);
}