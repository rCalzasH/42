/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 15:30:18 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/22 15:38:11 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_strcmp(char *s1, char *s2)
{
	int cmp;
	
	cmp = 0;
	while((*s1 || *s2) && !cmp)
	{
		cmp = (unsigned char)*s1 - (unsigned char)*s2;
		s1++;
		s2++;
	}
	return(cmp);
}

void	ft_putstr(char	*str)
{
	if(!str)
		return;
	while(*str)
		write(1, str++, 1);
	return;
}

void	ft_bubble_sort(char **argv)
{
	
}
int	main(int argc, char **argv)
{
	if(argc <= 1 || !argv)
		return (-1);
	ft_bubble_sort(argv);
	while(*argv)
	{
		ft_putstr(*argv);
		argv++;
	}
	return (0);
}