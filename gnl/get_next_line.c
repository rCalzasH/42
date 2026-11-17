/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:19:09 by rcalzas           #+#    #+#             */
/*   Updated: 2026/11/17 16:19:10 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_to_stash(int fd, char *stash)
{
	char	*buffer;
	char	*tmp;
	ssize_t	bytes;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (free(stash), NULL);
	bytes = 1;
	while (bytes > 0 && !ft_strchr(stash, '\n'))
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
			return (free(buffer), free(stash), NULL);
		buffer[bytes] = '\0';
		tmp = ft_strjoin(stash, buffer);
		free(stash);
		stash = tmp;
		if (!stash)
			return (free(buffer), NULL);
	}
	free(buffer);
	return (stash);
}

static char	*extract_line(char *stash)
{
	char	*nl;
	size_t	len;

	nl = ft_strchr(stash, '\n');
	if (nl)
		len = nl - stash + 1;
	else
		len = ft_strlen(stash);
	return (ft_substr(stash, 0, len));
}

static char	*trim_stash(char *stash)
{
	char	*nl;
	char	*rest;

	nl = ft_strchr(stash, '\n');
	if (!nl || !nl[1])
		return (free(stash), NULL);
	rest = ft_substr(nl + 1, 0, ft_strlen(nl + 1));
	free(stash);
	return (rest);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!stash)
	{
		stash = malloc(1);
		if (!stash)
			return (NULL);
		stash[0] = '\0';
	}
	stash = read_to_stash(fd, stash);
	if (!stash)
		return (NULL);
	if (!stash[0])
		return (free(stash), stash = NULL, NULL);
	line = extract_line(stash);
	stash = trim_stash(stash);
	return (line);
}
