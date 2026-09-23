/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:04:25 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/23 16:08:25 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_count_if(char **tab, int (*f)(char*))
{
	int	res;

	res = 0;
	if(!tab)
		return (res);
	while(*tab)
	{
		if(f(tab++))
			res++;
	}
	return (res);
}