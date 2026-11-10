/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 23:36:40 by rcalzas           #+#    #+#             */
/*   Updated: 2026/11/09 12:09:49 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/*my buffer cant be an array cause it could overflow the stack?? WTTF*/
char *get_next_line(int fd)
{
	static char *stash;
	char *buffer;// buffer to read over
	char *output;
	size_t bytes_read;

	if(fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc((BUFFER_SIZE + 1),sizeof(char));
	if(!buffer)
		return (NULL);
	buffer[BUFFER_SIZE] = '\0';
	while(!ft_strchr('\n', buffer) && bytes_read > 0)
	{
		bytes_read =  read(fd, buffer, BUFFER_SIZE);
		
	}
}
void	free_mem()
{

}