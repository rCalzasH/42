/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 10:23:42 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/16 17:13:39 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
*@brief:ads a new  node to the list given
*@param:
*return:
*/
void ft_lstadd_front(t_list **lst, t_list *new)
{
	ft_memcpy(*lst,new,sizeof(t_list));
}