/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 23:36:40 by rcalzas           #+#    #+#             */
/*   Updated: 2026/11/05 00:02:02 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/*my buffer cant be static cause it could overflow the stack?? WTTF*/
char *get_next_line(int fd)
{
	static char *stash;
	char buffer[BUFFER_SIZE];// buffer to read over
	char *output;
	size_t bytes_read;
	if(fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while(read(fd, ))
	{

	}
}