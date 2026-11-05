/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 12:21:52 by rcalzas           #+#    #+#             */
/*   Updated: 2026/11/05 12:29:27 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/*this is got from the libft, so must be correct*/

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	ch;

	i = 0;
	ch = c;
	if (ch == '\0')
	{
		i = ft_strlen(str);
		return ((char *)str + i++);
	}
	while (str[i])
	{
		if (str[i] == ch)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*joint;
	char		*aux_s1;
	char		*aux_s2;
	size_t		size;

	if (!s1 || !s2)
		return (NULL);
	size = (ft_strlen(s1) + ft_strlen(s2) + 1);
	aux_s1 = (char *)s1;
	aux_s2 = (char *)s2;
	joint = malloc(size * sizeof(char));
	if (!joint)
		return (NULL);
	ft_strlcat(joint, aux_s1, size);
	ft_strlcat(joint, aux_s2, size);
	return (joint);
}

size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (srclen);
	if (dstsize <= dstlen)
		return (srclen += dstsize);
	else
		srclen += dstlen;
	while (src[i] != '\0' && dstlen < dstsize - 1 && dest != src)
	{
		dest[dstlen] = src[i];
		i++;
		dstlen++;
	}
	dest[dstlen] = '\0';
	return (srclen);
}