/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 19:41:50 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/18 09:38:43 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *gon;
	t_list *aux;
	t_list *auxgon;

	aux = lst;
	if (!(gon = malloc(sizeof(t_list))))
		return (NULL);
	auxgon = gon;
	while (aux)
	{
		auxgon->content = f(aux->content);
		if (!(auxgon->next = malloc(sizeof(t_list))))
			ft_lstclear(&aux, del);
		aux = aux->next;
		auxgon = auxgon->next;
	}
	return (gon);
}