/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 10:33:17 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/23 10:33:55 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *@brief:the string to duplicate
 *@param:the string to coppy
 *@return:a pointer to the first position of the new string
 *or NULL in case of invalid params or malloc failure
 */
char	*strdup(const char *s)
{
	int		size;
	char	*dup;

	size = ft_strlen(s);
	dup = ft_calloc(sizeof(char), size);
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, size - 1);
	dup[size] = '\0';
	return (dup);
}
