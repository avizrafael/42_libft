/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:05:13 by raviz-es          #+#    #+#             */
/*   Updated: 2023/11/19 18:50:17 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Splits a string into an array of substrings based on a delimiter character.
*/

#include "libft.h"

static size_t	n_words(char const *str, char c)
{
	size_t	n;
	size_t	i;

	n = 0;
	i = 0;
	while (*(str + i))
	{
		if (*(str + i) != c)
		{
			n++;
			while (*(str + i) && *(str + i) != c)
				i++;
		}
		else if (*(str + i) == c)
			i++;
	}
	return (n);
}

static size_t	get_wordlen(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (*(str + i) && *(str + i) != c)
		i++;
	return (i);
}

static void	free_array(size_t i, char **array)
{
	while (i > 0)
	{
		i--;
		free(*(array + i));
	}
	free(array);
}

static char	**split(char const *str, char c, char **array, size_t words)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < words)
	{
		while (*(str + j) && *(str + j) == c)
			j++;
		*(array + i) = ft_substr(str, j, get_wordlen(&*(str + j), c));
		if (!*(array + i))
		{
			free_array(i, array);
			return (NULL);
		}
		while (*(str + j) && *(str + j) != c)
			j++;
		i++;
	}
	*(array + i) = NULL;
	return (array);
}

char	**ft_split(char const *str, char c)
{
	char	**array;
	size_t	words;

	if (!str)
		return (NULL);
	words = n_words(str, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	array = split(str, c, array, words);
	return (array);
}
