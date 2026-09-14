/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalzas <rcalzas@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 10:24:05 by rcalzas           #+#    #+#             */
/*   Updated: 2026/09/14 10:53:44 by rcalzas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*@brief:checks if a char is on a charset
*@param:set is the charset to check over
*@return: 1 if c is found on set or 0 if else
*/
static int	is_in_set(char *set, char c)
{
	int	found;
	int i;

	i = 0;
	found = 0;
	while(set[i] && !found)
	{
		found = set[i] == c;
		i++;
	}
	return (found);
}
/*
*@brief:count the number of words in a string, separated by a charset
*@param:s is the string to count over, and char is the separator
*@return: the number of words
*/
static size_t	count_words(char const *s, char sep)
{
	size_t words;
	if(!s)
		return (NULL);
	char *aux;
	aux = s;
	while(*aux)
	{
		if(*aux != sep)
		{
			words++;
			while(*aux && *aux != c)
				aux++;
		}
		else
			aux++;
	}
	return (words);
}
/*
*@biref: returns the whole words contained in s while separated with c
*@param: s, the string to split by the char c
*@return: the matrix compund by the words in s, or NULL if malloc failure
*/
char	**ft_split(char const *s, char c)
{
	if(!s)
		return (NULL);
	char	*splitted;
	int		i;
	size_t	word_len;

	i = 0;
	splitted = malloc(sizeof(char	*) * count_words(s,c));
	if(!splitted)
		return(NULL);
	while(*s)
	{
		if(!is_in_set(s,c))
			s[i]=ft_substr(s, i, ft_strlen());
	}

}